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
@com.facebook.swift.codec.ThriftStruct(value="StructWithString", builder=StructWithString.Builder.class)
public final class StructWithString implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public StructWithString(
        @com.facebook.swift.codec.ThriftField(value=1, name="def_unique_string_ref", requiredness=Requiredness.NONE) final String defUniqueStringRef,
        @com.facebook.swift.codec.ThriftField(value=2, name="def_shared_string_ref", requiredness=Requiredness.NONE) final String defSharedStringRef,
        @com.facebook.swift.codec.ThriftField(value=3, name="def_shared_string_const_ref", requiredness=Requiredness.NONE) final String defSharedStringConstRef,
        @com.facebook.swift.codec.ThriftField(value=4, name="unique_string_ref", requiredness=Requiredness.NONE) final String uniqueStringRef,
        @com.facebook.swift.codec.ThriftField(value=5, name="shared_string_ref", requiredness=Requiredness.NONE) final String sharedStringRef
    ) {
        this.defUniqueStringRef = defUniqueStringRef;
        this.defSharedStringRef = defSharedStringRef;
        this.defSharedStringConstRef = defSharedStringConstRef;
        this.uniqueStringRef = uniqueStringRef;
        this.sharedStringRef = sharedStringRef;
    }
    
    @ThriftConstructor
    protected StructWithString() {
      this.defUniqueStringRef = "...";
      this.defSharedStringRef = "...";
      this.defSharedStringConstRef = "...";
      this.uniqueStringRef = null;
      this.sharedStringRef = null;
    }
    
    public static class Builder {
    
        private String defUniqueStringRef = "...";
        private String defSharedStringRef = "...";
        private String defSharedStringConstRef = "...";
        private String uniqueStringRef = null;
        private String sharedStringRef = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="def_unique_string_ref", requiredness=Requiredness.NONE)
        public Builder setDefUniqueStringRef(String defUniqueStringRef) {
            this.defUniqueStringRef = defUniqueStringRef;
            return this;
        }
    
        public String getDefUniqueStringRef() { return defUniqueStringRef; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="def_shared_string_ref", requiredness=Requiredness.NONE)
        public Builder setDefSharedStringRef(String defSharedStringRef) {
            this.defSharedStringRef = defSharedStringRef;
            return this;
        }
    
        public String getDefSharedStringRef() { return defSharedStringRef; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="def_shared_string_const_ref", requiredness=Requiredness.NONE)
        public Builder setDefSharedStringConstRef(String defSharedStringConstRef) {
            this.defSharedStringConstRef = defSharedStringConstRef;
            return this;
        }
    
        public String getDefSharedStringConstRef() { return defSharedStringConstRef; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="unique_string_ref", requiredness=Requiredness.NONE)
        public Builder setUniqueStringRef(String uniqueStringRef) {
            this.uniqueStringRef = uniqueStringRef;
            return this;
        }
    
        public String getUniqueStringRef() { return uniqueStringRef; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="shared_string_ref", requiredness=Requiredness.NONE)
        public Builder setSharedStringRef(String sharedStringRef) {
            this.sharedStringRef = sharedStringRef;
            return this;
        }
    
        public String getSharedStringRef() { return sharedStringRef; }
    
        public Builder() { }
        public Builder(StructWithString other) {
            this.defUniqueStringRef = other.defUniqueStringRef;
            this.defSharedStringRef = other.defSharedStringRef;
            this.defSharedStringConstRef = other.defSharedStringConstRef;
            this.uniqueStringRef = other.uniqueStringRef;
            this.sharedStringRef = other.sharedStringRef;
        }
    
        @ThriftConstructor
        public StructWithString build() {
            StructWithString result = new StructWithString (
                this.defUniqueStringRef,
                this.defSharedStringRef,
                this.defSharedStringConstRef,
                this.uniqueStringRef,
                this.sharedStringRef
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("StructWithString");
    private final String defUniqueStringRef;
    public static final int _DEF_UNIQUE_STRING_REF = 1;
    private static final TField DEF_UNIQUE_STRING_REF_FIELD_DESC = new TField("def_unique_string_ref", TType.STRING, (short)1);
        private final String defSharedStringRef;
    public static final int _DEF_SHARED_STRING_REF = 2;
    private static final TField DEF_SHARED_STRING_REF_FIELD_DESC = new TField("def_shared_string_ref", TType.STRING, (short)2);
        private final String defSharedStringConstRef;
    public static final int _DEF_SHARED_STRING_CONST_REF = 3;
    private static final TField DEF_SHARED_STRING_CONST_REF_FIELD_DESC = new TField("def_shared_string_const_ref", TType.STRING, (short)3);
        private final String uniqueStringRef;
    public static final int _UNIQUE_STRING_REF = 4;
    private static final TField UNIQUE_STRING_REF_FIELD_DESC = new TField("unique_string_ref", TType.STRING, (short)4);
        private final String sharedStringRef;
    public static final int _SHARED_STRING_REF = 5;
    private static final TField SHARED_STRING_REF_FIELD_DESC = new TField("shared_string_ref", TType.STRING, (short)5);
    static {
      NAMES_TO_IDS.put("defUniqueStringRef", 1);
      THRIFT_NAMES_TO_IDS.put("def_unique_string_ref", 1);
      FIELD_METADATA.put(1, DEF_UNIQUE_STRING_REF_FIELD_DESC);
      NAMES_TO_IDS.put("defSharedStringRef", 2);
      THRIFT_NAMES_TO_IDS.put("def_shared_string_ref", 2);
      FIELD_METADATA.put(2, DEF_SHARED_STRING_REF_FIELD_DESC);
      NAMES_TO_IDS.put("defSharedStringConstRef", 3);
      THRIFT_NAMES_TO_IDS.put("def_shared_string_const_ref", 3);
      FIELD_METADATA.put(3, DEF_SHARED_STRING_CONST_REF_FIELD_DESC);
      NAMES_TO_IDS.put("uniqueStringRef", 4);
      THRIFT_NAMES_TO_IDS.put("unique_string_ref", 4);
      FIELD_METADATA.put(4, UNIQUE_STRING_REF_FIELD_DESC);
      NAMES_TO_IDS.put("sharedStringRef", 5);
      THRIFT_NAMES_TO_IDS.put("shared_string_ref", 5);
      FIELD_METADATA.put(5, SHARED_STRING_REF_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="def_unique_string_ref", requiredness=Requiredness.NONE)
    public String getDefUniqueStringRef() { return defUniqueStringRef; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="def_shared_string_ref", requiredness=Requiredness.NONE)
    public String getDefSharedStringRef() { return defSharedStringRef; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="def_shared_string_const_ref", requiredness=Requiredness.NONE)
    public String getDefSharedStringConstRef() { return defSharedStringConstRef; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="unique_string_ref", requiredness=Requiredness.NONE)
    public String getUniqueStringRef() { return uniqueStringRef; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="shared_string_ref", requiredness=Requiredness.NONE)
    public String getSharedStringRef() { return sharedStringRef; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("defUniqueStringRef", defUniqueStringRef);
        helper.add("defSharedStringRef", defSharedStringRef);
        helper.add("defSharedStringConstRef", defSharedStringConstRef);
        helper.add("uniqueStringRef", uniqueStringRef);
        helper.add("sharedStringRef", sharedStringRef);
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
    
        StructWithString other = (StructWithString)o;
    
        return
            Objects.equals(defUniqueStringRef, other.defUniqueStringRef) &&
            Objects.equals(defSharedStringRef, other.defSharedStringRef) &&
            Objects.equals(defSharedStringConstRef, other.defSharedStringConstRef) &&
            Objects.equals(uniqueStringRef, other.uniqueStringRef) &&
            Objects.equals(sharedStringRef, other.sharedStringRef) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            defUniqueStringRef,
            defSharedStringRef,
            defSharedStringConstRef,
            uniqueStringRef,
            sharedStringRef
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<StructWithString> asReader() {
      return StructWithString::read0;
    }
    
    public static StructWithString read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(StructWithString.NAMES_TO_IDS, StructWithString.THRIFT_NAMES_TO_IDS, StructWithString.FIELD_METADATA);
      StructWithString.Builder builder = new StructWithString.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _DEF_UNIQUE_STRING_REF:
          if (__field.type == TType.STRING) {
            String defUniqueStringRef = oprot.readString();
            builder.setDefUniqueStringRef(defUniqueStringRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DEF_SHARED_STRING_REF:
          if (__field.type == TType.STRING) {
            String defSharedStringRef = oprot.readString();
            builder.setDefSharedStringRef(defSharedStringRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DEF_SHARED_STRING_CONST_REF:
          if (__field.type == TType.STRING) {
            String defSharedStringConstRef = oprot.readString();
            builder.setDefSharedStringConstRef(defSharedStringConstRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _UNIQUE_STRING_REF:
          if (__field.type == TType.STRING) {
            String uniqueStringRef = oprot.readString();
            builder.setUniqueStringRef(uniqueStringRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _SHARED_STRING_REF:
          if (__field.type == TType.STRING) {
            String sharedStringRef = oprot.readString();
            builder.setSharedStringRef(sharedStringRef);
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
      if (this.defUniqueStringRef != null) {
        oprot.writeFieldBegin(DEF_UNIQUE_STRING_REF_FIELD_DESC);
        oprot.writeString(this.defUniqueStringRef);
        oprot.writeFieldEnd();
      }
      if (this.defSharedStringRef != null) {
        oprot.writeFieldBegin(DEF_SHARED_STRING_REF_FIELD_DESC);
        oprot.writeString(this.defSharedStringRef);
        oprot.writeFieldEnd();
      }
      if (this.defSharedStringConstRef != null) {
        oprot.writeFieldBegin(DEF_SHARED_STRING_CONST_REF_FIELD_DESC);
        oprot.writeString(this.defSharedStringConstRef);
        oprot.writeFieldEnd();
      }
      if (this.uniqueStringRef != null) {
        oprot.writeFieldBegin(UNIQUE_STRING_REF_FIELD_DESC);
        oprot.writeString(this.uniqueStringRef);
        oprot.writeFieldEnd();
      }
      if (this.sharedStringRef != null) {
        oprot.writeFieldBegin(SHARED_STRING_REF_FIELD_DESC);
        oprot.writeString(this.sharedStringRef);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _StructWithStringLazy {
        private static final StructWithString _DEFAULT = new StructWithString.Builder().build();
    }
    
    public static StructWithString defaultInstance() {
        return  _StructWithStringLazy._DEFAULT;
    }
}
