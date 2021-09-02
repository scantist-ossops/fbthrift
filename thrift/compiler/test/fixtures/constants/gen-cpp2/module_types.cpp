/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::EmptyEnum>::size;
folly::Range<::cpp2::EmptyEnum const*> const TEnumTraits<::cpp2::EmptyEnum>::values = {};
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::EmptyEnum>::names = {};

char const* TEnumTraits<::cpp2::EmptyEnum>::findName(type value) {
  using factory = ::cpp2::_EmptyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::EmptyEnum>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_EmptyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _EmptyEnum_EnumMapFactory::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES = _EmptyEnum_EnumMapFactory::makeValuesToNamesMap();
const _EmptyEnum_EnumMapFactory::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES = _EmptyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::City>::size;
folly::Range<::cpp2::City const*> const TEnumTraits<::cpp2::City>::values = folly::range(TEnumDataStorage<::cpp2::City>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::City>::names = folly::range(TEnumDataStorage<::cpp2::City>::names);

char const* TEnumTraits<::cpp2::City>::findName(type value) {
  using factory = ::cpp2::_City_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::City>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_City_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _City_EnumMapFactory::ValuesToNamesMapType _City_VALUES_TO_NAMES = _City_EnumMapFactory::makeValuesToNamesMap();
const _City_EnumMapFactory::NamesToValuesMapType _City_NAMES_TO_VALUES = _City_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::Company>::size;
folly::Range<::cpp2::Company const*> const TEnumTraits<::cpp2::Company>::values = folly::range(TEnumDataStorage<::cpp2::Company>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Company>::names = folly::range(TEnumDataStorage<::cpp2::Company>::names);

char const* TEnumTraits<::cpp2::Company>::findName(type value) {
  using factory = ::cpp2::_Company_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::Company>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_Company_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _Company_EnumMapFactory::ValuesToNamesMapType _Company_VALUES_TO_NAMES = _Company_EnumMapFactory::makeValuesToNamesMap();
const _Company_EnumMapFactory::NamesToValuesMapType _Company_NAMES_TO_VALUES = _Company_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Internship>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Internship>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Internship::Internship(const Internship&) = default;
Internship& Internship::operator=(const Internship&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Internship::Internship() :
      weeks(0),
      employer( ::cpp2::Company::FACEBOOK),
      compensation(0) {
}

THRIFT_IGNORE_ISSET_USE_WARNING_END

Internship::~Internship() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Internship::Internship(Internship&& other) noexcept  :
    weeks(std::move(other.weeks)),
    title(std::move(other.title)),
    employer(std::move(other.employer)),
    compensation(std::move(other.compensation)),
    school(std::move(other.school)),
    __isset(other.__isset) {}
Internship& Internship::operator=(FOLLY_MAYBE_UNUSED Internship&& other) noexcept {
    this->weeks = std::move(other.weeks);
    this->title = std::move(other.title);
    this->employer = std::move(other.employer);
    this->compensation = std::move(other.compensation);
    this->school = std::move(other.school);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Internship::Internship(apache::thrift::FragileConstructor, ::std::int32_t weeks__arg, ::std::string title__arg, ::cpp2::Company employer__arg, double compensation__arg, ::std::string school__arg) :
    weeks(std::move(weeks__arg)),
    title(std::move(title__arg)),
    employer(std::move(employer__arg)),
    compensation(std::move(compensation__arg)),
    school(std::move(school__arg)) {
  __isset.title = true;
  __isset.employer = true;
  __isset.compensation = true;
  __isset.school = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void Internship::__clear() {
  // clear all fields
  this->weeks = 0;
  this->title = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->employer =  ::cpp2::Company::FACEBOOK;
  this->compensation = 0;
  this->school = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Internship::operator==(const Internship& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.weeks_ref() == rhs.weeks_ref())) {
    return false;
  }
  if (!(lhs.title_ref() == rhs.title_ref())) {
    return false;
  }
  if (!(lhs.employer_ref() == rhs.employer_ref())) {
    return false;
  }
  if (!(lhs.compensation_ref() == rhs.compensation_ref())) {
    return false;
  }
  if (!(lhs.school_ref() == rhs.school_ref())) {
    return false;
  }
  return true;
}

bool Internship::operator<(const Internship& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.weeks_ref() == rhs.weeks_ref())) {
    return lhs.weeks_ref() < rhs.weeks_ref();
  }
  if (!(lhs.title_ref() == rhs.title_ref())) {
    return lhs.title_ref() < rhs.title_ref();
  }
  if (!(lhs.employer_ref() == rhs.employer_ref())) {
    return lhs.employer_ref() < rhs.employer_ref();
  }
  if (!(lhs.compensation_ref() == rhs.compensation_ref())) {
    return lhs.compensation_ref() < rhs.compensation_ref();
  }
  if (!(lhs.school_ref() == rhs.school_ref())) {
    return lhs.school_ref() < rhs.school_ref();
  }
  return false;
}


void swap(Internship& a, Internship& b) {
  using ::std::swap;
  swap(a.weeks_ref().value(), b.weeks_ref().value());
  swap(a.title_ref().value(), b.title_ref().value());
  swap(a.employer_ref().value_unchecked(), b.employer_ref().value_unchecked());
  swap(a.compensation_ref().value_unchecked(), b.compensation_ref().value_unchecked());
  swap(a.school_ref().value_unchecked(), b.school_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Internship::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Internship::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Internship::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Internship::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Internship::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Internship::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Internship::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Internship::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Range>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Range>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Range::Range(apache::thrift::FragileConstructor, ::std::int32_t min__arg, ::std::int32_t max__arg) :
    min(std::move(min__arg)),
    max(std::move(max__arg)) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void Range::__clear() {
  // clear all fields
  this->min = 0;
  this->max = 0;
}

bool Range::operator==(const Range& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.min_ref() == rhs.min_ref())) {
    return false;
  }
  if (!(lhs.max_ref() == rhs.max_ref())) {
    return false;
  }
  return true;
}

bool Range::operator<(const Range& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.min_ref() == rhs.min_ref())) {
    return lhs.min_ref() < rhs.min_ref();
  }
  if (!(lhs.max_ref() == rhs.max_ref())) {
    return lhs.max_ref() < rhs.max_ref();
  }
  return false;
}


void swap(Range& a, Range& b) {
  using ::std::swap;
  swap(a.min_ref().value(), b.min_ref().value());
  swap(a.max_ref().value(), b.max_ref().value());
}

template void Range::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Range::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Range::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Range::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Range::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Range::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Range::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Range::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::struct1>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::struct1>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct1::struct1(const struct1&) = default;
struct1& struct1::operator=(const struct1&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct1::struct1(struct1&& other) noexcept  :
    a(std::move(other.a)),
    b(std::move(other.b)),
    __isset(other.__isset) {}
struct1& struct1::operator=(FOLLY_MAYBE_UNUSED struct1&& other) noexcept {
    this->a = std::move(other.a);
    this->b = std::move(other.b);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct1::struct1(apache::thrift::FragileConstructor, ::std::int32_t a__arg, ::std::string b__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)) {
  __isset.a = true;
  __isset.b = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void struct1::__clear() {
  // clear all fields
  this->a = 1234567;
  this->b = apache::thrift::StringTraits<std::string>::fromStringLiteral("<uninitialized>");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool struct1::operator==(const struct1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return false;
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return false;
  }
  return true;
}

bool struct1::operator<(const struct1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return lhs.a_ref() < rhs.a_ref();
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return lhs.b_ref() < rhs.b_ref();
  }
  return false;
}


void swap(struct1& a, struct1& b) {
  using ::std::swap;
  swap(a.a_ref().value(), b.a_ref().value());
  swap(a.b_ref().value(), b.b_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void struct1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::struct2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::struct2>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct2::struct2(const struct2&) = default;
struct2& struct2::operator=(const struct2&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct2::struct2(struct2&& other) noexcept  :
    a(std::move(other.a)),
    b(std::move(other.b)),
    c(std::move(other.c)),
    d(std::move(other.d)),
    __isset(other.__isset) {}
struct2& struct2::operator=(FOLLY_MAYBE_UNUSED struct2&& other) noexcept {
    this->a = std::move(other.a);
    this->b = std::move(other.b);
    this->c = std::move(other.c);
    this->d = std::move(other.d);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct2::struct2(apache::thrift::FragileConstructor, ::std::int32_t a__arg, ::std::string b__arg, ::cpp2::struct1 c__arg, ::std::vector<::std::int32_t> d__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)),
    c(std::move(c__arg)),
    d(std::move(d__arg)) {
  __isset.a = true;
  __isset.b = true;
  __isset.c = true;
  __isset.d = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void struct2::__clear() {
  // clear all fields
  this->a = 0;
  this->b = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->c.__clear();
  this->d.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool struct2::operator==(const struct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return false;
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return false;
  }
  if (!(lhs.c_ref() == rhs.c_ref())) {
    return false;
  }
  if (!(lhs.d_ref() == rhs.d_ref())) {
    return false;
  }
  return true;
}

bool struct2::operator<(const struct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return lhs.a_ref() < rhs.a_ref();
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return lhs.b_ref() < rhs.b_ref();
  }
  if (!(lhs.c_ref() == rhs.c_ref())) {
    return lhs.c_ref() < rhs.c_ref();
  }
  if (!(lhs.d_ref() == rhs.d_ref())) {
    return lhs.d_ref() < rhs.d_ref();
  }
  return false;
}

const ::cpp2::struct1& struct2::get_c() const& {
  return c;
}

::cpp2::struct1 struct2::get_c() && {
  return std::move(c);
}

const ::std::vector<::std::int32_t>& struct2::get_d() const& {
  return d;
}

::std::vector<::std::int32_t> struct2::get_d() && {
  return std::move(d);
}


void swap(struct2& a, struct2& b) {
  using ::std::swap;
  swap(a.a_ref().value(), b.a_ref().value());
  swap(a.b_ref().value(), b.b_ref().value());
  swap(a.c_ref().value(), b.c_ref().value());
  swap(a.d_ref().value(), b.d_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void struct2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        struct2,
        ::apache::thrift::type_class::structure,
        ::cpp2::struct1>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        struct2,
        ::apache::thrift::type_class::structure,
        ::cpp2::struct1>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::struct3>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::struct3>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct3::struct3(const struct3&) = default;
struct3& struct3::operator=(const struct3&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct3::struct3(struct3&& other) noexcept  :
    a(std::move(other.a)),
    b(std::move(other.b)),
    c(std::move(other.c)),
    __isset(other.__isset) {}
struct3& struct3::operator=(FOLLY_MAYBE_UNUSED struct3&& other) noexcept {
    this->a = std::move(other.a);
    this->b = std::move(other.b);
    this->c = std::move(other.c);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct3::struct3(apache::thrift::FragileConstructor, ::std::string a__arg, ::std::int32_t b__arg, ::cpp2::struct2 c__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)),
    c(std::move(c__arg)) {
  __isset.a = true;
  __isset.b = true;
  __isset.c = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void struct3::__clear() {
  // clear all fields
  this->a = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->b = 0;
  this->c.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool struct3::operator==(const struct3& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return false;
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return false;
  }
  if (!(lhs.c_ref() == rhs.c_ref())) {
    return false;
  }
  return true;
}

bool struct3::operator<(const struct3& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return lhs.a_ref() < rhs.a_ref();
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return lhs.b_ref() < rhs.b_ref();
  }
  if (!(lhs.c_ref() == rhs.c_ref())) {
    return lhs.c_ref() < rhs.c_ref();
  }
  return false;
}

const ::cpp2::struct2& struct3::get_c() const& {
  return c;
}

::cpp2::struct2 struct3::get_c() && {
  return std::move(c);
}


void swap(struct3& a, struct3& b) {
  using ::std::swap;
  swap(a.a_ref().value(), b.a_ref().value());
  swap(a.b_ref().value(), b.b_ref().value());
  swap(a.c_ref().value(), b.c_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void struct3::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct3::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct3::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct3::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct3::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct3::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct3::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct3::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        struct3,
        ::apache::thrift::type_class::structure,
        ::cpp2::struct2>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        struct3,
        ::apache::thrift::type_class::structure,
        ::cpp2::struct2>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::struct4>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::struct4>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct4::struct4(const struct4&) = default;
struct4& struct4::operator=(const struct4&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct4::struct4(struct4&& other) noexcept  :
    a(std::move(other.a)),
    b(std::move(other.b)),
    c(std::move(other.c)),
    __isset(other.__isset) {}
struct4& struct4::operator=(FOLLY_MAYBE_UNUSED struct4&& other) noexcept {
    this->a = std::move(other.a);
    this->b = std::move(other.b);
    this->c = std::move(other.c);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
struct4::struct4(apache::thrift::FragileConstructor, ::std::int32_t a__arg, double b__arg, ::std::int8_t c__arg) :
    a(std::move(a__arg)),
    b(std::move(b__arg)),
    c(std::move(c__arg)) {
  __isset.a = true;
  __isset.b = true;
  __isset.c = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void struct4::__clear() {
  // clear all fields
  this->a = 0;
  this->b = 0;
  this->c = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool struct4::operator==(const struct4& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return false;
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return false;
  }
  if (!(lhs.c_ref() == rhs.c_ref())) {
    return false;
  }
  return true;
}

bool struct4::operator<(const struct4& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.a_ref() == rhs.a_ref())) {
    return lhs.a_ref() < rhs.a_ref();
  }
  if (!(lhs.b_ref() == rhs.b_ref())) {
    return lhs.b_ref() < rhs.b_ref();
  }
  if (!(lhs.c_ref() == rhs.c_ref())) {
    return lhs.c_ref() < rhs.c_ref();
  }
  return false;
}


void swap(struct4& a, struct4& b) {
  using ::std::swap;
  swap(a.a_ref().value(), b.a_ref().value());
  swap(a.b_ref().value_unchecked(), b.b_ref().value_unchecked());
  swap(a.c_ref().value_unchecked(), b.c_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void struct4::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t struct4::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t struct4::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t struct4::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void struct4::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t struct4::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t struct4::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t struct4::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::union1>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::union1>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::union1::Type>::size;
folly::Range<::cpp2::union1::Type const*> const TEnumTraits<::cpp2::union1::Type>::values = folly::range(TEnumDataStorage<::cpp2::union1::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::union1::Type>::names = folly::range(TEnumDataStorage<::cpp2::union1::Type>::names);

char const* TEnumTraits<::cpp2::union1::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::union1::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::union1::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::union1::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void union1::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::i:
      destruct(value_.i);
      break;
    case Type::d:
      destruct(value_.d);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool union1::operator==(const union1& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::i:
      return value_.i == rhs.value_.i;
    case Type::d:
      return value_.d == rhs.value_.d;
    default:
      return true;
  }
}

bool union1::operator<(const union1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::i:
      return lhs.value_.i < rhs.value_.i;
    case Type::d:
      return lhs.value_.d < rhs.value_.d;
    default:
      return false;
  }
}

void swap(union1& a, union1& b) {
  union1 temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void union1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t union1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t union1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t union1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void union1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t union1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t union1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t union1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::union2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::union2>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::union2::Type>::size;
folly::Range<::cpp2::union2::Type const*> const TEnumTraits<::cpp2::union2::Type>::values = folly::range(TEnumDataStorage<::cpp2::union2::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::union2::Type>::names = folly::range(TEnumDataStorage<::cpp2::union2::Type>::names);

char const* TEnumTraits<::cpp2::union2::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::union2::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::union2::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::union2::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void union2::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::i:
      destruct(value_.i);
      break;
    case Type::d:
      destruct(value_.d);
      break;
    case Type::s:
      destruct(value_.s);
      break;
    case Type::u:
      destruct(value_.u);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool union2::operator==(const union2& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::i:
      return value_.i == rhs.value_.i;
    case Type::d:
      return value_.d == rhs.value_.d;
    case Type::s:
      return value_.s == rhs.value_.s;
    case Type::u:
      return value_.u == rhs.value_.u;
    default:
      return true;
  }
}

bool union2::operator<(const union2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::i:
      return lhs.value_.i < rhs.value_.i;
    case Type::d:
      return lhs.value_.d < rhs.value_.d;
    case Type::s:
      return lhs.value_.s < rhs.value_.s;
    case Type::u:
      return lhs.value_.u < rhs.value_.u;
    default:
      return false;
  }
}

void swap(union2& a, union2& b) {
  union2 temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void union2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t union2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t union2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t union2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void union2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t union2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t union2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t union2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        union2,
        ::apache::thrift::type_class::structure,
        ::cpp2::struct1>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        union2,
        ::apache::thrift::type_class::variant,
        ::cpp2::union1>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        union2,
        ::apache::thrift::type_class::structure,
        ::cpp2::struct1>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        union2,
        ::apache::thrift::type_class::variant,
        ::cpp2::union1>,
    "inconsistent use of nimble option");

} // cpp2
