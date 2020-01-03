// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var GoUnusedProtection__ int;

type MyEnum int64
const (
  MyEnum_MyValue1 MyEnum = 0
  MyEnum_MyValue2 MyEnum = 1
  MyEnum_DOMAIN MyEnum = 2
)

var MyEnumToName = map[MyEnum]string {
  MyEnum_MyValue1: "MyValue1",
  MyEnum_MyValue2: "MyValue2",
  MyEnum_DOMAIN: "DOMAIN",
}

var MyEnumToValue = map[string]MyEnum {
  "MyValue1": MyEnum_MyValue1,
  "MyValue2": MyEnum_MyValue2,
  "DOMAIN": MyEnum_DOMAIN,
}

func (p MyEnum) String() string {
  if v, ok := MyEnumToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnumFromString(s string) (MyEnum, error) {
  if v, ok := MyEnumToValue[s]; ok {
    return v, nil
  }
  return MyEnum(0), fmt.Errorf("not a valid MyEnum string")
}

func MyEnumPtr(v MyEnum) *MyEnum { return &v }

// Attributes:
//  - Major
//  - Package
//  - AnnotationWithQuote
//  - Class_
type MyStruct struct {
  Major int64 `thrift:"major,1" db:"major" json:"major"`
  Package string `thrift:"package,2" db:"package" json:"package"`
  AnnotationWithQuote string `thrift:"annotation_with_quote,3" tag:"somevalue"`
  Class_ string `thrift:"class_,4" db:"class_" json:"class_"`
}

func NewMyStruct() *MyStruct {
  return &MyStruct{}
}


func (p *MyStruct) GetMajor() int64 {
  return p.Major
}

func (p *MyStruct) GetPackage() string {
  return p.Package
}

func (p *MyStruct) GetAnnotationWithQuote() string {
  return p.AnnotationWithQuote
}

func (p *MyStruct) GetClass_() string {
  return p.Class_
}
func (p *MyStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI64(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Major = v
}
  return nil
}

func (p *MyStruct)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  p.Package = v
}
  return nil
}

func (p *MyStruct)  ReadField3(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 3: ", err)
} else {
  p.AnnotationWithQuote = v
}
  return nil
}

func (p *MyStruct)  ReadField4(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 4: ", err)
} else {
  p.Class_ = v
}
  return nil
}

func (p *MyStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MyStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("major", thrift.I64, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:major: ", p), err) }
  if err := oprot.WriteI64(int64(p.Major)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.major (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:major: ", p), err) }
  return err
}

func (p *MyStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("package", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:package: ", p), err) }
  if err := oprot.WriteString(string(p.Package)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.package (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:package: ", p), err) }
  return err
}

func (p *MyStruct) writeField3(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("annotation_with_quote", thrift.STRING, 3); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:annotation_with_quote: ", p), err) }
  if err := oprot.WriteString(string(p.AnnotationWithQuote)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.annotation_with_quote (3) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 3:annotation_with_quote: ", p), err) }
  return err
}

func (p *MyStruct) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("class_", thrift.STRING, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:class_: ", p), err) }
  if err := oprot.WriteString(string(p.Class_)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.class_ (4) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:class_: ", p), err) }
  return err
}

func (p *MyStruct) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyStruct(%+v)", *p)
}

