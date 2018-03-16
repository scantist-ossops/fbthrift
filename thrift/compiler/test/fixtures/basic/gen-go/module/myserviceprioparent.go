// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"sync"
	"fmt"
	"git.apache.org/thrift.git/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal

type MyServicePrioParent interface {
  Ping() (err error)
  Pong() (err error)
}

type MyServicePrioParentClient struct {
  Transport thrift.Transport
  ProtocolFactory thrift.ProtocolFactory
  InputProtocol thrift.Protocol
  OutputProtocol thrift.Protocol
  SeqId int32
}

func (client *MyServicePrioParentClient) Close() error {
  return client.Transport.Close()
}

func NewMyServicePrioParentClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *MyServicePrioParentClient {
  return &MyServicePrioParentClient{Transport: t,
    ProtocolFactory: f,
    InputProtocol: f.GetProtocol(t),
    OutputProtocol: f.GetProtocol(t),
    SeqId: 0,
  }
}

func NewMyServicePrioParentClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServicePrioParentClient {
  return &MyServicePrioParentClient{Transport: t,
    ProtocolFactory: nil,
    InputProtocol: iprot,
    OutputProtocol: oprot,
    SeqId: 0,
  }
}

func (p *MyServicePrioParentClient) Ping() (err error) {
  if err = p.sendPing(); err != nil { return }
  return p.recvPing()
}

func (p *MyServicePrioParentClient) sendPing()(err error) {
  oprot := p.OutputProtocol
  if oprot == nil {
    oprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.OutputProtocol = oprot
  }
  p.SeqId++
  if err = oprot.WriteMessageBegin("ping", thrift.CALL, p.SeqId); err != nil {
      return
  }
  args := MyServicePrioParentPingArgs{
  }
  if err = args.Write(oprot); err != nil {
      return
  }
  if err = oprot.WriteMessageEnd(); err != nil {
      return
  }
  return oprot.Flush()
}


func (p *MyServicePrioParentClient) recvPing() (err error) {
  iprot := p.InputProtocol
  if iprot == nil {
    iprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.InputProtocol = iprot
  }
  method, mTypeId, seqId, err := iprot.ReadMessageBegin()
  if err != nil {
    return
  }
  if method != "ping" {
    err = thrift.NewApplicationException(thrift.WRONG_METHOD_NAME, "ping failed: wrong method name")
    return
  }
  if p.SeqId != seqId {
    err = thrift.NewApplicationException(thrift.BAD_SEQUENCE_ID, "ping failed: out of sequence response")
    return
  }
  if mTypeId == thrift.EXCEPTION {
    error58 := thrift.NewApplicationException(thrift.UNKNOWN_APPLICATION_EXCEPTION, "Unknown Exception")
    var error59 error
    error59, err = error58.Read(iprot)
    if err != nil {
      return
    }
    if err = iprot.ReadMessageEnd(); err != nil {
      return
    }
    err = error59
    return
  }
  if mTypeId != thrift.REPLY {
    err = thrift.NewApplicationException(thrift.INVALID_MESSAGE_TYPE_EXCEPTION, "ping failed: invalid message type")
    return
  }
  result := MyServicePrioParentPingResult{}
  if err = result.Read(iprot); err != nil {
    return
  }
  if err = iprot.ReadMessageEnd(); err != nil {
    return
  }
  return
}

func (p *MyServicePrioParentClient) Pong() (err error) {
  if err = p.sendPong(); err != nil { return }
  return p.recvPong()
}

func (p *MyServicePrioParentClient) sendPong()(err error) {
  oprot := p.OutputProtocol
  if oprot == nil {
    oprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.OutputProtocol = oprot
  }
  p.SeqId++
  if err = oprot.WriteMessageBegin("pong", thrift.CALL, p.SeqId); err != nil {
      return
  }
  args := MyServicePrioParentPongArgs{
  }
  if err = args.Write(oprot); err != nil {
      return
  }
  if err = oprot.WriteMessageEnd(); err != nil {
      return
  }
  return oprot.Flush()
}


