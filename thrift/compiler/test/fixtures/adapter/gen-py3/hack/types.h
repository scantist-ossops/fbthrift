/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/annotation/gen-cpp2/hack_data.h"
#include "thrift/annotation/gen-cpp2/hack_types.h"
#include "thrift/annotation/gen-cpp2/hack_metadata.h"
namespace thrift {
namespace py3 {



template<>
void reset_field<::facebook::thrift::annotation::hack::FieldWrapper>(
    ::facebook::thrift::annotation::hack::FieldWrapper& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::FieldWrapper>().name_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::Wrapper>(
    ::facebook::thrift::annotation::hack::Wrapper& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Wrapper>().name_ref());
      return;
    case 1:
      obj.underlyingName_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Wrapper>().underlyingName_ref());
      return;
    case 2:
      obj.extraNamespace_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Wrapper>().extraNamespace_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::Adapter>(
    ::facebook::thrift::annotation::hack::Adapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Adapter>().name_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::SkipCodegen>(
    ::facebook::thrift::annotation::hack::SkipCodegen& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.reason_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::SkipCodegen>().reason_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::Name>(
    ::facebook::thrift::annotation::hack::Name& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Name>().name_ref());
      return;
    case 1:
      obj.reason_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Name>().reason_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::UnionEnumAttributes>(
    ::facebook::thrift::annotation::hack::UnionEnumAttributes& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.attributes_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::UnionEnumAttributes>().attributes_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::StructTrait>(
    ::facebook::thrift::annotation::hack::StructTrait& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::StructTrait>().name_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::hack::Attributes>(
    ::facebook::thrift::annotation::hack::Attributes& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.attributes_ref().copy_from(default_inst<::facebook::thrift::annotation::hack::Attributes>().attributes_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::FieldWrapper>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::Wrapper>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::Adapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::SkipCodegen>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::Name>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::UnionEnumAttributes>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::StructTrait>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::hack::Attributes>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
