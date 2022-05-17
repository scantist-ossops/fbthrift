/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <tuple>

#include <folly/Utility.h>
#include <thrift/lib/cpp/FieldId.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/type/NativeType.h>
#include <thrift/lib/cpp2/type/Tag.h>

// TODO(afuller): Migrate to a folly version once available.
#if defined(__has_builtin)
#if __has_builtin(__type_pack_element)
#define FBTHRIFT_HAS_TYPE_PACK_ELEMENT
#endif
#endif

namespace apache {
namespace thrift {
namespace type {
namespace detail {

template <typename Fields>
struct fields_size;
template <template <typename...> class F, typename... Fs>
struct fields_size<F<Fs...>> {
  static constexpr auto value = sizeof...(Fs);
};
template <typename Ts, std::size_t I, bool Valid = true>
struct field_at {
  using type = void;
};
template <typename... Fs, std::size_t I>
struct field_at<fields<Fs...>, I, true> {
#ifdef FBTHRIFT_HAS_TYPE_PACK_ELEMENT
  using type = __type_pack_element<I, Fs...>;
#else
  using type = std::tuple_element_t<I, std::tuple<Fs...>>;
#endif
};
template <typename Ts, std::size_t I>
using field_at_t = typename field_at<Ts, I, (I < fields_size<Ts>::value)>::type;

template <typename StructTag>
using struct_fields =
    ::apache::thrift::detail::st::struct_private_access::fields<
        native_type<StructTag>>;

struct field_to_id {
  template <class>
  struct apply;
  template <FieldId Id, class Tag>
  struct apply<field_t<Id, Tag>> {
    static constexpr auto value = static_cast<field_id_u_t>(Id);
  };
};

struct field_to_tag {
  template <class>
  struct apply;
  template <FieldId Id, class Tag>
  struct apply<field_t<Id, Tag>> {
    using type = Tag;
  };
};

template <class StructTag, size_t Ordinal>
struct field_tag_by_ord {
  using type = field_at_t<struct_fields<StructTag>, Ordinal - 1>;
};

} // namespace detail
} // namespace type
} // namespace thrift
} // namespace apache
