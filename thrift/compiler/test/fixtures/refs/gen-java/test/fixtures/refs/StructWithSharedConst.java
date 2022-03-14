/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="StructWithSharedConst", builder=StructWithSharedConst.Builder.class)
public final class StructWithSharedConst implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public StructWithSharedConst(
        @com.facebook.swift.codec.ThriftField(value=1, name="opt_shared_const", requiredness=Requiredness.OPTIONAL) final test.fixtures.refs.MyField optSharedConst,
        @com.facebook.swift.codec.ThriftField(value=2, name="shared_const", requiredness=Requiredness.NONE) final test.fixtures.refs.MyField sharedConst,
        @com.facebook.swift.codec.ThriftField(value=3, name="req_shared_const", requiredness=Requiredness.REQUIRED) final test.fixtures.refs.MyField reqSharedConst
    ) {
        this.optSharedConst = optSharedConst;
        this.sharedConst = sharedConst;
        this.reqSharedConst = reqSharedConst;
    }
    
    @ThriftConstructor
    protected StructWithSharedConst() {
      this.optSharedConst = null;
      this.sharedConst = null;
      this.reqSharedConst = null;
    }
    
    public static class Builder {
    
        private test.fixtures.refs.MyField optSharedConst = null;
        private test.fixtures.refs.MyField sharedConst = null;
        private test.fixtures.refs.MyField reqSharedConst = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="opt_shared_const", requiredness=Requiredness.OPTIONAL)
        public Builder setOptSharedConst(test.fixtures.refs.MyField optSharedConst) {
            this.optSharedConst = optSharedConst;
            return this;
        }
    
        public test.fixtures.refs.MyField getOptSharedConst() { return optSharedConst; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="shared_const", requiredness=Requiredness.NONE)
        public Builder setSharedConst(test.fixtures.refs.MyField sharedConst) {
            this.sharedConst = sharedConst;
            return this;
        }
    
        public test.fixtures.refs.MyField getSharedConst() { return sharedConst; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="req_shared_const", requiredness=Requiredness.REQUIRED)
        public Builder setReqSharedConst(test.fixtures.refs.MyField reqSharedConst) {
            this.reqSharedConst = reqSharedConst;
            return this;
        }
    
        public test.fixtures.refs.MyField getReqSharedConst() { return reqSharedConst; }
    
        public Builder() { }
        public Builder(StructWithSharedConst other) {
            this.optSharedConst = other.optSharedConst;
            this.sharedConst = other.sharedConst;
            this.reqSharedConst = other.reqSharedConst;
        }
    
        @ThriftConstructor
        public StructWithSharedConst build() {
            StructWithSharedConst result = new StructWithSharedConst (
                this.optSharedConst,
                this.sharedConst,
                this.reqSharedConst
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("StructWithSharedConst");
    private final test.fixtures.refs.MyField optSharedConst;
    public static final int _OPT_SHARED_CONST = 1;
    private static final TField OPT_SHARED_CONST_FIELD_DESC = new TField("opt_shared_const", TType.STRUCT, (short)1);
        private final test.fixtures.refs.MyField sharedConst;
    public static final int _SHARED_CONST = 2;
    private static final TField SHARED_CONST_FIELD_DESC = new TField("shared_const", TType.STRUCT, (short)2);
        private final test.fixtures.refs.MyField reqSharedConst;
    public static final int _REQ_SHARED_CONST = 3;
    private static final TField REQ_SHARED_CONST_FIELD_DESC = new TField("req_shared_const", TType.STRUCT, (short)3);
    static {
      NAMES_TO_IDS.put("optSharedConst", 1);
      THRIFT_NAMES_TO_IDS.put("opt_shared_const", 1);
      FIELD_METADATA.put(1, OPT_SHARED_CONST_FIELD_DESC);
      NAMES_TO_IDS.put("sharedConst", 2);
      THRIFT_NAMES_TO_IDS.put("shared_const", 2);
      FIELD_METADATA.put(2, SHARED_CONST_FIELD_DESC);
      NAMES_TO_IDS.put("reqSharedConst", 3);
      THRIFT_NAMES_TO_IDS.put("req_shared_const", 3);
      FIELD_METADATA.put(3, REQ_SHARED_CONST_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="opt_shared_const", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.refs.MyField getOptSharedConst() { return optSharedConst; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="shared_const", requiredness=Requiredness.NONE)
    public test.fixtures.refs.MyField getSharedConst() { return sharedConst; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=3, name="req_shared_const", requiredness=Requiredness.REQUIRED)
    public test.fixtures.refs.MyField getReqSharedConst() { return reqSharedConst; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("optSharedConst", optSharedConst);
        helper.add("sharedConst", sharedConst);
        helper.add("reqSharedConst", reqSharedConst);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        StructWithSharedConst other = (StructWithSharedConst)o;
    
        return
            Objects.equals(optSharedConst, other.optSharedConst) &&
            Objects.equals(sharedConst, other.sharedConst) &&
            Objects.equals(reqSharedConst, other.reqSharedConst) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            optSharedConst,
            sharedConst,
            reqSharedConst
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<StructWithSharedConst> asReader() {
      return StructWithSharedConst::read0;
    }
    
    public static StructWithSharedConst read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(StructWithSharedConst.NAMES_TO_IDS, StructWithSharedConst.THRIFT_NAMES_TO_IDS, StructWithSharedConst.FIELD_METADATA);
      StructWithSharedConst.Builder builder = new StructWithSharedConst.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _OPT_SHARED_CONST:
          if (__field.type == TType.STRUCT) {
            test.fixtures.refs.MyField optSharedConst = test.fixtures.refs.MyField.read0(oprot);
            builder.setOptSharedConst(optSharedConst);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _SHARED_CONST:
          if (__field.type == TType.STRUCT) {
            test.fixtures.refs.MyField sharedConst = test.fixtures.refs.MyField.read0(oprot);
            builder.setSharedConst(sharedConst);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REQ_SHARED_CONST:
          if (__field.type == TType.STRUCT) {
            test.fixtures.refs.MyField reqSharedConst = test.fixtures.refs.MyField.read0(oprot);
            builder.setReqSharedConst(reqSharedConst);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.optSharedConst != null) {
        oprot.writeFieldBegin(OPT_SHARED_CONST_FIELD_DESC);
        this.optSharedConst.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.sharedConst != null) {
        oprot.writeFieldBegin(SHARED_CONST_FIELD_DESC);
        this.sharedConst.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.reqSharedConst != null) {
        oprot.writeFieldBegin(REQ_SHARED_CONST_FIELD_DESC);
        this.reqSharedConst.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _StructWithSharedConstLazy {
        private static final StructWithSharedConst _DEFAULT = new StructWithSharedConst.Builder().build();
    }
    
    public static StructWithSharedConst defaultInstance() {
        return  _StructWithSharedConstLazy._DEFAULT;
    }
}
