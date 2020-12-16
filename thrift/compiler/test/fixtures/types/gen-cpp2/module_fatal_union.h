/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include  "thrift/compiler/test/fixtures/types/gen-cpp2/include_fatal_types.h"

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_fatal.h"

#include <fatal/type/enum.h>
#include <fatal/type/variant_traits.h>

#include <type_traits>

namespace apache { namespace thrift { namespace fixtures { namespace types {

namespace __fbthrift_refl {

class NoExceptMoveUnion_tenum_traits {
 public:
  using type = ::apache::thrift::fixtures::types::NoExceptMoveUnion::Type;

 private:
  struct __fbthrift_strings {
    using string_field = __fbthrift_strings_module::string_field;
    using i32_field = __fbthrift_strings_module::i32_field;
  };

  struct __fbthrift_value_string_field {
    using name = __fbthrift_strings::string_field;
    using value = std::integral_constant<type, type::string_field>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct __fbthrift_value_i32_field {
    using name = __fbthrift_strings::i32_field;
    using value = std::integral_constant<type, type::i32_field>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct __fbthrift_member {
    using string_field = __fbthrift_value_string_field;
    using i32_field = __fbthrift_value_i32_field;
  };

 public:
  using name = __fbthrift_strings_module::Type;
  using member = __fbthrift_member;
  using fields = ::fatal::list<
      member::string_field,
      member::i32_field
  >;

  class annotations {
    public:
    using keys = void;
    using values = void;
    using map = ::fatal::list<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::string_field: return "string_field";
      case type::i32_field: return "i32_field";
      default: return fallback;
    }
  }
};

class NoExceptMoveUnion_variant_traits {
 private:
  struct __fbthrift_ids {
    using string_field = std::integral_constant<::apache::thrift::fixtures::types::NoExceptMoveUnion::Type, ::apache::thrift::fixtures::types::NoExceptMoveUnion::Type::string_field>;
    using i32_field = std::integral_constant<::apache::thrift::fixtures::types::NoExceptMoveUnion::Type, ::apache::thrift::fixtures::types::NoExceptMoveUnion::Type::i32_field>;
  };

  struct __fbthrift_member_string_field {
    using name = __fbthrift_strings_module::string_field;
    static constexpr ::apache::thrift::field_id_t id = 1;
    using type_class = ::apache::thrift::type_class::string;
    struct setter {
      template <typename... Args>
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion &variant, Args &&...args) const {
        return variant.set_string_field(std::forward<Args>(args)...);
      }
    };
    struct getter {
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion const &variant) const {
        return variant.get_string_field();
      }
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion &variant) const {
        return variant.mutable_string_field();
      }
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion &&variant) const {
        return std::move(variant).move_string_field();
      }
    };
  };
  struct __fbthrift_member_i32_field {
    using name = __fbthrift_strings_module::i32_field;
    static constexpr ::apache::thrift::field_id_t id = 2;
    using type_class = ::apache::thrift::type_class::integral;
    struct setter {
      template <typename... Args>
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion &variant, Args &&...args) const {
        return variant.set_i32_field(std::forward<Args>(args)...);
      }
    };
    struct getter {
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion const &variant) const {
        return variant.get_i32_field();
      }
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion &variant) const {
        return variant.mutable_i32_field();
      }
      decltype(auto) operator ()(::apache::thrift::fixtures::types::NoExceptMoveUnion &&variant) const {
        return std::move(variant).move_i32_field();
      }
    };
  };

 public:
  using type = ::apache::thrift::fixtures::types::NoExceptMoveUnion;
  using name = __fbthrift_strings_module::NoExceptMoveUnion;
  using id = type::Type;
  using ids = __fbthrift_ids;
  using descriptors = ::fatal::list<
      ::fatal::variant_member_descriptor<
          ::std::string,
           __fbthrift_ids::string_field,
          __fbthrift_member_string_field::getter,
          __fbthrift_member_string_field::setter,
          ::apache::thrift::reflected_variant_member_metadata<__fbthrift_member_string_field>>,
      ::fatal::variant_member_descriptor<
          int32_t,
           __fbthrift_ids::i32_field,
          __fbthrift_member_i32_field::getter,
          __fbthrift_member_i32_field::setter,
          ::apache::thrift::reflected_variant_member_metadata<__fbthrift_member_i32_field>>
  >;

  class annotations {
    struct __fbthrift_keys {
      using cpp_noexcept_move = __fbthrift_strings_module::cpp_noexcept_move;
    };

    struct __fbthrift_values {
      using cpp_noexcept_move = ::fatal::sequence<char, '1'>;
    };

   public:
    using keys = __fbthrift_keys;
    using values = __fbthrift_values;
    using map = ::fatal::list<
        ::apache::thrift::annotation<keys::cpp_noexcept_move, values::cpp_noexcept_move>
    >;
  };

  static id get_id(type const &variant) {
    return variant.getType();
  }

  static bool empty(type const &variant) {
    return variant.getType() == id::__EMPTY__;
  }

  static void clear(type &variant) {
    return variant.__clear();
  }
};

} // __fbthrift_refl
FATAL_REGISTER_ENUM_TRAITS(
  __fbthrift_refl::NoExceptMoveUnion_tenum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
      module_tags::module,
      ::apache::thrift::reflected_annotations<__fbthrift_refl::NoExceptMoveUnion_tenum_traits::annotations>,
      static_cast<::apache::thrift::legacy_type_id_t>(0ull)
  >
);
FATAL_REGISTER_VARIANT_TRAITS(
  __fbthrift_refl::NoExceptMoveUnion_variant_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
      module_tags::module,
      ::apache::thrift::reflected_annotations<__fbthrift_refl::NoExceptMoveUnion_variant_traits::annotations>,
      static_cast<::apache::thrift::legacy_type_id_t>(2244191815193815340ull)
  >
);
}}}} // apache::thrift::fixtures::types
