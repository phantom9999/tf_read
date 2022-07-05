// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/profiler/profiler_service.proto

#include "tensorflow/core/profiler/profiler_service.pb.h"
#include "tensorflow/core/profiler/profiler_service.grpc.pb.h"

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

static const char* ProfilerService_method_names[] = {
  "/tensorflow.ProfilerService/Profile",
  "/tensorflow.ProfilerService/Terminate",
  "/tensorflow.ProfilerService/Monitor",
};

std::unique_ptr< ProfilerService::Stub> ProfilerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ProfilerService::Stub> stub(new ProfilerService::Stub(channel));
  return stub;
}

ProfilerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Profile_(ProfilerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Terminate_(ProfilerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Monitor_(ProfilerService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ProfilerService::Stub::Profile(::grpc::ClientContext* context, const ::tensorflow::ProfileRequest& request, ::tensorflow::ProfileResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Profile_, context, request, response);
}

void ProfilerService::Stub::experimental_async::Profile(::grpc::ClientContext* context, const ::tensorflow::ProfileRequest* request, ::tensorflow::ProfileResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Profile_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ProfileResponse>* ProfilerService::Stub::AsyncProfileRaw(::grpc::ClientContext* context, const ::tensorflow::ProfileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ProfileResponse>::Create(channel_.get(), cq, rpcmethod_Profile_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ProfileResponse>* ProfilerService::Stub::PrepareAsyncProfileRaw(::grpc::ClientContext* context, const ::tensorflow::ProfileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ProfileResponse>::Create(channel_.get(), cq, rpcmethod_Profile_, context, request, false);
}

::grpc::Status ProfilerService::Stub::Terminate(::grpc::ClientContext* context, const ::tensorflow::TerminateRequest& request, ::tensorflow::TerminateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Terminate_, context, request, response);
}

void ProfilerService::Stub::experimental_async::Terminate(::grpc::ClientContext* context, const ::tensorflow::TerminateRequest* request, ::tensorflow::TerminateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Terminate_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::TerminateResponse>* ProfilerService::Stub::AsyncTerminateRaw(::grpc::ClientContext* context, const ::tensorflow::TerminateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::TerminateResponse>::Create(channel_.get(), cq, rpcmethod_Terminate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::TerminateResponse>* ProfilerService::Stub::PrepareAsyncTerminateRaw(::grpc::ClientContext* context, const ::tensorflow::TerminateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::TerminateResponse>::Create(channel_.get(), cq, rpcmethod_Terminate_, context, request, false);
}

::grpc::Status ProfilerService::Stub::Monitor(::grpc::ClientContext* context, const ::tensorflow::MonitorRequest& request, ::tensorflow::MonitorResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Monitor_, context, request, response);
}

void ProfilerService::Stub::experimental_async::Monitor(::grpc::ClientContext* context, const ::tensorflow::MonitorRequest* request, ::tensorflow::MonitorResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Monitor_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::MonitorResponse>* ProfilerService::Stub::AsyncMonitorRaw(::grpc::ClientContext* context, const ::tensorflow::MonitorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::MonitorResponse>::Create(channel_.get(), cq, rpcmethod_Monitor_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::MonitorResponse>* ProfilerService::Stub::PrepareAsyncMonitorRaw(::grpc::ClientContext* context, const ::tensorflow::MonitorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::MonitorResponse>::Create(channel_.get(), cq, rpcmethod_Monitor_, context, request, false);
}

ProfilerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProfilerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProfilerService::Service, ::tensorflow::ProfileRequest, ::tensorflow::ProfileResponse>(
          std::mem_fn(&ProfilerService::Service::Profile), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProfilerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProfilerService::Service, ::tensorflow::TerminateRequest, ::tensorflow::TerminateResponse>(
          std::mem_fn(&ProfilerService::Service::Terminate), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProfilerService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProfilerService::Service, ::tensorflow::MonitorRequest, ::tensorflow::MonitorResponse>(
          std::mem_fn(&ProfilerService::Service::Monitor), this)));
}

ProfilerService::Service::~Service() {
}

::grpc::Status ProfilerService::Service::Profile(::grpc::ServerContext* context, const ::tensorflow::ProfileRequest* request, ::tensorflow::ProfileResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProfilerService::Service::Terminate(::grpc::ServerContext* context, const ::tensorflow::TerminateRequest* request, ::tensorflow::TerminateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProfilerService::Service::Monitor(::grpc::ServerContext* context, const ::tensorflow::MonitorRequest* request, ::tensorflow::MonitorResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tensorflow
