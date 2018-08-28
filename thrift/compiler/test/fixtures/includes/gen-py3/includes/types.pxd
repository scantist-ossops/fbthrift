#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport bstring, move
from folly.optional cimport cOptional
cimport transitive.types as _transitive_types





cdef extern from "gen-cpp2/includes_types_custom_protocol.h" namespace "cpp2":
    # Forward Declaration
    cdef cppclass cIncluded "cpp2::Included"

cdef extern from "gen-cpp2/includes_types.h" namespace "cpp2":
    cdef cppclass cIncluded__isset "cpp2::Included::__isset":
        bint MyIntField
        bint MyTransitiveField

    cdef cppclass cIncluded "cpp2::Included":
        cIncluded() except +
        cIncluded(const cIncluded&) except +
        bint operator==(cIncluded&)
        int64_t MyIntField
        _transitive_types.cFoo MyTransitiveField
        cIncluded__isset __isset

    cdef shared_ptr[_transitive_types.cFoo] reference_shared_ptr_MyTransitiveField "thrift::py3::reference_shared_ptr<cpp2::Foo>"(shared_ptr[cIncluded]&, _transitive_types.cFoo&)

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cIncluded] move(unique_ptr[cIncluded])
    cdef shared_ptr[cIncluded] move_shared "std::move"(shared_ptr[cIncluded])
    cdef unique_ptr[cIncluded] move_unique "std::move"(unique_ptr[cIncluded])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cIncluded] const_pointer_cast "std::const_pointer_cast<const cpp2::Included>"(shared_ptr[cIncluded])

# Forward Definition of the cython struct
cdef class Included(thrift.py3.types.Struct)


cdef class Included(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cIncluded] _cpp_obj
    cdef _transitive_types.Foo __MyTransitiveField

    @staticmethod
    cdef unique_ptr[cIncluded] _make_instance(
        cIncluded* base_instance,
        object MyIntField,
        object MyTransitiveField
    ) except *

    @staticmethod
    cdef create(shared_ptr[cIncluded])




cdef extern from "gen-cpp2/includes_constants.h" namespace "cpp2":
    cdef cIncluded cExampleIncluded "cpp2::includes_constants::ExampleIncluded"()
    cdef int64_t cIncludedConstant "cpp2::includes_constants::IncludedConstant"
