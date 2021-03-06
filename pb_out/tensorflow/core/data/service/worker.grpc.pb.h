// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/data/service/worker.proto
#ifndef GRPC_tensorflow_2fcore_2fdata_2fservice_2fworker_2eproto__INCLUDED
#define GRPC_tensorflow_2fcore_2fdata_2fservice_2fworker_2eproto__INCLUDED

#include "tensorflow/core/data/service/worker.pb.h"

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

namespace tensorflow {
namespace data {

class WorkerService final {
 public:
  static constexpr char const* service_full_name() {
    return "tensorflow.data.WorkerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Processes an task for a dataset, making elements available to clients.
    virtual ::grpc::Status ProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::tensorflow::data::ProcessTaskResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::ProcessTaskResponse>> AsyncProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::ProcessTaskResponse>>(AsyncProcessTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::ProcessTaskResponse>> PrepareAsyncProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::ProcessTaskResponse>>(PrepareAsyncProcessTaskRaw(context, request, cq));
    }
    // Gets the next dataset element.
    virtual ::grpc::Status GetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::tensorflow::data::GetElementResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetElementResponse>> AsyncGetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetElementResponse>>(AsyncGetElementRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetElementResponse>> PrepareAsyncGetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetElementResponse>>(PrepareAsyncGetElementRaw(context, request, cq));
    }
    // Gets the tasks currently being executed by the worker.
    virtual ::grpc::Status GetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::tensorflow::data::GetWorkerTasksResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetWorkerTasksResponse>> AsyncGetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetWorkerTasksResponse>>(AsyncGetWorkerTasksRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetWorkerTasksResponse>> PrepareAsyncGetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetWorkerTasksResponse>>(PrepareAsyncGetWorkerTasksRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Processes an task for a dataset, making elements available to clients.
      virtual void ProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Gets the next dataset element.
      virtual void GetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Gets the tasks currently being executed by the worker.
      virtual void GetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::ProcessTaskResponse>* AsyncProcessTaskRaw(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::ProcessTaskResponse>* PrepareAsyncProcessTaskRaw(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetElementResponse>* AsyncGetElementRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetElementResponse>* PrepareAsyncGetElementRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetWorkerTasksResponse>* AsyncGetWorkerTasksRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::data::GetWorkerTasksResponse>* PrepareAsyncGetWorkerTasksRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::tensorflow::data::ProcessTaskResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::ProcessTaskResponse>> AsyncProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::ProcessTaskResponse>>(AsyncProcessTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::ProcessTaskResponse>> PrepareAsyncProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::ProcessTaskResponse>>(PrepareAsyncProcessTaskRaw(context, request, cq));
    }
    ::grpc::Status GetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::tensorflow::data::GetElementResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetElementResponse>> AsyncGetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetElementResponse>>(AsyncGetElementRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetElementResponse>> PrepareAsyncGetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetElementResponse>>(PrepareAsyncGetElementRaw(context, request, cq));
    }
    ::grpc::Status GetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::tensorflow::data::GetWorkerTasksResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetWorkerTasksResponse>> AsyncGetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetWorkerTasksResponse>>(AsyncGetWorkerTasksRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetWorkerTasksResponse>> PrepareAsyncGetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetWorkerTasksResponse>>(PrepareAsyncGetWorkerTasksRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ProcessTask(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response, std::function<void(::grpc::Status)>) override;
      void GetElement(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response, std::function<void(::grpc::Status)>) override;
      void GetWorkerTasks(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::tensorflow::data::ProcessTaskResponse>* AsyncProcessTaskRaw(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::data::ProcessTaskResponse>* PrepareAsyncProcessTaskRaw(::grpc::ClientContext* context, const ::tensorflow::data::ProcessTaskRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetElementResponse>* AsyncGetElementRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetElementResponse>* PrepareAsyncGetElementRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetElementRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetWorkerTasksResponse>* AsyncGetWorkerTasksRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::data::GetWorkerTasksResponse>* PrepareAsyncGetWorkerTasksRaw(::grpc::ClientContext* context, const ::tensorflow::data::GetWorkerTasksRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ProcessTask_;
    const ::grpc::internal::RpcMethod rpcmethod_GetElement_;
    const ::grpc::internal::RpcMethod rpcmethod_GetWorkerTasks_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Processes an task for a dataset, making elements available to clients.
    virtual ::grpc::Status ProcessTask(::grpc::ServerContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response);
    // Gets the next dataset element.
    virtual ::grpc::Status GetElement(::grpc::ServerContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response);
    // Gets the tasks currently being executed by the worker.
    virtual ::grpc::Status GetWorkerTasks(::grpc::ServerContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ProcessTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ProcessTask() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ProcessTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessTask(::grpc::ServerContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestProcessTask(::grpc::ServerContext* context, ::tensorflow::data::ProcessTaskRequest* request, ::grpc::ServerAsyncResponseWriter< ::tensorflow::data::ProcessTaskResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetElement : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetElement() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetElement() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetElement(::grpc::ServerContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetElement(::grpc::ServerContext* context, ::tensorflow::data::GetElementRequest* request, ::grpc::ServerAsyncResponseWriter< ::tensorflow::data::GetElementResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetWorkerTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetWorkerTasks() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetWorkerTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWorkerTasks(::grpc::ServerContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetWorkerTasks(::grpc::ServerContext* context, ::tensorflow::data::GetWorkerTasksRequest* request, ::grpc::ServerAsyncResponseWriter< ::tensorflow::data::GetWorkerTasksResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ProcessTask<WithAsyncMethod_GetElement<WithAsyncMethod_GetWorkerTasks<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ProcessTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ProcessTask() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ProcessTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessTask(::grpc::ServerContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetElement : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetElement() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetElement() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetElement(::grpc::ServerContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetWorkerTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetWorkerTasks() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetWorkerTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWorkerTasks(::grpc::ServerContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ProcessTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_ProcessTask() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ProcessTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessTask(::grpc::ServerContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestProcessTask(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetElement : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetElement() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetElement() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetElement(::grpc::ServerContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetElement(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetWorkerTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetWorkerTasks() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_GetWorkerTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWorkerTasks(::grpc::ServerContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetWorkerTasks(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ProcessTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ProcessTask() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::tensorflow::data::ProcessTaskRequest, ::tensorflow::data::ProcessTaskResponse>(std::bind(&WithStreamedUnaryMethod_ProcessTask<BaseClass>::StreamedProcessTask, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ProcessTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ProcessTask(::grpc::ServerContext* context, const ::tensorflow::data::ProcessTaskRequest* request, ::tensorflow::data::ProcessTaskResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedProcessTask(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tensorflow::data::ProcessTaskRequest,::tensorflow::data::ProcessTaskResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetElement : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetElement() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::tensorflow::data::GetElementRequest, ::tensorflow::data::GetElementResponse>(std::bind(&WithStreamedUnaryMethod_GetElement<BaseClass>::StreamedGetElement, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetElement() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetElement(::grpc::ServerContext* context, const ::tensorflow::data::GetElementRequest* request, ::tensorflow::data::GetElementResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetElement(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tensorflow::data::GetElementRequest,::tensorflow::data::GetElementResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetWorkerTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetWorkerTasks() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::tensorflow::data::GetWorkerTasksRequest, ::tensorflow::data::GetWorkerTasksResponse>(std::bind(&WithStreamedUnaryMethod_GetWorkerTasks<BaseClass>::StreamedGetWorkerTasks, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetWorkerTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetWorkerTasks(::grpc::ServerContext* context, const ::tensorflow::data::GetWorkerTasksRequest* request, ::tensorflow::data::GetWorkerTasksResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetWorkerTasks(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tensorflow::data::GetWorkerTasksRequest,::tensorflow::data::GetWorkerTasksResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ProcessTask<WithStreamedUnaryMethod_GetElement<WithStreamedUnaryMethod_GetWorkerTasks<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ProcessTask<WithStreamedUnaryMethod_GetElement<WithStreamedUnaryMethod_GetWorkerTasks<Service > > > StreamedService;
};

}  // namespace data
}  // namespace tensorflow


#endif  // GRPC_tensorflow_2fcore_2fdata_2fservice_2fworker_2eproto__INCLUDED
