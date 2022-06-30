/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>
#include <thrift/lib/cpp2/op/Clear.h>
#include <thrift/lib/cpp2/type/Field.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::module2::Struct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::module2::BigStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace module2 {

template <class Protocol_>
void Struct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_first:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module0::Struct>::readWithContext(*iprot, this->__fbthrift_field_first, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_second:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module1::Struct>::readWithContext(*iprot, this->__fbthrift_field_second, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Struct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_first;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_second;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Struct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct");
  {
    xfer += prot_->serializedFieldSize("first", apache::thrift::protocol::T_STRUCT, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module0::Struct>::serializedSize<false>(*prot_, this->__fbthrift_field_first);
  }
  {
    xfer += prot_->serializedFieldSize("second", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module1::Struct>::serializedSize<false>(*prot_, this->__fbthrift_field_second);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct");
  {
    xfer += prot_->serializedFieldSize("first", apache::thrift::protocol::T_STRUCT, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module0::Struct>::serializedSize<true>(*prot_, this->__fbthrift_field_first);
  }
  {
    xfer += prot_->serializedFieldSize("second", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module1::Struct>::serializedSize<true>(*prot_, this->__fbthrift_field_second);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Struct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 1, kPrevFieldId>(*prot_, "first", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module0::Struct>::write(*prot_, this->__fbthrift_field_first);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 2, kPrevFieldId>(*prot_, "second", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module1::Struct>::write(*prot_, this->__fbthrift_field_second);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Struct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Struct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Struct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void BigStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_s:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module2::Struct>::readWithContext(*iprot, this->__fbthrift_field_s, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_id:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_id, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<BigStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_s;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_id;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t BigStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("BigStruct");
  {
    xfer += prot_->serializedFieldSize("s", apache::thrift::protocol::T_STRUCT, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module2::Struct>::serializedSize<false>(*prot_, this->__fbthrift_field_s);
  }
  {
    xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_id);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t BigStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("BigStruct");
  {
    xfer += prot_->serializedFieldSize("s", apache::thrift::protocol::T_STRUCT, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module2::Struct>::serializedSize<true>(*prot_, this->__fbthrift_field_s);
  }
  {
    xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_id);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t BigStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("BigStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 1, kPrevFieldId>(*prot_, "s", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::module2::Struct>::write(*prot_, this->__fbthrift_field_s);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "id", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_id);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void BigStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t BigStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t BigStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void BigStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t BigStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t BigStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // module2
