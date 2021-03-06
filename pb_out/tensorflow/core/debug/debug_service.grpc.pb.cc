// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/debug/debug_service.proto

#include "tensorflow/core/debug/debug_service.pb.h"
#include "tensorflow/core/debug/debug_service.grpc.pb.h"

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

static const char* EventListener_method_names[] = {
  "/tensorflow.EventListener/SendEvents",
  "/tensorflow.EventListener/SendTracebacks",
  "/tensorflow.EventListener/SendSourceFiles",
};

std::unique_ptr< EventListener::Stub> EventListener::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EventListener::Stub> stub(new EventListener::Stub(channel));
  return stub;
}

EventListener::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SendEvents_(EventListener_method_names[0], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_SendTracebacks_(EventListener_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendSourceFiles_(EventListener_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReaderWriter< ::tensorflow::Event, ::tensorflow::EventReply>* EventListener::Stub::SendEventsRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::tensorflow::Event, ::tensorflow::EventReply>::Create(channel_.get(), rpcmethod_SendEvents_, context);
}

::grpc::ClientAsyncReaderWriter< ::tensorflow::Event, ::tensorflow::EventReply>* EventListener::Stub::AsyncSendEventsRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::tensorflow::Event, ::tensorflow::EventReply>::Create(channel_.get(), cq, rpcmethod_SendEvents_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::tensorflow::Event, ::tensorflow::EventReply>* EventListener::Stub::PrepareAsyncSendEventsRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::tensorflow::Event, ::tensorflow::EventReply>::Create(channel_.get(), cq, rpcmethod_SendEvents_, context, false, nullptr);
}

::grpc::Status EventListener::Stub::SendTracebacks(::grpc::ClientContext* context, const ::tensorflow::CallTraceback& request, ::tensorflow::EventReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendTracebacks_, context, request, response);
}

void EventListener::Stub::experimental_async::SendTracebacks(::grpc::ClientContext* context, const ::tensorflow::CallTraceback* request, ::tensorflow::EventReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendTracebacks_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::EventReply>* EventListener::Stub::AsyncSendTracebacksRaw(::grpc::ClientContext* context, const ::tensorflow::CallTraceback& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::EventReply>::Create(channel_.get(), cq, rpcmethod_SendTracebacks_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::EventReply>* EventListener::Stub::PrepareAsyncSendTracebacksRaw(::grpc::ClientContext* context, const ::tensorflow::CallTraceback& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::EventReply>::Create(channel_.get(), cq, rpcmethod_SendTracebacks_, context, request, false);
}

::grpc::Status EventListener::Stub::SendSourceFiles(::grpc::ClientContext* context, const ::tensorflow::DebuggedSourceFiles& request, ::tensorflow::EventReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendSourceFiles_, context, request, response);
}

void EventListener::Stub::experimental_async::SendSourceFiles(::grpc::ClientContext* context, const ::tensorflow::DebuggedSourceFiles* request, ::tensorflow::EventReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendSourceFiles_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::tensorflow::EventReply>* EventListener::Stub::AsyncSendSourceFilesRaw(::grpc::ClientContext* context, const ::tensorflow::DebuggedSourceFiles& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::EventReply>::Create(channel_.get(), cq, rpcmethod_SendSourceFiles_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::EventReply>* EventListener::Stub::PrepareAsyncSendSourceFilesRaw(::grpc::ClientContext* context, const ::tensorflow::DebuggedSourceFiles& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::tensorflow::EventReply>::Create(channel_.get(), cq, rpcmethod_SendSourceFiles_, context, request, false);
}

EventListener::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EventListener_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< EventListener::Service, ::tensorflow::Event, ::tensorflow::EventReply>(
          std::mem_fn(&EventListener::Service::SendEvents), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EventListener_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EventListener::Service, ::tensorflow::CallTraceback, ::tensorflow::EventReply>(
          std::mem_fn(&EventListener::Service::SendTracebacks), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EventListener_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EventListener::Service, ::tensorflow::DebuggedSourceFiles, ::tensorflow::EventReply>(
          std::mem_fn(&EventListener::Service::SendSourceFiles), this)));
}

EventListener::Service::~Service() {
}

::grpc::Status EventListener::Service::SendEvents(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::tensorflow::EventReply, ::tensorflow::Event>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EventListener::Service::SendTracebacks(::grpc::ServerContext* context, const ::tensorflow::CallTraceback* request, ::tensorflow::EventReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EventListener::Service::SendSourceFiles(::grpc::ServerContext* context, const ::tensorflow::DebuggedSourceFiles* request, ::tensorflow::EventReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tensorflow

