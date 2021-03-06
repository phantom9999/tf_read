// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/profiler/profiler_analysis.proto

#include "tensorflow/core/profiler/profiler_analysis.pb.h"
#include "tensorflow/core/profiler/profiler_analysis.grpc.pb.h"

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

static const char* ProfileAnalysis_method_names[] = {
  "/tensorflow.ProfileAnalysis/NewSession",
  "/tensorflow.ProfileAnalysis/EnumSessions",
  "/tensorflow.ProfileAnalysis/GetSessionToolData",
};

std::unique_ptr< ProfileAnalysis::Stub> ProfileAnalysis::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ProfileAnalysis::Stub> stub(new ProfileAnalysis::Stub(channel));
  return stub;
}

ProfileAnalysis::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_NewSession_(ProfileAnalysis_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EnumSessions_(ProfileAnalysis_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSessionToolData_(ProfileAnalysis_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ProfileAnalysis::Stub::NewSession(::grpc::ClientContext* context, const ::tensorflow::NewProfileSessionRequest& request, ::tensorflow::NewProfileSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_NewSession_, context, request, response);
}

void ProfileAnalysis::Stub::experimental_async::NewSession(::grpc::ClientContext* context, const ::tensorflow::NewProfileSessionRequest* request, ::tensorflow::NewProfileSessionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_NewSession_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::NewProfileSessionResponse>* ProfileAnalysis::Stub::AsyncNewSessionRaw(::grpc::ClientContext* context, const ::tensorflow::NewProfileSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::NewProfileSessionResponse>::Create(channel_.get(), cq, rpcmethod_NewSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::NewProfileSessionResponse>* ProfileAnalysis::Stub::PrepareAsyncNewSessionRaw(::grpc::ClientContext* context, const ::tensorflow::NewProfileSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::NewProfileSessionResponse>::Create(channel_.get(), cq, rpcmethod_NewSession_, context, request, false);
}

::grpc::Status ProfileAnalysis::Stub::EnumSessions(::grpc::ClientContext* context, const ::tensorflow::EnumProfileSessionsAndToolsRequest& request, ::tensorflow::EnumProfileSessionsAndToolsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EnumSessions_, context, request, response);
}

void ProfileAnalysis::Stub::experimental_async::EnumSessions(::grpc::ClientContext* context, const ::tensorflow::EnumProfileSessionsAndToolsRequest* request, ::tensorflow::EnumProfileSessionsAndToolsResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EnumSessions_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::EnumProfileSessionsAndToolsResponse>* ProfileAnalysis::Stub::AsyncEnumSessionsRaw(::grpc::ClientContext* context, const ::tensorflow::EnumProfileSessionsAndToolsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::EnumProfileSessionsAndToolsResponse>::Create(channel_.get(), cq, rpcmethod_EnumSessions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::EnumProfileSessionsAndToolsResponse>* ProfileAnalysis::Stub::PrepareAsyncEnumSessionsRaw(::grpc::ClientContext* context, const ::tensorflow::EnumProfileSessionsAndToolsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::EnumProfileSessionsAndToolsResponse>::Create(channel_.get(), cq, rpcmethod_EnumSessions_, context, request, false);
}

::grpc::Status ProfileAnalysis::Stub::GetSessionToolData(::grpc::ClientContext* context, const ::tensorflow::ProfileSessionDataRequest& request, ::tensorflow::ProfileSessionDataResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSessionToolData_, context, request, response);
}

void ProfileAnalysis::Stub::experimental_async::GetSessionToolData(::grpc::ClientContext* context, const ::tensorflow::ProfileSessionDataRequest* request, ::tensorflow::ProfileSessionDataResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSessionToolData_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ProfileSessionDataResponse>* ProfileAnalysis::Stub::AsyncGetSessionToolDataRaw(::grpc::ClientContext* context, const ::tensorflow::ProfileSessionDataRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ProfileSessionDataResponse>::Create(channel_.get(), cq, rpcmethod_GetSessionToolData_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::ProfileSessionDataResponse>* ProfileAnalysis::Stub::PrepareAsyncGetSessionToolDataRaw(::grpc::ClientContext* context, const ::tensorflow::ProfileSessionDataRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::ProfileSessionDataResponse>::Create(channel_.get(), cq, rpcmethod_GetSessionToolData_, context, request, false);
}

ProfileAnalysis::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProfileAnalysis_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProfileAnalysis::Service, ::tensorflow::NewProfileSessionRequest, ::tensorflow::NewProfileSessionResponse>(
          std::mem_fn(&ProfileAnalysis::Service::NewSession), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProfileAnalysis_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProfileAnalysis::Service, ::tensorflow::EnumProfileSessionsAndToolsRequest, ::tensorflow::EnumProfileSessionsAndToolsResponse>(
          std::mem_fn(&ProfileAnalysis::Service::EnumSessions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ProfileAnalysis_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ProfileAnalysis::Service, ::tensorflow::ProfileSessionDataRequest, ::tensorflow::ProfileSessionDataResponse>(
          std::mem_fn(&ProfileAnalysis::Service::GetSessionToolData), this)));
}

ProfileAnalysis::Service::~Service() {
}

::grpc::Status ProfileAnalysis::Service::NewSession(::grpc::ServerContext* context, const ::tensorflow::NewProfileSessionRequest* request, ::tensorflow::NewProfileSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProfileAnalysis::Service::EnumSessions(::grpc::ServerContext* context, const ::tensorflow::EnumProfileSessionsAndToolsRequest* request, ::tensorflow::EnumProfileSessionsAndToolsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ProfileAnalysis::Service::GetSessionToolData(::grpc::ServerContext* context, const ::tensorflow::ProfileSessionDataRequest* request, ::tensorflow::ProfileSessionDataResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tensorflow

