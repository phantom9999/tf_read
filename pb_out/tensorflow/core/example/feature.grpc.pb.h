// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/example/feature.proto
// Original file comments:
// Protocol messages for describing features for machine learning model
// training or inference.
//
// There are three base Feature types:
//   - bytes
//   - float
//   - int64
//
// A Feature contains Lists which may hold zero or more values.  These
// lists are the base values BytesList, FloatList, Int64List.
//
// Features are organized into categories by name.  The Features message
// contains the mapping from name to Feature.
//
// Example Features for a movie recommendation application:
//   feature {
//     key: "age"
//     value { float_list {
//       value: 29.0
//     }}
//   }
//   feature {
//     key: "movie"
//     value { bytes_list {
//       value: "The Shawshank Redemption"
//       value: "Fight Club"
//     }}
//   }
//   feature {
//     key: "movie_ratings"
//     value { float_list {
//       value: 9.0
//       value: 9.7
//     }}
//   }
//   feature {
//     key: "suggestion"
//     value { bytes_list {
//       value: "Inception"
//     }}
//   }
//   feature {
//     key: "suggestion_purchased"
//     value { int64_list {
//       value: 1
//     }}
//   }
//   feature {
//     key: "purchase_price"
//     value { float_list {
//       value: 9.99
//     }}
//   }
//
//
#ifndef GRPC_tensorflow_2fcore_2fexample_2ffeature_2eproto__INCLUDED
#define GRPC_tensorflow_2fcore_2fexample_2ffeature_2eproto__INCLUDED

#include "tensorflow/core/example/feature.pb.h"

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

}  // namespace tensorflow


#endif  // GRPC_tensorflow_2fcore_2fexample_2ffeature_2eproto__INCLUDED
