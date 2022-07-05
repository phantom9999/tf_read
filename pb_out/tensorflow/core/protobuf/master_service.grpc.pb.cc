// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/protobuf/master_service.proto

#include "tensorflow/core/protobuf/master_service.pb.h"
#include "tensorflow/core/protobuf/master_service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace tensorflow {
namespace grpc {

static const char* MasterService_method_names[] = {
  "/tensorflow.grpc.MasterService/CreateSession",
  "/tensorflow.grpc.MasterService/ExtendSession",
  "/tensorflow.grpc.MasterService/PartialRunSetup",
  "/tensorflow.grpc.MasterService/RunStep",
  "/tensorflow.grpc.MasterService/CloseSession",
  "/tensorflow.grpc.MasterService/ListDevices",
  "/tensorflow.grpc.MasterService/Reset",
  "/tensorflow.grpc.MasterService/MakeCallable",
  "/tensorflow.grpc.MasterService/RunCallable",
  "/tensorflow.grpc.MasterService/ReleaseCallable",
};

std::unique_ptr< MasterService::Stub> MasterService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MasterService::Stub> stub(new MasterService::Stub(channel));
  return stub;
}

MasterService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateSession_(MasterService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ExtendSession_(MasterService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PartialRunSetup_(MasterService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RunStep_(MasterService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CloseSession_(MasterService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListDevices_(MasterService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Reset_(MasterService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MakeCallable_(MasterService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RunCallable_(MasterService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReleaseCallable_(MasterService_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MasterService::Stub::CreateSession(::grpc::ClientContext* context, const ::tensorflow::CreateSessionRequest& request, ::tensorflow::CreateSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateSession_, context, request, response);
}

void MasterService::Stub::experimental_async::CreateSession(::grpc::ClientContext* context, const ::tensorflow::CreateSessionRequest* request, ::tensorflow::CreateSessionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateSession_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::CreateSessionResponse>* MasterService::Stub::AsyncCreateSessionRaw(::grpc::ClientContext* context, const ::tensorflow::CreateSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::CreateSessionResponse>::Create(channel_.get(), cq, rpcmethod_CreateSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::CreateSessionResponse>* MasterService::Stub::PrepareAsyncCreateSessionRaw(::grpc::ClientContext* context, const ::tensorflow::CreateSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::CreateSessionResponse>::Create(channel_.get(), cq, rpcmethod_CreateSession_, context, request, false);
}

::grpc::Status MasterService::Stub::ExtendSession(::grpc::ClientContext* context, const ::tensorflow::ExtendSessionRequest& request, ::tensorflow::ExtendSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ExtendSession_, context, request, response);
}

void MasterService::Stub::experimental_async::ExtendSession(::grpc::ClientContext* context, const ::tensorflow::ExtendSessionRequest* request, ::tensorflow::ExtendSessionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ExtendSession_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ExtendSessionResponse>* MasterService::Stub::AsyncExtendSessionRaw(::grpc::ClientContext* context, const ::tensorflow::ExtendSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ExtendSessionResponse>::Create(channel_.get(), cq, rpcmethod_ExtendSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ExtendSessionResponse>* MasterService::Stub::PrepareAsyncExtendSessionRaw(::grpc::ClientContext* context, const ::tensorflow::ExtendSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ExtendSessionResponse>::Create(channel_.get(), cq, rpcmethod_ExtendSession_, context, request, false);
}

::grpc::Status MasterService::Stub::PartialRunSetup(::grpc::ClientContext* context, const ::tensorflow::PartialRunSetupRequest& request, ::tensorflow::PartialRunSetupResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PartialRunSetup_, context, request, response);
}

void MasterService::Stub::experimental_async::PartialRunSetup(::grpc::ClientContext* context, const ::tensorflow::PartialRunSetupRequest* request, ::tensorflow::PartialRunSetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PartialRunSetup_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::PartialRunSetupResponse>* MasterService::Stub::AsyncPartialRunSetupRaw(::grpc::ClientContext* context, const ::tensorflow::PartialRunSetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::PartialRunSetupResponse>::Create(channel_.get(), cq, rpcmethod_PartialRunSetup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::PartialRunSetupResponse>* MasterService::Stub::PrepareAsyncPartialRunSetupRaw(::grpc::ClientContext* context, const ::tensorflow::PartialRunSetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::PartialRunSetupResponse>::Create(channel_.get(), cq, rpcmethod_PartialRunSetup_, context, request, false);
}

::grpc::Status MasterService::Stub::RunStep(::grpc::ClientContext* context, const ::tensorflow::RunStepRequest& request, ::tensorflow::RunStepResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RunStep_, context, request, response);
}

void MasterService::Stub::experimental_async::RunStep(::grpc::ClientContext* context, const ::tensorflow::RunStepRequest* request, ::tensorflow::RunStepResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RunStep_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::RunStepResponse>* MasterService::Stub::AsyncRunStepRaw(::grpc::ClientContext* context, const ::tensorflow::RunStepRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::RunStepResponse>::Create(channel_.get(), cq, rpcmethod_RunStep_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::RunStepResponse>* MasterService::Stub::PrepareAsyncRunStepRaw(::grpc::ClientContext* context, const ::tensorflow::RunStepRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::RunStepResponse>::Create(channel_.get(), cq, rpcmethod_RunStep_, context, request, false);
}

::grpc::Status MasterService::Stub::CloseSession(::grpc::ClientContext* context, const ::tensorflow::CloseSessionRequest& request, ::tensorflow::CloseSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CloseSession_, context, request, response);
}

void MasterService::Stub::experimental_async::CloseSession(::grpc::ClientContext* context, const ::tensorflow::CloseSessionRequest* request, ::tensorflow::CloseSessionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CloseSession_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::CloseSessionResponse>* MasterService::Stub::AsyncCloseSessionRaw(::grpc::ClientContext* context, const ::tensorflow::CloseSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::CloseSessionResponse>::Create(channel_.get(), cq, rpcmethod_CloseSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::CloseSessionResponse>* MasterService::Stub::PrepareAsyncCloseSessionRaw(::grpc::ClientContext* context, const ::tensorflow::CloseSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::CloseSessionResponse>::Create(channel_.get(), cq, rpcmethod_CloseSession_, context, request, false);
}

::grpc::Status MasterService::Stub::ListDevices(::grpc::ClientContext* context, const ::tensorflow::ListDevicesRequest& request, ::tensorflow::ListDevicesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListDevices_, context, request, response);
}

void MasterService::Stub::experimental_async::ListDevices(::grpc::ClientContext* context, const ::tensorflow::ListDevicesRequest* request, ::tensorflow::ListDevicesResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListDevices_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ListDevicesResponse>* MasterService::Stub::AsyncListDevicesRaw(::grpc::ClientContext* context, const ::tensorflow::ListDevicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ListDevicesResponse>::Create(channel_.get(), cq, rpcmethod_ListDevices_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ListDevicesResponse>* MasterService::Stub::PrepareAsyncListDevicesRaw(::grpc::ClientContext* context, const ::tensorflow::ListDevicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ListDevicesResponse>::Create(channel_.get(), cq, rpcmethod_ListDevices_, context, request, false);
}

::grpc::Status MasterService::Stub::Reset(::grpc::ClientContext* context, const ::tensorflow::ResetRequest& request, ::tensorflow::ResetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Reset_, context, request, response);
}

void MasterService::Stub::experimental_async::Reset(::grpc::ClientContext* context, const ::tensorflow::ResetRequest* request, ::tensorflow::ResetResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Reset_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ResetResponse>* MasterService::Stub::AsyncResetRaw(::grpc::ClientContext* context, const ::tensorflow::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ResetResponse>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ResetResponse>* MasterService::Stub::PrepareAsyncResetRaw(::grpc::ClientContext* context, const ::tensorflow::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ResetResponse>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request, false);
}

::grpc::Status MasterService::Stub::MakeCallable(::grpc::ClientContext* context, const ::tensorflow::MakeCallableRequest& request, ::tensorflow::MakeCallableResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MakeCallable_, context, request, response);
}

void MasterService::Stub::experimental_async::MakeCallable(::grpc::ClientContext* context, const ::tensorflow::MakeCallableRequest* request, ::tensorflow::MakeCallableResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_MakeCallable_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::MakeCallableResponse>* MasterService::Stub::AsyncMakeCallableRaw(::grpc::ClientContext* context, const ::tensorflow::MakeCallableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::MakeCallableResponse>::Create(channel_.get(), cq, rpcmethod_MakeCallable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::MakeCallableResponse>* MasterService::Stub::PrepareAsyncMakeCallableRaw(::grpc::ClientContext* context, const ::tensorflow::MakeCallableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::MakeCallableResponse>::Create(channel_.get(), cq, rpcmethod_MakeCallable_, context, request, false);
}

::grpc::Status MasterService::Stub::RunCallable(::grpc::ClientContext* context, const ::tensorflow::RunCallableRequest& request, ::tensorflow::RunCallableResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RunCallable_, context, request, response);
}

void MasterService::Stub::experimental_async::RunCallable(::grpc::ClientContext* context, const ::tensorflow::RunCallableRequest* request, ::tensorflow::RunCallableResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RunCallable_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::RunCallableResponse>* MasterService::Stub::AsyncRunCallableRaw(::grpc::ClientContext* context, const ::tensorflow::RunCallableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::RunCallableResponse>::Create(channel_.get(), cq, rpcmethod_RunCallable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::RunCallableResponse>* MasterService::Stub::PrepareAsyncRunCallableRaw(::grpc::ClientContext* context, const ::tensorflow::RunCallableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::RunCallableResponse>::Create(channel_.get(), cq, rpcmethod_RunCallable_, context, request, false);
}

::grpc::Status MasterService::Stub::ReleaseCallable(::grpc::ClientContext* context, const ::tensorflow::ReleaseCallableRequest& request, ::tensorflow::ReleaseCallableResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ReleaseCallable_, context, request, response);
}

void MasterService::Stub::experimental_async::ReleaseCallable(::grpc::ClientContext* context, const ::tensorflow::ReleaseCallableRequest* request, ::tensorflow::ReleaseCallableResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ReleaseCallable_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ReleaseCallableResponse>* MasterService::Stub::AsyncReleaseCallableRaw(::grpc::ClientContext* context, const ::tensorflow::ReleaseCallableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ReleaseCallableResponse>::Create(channel_.get(), cq, rpcmethod_ReleaseCallable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ReleaseCallableResponse>* MasterService::Stub::PrepareAsyncReleaseCallableRaw(::grpc::ClientContext* context, const ::tensorflow::ReleaseCallableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ReleaseCallableResponse>::Create(channel_.get(), cq, rpcmethod_ReleaseCallable_, context, request, false);
}

MasterService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::CreateSessionRequest, ::tensorflow::CreateSessionResponse>(
          std::mem_fn(&MasterService::Service::CreateSession), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::ExtendSessionRequest, ::tensorflow::ExtendSessionResponse>(
          std::mem_fn(&MasterService::Service::ExtendSession), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::PartialRunSetupRequest, ::tensorflow::PartialRunSetupResponse>(
          std::mem_fn(&MasterService::Service::PartialRunSetup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::RunStepRequest, ::tensorflow::RunStepResponse>(
          std::mem_fn(&MasterService::Service::RunStep), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::CloseSessionRequest, ::tensorflow::CloseSessionResponse>(
          std::mem_fn(&MasterService::Service::CloseSession), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::ListDevicesRequest, ::tensorflow::ListDevicesResponse>(
          std::mem_fn(&MasterService::Service::ListDevices), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::ResetRequest, ::tensorflow::ResetResponse>(
          std::mem_fn(&MasterService::Service::Reset), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::MakeCallableRequest, ::tensorflow::MakeCallableResponse>(
          std::mem_fn(&MasterService::Service::MakeCallable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::RunCallableRequest, ::tensorflow::RunCallableResponse>(
          std::mem_fn(&MasterService::Service::RunCallable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MasterService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MasterService::Service, ::tensorflow::ReleaseCallableRequest, ::tensorflow::ReleaseCallableResponse>(
          std::mem_fn(&MasterService::Service::ReleaseCallable), this)));
}

MasterService::Service::~Service() {
}

::grpc::Status MasterService::Service::CreateSession(::grpc::ServerContext* context, const ::tensorflow::CreateSessionRequest* request, ::tensorflow::CreateSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::ExtendSession(::grpc::ServerContext* context, const ::tensorflow::ExtendSessionRequest* request, ::tensorflow::ExtendSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::PartialRunSetup(::grpc::ServerContext* context, const ::tensorflow::PartialRunSetupRequest* request, ::tensorflow::PartialRunSetupResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::RunStep(::grpc::ServerContext* context, const ::tensorflow::RunStepRequest* request, ::tensorflow::RunStepResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::CloseSession(::grpc::ServerContext* context, const ::tensorflow::CloseSessionRequest* request, ::tensorflow::CloseSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::ListDevices(::grpc::ServerContext* context, const ::tensorflow::ListDevicesRequest* request, ::tensorflow::ListDevicesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::Reset(::grpc::ServerContext* context, const ::tensorflow::ResetRequest* request, ::tensorflow::ResetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::MakeCallable(::grpc::ServerContext* context, const ::tensorflow::MakeCallableRequest* request, ::tensorflow::MakeCallableResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::RunCallable(::grpc::ServerContext* context, const ::tensorflow::RunCallableRequest* request, ::tensorflow::RunCallableResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MasterService::Service::ReleaseCallable(::grpc::ServerContext* context, const ::tensorflow::ReleaseCallableRequest* request, ::tensorflow::ReleaseCallableResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tensorflow
}  // namespace grpc

