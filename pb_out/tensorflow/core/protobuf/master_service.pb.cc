// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/master_service.proto

#include "tensorflow/core/protobuf/master_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace tensorflow {
namespace grpc {
}  // namespace grpc
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fprotobuf_2fmaster_5fservice_2eproto {
void InitDefaults() {
}

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/core/protobuf/master_service.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n-tensorflow/core/protobuf/master_servic"
      "e.proto\022\017tensorflow.grpc\032%tensorflow/cor"
      "e/protobuf/master.proto2\273\006\n\rMasterServic"
      "e\022T\n\rCreateSession\022 .tensorflow.CreateSe"
      "ssionRequest\032!.tensorflow.CreateSessionR"
      "esponse\022T\n\rExtendSession\022 .tensorflow.Ex"
      "tendSessionRequest\032!.tensorflow.ExtendSe"
      "ssionResponse\022Z\n\017PartialRunSetup\022\".tenso"
      "rflow.PartialRunSetupRequest\032#.tensorflo"
      "w.PartialRunSetupResponse\022B\n\007RunStep\022\032.t"
      "ensorflow.RunStepRequest\032\033.tensorflow.Ru"
      "nStepResponse\022Q\n\014CloseSession\022\037.tensorfl"
      "ow.CloseSessionRequest\032 .tensorflow.Clos"
      "eSessionResponse\022N\n\013ListDevices\022\036.tensor"
      "flow.ListDevicesRequest\032\037.tensorflow.Lis"
      "tDevicesResponse\022<\n\005Reset\022\030.tensorflow.R"
      "esetRequest\032\031.tensorflow.ResetResponse\022Q"
      "\n\014MakeCallable\022\037.tensorflow.MakeCallable"
      "Request\032 .tensorflow.MakeCallableRespons"
      "e\022N\n\013RunCallable\022\036.tensorflow.RunCallabl"
      "eRequest\032\037.tensorflow.RunCallableRespons"
      "e\022Z\n\017ReleaseCallable\022\".tensorflow.Releas"
      "eCallableRequest\032#.tensorflow.ReleaseCal"
      "lableResponseB\212\001\n\032org.tensorflow.distrun"
      "timeB\023MasterServiceProtosP\001ZUgithub.com/"
      "tensorflow/tensorflow/tensorflow/go/core"
      "/protobuf/for_core_protos_go_protob\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1082);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/master_service.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fmaster_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2fmaster_5fservice_2eproto
namespace tensorflow {
namespace grpc {

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpc
}  // namespace tensorflow
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
