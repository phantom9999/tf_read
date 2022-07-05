// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/compiler/xla/python/tpu_driver/tpu_service.proto
// Original file comments:
// Copyright 2019 The TensorFlow Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ==============================================================================
//
#ifndef GRPC_tensorflow_2fcompiler_2fxla_2fpython_2ftpu_5fdriver_2ftpu_5fservice_2eproto__INCLUDED
#define GRPC_tensorflow_2fcompiler_2fxla_2fpython_2ftpu_5fdriver_2ftpu_5fservice_2eproto__INCLUDED

#include "tensorflow/compiler/xla/python/tpu_driver/tpu_service.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace tpu_driver {

class CloudTpuDriver final {
 public:
  static constexpr char const* service_full_name() {
    return "tpu_driver.CloudTpuDriver";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Open the driver. If the driver is already open, return an error.
    virtual ::grpc::Status Open(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::tpu_driver::OpenResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::OpenResponse>> AsyncOpen(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::OpenResponse>>(AsyncOpenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::OpenResponse>> PrepareAsyncOpen(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::OpenResponse>>(PrepareAsyncOpenRaw(context, request, cq));
    }
    // Close the driver. Any outstanding requests will be terminated.
    virtual ::grpc::Status Close(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::tpu_driver::CloseResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::CloseResponse>> AsyncClose(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::CloseResponse>>(AsyncCloseRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::CloseResponse>> PrepareAsyncClose(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::CloseResponse>>(PrepareAsyncCloseRaw(context, request, cq));
    }
    // Reset the driver. All connected clients will be disconnected.
    virtual ::grpc::Status Reset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::tpu_driver::ResetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::ResetResponse>> AsyncReset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::ResetResponse>>(AsyncResetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::ResetResponse>> PrepareAsyncReset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::ResetResponse>>(PrepareAsyncResetRaw(context, request, cq));
    }
    // Query the driver for current system performance information.
    virtual ::grpc::Status QuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::tpu_driver::QuerySystemInfoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::QuerySystemInfoResponse>> AsyncQuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::QuerySystemInfoResponse>>(AsyncQuerySystemInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::QuerySystemInfoResponse>> PrepareAsyncQuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::QuerySystemInfoResponse>>(PrepareAsyncQuerySystemInfoRaw(context, request, cq));
    }
    // Enqueue an operation to be executed when its dependencies are satisfied.
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>> StreamExecute(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>>(StreamExecuteRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>> AsyncStreamExecute(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>>(AsyncStreamExecuteRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>> PrepareAsyncStreamExecute(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>>(PrepareAsyncStreamExecuteRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Open the driver. If the driver is already open, return an error.
      virtual void Open(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Close the driver. Any outstanding requests will be terminated.
      virtual void Close(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Reset the driver. All connected clients will be disconnected.
      virtual void Reset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Query the driver for current system performance information.
      virtual void QuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Enqueue an operation to be executed when its dependencies are satisfied.
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::OpenResponse>* AsyncOpenRaw(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::OpenResponse>* PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::CloseResponse>* AsyncCloseRaw(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::CloseResponse>* PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::ResetResponse>* AsyncResetRaw(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::ResetResponse>* PrepareAsyncResetRaw(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::QuerySystemInfoResponse>* AsyncQuerySystemInfoRaw(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tpu_driver::QuerySystemInfoResponse>* PrepareAsyncQuerySystemInfoRaw(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* StreamExecuteRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* AsyncStreamExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* PrepareAsyncStreamExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Open(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::tpu_driver::OpenResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>> AsyncOpen(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>>(AsyncOpenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>> PrepareAsyncOpen(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>>(PrepareAsyncOpenRaw(context, request, cq));
    }
    ::grpc::Status Close(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::tpu_driver::CloseResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>> AsyncClose(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>>(AsyncCloseRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>> PrepareAsyncClose(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>>(PrepareAsyncCloseRaw(context, request, cq));
    }
    ::grpc::Status Reset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::tpu_driver::ResetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>> AsyncReset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>>(AsyncResetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>> PrepareAsyncReset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>>(PrepareAsyncResetRaw(context, request, cq));
    }
    ::grpc::Status QuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::tpu_driver::QuerySystemInfoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>> AsyncQuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>>(AsyncQuerySystemInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>> PrepareAsyncQuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>>(PrepareAsyncQuerySystemInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>> StreamExecute(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>>(StreamExecuteRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>> AsyncStreamExecute(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>>(AsyncStreamExecuteRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>> PrepareAsyncStreamExecute(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>>(PrepareAsyncStreamExecuteRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Open(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response, std::function<void(::grpc::Status)>) override;
      void Close(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response, std::function<void(::grpc::Status)>) override;
      void Reset(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response, std::function<void(::grpc::Status)>) override;
      void QuerySystemInfo(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>* AsyncOpenRaw(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::OpenResponse>* PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::tpu_driver::OpenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>* AsyncCloseRaw(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::CloseResponse>* PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::tpu_driver::CloseRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>* AsyncResetRaw(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::ResetResponse>* PrepareAsyncResetRaw(::grpc::ClientContext* context, const ::tpu_driver::ResetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>* AsyncQuerySystemInfoRaw(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tpu_driver::QuerySystemInfoResponse>* PrepareAsyncQuerySystemInfoRaw(::grpc::ClientContext* context, const ::tpu_driver::QuerySystemInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* StreamExecuteRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* AsyncStreamExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::tpu_driver::StreamRequest, ::tpu_driver::StreamResponse>* PrepareAsyncStreamExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Open_;
    const ::grpc::internal::RpcMethod rpcmethod_Close_;
    const ::grpc::internal::RpcMethod rpcmethod_Reset_;
    const ::grpc::internal::RpcMethod rpcmethod_QuerySystemInfo_;
    const ::grpc::internal::RpcMethod rpcmethod_StreamExecute_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Open the driver. If the driver is already open, return an error.
    virtual ::grpc::Status Open(::grpc::ServerContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response);
    // Close the driver. Any outstanding requests will be terminated.
    virtual ::grpc::Status Close(::grpc::ServerContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response);
    // Reset the driver. All connected clients will be disconnected.
    virtual ::grpc::Status Reset(::grpc::ServerContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response);
    // Query the driver for current system performance information.
    virtual ::grpc::Status QuerySystemInfo(::grpc::ServerContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response);
    // Enqueue an operation to be executed when its dependencies are satisfied.
    virtual ::grpc::Status StreamExecute(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::tpu_driver::StreamResponse, ::tpu_driver::StreamRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Open() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOpen(::grpc::ServerContext* context, ::tpu_driver::OpenRequest* request, ::grpc::ServerAsyncResponseWriter< ::tpu_driver::OpenResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Close() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestClose(::grpc::ServerContext* context, ::tpu_driver::CloseRequest* request, ::grpc::ServerAsyncResponseWriter< ::tpu_driver::CloseResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Reset : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Reset() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Reset() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Reset(::grpc::ServerContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReset(::grpc::ServerContext* context, ::tpu_driver::ResetRequest* request, ::grpc::ServerAsyncResponseWriter< ::tpu_driver::ResetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_QuerySystemInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_QuerySystemInfo() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_QuerySystemInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QuerySystemInfo(::grpc::ServerContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQuerySystemInfo(::grpc::ServerContext* context, ::tpu_driver::QuerySystemInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::tpu_driver::QuerySystemInfoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StreamExecute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StreamExecute() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_StreamExecute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamExecute(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::tpu_driver::StreamResponse, ::tpu_driver::StreamRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamExecute(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::tpu_driver::StreamResponse, ::tpu_driver::StreamRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(4, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Open<WithAsyncMethod_Close<WithAsyncMethod_Reset<WithAsyncMethod_QuerySystemInfo<WithAsyncMethod_StreamExecute<Service > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Open() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Close() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Reset : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Reset() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Reset() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Reset(::grpc::ServerContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_QuerySystemInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_QuerySystemInfo() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_QuerySystemInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QuerySystemInfo(::grpc::ServerContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StreamExecute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StreamExecute() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_StreamExecute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamExecute(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::tpu_driver::StreamResponse, ::tpu_driver::StreamRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Open() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOpen(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Close() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestClose(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Reset : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Reset() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Reset() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Reset(::grpc::ServerContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReset(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_QuerySystemInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_QuerySystemInfo() {
      ::grpc::Service::MarkMethodRaw(3);
    }
    ~WithRawMethod_QuerySystemInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QuerySystemInfo(::grpc::ServerContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQuerySystemInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_StreamExecute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_StreamExecute() {
      ::grpc::Service::MarkMethodRaw(4);
    }
    ~WithRawMethod_StreamExecute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamExecute(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::tpu_driver::StreamResponse, ::tpu_driver::StreamRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamExecute(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(4, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Open() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::tpu_driver::OpenRequest, ::tpu_driver::OpenResponse>(std::bind(&WithStreamedUnaryMethod_Open<BaseClass>::StreamedOpen, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::tpu_driver::OpenRequest* request, ::tpu_driver::OpenResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedOpen(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tpu_driver::OpenRequest,::tpu_driver::OpenResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Close() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::tpu_driver::CloseRequest, ::tpu_driver::CloseResponse>(std::bind(&WithStreamedUnaryMethod_Close<BaseClass>::StreamedClose, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::tpu_driver::CloseRequest* request, ::tpu_driver::CloseResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedClose(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tpu_driver::CloseRequest,::tpu_driver::CloseResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Reset : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Reset() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::tpu_driver::ResetRequest, ::tpu_driver::ResetResponse>(std::bind(&WithStreamedUnaryMethod_Reset<BaseClass>::StreamedReset, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Reset() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Reset(::grpc::ServerContext* context, const ::tpu_driver::ResetRequest* request, ::tpu_driver::ResetResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedReset(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tpu_driver::ResetRequest,::tpu_driver::ResetResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_QuerySystemInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_QuerySystemInfo() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::internal::StreamedUnaryHandler< ::tpu_driver::QuerySystemInfoRequest, ::tpu_driver::QuerySystemInfoResponse>(std::bind(&WithStreamedUnaryMethod_QuerySystemInfo<BaseClass>::StreamedQuerySystemInfo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_QuerySystemInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status QuerySystemInfo(::grpc::ServerContext* context, const ::tpu_driver::QuerySystemInfoRequest* request, ::tpu_driver::QuerySystemInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedQuerySystemInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tpu_driver::QuerySystemInfoRequest,::tpu_driver::QuerySystemInfoResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Open<WithStreamedUnaryMethod_Close<WithStreamedUnaryMethod_Reset<WithStreamedUnaryMethod_QuerySystemInfo<Service > > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Open<WithStreamedUnaryMethod_Close<WithStreamedUnaryMethod_Reset<WithStreamedUnaryMethod_QuerySystemInfo<Service > > > > StreamedService;
};

}  // namespace tpu_driver


#endif  // GRPC_tensorflow_2fcompiler_2fxla_2fpython_2ftpu_5fdriver_2ftpu_5fservice_2eproto__INCLUDED