func (p *MyServicePrioParentClient) recvPong() (err error) {
  iprot := p.InputProtocol
  if iprot == nil {
    iprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.InputProtocol = iprot
  }
  method, mTypeId, seqId, err := iprot.ReadMessageBegin()
  if err != nil {
    return
  }
  if method != "pong" {
    err = thrift.NewApplicationException(thrift.WRONG_METHOD_NAME, "pong failed: wrong method name")
    return
  }
  if p.SeqId != seqId {
    err = thrift.NewApplicationException(thrift.BAD_SEQUENCE_ID, "pong failed: out of sequence response")
    return
  }
  if mTypeId == thrift.EXCEPTION {
    error60 := thrift.NewApplicationException(thrift.UNKNOWN_APPLICATION_EXCEPTION, "Unknown Exception")
    var error61 error
    error61, err = error60.Read(iprot)
    if err != nil {
      return
    }
    if err = iprot.ReadMessageEnd(); err != nil {
      return
    }
    err = error61
    return
  }
  if mTypeId != thrift.REPLY {
    err = thrift.NewApplicationException(thrift.INVALID_MESSAGE_TYPE_EXCEPTION, "pong failed: invalid message type")
    return
  }
  result := MyServicePrioParentPongResult{}
  if err = result.Read(iprot); err != nil {
    return
  }
  if err = iprot.ReadMessageEnd(); err != nil {
    return
  }
  return
}


type MyServicePrioParentThreadsafeClient struct {
  Transport thrift.Transport
  ProtocolFactory thrift.ProtocolFactory
  InputProtocol thrift.Protocol
  OutputProtocol thrift.Protocol
  SeqId int32
  Mu sync.Mutex
}

func NewMyServicePrioParentThreadsafeClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *MyServicePrioParentThreadsafeClient {
  return &MyServicePrioParentThreadsafeClient{Transport: t,
    ProtocolFactory: f,
    InputProtocol: f.GetProtocol(t),
    OutputProtocol: f.GetProtocol(t),
    SeqId: 0,
  }
}

func NewMyServicePrioParentThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServicePrioParentThreadsafeClient {
  return &MyServicePrioParentThreadsafeClient{Transport: t,
    ProtocolFactory: nil,
    InputProtocol: iprot,
    OutputProtocol: oprot,
    SeqId: 0,
  }
}

func (p *MyServicePrioParentThreadsafeClient) Threadsafe() {}

func (p *MyServicePrioParentThreadsafeClient) Ping() (err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  if err = p.sendPing(); err != nil { return }
  return p.recvPing()
}

func (p *MyServicePrioParentThreadsafeClient) sendPing()(err error) {
  oprot := p.OutputProtocol
  if oprot == nil {
    oprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.OutputProtocol = oprot
  }
  p.SeqId++
  if err = oprot.WriteMessageBegin("ping", thrift.CALL, p.SeqId); err != nil {
      return
  }
  args := MyServicePrioParentPingArgs{
  }
  if err = args.Write(oprot); err != nil {
      return
  }
  if err = oprot.WriteMessageEnd(); err != nil {
      return
  }
  return oprot.Flush()
}


func (p *MyServicePrioParentThreadsafeClient) recvPing() (err error) {
  iprot := p.InputProtocol
  if iprot == nil {
    iprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.InputProtocol = iprot
  }
  method, mTypeId, seqId, err := iprot.ReadMessageBegin()
  if err != nil {
    return
  }
  if method != "ping" {
    err = thrift.NewApplicationException(thrift.WRONG_METHOD_NAME, "ping failed: wrong method name")
    return
  }
  if p.SeqId != seqId {
    err = thrift.NewApplicationException(thrift.BAD_SEQUENCE_ID, "ping failed: out of sequence response")
    return
  }
  if mTypeId == thrift.EXCEPTION {
    error62 := thrift.NewApplicationException(thrift.UNKNOWN_APPLICATION_EXCEPTION, "Unknown Exception")
    var error63 error
    error63, err = error62.Read(iprot)
    if err != nil {
      return
    }
    if err = iprot.ReadMessageEnd(); err != nil {
      return
    }
    err = error63
    return
  }
  if mTypeId != thrift.REPLY {
    err = thrift.NewApplicationException(thrift.INVALID_MESSAGE_TYPE_EXCEPTION, "ping failed: invalid message type")
    return
  }
  result := MyServicePrioParentPingResult{}
  if err = result.Read(iprot); err != nil {
    return
  }
  if err = iprot.ReadMessageEnd(); err != nil {
    return
  }
  return
}

