#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
cimport facebook.thrift.annotation.cpp.cpp.types as _facebook_thrift_annotation_cpp_cpp_types
import facebook.thrift.annotation.cpp.cpp.types as _facebook_thrift_annotation_cpp_cpp_types

cimport module.types_reflection as _types_reflection



cdef __UnionTypeEnumData __Baz_union_type_enum_data  = __UnionTypeEnumData._fbthrift_create(
    __createEnumDataForUnionType[cBaz](),
    __BazType,
)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __Baz_Union_TypeMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __Baz_union_type_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __Baz_union_type_enum_data.get_all_names()

    def __len__(cls):
        return __Baz_union_type_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __Baz_union_type_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class __BazType(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __Baz_union_type_enum_data.get_by_name(name)


__SetMetaClass(<PyTypeObject*> __BazType, <PyTypeObject*> __Baz_Union_TypeMeta)


@__cython.auto_pickle(False)
cdef class Foo(thrift.py3.types.Struct):
    def __init__(Foo self, **kwargs):
        self._cpp_obj = make_shared[cFoo]()
        self._fields_setter = _fbthrift_types_fields.__Foo_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(Foo self, **kwargs):
        if not kwargs:
            return self
        cdef Foo __fbthrift_inst = Foo.__new__(Foo)
        __fbthrift_inst._cpp_obj = make_shared[cFoo](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__Foo_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("Foo", {
          "intField": deref(self._cpp_obj).intField_ref().has_value(),
          "optionalIntField": deref(self._cpp_obj).optionalIntField_ref().has_value(),
          "intFieldWithDefault": deref(self._cpp_obj).intFieldWithDefault_ref().has_value(),
          "setField": deref(self._cpp_obj).setField_ref().has_value(),
          "optionalSetField": deref(self._cpp_obj).optionalSetField_ref().has_value(),
          "mapField": deref(self._cpp_obj).mapField_ref().has_value(),
          "optionalMapField": deref(self._cpp_obj).optionalMapField_ref().has_value(),
          "binaryField": deref(self._cpp_obj).binaryField_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFoo] cpp_obj):
        __fbthrift_inst = <Foo>Foo.__new__(Foo)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def intField(self):

        return deref(self._cpp_obj).intField_ref().value()

    @property
    def optionalIntField(self):
        if not deref(self._cpp_obj).optionalIntField_ref().has_value():
            return None

        return deref(self._cpp_obj).optionalIntField_ref().value_unchecked()

    @property
    def intFieldWithDefault(self):

        return deref(self._cpp_obj).intFieldWithDefault_ref().value()

    @property
    def setField(self):

        if self.__fbthrift_cached_setField is None:
            self.__fbthrift_cached_setField = Set__string._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).setField_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_setField

    @property
    def optionalSetField(self):
        if not deref(self._cpp_obj).optionalSetField_ref().has_value():
            return None

        if self.__fbthrift_cached_optionalSetField is None:
            self.__fbthrift_cached_optionalSetField = Set__string._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).optionalSetField_ref().ref_unchecked(), self._cpp_obj))
        return self.__fbthrift_cached_optionalSetField

    @property
    def mapField(self):

        if self.__fbthrift_cached_mapField is None:
            self.__fbthrift_cached_mapField = Map__string_List__string._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).mapField_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_mapField

    @property
    def optionalMapField(self):
        if not deref(self._cpp_obj).optionalMapField_ref().has_value():
            return None

        if self.__fbthrift_cached_optionalMapField is None:
            self.__fbthrift_cached_optionalMapField = Map__string_List__string._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).optionalMapField_ref().ref_unchecked(), self._cpp_obj))
        return self.__fbthrift_cached_optionalMapField

    @property
    def binaryField(self):

        return deref(self._cpp_obj).binaryField_ref().value()


    def __hash__(Foo self):
        return super().__hash__()

    def __repr__(Foo self):
        return super().__repr__()

    def __str__(Foo self):
        return super().__str__()


    def __copy__(Foo self):
        cdef shared_ptr[cFoo] cpp_obj = make_shared[cFoo](
            deref(self._cpp_obj)
        )
        return Foo._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cFoo](
            self._cpp_obj,
            (<Foo>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Foo()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cFoo].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Foo"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cFoo](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 8

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Foo self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cFoo](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Foo self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cFoo]()
        with nogil:
            needed = serializer.cdeserialize[cFoo](buf, self._cpp_obj.get(), proto)
        return needed




