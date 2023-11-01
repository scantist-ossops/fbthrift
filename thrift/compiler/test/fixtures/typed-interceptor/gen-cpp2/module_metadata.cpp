/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/typed-interceptor/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/typed-interceptor/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Request>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.Request", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Request = res.first->second;
  module_Request.name() = "module.Request";
  module_Request.is_union() = false;
  static const auto* const
  module_Request_fields = new std::array<EncodedThriftField, 1>{{
    {1, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_Request_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_Request.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_echo(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "echo";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getRandomData_req__1;
  module_MyService_getRandomData_req__1.id() = -1;
  module_MyService_getRandomData_req__1.name() = "req";
  module_MyService_getRandomData_req__1.is_optional() = false;
  auto module_MyService_getRandomData_req__1_type = std::make_unique<Struct<::cpp2::Request>>("module.Request");
  module_MyService_getRandomData_req__1_type->writeAndGenType(*module_MyService_getRandomData_req__1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_getRandomData_req__1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getId(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "getId";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getId_field__1;
  module_MyService_getId_field__1.id() = -1;
  module_MyService_getId_field__1.name() = "field";
  module_MyService_getId_field__1.is_optional() = false;
  auto module_MyService_getId_field__1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_MyService_getId_field__1_type->writeAndGenType(*module_MyService_getId_field__1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_getId_field__1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping_eb(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "ping_eb";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_ping_eb_req__1;
  module_MyService_ping_eb_req__1.id() = -1;
  module_MyService_ping_eb_req__1.name() = "req";
  module_MyService_ping_eb_req__1.is_optional() = false;
  auto module_MyService_ping_eb_req__1_type = std::make_unique<Struct<::cpp2::Request>>("module.Request");
  module_MyService_ping_eb_req__1_type->writeAndGenType(*module_MyService_ping_eb_req__1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_ping_eb_req__1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::genRecurse(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_echo,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getId,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping_eb,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  module_MyService.structured_annotations()->push_back(*cvStruct("cpp.GenerateTypedInterceptor", {}).cv_struct_ref());
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyService", std::move(module_MyService));
  context.service_name() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
