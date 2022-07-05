// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/compiler/xla/pjrt/distributed/protocol.proto

#include "tensorflow/compiler/xla/pjrt/distributed/protocol.pb.h"
#include "tensorflow/compiler/xla/pjrt/distributed/protocol.grpc.pb.h"

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
namespace xla {

static const char* DistributedRuntimeService_method_names[] = {
  "/xla.DistributedRuntimeService/Connect",
  "/xla.DistributedRuntimeService/EnumerateDevices",
  "/xla.DistributedRuntimeService/Heartbeat",
  "/xla.DistributedRuntimeService/Shutdown",
  "/xla.DistributedRuntimeService/KeyValueGet",
  "/xla.DistributedRuntimeService/KeyValueSet",
};

std::unique_ptr< DistributedRuntimeService::Stub> DistributedRuntimeService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DistributedRuntimeService::Stub> stub(new DistributedRuntimeService::Stub(channel));
  return stub;
}

DistributedRuntimeService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Connect_(DistributedRuntimeService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EnumerateDevices_(DistributedRuntimeService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Heartbeat_(DistributedRuntimeService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Shutdown_(DistributedRuntimeService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_KeyValueGet_(DistributedRuntimeService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_KeyValueSet_(DistributedRuntimeService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DistributedRuntimeService::Stub::Connect(::grpc::ClientContext* context, const ::xla::ConnectRequest& request, ::xla::ConnectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Connect_, context, request, response);
}

void DistributedRuntimeService::Stub::experimental_async::Connect(::grpc::ClientContext* context, const ::xla::ConnectRequest* request, ::xla::ConnectResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Connect_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::xla::ConnectResponse>* DistributedRuntimeService::Stub::AsyncConnectRaw(::grpc::ClientContext* context, const ::xla::ConnectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::ConnectResponse>::Create(channel_.get(), cq, rpcmethod_Connect_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::xla::ConnectResponse>* DistributedRuntimeService::Stub::PrepareAsyncConnectRaw(::grpc::ClientContext* context, const ::xla::ConnectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::ConnectResponse>::Create(channel_.get(), cq, rpcmethod_Connect_, context, request, false);
}

::grpc::Status DistributedRuntimeService::Stub::EnumerateDevices(::grpc::ClientContext* context, const ::xla::EnumerateDevicesRequest& request, ::xla::EnumerateDevicesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EnumerateDevices_, context, request, response);
}

void DistributedRuntimeService::Stub::experimental_async::EnumerateDevices(::grpc::ClientContext* context, const ::xla::EnumerateDevicesRequest* request, ::xla::EnumerateDevicesResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EnumerateDevices_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::xla::EnumerateDevicesResponse>* DistributedRuntimeService::Stub::AsyncEnumerateDevicesRaw(::grpc::ClientContext* context, const ::xla::EnumerateDevicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::EnumerateDevicesResponse>::Create(channel_.get(), cq, rpcmethod_EnumerateDevices_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::xla::EnumerateDevicesResponse>* DistributedRuntimeService::Stub::PrepareAsyncEnumerateDevicesRaw(::grpc::ClientContext* context, const ::xla::EnumerateDevicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::EnumerateDevicesResponse>::Create(channel_.get(), cq, rpcmethod_EnumerateDevices_, context, request, false);
}

::grpc::Status DistributedRuntimeService::Stub::Heartbeat(::grpc::ClientContext* context, const ::xla::HeartbeatRequest& request, ::xla::HeartbeatResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Heartbeat_, context, request, response);
}

void DistributedRuntimeService::Stub::experimental_async::Heartbeat(::grpc::ClientContext* context, const ::xla::HeartbeatRequest* request, ::xla::HeartbeatResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::xla::HeartbeatResponse>* DistributedRuntimeService::Stub::AsyncHeartbeatRaw(::grpc::ClientContext* context, const ::xla::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::xla::HeartbeatResponse>* DistributedRuntimeService::Stub::PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, const ::xla::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, request, false);
}

::grpc::Status DistributedRuntimeService::Stub::Shutdown(::grpc::ClientContext* context, const ::xla::ShutdownRequest& request, ::xla::ShutdownResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Shutdown_, context, request, response);
}

void DistributedRuntimeService::Stub::experimental_async::Shutdown(::grpc::ClientContext* context, const ::xla::ShutdownRequest* request, ::xla::ShutdownResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Shutdown_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::xla::ShutdownResponse>* DistributedRuntimeService::Stub::AsyncShutdownRaw(::grpc::ClientContext* context, const ::xla::ShutdownRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::ShutdownResponse>::Create(channel_.get(), cq, rpcmethod_Shutdown_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::xla::ShutdownResponse>* DistributedRuntimeService::Stub::PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::xla::ShutdownRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::ShutdownResponse>::Create(channel_.get(), cq, rpcmethod_Shutdown_, context, request, false);
}

::grpc::Status DistributedRuntimeService::Stub::KeyValueGet(::grpc::ClientContext* context, const ::xla::KeyValueGetRequest& request, ::xla::KeyValueGetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_KeyValueGet_, context, request, response);
}

void DistributedRuntimeService::Stub::experimental_async::KeyValueGet(::grpc::ClientContext* context, const ::xla::KeyValueGetRequest* request, ::xla::KeyValueGetResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_KeyValueGet_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::xla::KeyValueGetResponse>* DistributedRuntimeService::Stub::AsyncKeyValueGetRaw(::grpc::ClientContext* context, const ::xla::KeyValueGetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::KeyValueGetResponse>::Create(channel_.get(), cq, rpcmethod_KeyValueGet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::xla::KeyValueGetResponse>* DistributedRuntimeService::Stub::PrepareAsyncKeyValueGetRaw(::grpc::ClientContext* context, const ::xla::KeyValueGetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::KeyValueGetResponse>::Create(channel_.get(), cq, rpcmethod_KeyValueGet_, context, request, false);
}

::grpc::Status DistributedRuntimeService::Stub::KeyValueSet(::grpc::ClientContext* context, const ::xla::KeyValueSetRequest& request, ::xla::KeyValueSetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_KeyValueSet_, context, request, response);
}

void DistributedRuntimeService::Stub::experimental_async::KeyValueSet(::grpc::ClientContext* context, const ::xla::KeyValueSetRequest* request, ::xla::KeyValueSetResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_KeyValueSet_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::xla::KeyValueSetResponse>* DistributedRuntimeService::Stub::AsyncKeyValueSetRaw(::grpc::ClientContext* context, const ::xla::KeyValueSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::KeyValueSetResponse>::Create(channel_.get(), cq, rpcmethod_KeyValueSet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::xla::KeyValueSetResponse>* DistributedRuntimeService::Stub::PrepareAsyncKeyValueSetRaw(::grpc::ClientContext* context, const ::xla::KeyValueSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::xla::KeyValueSetResponse>::Create(channel_.get(), cq, rpcmethod_KeyValueSet_, context, request, false);
}

DistributedRuntimeService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistributedRuntimeService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DistributedRuntimeService::Service, ::xla::ConnectRequest, ::xla::ConnectResponse>(
          std::mem_fn(&DistributedRuntimeService::Service::Connect), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistributedRuntimeService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DistributedRuntimeService::Service, ::xla::EnumerateDevicesRequest, ::xla::EnumerateDevicesResponse>(
          std::mem_fn(&DistributedRuntimeService::Service::EnumerateDevices), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistributedRuntimeService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DistributedRuntimeService::Service, ::xla::HeartbeatRequest, ::xla::HeartbeatResponse>(
          std::mem_fn(&DistributedRuntimeService::Service::Heartbeat), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistributedRuntimeService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DistributedRuntimeService::Service, ::xla::ShutdownRequest, ::xla::ShutdownResponse>(
          std::mem_fn(&DistributedRuntimeService::Service::Shutdown), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistributedRuntimeService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DistributedRuntimeService::Service, ::xla::KeyValueGetRequest, ::xla::KeyValueGetResponse>(
          std::mem_fn(&DistributedRuntimeService::Service::KeyValueGet), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistributedRuntimeService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DistributedRuntimeService::Service, ::xla::KeyValueSetRequest, ::xla::KeyValueSetResponse>(
          std::mem_fn(&DistributedRuntimeService::Service::KeyValueSet), this)));
}

DistributedRuntimeService::Service::~Service() {
}

::grpc::Status DistributedRuntimeService::Service::Connect(::grpc::ServerContext* context, const ::xla::ConnectRequest* request, ::xla::ConnectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DistributedRuntimeService::Service::EnumerateDevices(::grpc::ServerContext* context, const ::xla::EnumerateDevicesRequest* request, ::xla::EnumerateDevicesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DistributedRuntimeService::Service::Heartbeat(::grpc::ServerContext* context, const ::xla::HeartbeatRequest* request, ::xla::HeartbeatResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DistributedRuntimeService::Service::Shutdown(::grpc::ServerContext* context, const ::xla::ShutdownRequest* request, ::xla::ShutdownResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DistributedRuntimeService::Service::KeyValueGet(::grpc::ServerContext* context, const ::xla::KeyValueGetRequest* request, ::xla::KeyValueGetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DistributedRuntimeService::Service::KeyValueSet(::grpc::ServerContext* context, const ::xla::KeyValueSetRequest* request, ::xla::KeyValueSetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace xla