@__cython.auto_pickle(False)
cdef class Baz(thrift.py3.types.Union):
    Type = __BazType

    def __init__(
        self, *,
        intField=None,
        setField=None,
        mapField=None,
        bytes binaryField=None
    ):
        if intField is not None:
            if not isinstance(intField, int):
                raise TypeError(f'intField is not a { int !r}.')
            intField = <cint32_t> intField

        self._cpp_obj = __to_shared_ptr(cmove(Baz._make_instance(
          NULL,
          intField,
          setField,
          mapField,
          binaryField,
        )))
        self._load_cache()

    @staticmethod
    def fromValue(value):
        if value is None:
            return Baz()
        if isinstance(value, int):
            if not isinstance(value, pbool):
                try:
                    <cint32_t> value
                    return Baz(intField=value)
                except OverflowError:
                    pass
        if isinstance(value, Set__string):
            return Baz(setField=value)
        if isinstance(value, Map__string_List__string):
            return Baz(mapField=value)
        if isinstance(value, bytes):
            return Baz(binaryField=value)
        raise ValueError(f"Unable to derive correct union field for value: {value}")

    @staticmethod
    cdef unique_ptr[cBaz] _make_instance(
        cBaz* base_instance,
        object intField,
        object setField,
        object mapField,
        bytes binaryField
    ) except *:
        cdef unique_ptr[cBaz] c_inst = make_unique[cBaz]()
        cdef bint any_set = False
        if intField is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_intField(intField)
            any_set = True
        if setField is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_setField(<cset[string]>deref(Set__string(setField)._cpp_obj))
            any_set = True
        if mapField is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_mapField(<cmap[string,vector[string]]>deref(Map__string_List__string(mapField)._cpp_obj))
            any_set = True
        if binaryField is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_binaryField(binaryField)
            any_set = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return cmove(c_inst)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBaz] cpp_obj):
        __fbthrift_inst = <Baz>Baz.__new__(Baz)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        __fbthrift_inst._load_cache()
        return __fbthrift_inst

    @property
    def intField(self):
        if self.type.value != 1:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not intField')
        return self.value

    @property
    def setField(self):
        if self.type.value != 4:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not setField')
        return self.value

    @property
    def mapField(self):
        if self.type.value != 6:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not mapField')
        return self.value

    @property
    def binaryField(self):
        if self.type.value != 8:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not binaryField')
        return self.value


    def __hash__(Baz self):
        return  super().__hash__()

    cdef _load_cache(Baz self):
        self.type = Baz.Type(<int>(deref(self._cpp_obj).getType()))
        cdef int type = self.type.value
        if type == 0:    # Empty
            self.value = None
        elif type == 1:
            self.value = deref(self._cpp_obj).get_intField()
        elif type == 4:
            self.value = Set__string._fbthrift_create(make_shared[cset[string]](deref(self._cpp_obj).get_setField()))
        elif type == 6:
            self.value = Map__string_List__string._fbthrift_create(make_shared[cmap[string,vector[string]]](deref(self._cpp_obj).get_mapField()))
        elif type == 8:
            self.value = deref(self._cpp_obj).get_binaryField()

    def __copy__(Baz self):
        cdef shared_ptr[cBaz] cpp_obj = make_shared[cBaz](
            deref(self._cpp_obj)
        )
        return Baz._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cBaz](
            self._cpp_obj,
            (<Baz>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Baz()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cBaz].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Baz"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cBaz](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Baz self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cBaz](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Baz self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cBaz]()
        with nogil:
            needed = serializer.cdeserialize[cBaz](buf, self._cpp_obj.get(), proto)
        # force a cache reload since the underlying data's changed
        self._load_cache()
        return needed


@__cython.auto_pickle(False)
cdef class Bar(thrift.py3.types.Struct):
    def __init__(Bar self, **kwargs):
        self._cpp_obj = make_shared[cBar]()
        self._fields_setter = _fbthrift_types_fields.__Bar_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(Bar self, **kwargs):
        if not kwargs:
            return self
        cdef Bar __fbthrift_inst = Bar.__new__(Bar)
        __fbthrift_inst._cpp_obj = make_shared[cBar](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__Bar_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("Bar", {
          "structField": deref(self._cpp_obj).structField_ref().has_value(),
          "optionalStructField": deref(self._cpp_obj).optionalStructField_ref().has_value(),
          "structListField": deref(self._cpp_obj).structListField_ref().has_value(),
          "optionalStructListField": deref(self._cpp_obj).optionalStructListField_ref().has_value(),
          "unionField": deref(self._cpp_obj).unionField_ref().has_value(),
          "optionalUnionField": deref(self._cpp_obj).optionalUnionField_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBar] cpp_obj):
        __fbthrift_inst = <Bar>Bar.__new__(Bar)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def structField(self):

        if self.__fbthrift_cached_structField is None:
            self.__fbthrift_cached_structField = Foo._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).structField_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_structField

    @property
    def optionalStructField(self):
        if not deref(self._cpp_obj).optionalStructField_ref().has_value():
            return None

        if self.__fbthrift_cached_optionalStructField is None:
            self.__fbthrift_cached_optionalStructField = Foo._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).optionalStructField_ref().ref_unchecked(), self._cpp_obj))
        return self.__fbthrift_cached_optionalStructField

    @property
    def structListField(self):

        if self.__fbthrift_cached_structListField is None:
            self.__fbthrift_cached_structListField = List__Foo._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).structListField_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_structListField

    @property
    def optionalStructListField(self):
        if not deref(self._cpp_obj).optionalStructListField_ref().has_value():
            return None

        if self.__fbthrift_cached_optionalStructListField is None:
            self.__fbthrift_cached_optionalStructListField = List__Foo._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).optionalStructListField_ref().ref_unchecked(), self._cpp_obj))
        return self.__fbthrift_cached_optionalStructListField

    @property
    def unionField(self):

        if self.__fbthrift_cached_unionField is None:
            self.__fbthrift_cached_unionField = Baz._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).unionField_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_unionField

    @property
    def optionalUnionField(self):
        if not deref(self._cpp_obj).optionalUnionField_ref().has_value():
            return None

        if self.__fbthrift_cached_optionalUnionField is None:
            self.__fbthrift_cached_optionalUnionField = Baz._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).optionalUnionField_ref().ref_unchecked(), self._cpp_obj))
        return self.__fbthrift_cached_optionalUnionField


    def __hash__(Bar self):
        return super().__hash__()

    def __repr__(Bar self):
        return super().__repr__()

    def __str__(Bar self):
        return super().__str__()


    def __copy__(Bar self):
        cdef shared_ptr[cBar] cpp_obj = make_shared[cBar](
            deref(self._cpp_obj)
        )
        return Bar._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cBar](
            self._cpp_obj,
            (<Bar>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Bar()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cBar].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Bar"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cBar](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 6

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Bar self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cBar](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Bar self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cBar]()
        with nogil:
            needed = serializer.cdeserialize[cBar](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class StructWithFieldAdapter(thrift.py3.types.Struct):
    def __init__(StructWithFieldAdapter self, **kwargs):
        self._cpp_obj = make_shared[cStructWithFieldAdapter]()
        self._fields_setter = _fbthrift_types_fields.__StructWithFieldAdapter_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(StructWithFieldAdapter self, **kwargs):
        if not kwargs:
            return self
        cdef StructWithFieldAdapter __fbthrift_inst = StructWithFieldAdapter.__new__(StructWithFieldAdapter)
        __fbthrift_inst._cpp_obj = make_shared[cStructWithFieldAdapter](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__StructWithFieldAdapter_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("StructWithFieldAdapter", {
          "field": deref(self._cpp_obj).field_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStructWithFieldAdapter] cpp_obj):
        __fbthrift_inst = <StructWithFieldAdapter>StructWithFieldAdapter.__new__(StructWithFieldAdapter)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def field(self):

        return deref(self._cpp_obj).field_ref().value()


    def __hash__(StructWithFieldAdapter self):
        return super().__hash__()

    def __repr__(StructWithFieldAdapter self):
        return super().__repr__()

    def __str__(StructWithFieldAdapter self):
        return super().__str__()


    def __copy__(StructWithFieldAdapter self):
        cdef shared_ptr[cStructWithFieldAdapter] cpp_obj = make_shared[cStructWithFieldAdapter](
            deref(self._cpp_obj)
        )
        return StructWithFieldAdapter._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cStructWithFieldAdapter](
            self._cpp_obj,
            (<StructWithFieldAdapter>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__StructWithFieldAdapter()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cStructWithFieldAdapter].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.StructWithFieldAdapter"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cStructWithFieldAdapter](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 1

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(StructWithFieldAdapter self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cStructWithFieldAdapter](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(StructWithFieldAdapter self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cStructWithFieldAdapter]()
        with nogil:
            needed = serializer.cdeserialize[cStructWithFieldAdapter](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class Set__string(thrift.py3.types.Set):
    def __init__(self, items=None):
        if isinstance(items, Set__string):
            self._cpp_obj = (<Set__string> items)._cpp_obj
        else:
            self._cpp_obj = Set__string._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[string]] c_items):
        __fbthrift_inst = <Set__string>Set__string.__new__(Set__string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Set__string self):
        cdef shared_ptr[cset[string]] cpp_obj = make_shared[cset[string]](
            deref(self._cpp_obj)
        )
        return Set__string._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *:
        cdef shared_ptr[cset[string]] c_inst = make_shared[cset[string]]()
        if items is not None:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.AbstractSet[str] field, explicitly convert it first.")
            for item in items:
                if not isinstance(item, str):
                    raise TypeError(f"{item!r} is not of type str")
                deref(c_inst).insert(item.encode('UTF-8'))
        return c_inst

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, str):
            return False
        return pbool(deref(self._cpp_obj).count(item.encode('UTF-8')))


    def __iter__(self):
        if not self:
            return
        cdef __set_iter[cset[string]] itr = __set_iter[cset[string]](self._cpp_obj)
        cdef string citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNext(self._cpp_obj, citem)
            yield bytes(citem).decode('UTF-8')

    def __hash__(self):
        return super().__hash__()

    def __richcmp__(self, other, int op):
        if isinstance(other, Set__string):
            # C level comparisons
            return __setcmp(
                self._cpp_obj,
                (<Set__string> other)._cpp_obj,
                op,
            )
        return self._fbthrift_py_richcmp(other, op)

    cdef _fbthrift_do_set_op(self, other, __cSetOp op):
        if not isinstance(other, Set__string):
            other = Set__string(other)
        cdef shared_ptr[cset[string]] result
        return Set__string._fbthrift_create(__set_op[cset[string]](
            self._cpp_obj,
            (<Set__string>other)._cpp_obj,
            op,
        ))

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Set__string()


Set.register(Set__string)

@__cython.auto_pickle(False)
cdef class List__string(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__string):
            self._cpp_obj = (<List__string> items)._cpp_obj
        else:
            self._cpp_obj = List__string._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[string]] c_items):
        __fbthrift_inst = <List__string>List__string.__new__(List__string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__string self):
        cdef shared_ptr[vector[string]] cpp_obj = make_shared[vector[string]](
            deref(self._cpp_obj)
        )
        return List__string._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *:
        cdef shared_ptr[vector[string]] c_inst = make_shared[vector[string]]()
        if items is not None:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
            for item in items:
                if not isinstance(item, str):
                    raise TypeError(f"{item!r} is not of type str")
                deref(c_inst).push_back(item.encode('UTF-8'))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__string._fbthrift_create(
            __list_slice[vector[string]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef string citem
        __list_getitem(self._cpp_obj, index, citem)
        return bytes(citem).decode('UTF-8')

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, str):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef string citem = item.encode('UTF-8')
        cdef std_libcpp.optional[size_t] found = __list_index[vector[string]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef string citem = item.encode('UTF-8')
        return __list_count[vector[string]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__string()


Sequence.register(List__string)

@__cython.auto_pickle(False)
cdef class Map__string_List__string(thrift.py3.types.Map):
    def __init__(self, items=None):
        if isinstance(items, Map__string_List__string):
            self._cpp_obj = (<Map__string_List__string> items)._cpp_obj
        else:
            self._cpp_obj = Map__string_List__string._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,vector[string]]] c_items):
        __fbthrift_inst = <Map__string_List__string>Map__string_List__string.__new__(Map__string_List__string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Map__string_List__string self):
        cdef shared_ptr[cmap[string,vector[string]]] cpp_obj = make_shared[cmap[string,vector[string]]](
            deref(self._cpp_obj)
        )
        return Map__string_List__string._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[cmap[string,vector[string]]] _make_instance(object items) except *:
        cdef shared_ptr[cmap[string,vector[string]]] c_inst = make_shared[cmap[string,vector[string]]]()
        if items is not None:
            for key, item in items.items():
                if not isinstance(key, str):
                    raise TypeError(f"{key!r} is not of type str")
                if item is None:
                    raise TypeError("None is not of type _typing.Sequence[str]")
                if not isinstance(item, List__string):
                    item = List__string(item)

                deref(c_inst)[key.encode('UTF-8')] = deref((<List__string>item)._cpp_obj)
        return c_inst

    cdef _check_key_type(self, key):
        if not self or key is None:
            return
        if isinstance(key, str):
            return key

    def __getitem__(self, key):
        err = KeyError(f'{key}')
        key = self._check_key_type(key)
        if key is None:
            raise err
        cdef string ckey = key.encode('UTF-8')
        if not __map_contains(self._cpp_obj, ckey):
            raise err
        cdef shared_ptr[vector[string]] citem
        __map_getitem(self._cpp_obj, ckey, citem)
        return List__string._fbthrift_create(citem)

    def __iter__(self):
        if not self:
            return
        cdef __map_iter[cmap[string,vector[string]]] itr = __map_iter[cmap[string,vector[string]]](self._cpp_obj)
        cdef string citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextKey(self._cpp_obj, citem)
            yield bytes(citem).decode('UTF-8')

    def __contains__(self, key):
        key = self._check_key_type(key)
        if key is None:
            return False
        cdef string ckey = key.encode('UTF-8')
        return __map_contains(self._cpp_obj, ckey)

    def values(self):
        if not self:
            return
        cdef __map_iter[cmap[string,vector[string]]] itr = __map_iter[cmap[string,vector[string]]](self._cpp_obj)
        cdef shared_ptr[vector[string]] citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextValue(self._cpp_obj, citem)
            yield List__string._fbthrift_create(citem)

    def items(self):
        if not self:
            return
        cdef __map_iter[cmap[string,vector[string]]] itr = __map_iter[cmap[string,vector[string]]](self._cpp_obj)
        cdef string ckey
        cdef shared_ptr[vector[string]] citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextItem(self._cpp_obj, ckey, citem)
            yield (ckey.data().decode('UTF-8'), List__string._fbthrift_create(citem))

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Map__string_List__string()

