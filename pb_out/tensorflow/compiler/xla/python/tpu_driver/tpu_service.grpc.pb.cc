// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/compiler/xla/python/tpu_driver/tpu_service.proto

#include "tensorflow/compiler/xla/python/tpu_driver/tpu_service.pb.h"
#include "tensorflow/compiler/xla/python/tpu_driver/tpu_service.grpc.pb.h"

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
namespace tpu_driver {

static const char* CloudTpuDriver_method_names[] = {
  "/tpu_driver.CloudTpuDriver/Open",
  "/tpu_driver.CloudTpuDriver/Close",
  "/tpu_driver.CloudTpuDriver/Reset",
  "/tpu_driver.CloudTpuDriver/QuerySystemInfo",
  "/tpu_driver.CloudTpuDriver/StreamExecute",
};

std::unique_ptr< CloudTpuDriver::Stub> CloudTpuDriver::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CloudTpuDriver::Stub> stub(new CloudTpuDriver::Stub(channel));
  return stub;
}

CloudTpuDriver::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Open_(CloudTpuDriver_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Close_(CloudTpuDriver_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Reset_(CloudTpuDriver_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_QuerySystemInfo_(CloudTpuDriver_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamExecute_(CloudTpuDriver_method_names[4], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status CloudTpuDriver::Stub::Open(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::tpu_driver::OpenResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Open_, context, request, response);
}

void CloudTpuDriver::Stub::experimental_async::Open(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Open_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>* CloudTpuDriver::Stub::AsyncOpenRaw(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::OpenResponse>::Create(channel_.get(), cq, rpcmethod_Open_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>* CloudTpuDriver::Stub::PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::OpenResponse>::Create(channel_.get(), cq, rpcmethod_Open_, context, request, false);
}

::grpc::Status CloudTpuDriver::Stub::Close(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::tpu_driver::CloseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Close_, context, request, response);
}

void CloudTpuDriver::Stub::experimental_async::Close(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Close_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>* CloudTpuDriver::Stub::AsyncCloseRaw(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::CloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>* CloudTpuDriver::Stub::PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::CloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, false);
}

::grpc::Status CloudTpuDriver::Stub::Reset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::tpu_driver::ResetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Reset_, context, request, response);
}

void CloudTpuDriver::Stub::experimental_async::Reset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Reset_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>* CloudTpuDriver::Stub::AsyncResetRaw(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::ResetResponse>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>* CloudTpuDriver::Stub::PrepareAsyncResetRaw(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::ResetResponse>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request, false);
}

::grpc::Status CloudTpuDriver::Stub::QuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::tpu_driver::QuerySystemInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_QuerySystemInfo_, context, request, response);
}

void CloudTpuDriver::Stub::experimental_async::QuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_QuerySystemInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>* CloudTpuDriver::Stub::AsyncQuerySystemInfoRaw(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::QuerySystemInfoResponse>::Create(channel_.get(), cq, rpcmethod_QuerySystemInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>* CloudTpuDriver::Stub::PrepareAsyncQuerySystemInfoRaw(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tpu_driver::QuerySystemInfoResponse>::Create(channel_.get(), cq, rpcmethod_QuerySystemInfo_, context, request, false);
}

::grpc::ClientReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* CloudTpuDriver::Stub::StreamExecuteRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>::Create(channel_.get(), rpcmethod_StreamExecute_, context);
}

::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* CloudTpuDriver::Stub::AsyncStreamExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>::Create(channel_.get(), cq, rpcmethod_StreamExecute_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* CloudTpuDriver::Stub::PrepareAsyncStreamExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>::Create(channel_.get(), cq, rpcmethod_StreamExecute_, context, false, nullptr);
}

CloudTpuDriver::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudTpuDriver_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudTpuDriver::Service, ::tpu_driver::OpenRequest, ::tpu_driver::OpenResponse>(
          std::mem_fn(&CloudTpuDriver::Service::Open), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudTpuDriver_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudTpuDriver::Service, ::tpu_driver::CloseRequest, ::tpu_driver::CloseResponse>(
          std::mem_fn(&CloudTpuDriver::Service::Close), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudTpuDriver_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudTpuDriver::Service, ::tpu_driver::ResetRequest, ::tpu_driver::ResetResponse>(
          std::mem_fn(&CloudTpuDriver::Service::Reset), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudTpuDriver_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudTpuDriver::Service, ::tpu_driver::QuerySystemInfoRequest, ::tpu_driver::QuerySystemInfoResponse>(
          std::mem_fn(&CloudTpuDriver::Service::QuerySystemInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudTpuDriver_method_names[4],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< CloudTpuDriver::Service, ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>(
          std::mem_fn(&CloudTpuDriver::Service::StreamExecute), this)));
}

CloudTpuDriver::Service::~Service() {
}

::grpc::Status CloudTpuDriver::Service::Open(::grpc::ServerContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudTpuDriver::Service::Close(::grpc::ServerContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudTpuDriver::Service::Reset(::grpc::ServerContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudTpuDriver::Service::QuerySystemInfo(::grpc::ServerContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudTpuDriver::Service::StreamExecute(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::tpu_driver::StreamResponse, ::tpu_driver::StreamRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tpu_driver
