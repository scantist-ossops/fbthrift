/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.stream;

import java.util.*;
import org.apache.thrift.protocol.*;
import com.facebook.thrift.util.Readers;

public class PubSubStreamingServiceRpcServerHandler 
  implements com.facebook.thrift.server.RpcServerHandler {

  private final java.util.Map<String, com.facebook.thrift.server.RpcServerHandler> _methodMap;

  private final PubSubStreamingService.Reactive _delegate;


  private final java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers;

  public PubSubStreamingServiceRpcServerHandler(PubSubStreamingService _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new PubSubStreamingServiceBlockingReactiveWrapper(_delegate), _eventHandlers);
  }

  public PubSubStreamingServiceRpcServerHandler(PubSubStreamingService.Async _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new PubSubStreamingServiceAsyncReactiveWrapper(_delegate), _eventHandlers);
  }

  public PubSubStreamingServiceRpcServerHandler(PubSubStreamingService.Reactive _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    
    this._methodMap = new java.util.HashMap<>();
    this._delegate = _delegate;
    this._eventHandlers = _eventHandlers;

  }



  @Override
  public reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> singleRequestSingleResponse(com.facebook.thrift.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    com.facebook.swift.service.ContextChain _chain;
    try {
      _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
    } catch (Throwable _t) {
      org.apache.thrift.TApplicationException _tApplicationException = new org.apache.thrift.TApplicationException(_t.getMessage());
      com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), null);
      return reactor.core.publisher.Mono.just(_serverResponsePayload);
    }

    reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _result;
    try {
      switch (_name) {
        default: {
            _chain.preRead();
            org.apache.thrift.TApplicationException _tApplicationException = new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name);
            com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
            return reactor.core.publisher.Mono.just(_serverResponsePayload);
        }
      }
    } catch (org.apache.thrift.TApplicationException _tApplicationException) {
      com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
      return reactor.core.publisher.Mono.just(_serverResponsePayload);
    } catch (Throwable _t) {
      _result = reactor.core.publisher.Mono.error(_t);
    }

    return _result;
  }

  @Override
  public reactor.core.publisher.Mono<Void> singleRequestNoResponse(com.facebook.thrift.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    com.facebook.swift.service.ContextChain _chain;
    try {
      _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
    } catch (Throwable _t) {
      return reactor.core.publisher.Mono.error(_t);
    }

    reactor.core.publisher.Mono<Void> _result;
    try {
      switch (_name) {
        default: {
          _result = reactor.core.publisher.Mono.error(new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name));
        }
      }
    } catch (Throwable _t) {
      _result = reactor.core.publisher.Mono.error(_t);
    }

    return _result;
  }

  public java.util.Map<String, com.facebook.thrift.server.RpcServerHandler> getMethodMap() {
      return _methodMap;
  }

}