Mapping.register(Map__string_List__string)

@__cython.auto_pickle(False)
cdef class List__Foo(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__Foo):
            self._cpp_obj = (<List__Foo> items)._cpp_obj
        else:
            self._cpp_obj = List__Foo._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cFoo]] c_items):
        __fbthrift_inst = <List__Foo>List__Foo.__new__(List__Foo)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__Foo self):
        cdef shared_ptr[vector[cFoo]] cpp_obj = make_shared[vector[cFoo]](
            deref(self._cpp_obj)
        )
        return List__Foo._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[cFoo]] _make_instance(object items) except *:
        cdef shared_ptr[vector[cFoo]] c_inst = make_shared[vector[cFoo]]()
        if items is not None:
            for item in items:
                if not isinstance(item, Foo):
                    raise TypeError(f"{item!r} is not of type Foo")
                deref(c_inst).push_back(deref((<Foo>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__Foo._fbthrift_create(
            __list_slice[vector[cFoo]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[cFoo] citem
        __list_getitem(self._cpp_obj, index, citem)
        return Foo._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, Foo):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef cFoo citem = deref((<Foo>item)._cpp_obj)
        cdef std_libcpp.optional[size_t] found = __list_index[vector[cFoo]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef cFoo citem = deref((<Foo>item)._cpp_obj)
        return __list_count[vector[cFoo]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__Foo()


Sequence.register(List__Foo)

SetWithAdapter = Set__string
ListWithElemAdapter = List__string
StructWithAdapter = Bar
UnionWithAdapter = Baz
