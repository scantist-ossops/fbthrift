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
struct i32Field;
struct strField;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_i32Field
#define APACHE_THRIFT_ACCESSOR_i32Field
APACHE_THRIFT_DEFINE_ACCESSOR(i32Field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_strField
#define APACHE_THRIFT_ACCESSOR_strField
APACHE_THRIFT_DEFINE_ACCESSOR(strField);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace some { namespace ns {
class IncludedB;
}} // some::ns
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace some { namespace ns {
class IncludedB final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;

 public:
  using __fbthrift_cpp2_type = IncludedB;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  IncludedB() :
      i32Field(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  IncludedB(apache::thrift::FragileConstructor, int32_t i32Field__arg, ::std::string strField__arg);

  IncludedB(IncludedB&&) = default;

  IncludedB(const IncludedB&) = default;


  IncludedB& operator=(IncludedB&&) = default;

  IncludedB& operator=(const IncludedB&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 private:
  int32_t i32Field;
 private:
  ::std::string strField;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool i32Field;
    bool strField;
  } __isset = {};
  bool operator==(const IncludedB& rhs) const;
#ifndef SWIG
  friend bool operator!=(const IncludedB& __x, const IncludedB& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const IncludedB& rhs) const;
#ifndef SWIG
  friend bool operator>(const IncludedB& __x, const IncludedB& __y) {
    return __y < __x;
  }
  friend bool operator<=(const IncludedB& __x, const IncludedB& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const IncludedB& __x, const IncludedB& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> i32Field_ref() const& {
    return {this->i32Field, __isset.i32Field};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> i32Field_ref() const&& {
    return {std::move(this->i32Field), __isset.i32Field};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> i32Field_ref() & {
    return {this->i32Field, __isset.i32Field};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> i32Field_ref() && {
    return {std::move(this->i32Field), __isset.i32Field};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> strField_ref() const& {
    return {this->strField, __isset.strField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> strField_ref() const&& {
    return {std::move(this->strField), __isset.strField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> strField_ref() & {
    return {this->strField, __isset.strField};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> strField_ref() && {
    return {std::move(this->strField), __isset.strField};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.i32Field = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return i32Field;
  }

  const ::std::string& get_strField() const& {
    return strField;
  }

  ::std::string get_strField() && {
    return std::move(strField);
  }

  template <typename T_IncludedB_strField_struct_setter = ::std::string>
  ::std::string& set_strField(T_IncludedB_strField_struct_setter&& strField_) {
    strField = std::forward<T_IncludedB_strField_struct_setter>(strField_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.strField = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return strField;
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

  friend class ::apache::thrift::Cpp2Ops< IncludedB >;
  friend void swap(IncludedB& a, IncludedB& b);
};

template <class Protocol_>
uint32_t IncludedB::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}} // some::ns