func (p *MyServicePrioParentThreadsafeClient) Pong() (err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  if err = p.sendPong(); err != nil { return }
  return p.recvPong()
}

func (p *MyServicePrioParentThreadsafeClient) sendPong()(err error) {
  oprot := p.OutputProtocol
  if oprot == nil {
    oprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.OutputProtocol = oprot
  }
  p.SeqId++
  if err = oprot.WriteMessageBegin("pong", thrift.CALL, p.SeqId); err != nil {
      return
  }
  args := MyServicePrioParentPongArgs{
  }
  if err = args.Write(oprot); err != nil {
      return
  }
  if err = oprot.WriteMessageEnd(); err != nil {
      return
  }
  return oprot.Flush()
}


func (p *MyServicePrioParentThreadsafeClient) recvPong() (err error) {
  iprot := p.InputProtocol
  if iprot == nil {
    iprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.InputProtocol = iprot
  }
  method, mTypeId, seqId, err := iprot.ReadMessageBegin()
  if err != nil {
    return
  }
  if method != "pong" {
    err = thrift.NewApplicationException(thrift.WRONG_METHOD_NAME, "pong failed: wrong method name")
    return
  }
  if p.SeqId != seqId {
    err = thrift.NewApplicationException(thrift.BAD_SEQUENCE_ID, "pong failed: out of sequence response")
    return
  }
  if mTypeId == thrift.EXCEPTION {
    error64 := thrift.NewApplicationException(thrift.UNKNOWN_APPLICATION_EXCEPTION, "Unknown Exception")
    var error65 error
    error65, err = error64.Read(iprot)
    if err != nil {
      return
    }
    if err = iprot.ReadMessageEnd(); err != nil {
      return
    }
    err = error65
    return
  }
  if mTypeId != thrift.REPLY {
    err = thrift.NewApplicationException(thrift.INVALID_MESSAGE_TYPE_EXCEPTION, "pong failed: invalid message type")
    return
  }
  result := MyServicePrioParentPongResult{}
  if err = result.Read(iprot); err != nil {
    return
  }
  if err = iprot.ReadMessageEnd(); err != nil {
    return
  }
  return
}


type MyServicePrioParentProcessor struct {
  processorMap map[string]thrift.ProcessorFunction
  handler MyServicePrioParent
}

func (p *MyServicePrioParentProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
  p.processorMap[key] = processor
}

func (p *MyServicePrioParentProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, ok bool) {
  processor, ok = p.processorMap[key]
  return processor, ok
}

func (p *MyServicePrioParentProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
  return p.processorMap
}

func NewMyServicePrioParentProcessor(handler MyServicePrioParent) *MyServicePrioParentProcessor {

  self66 := &MyServicePrioParentProcessor{handler:handler, processorMap:make(map[string]thrift.ProcessorFunction)}
  self66.processorMap["ping"] = &myServicePrioParentProcessorPing{handler:handler}
  self66.processorMap["pong"] = &myServicePrioParentProcessorPong{handler:handler}
return self66
}

func (p *MyServicePrioParentProcessor) Process(iprot, oprot thrift.Protocol) (success bool, err thrift.Exception) {
  name, _, seqId, err := iprot.ReadMessageBegin()
  if err != nil { return false, err }
  if processor, ok := p.GetProcessorFunction(name); ok {
    return processor.Process(seqId, iprot, oprot)
  }
  iprot.Skip(thrift.STRUCT)
  iprot.ReadMessageEnd()
  x67 := thrift.NewApplicationException(thrift.UNKNOWN_METHOD, "Unknown function " + name)
  oprot.WriteMessageBegin(name, thrift.EXCEPTION, seqId)
  x67.Write(oprot)
  oprot.WriteMessageEnd()
  oprot.Flush()
  return false, x67

}

