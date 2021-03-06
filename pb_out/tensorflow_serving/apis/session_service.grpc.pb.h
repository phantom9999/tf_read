// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow_serving/apis/session_service.proto
#ifndef GRPC_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto__INCLUDED
#define GRPC_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto__INCLUDED

#include "tensorflow_serving/apis/session_service.pb.h"

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
namespace serving {

// SessionService defines a service with which a client can interact to execute
// Tensorflow model inference. The SessionService::SessionRun method is similar
// to MasterService::RunStep of Tensorflow, except that all sessions are ready
// to run, and you request a specific model/session with ModelSpec.
class SessionService final {
 public:
  static constexpr char const* service_full_name() {
    return "tensorflow.serving.SessionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Runs inference of a given model.
    virtual ::grpc::Status SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::tensorflow::serving::SessionRunResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::SessionRunResponse>> AsyncSessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::SessionRunResponse>>(AsyncSessionRunRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::SessionRunResponse>> PrepareAsyncSessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::SessionRunResponse>>(PrepareAsyncSessionRunRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Runs inference of a given model.
      virtual void SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::SessionRunResponse>* AsyncSessionRunRaw(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::tensorflow::serving::SessionRunResponse>* PrepareAsyncSessionRunRaw(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::tensorflow::serving::SessionRunResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>> AsyncSessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>>(AsyncSessionRunRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>> PrepareAsyncSessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>>(PrepareAsyncSessionRunRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>* AsyncSessionRunRaw(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>* PrepareAsyncSessionRunRaw(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SessionRun_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Runs inference of a given model.
    virtual ::grpc::Status SessionRun(::grpc::ServerContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SessionRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SessionRun() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SessionRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SessionRun(::grpc::ServerContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSessionRun(::grpc::ServerContext* context, ::tensorflow::serving::SessionRunRequest* request, ::grpc::ServerAsyncResponseWriter< ::tensorflow::serving::SessionRunResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SessionRun<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SessionRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SessionRun() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SessionRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SessionRun(::grpc::ServerContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SessionRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SessionRun() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SessionRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SessionRun(::grpc::ServerContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSessionRun(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SessionRun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SessionRun() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::tensorflow::serving::SessionRunRequest, ::tensorflow::serving::SessionRunResponse>(std::bind(&WithStreamedUnaryMethod_SessionRun<BaseClass>::StreamedSessionRun, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SessionRun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SessionRun(::grpc::ServerContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSessionRun(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::tensorflow::serving::SessionRunRequest,::tensorflow::serving::SessionRunResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SessionRun<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SessionRun<Service > StreamedService;
};

}  // namespace serving
}  // namespace tensorflow


#endif  // GRPC_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto__INCLUDED
