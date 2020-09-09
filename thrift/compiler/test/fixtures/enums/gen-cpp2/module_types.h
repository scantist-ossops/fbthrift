/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct reasonable;
struct fine;
struct questionable;
struct tags;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_reasonable
#define APACHE_THRIFT_ACCESSOR_reasonable
APACHE_THRIFT_DEFINE_ACCESSOR(reasonable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fine
#define APACHE_THRIFT_ACCESSOR_fine
APACHE_THRIFT_DEFINE_ACCESSOR(fine);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_questionable
#define APACHE_THRIFT_ACCESSOR_questionable
APACHE_THRIFT_DEFINE_ACCESSOR(questionable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_tags
#define APACHE_THRIFT_ACCESSOR_tags
APACHE_THRIFT_DEFINE_ACCESSOR(tags);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class Metasyntactic {
  FOO = 1,
  BAR = 2,
  BAZ = 3,
  BAX = 4,
};




} // cpp2
namespace std {


template<> struct hash<typename ::cpp2::Metasyntactic> : public apache::thrift::detail::enum_hash<typename ::cpp2::Metasyntactic> {};
template<> struct equal_to<typename ::cpp2::Metasyntactic> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::Metasyntactic> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::Metasyntactic>;

template <> struct TEnumTraits<::cpp2::Metasyntactic> {
  using type = ::cpp2::Metasyntactic;

  static constexpr std::size_t const size = 4;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::FOO; }
  static constexpr type max() { return type::BAX; }
};


}} // apache::thrift

namespace cpp2 {

using _Metasyntactic_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Metasyntactic>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _Metasyntactic_EnumMapFactory::ValuesToNamesMapType _Metasyntactic_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _Metasyntactic_EnumMapFactory::NamesToValuesMapType _Metasyntactic_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class SomeStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class SomeStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;

 public:
  using __fbthrift_cpp2_type = SomeStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  SomeStruct() :
      reasonable( ::cpp2::Metasyntactic::FOO),
      fine( ::cpp2::Metasyntactic::BAR),
      questionable(static_cast< ::cpp2::Metasyntactic>(-1)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SomeStruct(apache::thrift::FragileConstructor,  ::cpp2::Metasyntactic reasonable__arg,  ::cpp2::Metasyntactic fine__arg,  ::cpp2::Metasyntactic questionable__arg, ::std::set<int32_t> tags__arg);

  SomeStruct(SomeStruct&&) = default;

  SomeStruct(const SomeStruct&) = default;


  SomeStruct& operator=(SomeStruct&&) = default;

  SomeStruct& operator=(const SomeStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 private:
   ::cpp2::Metasyntactic reasonable;
 private:
   ::cpp2::Metasyntactic fine;
 private:
   ::cpp2::Metasyntactic questionable;
 private:
  ::std::set<int32_t> tags;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool reasonable;
    bool fine;
    bool questionable;
    bool tags;
  } __isset = {};
  bool operator==(const SomeStruct& rhs) const;
#ifndef SWIG
  friend bool operator!=(const SomeStruct& __x, const SomeStruct& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const SomeStruct& rhs) const;
#ifndef SWIG
  friend bool operator>(const SomeStruct& __x, const SomeStruct& __y) {
    return __y < __x;
  }
  friend bool operator<=(const SomeStruct& __x, const SomeStruct& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const SomeStruct& __x, const SomeStruct& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reasonable_ref() const& {
    return {this->reasonable, __isset.reasonable};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reasonable_ref() const&& {
    return {std::move(this->reasonable), __isset.reasonable};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reasonable_ref() & {
    return {this->reasonable, __isset.reasonable};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reasonable_ref() && {
    return {std::move(this->reasonable), __isset.reasonable};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fine_ref() const& {
    return {this->fine, __isset.fine};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fine_ref() const&& {
    return {std::move(this->fine), __isset.fine};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fine_ref() & {
    return {this->fine, __isset.fine};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fine_ref() && {
    return {std::move(this->fine), __isset.fine};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> questionable_ref() const& {
    return {this->questionable, __isset.questionable};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> questionable_ref() const&& {
    return {std::move(this->questionable), __isset.questionable};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> questionable_ref() & {
    return {this->questionable, __isset.questionable};
  }

  template <typename..., typename T =  ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> questionable_ref() && {
    return {std::move(this->questionable), __isset.questionable};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> tags_ref() const& {
    return {this->tags, __isset.tags};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> tags_ref() const&& {
    return {std::move(this->tags), __isset.tags};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> tags_ref() & {
    return {this->tags, __isset.tags};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> tags_ref() && {
    return {std::move(this->tags), __isset.tags};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

   ::cpp2::Metasyntactic get_reasonable() const {
    return reasonable;
  }

   ::cpp2::Metasyntactic& set_reasonable( ::cpp2::Metasyntactic reasonable_) {
    reasonable = reasonable_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.reasonable = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return reasonable;
  }

   ::cpp2::Metasyntactic get_fine() const {
    return fine;
  }

   ::cpp2::Metasyntactic& set_fine( ::cpp2::Metasyntactic fine_) {
    fine = fine_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fine = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fine;
  }

   ::cpp2::Metasyntactic get_questionable() const {
    return questionable;
  }

   ::cpp2::Metasyntactic& set_questionable( ::cpp2::Metasyntactic questionable_) {
    questionable = questionable_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.questionable = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return questionable;
  }
  const ::std::set<int32_t>& get_tags() const&;
  ::std::set<int32_t> get_tags() &&;

  template <typename T_SomeStruct_tags_struct_setter = ::std::set<int32_t>>
  ::std::set<int32_t>& set_tags(T_SomeStruct_tags_struct_setter&& tags_) {
    tags = std::forward<T_SomeStruct_tags_struct_setter>(tags_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.tags = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return tags;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< SomeStruct >;
  friend void swap(SomeStruct& a, SomeStruct& b);
};

template <class Protocol_>
uint32_t SomeStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