type myServicePrioParentProcessorPing struct {
  handler MyServicePrioParent
}

func (p *myServicePrioParentProcessorPing) Process(seqId int32, iprot, oprot thrift.Protocol) (success bool, err thrift.Exception) {
  args := MyServicePrioParentPingArgs{}
  if err = args.Read(iprot); err != nil {
    iprot.ReadMessageEnd()
    x := thrift.NewApplicationException(thrift.PROTOCOL_ERROR, err.Error())
    oprot.WriteMessageBegin("ping", thrift.EXCEPTION, seqId)
    x.Write(oprot)
    oprot.WriteMessageEnd()
    oprot.Flush()
    return false, err
  }

  iprot.ReadMessageEnd()
  result := MyServicePrioParentPingResult{}
  var err2 error
  if err2 = p.handler.Ping(); err2 != nil {
    x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing ping: " + err2.Error())
    oprot.WriteMessageBegin("ping", thrift.EXCEPTION, seqId)
    x.Write(oprot)
    oprot.WriteMessageEnd()
    oprot.Flush()
    return true, err2
  }
  if err2 = oprot.WriteMessageBegin("ping", thrift.REPLY, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  if err != nil {
    return
  }
  return true, err
}

type myServicePrioParentProcessorPong struct {
  handler MyServicePrioParent
}

func (p *myServicePrioParentProcessorPong) Process(seqId int32, iprot, oprot thrift.Protocol) (success bool, err thrift.Exception) {
  args := MyServicePrioParentPongArgs{}
  if err = args.Read(iprot); err != nil {
    iprot.ReadMessageEnd()
    x := thrift.NewApplicationException(thrift.PROTOCOL_ERROR, err.Error())
    oprot.WriteMessageBegin("pong", thrift.EXCEPTION, seqId)
    x.Write(oprot)
    oprot.WriteMessageEnd()
    oprot.Flush()
    return false, err
  }

  iprot.ReadMessageEnd()
  result := MyServicePrioParentPongResult{}
  var err2 error
  if err2 = p.handler.Pong(); err2 != nil {
    x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing pong: " + err2.Error())
    oprot.WriteMessageBegin("pong", thrift.EXCEPTION, seqId)
    x.Write(oprot)
    oprot.WriteMessageEnd()
    oprot.Flush()
    return true, err2
  }
  if err2 = oprot.WriteMessageBegin("pong", thrift.REPLY, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  if err != nil {
    return
  }
  return true, err
}


// HELPER FUNCTIONS AND STRUCTURES

type MyServicePrioParentPingArgs struct {
}

func NewMyServicePrioParentPingArgs() *MyServicePrioParentPingArgs {
  return &MyServicePrioParentPingArgs{}
}

func (p *MyServicePrioParentPingArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
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

func (p *MyServicePrioParentPingArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("ping_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyServicePrioParentPingArgs) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyServicePrioParentPingArgs(%+v)", *p)
}

type MyServicePrioParentPingResult struct {
}

func NewMyServicePrioParentPingResult() *MyServicePrioParentPingResult {
  return &MyServicePrioParentPingResult{}
}

func (p *MyServicePrioParentPingResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
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

func (p *MyServicePrioParentPingResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("ping_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyServicePrioParentPingResult) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyServicePrioParentPingResult(%+v)", *p)
}

type MyServicePrioParentPongArgs struct {
}

func NewMyServicePrioParentPongArgs() *MyServicePrioParentPongArgs {
  return &MyServicePrioParentPongArgs{}
}

func (p *MyServicePrioParentPongArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
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

func (p *MyServicePrioParentPongArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("pong_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyServicePrioParentPongArgs) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyServicePrioParentPongArgs(%+v)", *p)
}

type MyServicePrioParentPongResult struct {
}

func NewMyServicePrioParentPongResult() *MyServicePrioParentPongResult {
  return &MyServicePrioParentPongResult{}
}

func (p *MyServicePrioParentPongResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
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

func (p *MyServicePrioParentPongResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("pong_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyServicePrioParentPongResult) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyServicePrioParentPongResult(%+v)", *p)
}


