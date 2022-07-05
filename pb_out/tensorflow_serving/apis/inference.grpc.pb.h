// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow_serving/apis/inference.proto
// Original file comments:
// This file contains messages for various machine learning inferences
// such as regression and classification.
//
// In many applications more than one type of inference is desired for a single
// input.  For example, given meteorologic data an application may want to
// perform a classification to determine if we should expect rain, snow or sun
// and also perform a regression to predict the temperature.
// Sharing the single input data between two inference tasks can be accomplished
// using MultiInferenceRequest and MultiInferenceResponse.
//
#ifndef GRPC_tensorflow_5fserving_2fapis_2finference_2eproto__INCLUDED
#define GRPC_tensorflow_5fserving_2fapis_2finference_2eproto__INCLUDED

#include "tensorflow_serving/apis/inference.pb.h"

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

}  // namespace serving
}  // namespace tensorflow


#endif  // GRPC_tensorflow_5fserving_2fapis_2finference_2eproto__INCLUDED