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
struct fieldA;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_fieldA
#define APACHE_THRIFT_ACCESSOR_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(fieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class ReflectionStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class ReflectionStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;

 public:
  using __fbthrift_cpp2_type = ReflectionStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  ReflectionStruct() :
      fieldA(5) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  ReflectionStruct(apache::thrift::FragileConstructor, int32_t fieldA__arg);

  ReflectionStruct(ReflectionStruct&&) = default;

  ReflectionStruct(const ReflectionStruct&) = default;


  ReflectionStruct& operator=(ReflectionStruct&&) = default;

  ReflectionStruct& operator=(const ReflectionStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 private:
  int32_t fieldA;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool fieldA;
  } __isset = {};
  bool operator==(const ReflectionStruct& rhs) const;
#ifndef SWIG
  friend bool operator!=(const ReflectionStruct& __x, const ReflectionStruct& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const ReflectionStruct& rhs) const;
#ifndef SWIG
  friend bool operator>(const ReflectionStruct& __x, const ReflectionStruct& __y) {
    return __y < __x;
  }
  friend bool operator<=(const ReflectionStruct& __x, const ReflectionStruct& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const ReflectionStruct& __x, const ReflectionStruct& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA_ref() const& {
    return {this->fieldA, __isset.fieldA};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA_ref() const&& {
    return {std::move(this->fieldA), __isset.fieldA};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA_ref() & {
    return {this->fieldA, __isset.fieldA};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA_ref() && {
    return {std::move(this->fieldA), __isset.fieldA};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  int32_t get_fieldA() const {
    return fieldA;
  }

  int32_t& set_fieldA(int32_t fieldA_) {
    fieldA = fieldA_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fieldA = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fieldA;
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

  friend class ::apache::thrift::Cpp2Ops< ReflectionStruct >;
  friend void swap(ReflectionStruct& a, ReflectionStruct& b);
};

template <class Protocol_>
uint32_t ReflectionStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
