// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/session_service.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto
#define PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/protobuf/config.pb.h"
#include "tensorflow/core/protobuf/named_tensor.pb.h"
#include "tensorflow_serving/apis/model.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto 

namespace protobuf_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto
namespace tensorflow {
namespace serving {
class SessionRunRequest;
class SessionRunRequestDefaultTypeInternal;
extern SessionRunRequestDefaultTypeInternal _SessionRunRequest_default_instance_;
class SessionRunResponse;
class SessionRunResponseDefaultTypeInternal;
extern SessionRunResponseDefaultTypeInternal _SessionRunResponse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::serving::SessionRunRequest* Arena::CreateMaybeMessage<::tensorflow::serving::SessionRunRequest>(Arena*);
template<> ::tensorflow::serving::SessionRunResponse* Arena::CreateMaybeMessage<::tensorflow::serving::SessionRunResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace serving {

// ===================================================================

class SessionRunRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.SessionRunRequest) */ {
 public:
  SessionRunRequest();
  virtual ~SessionRunRequest();

  SessionRunRequest(const SessionRunRequest& from);

  inline SessionRunRequest& operator=(const SessionRunRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SessionRunRequest(SessionRunRequest&& from) noexcept
    : SessionRunRequest() {
    *this = ::std::move(from);
  }

  inline SessionRunRequest& operator=(SessionRunRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SessionRunRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SessionRunRequest* internal_default_instance() {
    return reinterpret_cast<const SessionRunRequest*>(
               &_SessionRunRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(SessionRunRequest* other);
  void Swap(SessionRunRequest* other);
  friend void swap(SessionRunRequest& a, SessionRunRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SessionRunRequest* New() const final {
    return CreateMaybeMessage<SessionRunRequest>(NULL);
  }

  SessionRunRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SessionRunRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SessionRunRequest& from);
  void MergeFrom(const SessionRunRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SessionRunRequest* other);
  protected:
  explicit SessionRunRequest(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.NamedTensorProto feed = 2;
  int feed_size() const;
  void clear_feed();
  static const int kFeedFieldNumber = 2;
  ::tensorflow::NamedTensorProto* mutable_feed(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >*
      mutable_feed();
  const ::tensorflow::NamedTensorProto& feed(int index) const;
  ::tensorflow::NamedTensorProto* add_feed();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >&
      feed() const;

  // repeated string fetch = 3;
  int fetch_size() const;
  void clear_fetch();
  static const int kFetchFieldNumber = 3;
  const ::std::string& fetch(int index) const;
  ::std::string* mutable_fetch(int index);
  void set_fetch(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_fetch(int index, ::std::string&& value);
  #endif
  void set_fetch(int index, const char* value);
  void set_fetch(int index, const char* value, size_t size);
  ::std::string* add_fetch();
  void add_fetch(const ::std::string& value);
  #if LANG_CXX11
  void add_fetch(::std::string&& value);
  #endif
  void add_fetch(const char* value);
  void add_fetch(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& fetch() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_fetch();

  // repeated string target = 4;
  int target_size() const;
  void clear_target();
  static const int kTargetFieldNumber = 4;
  const ::std::string& target(int index) const;
  ::std::string* mutable_target(int index);
  void set_target(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_target(int index, ::std::string&& value);
  #endif
  void set_target(int index, const char* value);
  void set_target(int index, const char* value, size_t size);
  ::std::string* add_target();
  void add_target(const ::std::string& value);
  #if LANG_CXX11
  void add_target(::std::string&& value);
  #endif
  void add_target(const char* value);
  void add_target(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& target() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_target();

  // .tensorflow.serving.ModelSpec model_spec = 1;
  bool has_model_spec() const;
  void clear_model_spec();
  static const int kModelSpecFieldNumber = 1;
  private:
  const ::tensorflow::serving::ModelSpec& _internal_model_spec() const;
  public:
  const ::tensorflow::serving::ModelSpec& model_spec() const;
  ::tensorflow::serving::ModelSpec* release_model_spec();
  ::tensorflow::serving::ModelSpec* mutable_model_spec();
  void set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec);
  void unsafe_arena_set_allocated_model_spec(
      ::tensorflow::serving::ModelSpec* model_spec);
  ::tensorflow::serving::ModelSpec* unsafe_arena_release_model_spec();

  // .tensorflow.RunOptions options = 5;
  bool has_options() const;
  void clear_options();
  static const int kOptionsFieldNumber = 5;
  private:
  const ::tensorflow::RunOptions& _internal_options() const;
  public:
  const ::tensorflow::RunOptions& options() const;
  ::tensorflow::RunOptions* release_options();
  ::tensorflow::RunOptions* mutable_options();
  void set_allocated_options(::tensorflow::RunOptions* options);
  void unsafe_arena_set_allocated_options(
      ::tensorflow::RunOptions* options);
  ::tensorflow::RunOptions* unsafe_arena_release_options();

  // bool tensor_name_is_alias = 6;
  void clear_tensor_name_is_alias();
  static const int kTensorNameIsAliasFieldNumber = 6;
  bool tensor_name_is_alias() const;
  void set_tensor_name_is_alias(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.serving.SessionRunRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto > feed_;
  ::google::protobuf::RepeatedPtrField< ::std::string> fetch_;
  ::google::protobuf::RepeatedPtrField< ::std::string> target_;
  ::tensorflow::serving::ModelSpec* model_spec_;
  ::tensorflow::RunOptions* options_;
  bool tensor_name_is_alias_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SessionRunResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.SessionRunResponse) */ {
 public:
  SessionRunResponse();
  virtual ~SessionRunResponse();

  SessionRunResponse(const SessionRunResponse& from);

  inline SessionRunResponse& operator=(const SessionRunResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SessionRunResponse(SessionRunResponse&& from) noexcept
    : SessionRunResponse() {
    *this = ::std::move(from);
  }

  inline SessionRunResponse& operator=(SessionRunResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SessionRunResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SessionRunResponse* internal_default_instance() {
    return reinterpret_cast<const SessionRunResponse*>(
               &_SessionRunResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(SessionRunResponse* other);
  void Swap(SessionRunResponse* other);
  friend void swap(SessionRunResponse& a, SessionRunResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SessionRunResponse* New() const final {
    return CreateMaybeMessage<SessionRunResponse>(NULL);
  }

  SessionRunResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SessionRunResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SessionRunResponse& from);
  void MergeFrom(const SessionRunResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SessionRunResponse* other);
  protected:
  explicit SessionRunResponse(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.NamedTensorProto tensor = 1;
  int tensor_size() const;
  void clear_tensor();
  static const int kTensorFieldNumber = 1;
  ::tensorflow::NamedTensorProto* mutable_tensor(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >*
      mutable_tensor();
  const ::tensorflow::NamedTensorProto& tensor(int index) const;
  ::tensorflow::NamedTensorProto* add_tensor();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >&
      tensor() const;

  // .tensorflow.RunMetadata metadata = 2;
  bool has_metadata() const;
  void clear_metadata();
  static const int kMetadataFieldNumber = 2;
  private:
  const ::tensorflow::RunMetadata& _internal_metadata() const;
  public:
  const ::tensorflow::RunMetadata& metadata() const;
  ::tensorflow::RunMetadata* release_metadata();
  ::tensorflow::RunMetadata* mutable_metadata();
  void set_allocated_metadata(::tensorflow::RunMetadata* metadata);
  void unsafe_arena_set_allocated_metadata(
      ::tensorflow::RunMetadata* metadata);
  ::tensorflow::RunMetadata* unsafe_arena_release_metadata();

  // .tensorflow.serving.ModelSpec model_spec = 3;
  bool has_model_spec() const;
  void clear_model_spec();
  static const int kModelSpecFieldNumber = 3;
  private:
  const ::tensorflow::serving::ModelSpec& _internal_model_spec() const;
  public:
  const ::tensorflow::serving::ModelSpec& model_spec() const;
  ::tensorflow::serving::ModelSpec* release_model_spec();
  ::tensorflow::serving::ModelSpec* mutable_model_spec();
  void set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec);
  void unsafe_arena_set_allocated_model_spec(
      ::tensorflow::serving::ModelSpec* model_spec);
  ::tensorflow::serving::ModelSpec* unsafe_arena_release_model_spec();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.SessionRunResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto > tensor_;
  ::tensorflow::RunMetadata* metadata_;
  ::tensorflow::serving::ModelSpec* model_spec_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionRunRequest

// .tensorflow.serving.ModelSpec model_spec = 1;
inline bool SessionRunRequest::has_model_spec() const {
  return this != internal_default_instance() && model_spec_ != NULL;
}
inline const ::tensorflow::serving::ModelSpec& SessionRunRequest::_internal_model_spec() const {
  return *model_spec_;
}
inline const ::tensorflow::serving::ModelSpec& SessionRunRequest::model_spec() const {
  const ::tensorflow::serving::ModelSpec* p = model_spec_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunRequest.model_spec)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelSpec*>(
      &::tensorflow::serving::_ModelSpec_default_instance_);
}
inline ::tensorflow::serving::ModelSpec* SessionRunRequest::release_model_spec() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.SessionRunRequest.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* SessionRunRequest::unsafe_arena_release_model_spec() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.SessionRunRequest.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* SessionRunRequest::mutable_model_spec() {
  
  if (model_spec_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelSpec>(GetArenaNoVirtual());
    model_spec_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunRequest.model_spec)
  return model_spec_;
}
inline void SessionRunRequest::set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(model_spec_);
  }
  if (model_spec) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(model_spec)->GetArena();
    if (message_arena != submessage_arena) {
      model_spec = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, model_spec, submessage_arena);
    }
    
  } else {
    
  }
  model_spec_ = model_spec;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.SessionRunRequest.model_spec)
}

// repeated .tensorflow.NamedTensorProto feed = 2;
inline int SessionRunRequest::feed_size() const {
  return feed_.size();
}
inline ::tensorflow::NamedTensorProto* SessionRunRequest::mutable_feed(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunRequest.feed)
  return feed_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >*
SessionRunRequest::mutable_feed() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.SessionRunRequest.feed)
  return &feed_;
}
inline const ::tensorflow::NamedTensorProto& SessionRunRequest::feed(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunRequest.feed)
  return feed_.Get(index);
}
inline ::tensorflow::NamedTensorProto* SessionRunRequest::add_feed() {
  // @@protoc_insertion_point(field_add:tensorflow.serving.SessionRunRequest.feed)
  return feed_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >&
SessionRunRequest::feed() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.SessionRunRequest.feed)
  return feed_;
}

// repeated string fetch = 3;
inline int SessionRunRequest::fetch_size() const {
  return fetch_.size();
}
inline void SessionRunRequest::clear_fetch() {
  fetch_.Clear();
}
inline const ::std::string& SessionRunRequest::fetch(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunRequest.fetch)
  return fetch_.Get(index);
}
inline ::std::string* SessionRunRequest::mutable_fetch(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunRequest.fetch)
  return fetch_.Mutable(index);
}
inline void SessionRunRequest::set_fetch(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.SessionRunRequest.fetch)
  fetch_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void SessionRunRequest::set_fetch(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.SessionRunRequest.fetch)
  fetch_.Mutable(index)->assign(std::move(value));
}
#endif
inline void SessionRunRequest::set_fetch(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  fetch_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.SessionRunRequest.fetch)
}
inline void SessionRunRequest::set_fetch(int index, const char* value, size_t size) {
  fetch_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.SessionRunRequest.fetch)
}
inline ::std::string* SessionRunRequest::add_fetch() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.serving.SessionRunRequest.fetch)
  return fetch_.Add();
}
inline void SessionRunRequest::add_fetch(const ::std::string& value) {
  fetch_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.serving.SessionRunRequest.fetch)
}
#if LANG_CXX11
inline void SessionRunRequest::add_fetch(::std::string&& value) {
  fetch_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.serving.SessionRunRequest.fetch)
}
#endif
inline void SessionRunRequest::add_fetch(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  fetch_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.serving.SessionRunRequest.fetch)
}
inline void SessionRunRequest::add_fetch(const char* value, size_t size) {
  fetch_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.serving.SessionRunRequest.fetch)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SessionRunRequest::fetch() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.SessionRunRequest.fetch)
  return fetch_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SessionRunRequest::mutable_fetch() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.SessionRunRequest.fetch)
  return &fetch_;
}

// repeated string target = 4;
inline int SessionRunRequest::target_size() const {
  return target_.size();
}
inline void SessionRunRequest::clear_target() {
  target_.Clear();
}
inline const ::std::string& SessionRunRequest::target(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunRequest.target)
  return target_.Get(index);
}
inline ::std::string* SessionRunRequest::mutable_target(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunRequest.target)
  return target_.Mutable(index);
}
inline void SessionRunRequest::set_target(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.SessionRunRequest.target)
  target_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void SessionRunRequest::set_target(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.SessionRunRequest.target)
  target_.Mutable(index)->assign(std::move(value));
}
#endif
inline void SessionRunRequest::set_target(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  target_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.SessionRunRequest.target)
}
inline void SessionRunRequest::set_target(int index, const char* value, size_t size) {
  target_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.SessionRunRequest.target)
}
inline ::std::string* SessionRunRequest::add_target() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.serving.SessionRunRequest.target)
  return target_.Add();
}
inline void SessionRunRequest::add_target(const ::std::string& value) {
  target_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.serving.SessionRunRequest.target)
}
#if LANG_CXX11
inline void SessionRunRequest::add_target(::std::string&& value) {
  target_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.serving.SessionRunRequest.target)
}
#endif
inline void SessionRunRequest::add_target(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  target_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.serving.SessionRunRequest.target)
}
inline void SessionRunRequest::add_target(const char* value, size_t size) {
  target_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.serving.SessionRunRequest.target)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SessionRunRequest::target() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.SessionRunRequest.target)
  return target_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SessionRunRequest::mutable_target() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.SessionRunRequest.target)
  return &target_;
}

// bool tensor_name_is_alias = 6;
inline void SessionRunRequest::clear_tensor_name_is_alias() {
  tensor_name_is_alias_ = false;
}
inline bool SessionRunRequest::tensor_name_is_alias() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunRequest.tensor_name_is_alias)
  return tensor_name_is_alias_;
}
inline void SessionRunRequest::set_tensor_name_is_alias(bool value) {
  
  tensor_name_is_alias_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.serving.SessionRunRequest.tensor_name_is_alias)
}

// .tensorflow.RunOptions options = 5;
inline bool SessionRunRequest::has_options() const {
  return this != internal_default_instance() && options_ != NULL;
}
inline const ::tensorflow::RunOptions& SessionRunRequest::_internal_options() const {
  return *options_;
}
inline const ::tensorflow::RunOptions& SessionRunRequest::options() const {
  const ::tensorflow::RunOptions* p = options_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunRequest.options)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::RunOptions*>(
      &::tensorflow::_RunOptions_default_instance_);
}
inline ::tensorflow::RunOptions* SessionRunRequest::release_options() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.SessionRunRequest.options)
  
  ::tensorflow::RunOptions* temp = options_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  options_ = NULL;
  return temp;
}
inline ::tensorflow::RunOptions* SessionRunRequest::unsafe_arena_release_options() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.SessionRunRequest.options)
  
  ::tensorflow::RunOptions* temp = options_;
  options_ = NULL;
  return temp;
}
inline ::tensorflow::RunOptions* SessionRunRequest::mutable_options() {
  
  if (options_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::RunOptions>(GetArenaNoVirtual());
    options_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunRequest.options)
  return options_;
}
inline void SessionRunRequest::set_allocated_options(::tensorflow::RunOptions* options) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(options_);
  }
  if (options) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(options)->GetArena();
    if (message_arena != submessage_arena) {
      options = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, options, submessage_arena);
    }
    
  } else {
    
  }
  options_ = options;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.SessionRunRequest.options)
}

// -------------------------------------------------------------------

// SessionRunResponse

// .tensorflow.serving.ModelSpec model_spec = 3;
inline bool SessionRunResponse::has_model_spec() const {
  return this != internal_default_instance() && model_spec_ != NULL;
}
inline const ::tensorflow::serving::ModelSpec& SessionRunResponse::_internal_model_spec() const {
  return *model_spec_;
}
inline const ::tensorflow::serving::ModelSpec& SessionRunResponse::model_spec() const {
  const ::tensorflow::serving::ModelSpec* p = model_spec_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunResponse.model_spec)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelSpec*>(
      &::tensorflow::serving::_ModelSpec_default_instance_);
}
inline ::tensorflow::serving::ModelSpec* SessionRunResponse::release_model_spec() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.SessionRunResponse.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* SessionRunResponse::unsafe_arena_release_model_spec() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.SessionRunResponse.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* SessionRunResponse::mutable_model_spec() {
  
  if (model_spec_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelSpec>(GetArenaNoVirtual());
    model_spec_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunResponse.model_spec)
  return model_spec_;
}
inline void SessionRunResponse::set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(model_spec_);
  }
  if (model_spec) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(model_spec)->GetArena();
    if (message_arena != submessage_arena) {
      model_spec = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, model_spec, submessage_arena);
    }
    
  } else {
    
  }
  model_spec_ = model_spec;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.SessionRunResponse.model_spec)
}

// repeated .tensorflow.NamedTensorProto tensor = 1;
inline int SessionRunResponse::tensor_size() const {
  return tensor_.size();
}
inline ::tensorflow::NamedTensorProto* SessionRunResponse::mutable_tensor(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunResponse.tensor)
  return tensor_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >*
SessionRunResponse::mutable_tensor() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.SessionRunResponse.tensor)
  return &tensor_;
}
inline const ::tensorflow::NamedTensorProto& SessionRunResponse::tensor(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunResponse.tensor)
  return tensor_.Get(index);
}
inline ::tensorflow::NamedTensorProto* SessionRunResponse::add_tensor() {
  // @@protoc_insertion_point(field_add:tensorflow.serving.SessionRunResponse.tensor)
  return tensor_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::NamedTensorProto >&
SessionRunResponse::tensor() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.SessionRunResponse.tensor)
  return tensor_;
}

// .tensorflow.RunMetadata metadata = 2;
inline bool SessionRunResponse::has_metadata() const {
  return this != internal_default_instance() && metadata_ != NULL;
}
inline const ::tensorflow::RunMetadata& SessionRunResponse::_internal_metadata() const {
  return *metadata_;
}
inline const ::tensorflow::RunMetadata& SessionRunResponse::metadata() const {
  const ::tensorflow::RunMetadata* p = metadata_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.SessionRunResponse.metadata)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::RunMetadata*>(
      &::tensorflow::_RunMetadata_default_instance_);
}
inline ::tensorflow::RunMetadata* SessionRunResponse::release_metadata() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.SessionRunResponse.metadata)
  
  ::tensorflow::RunMetadata* temp = metadata_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  metadata_ = NULL;
  return temp;
}
inline ::tensorflow::RunMetadata* SessionRunResponse::unsafe_arena_release_metadata() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.SessionRunResponse.metadata)
  
  ::tensorflow::RunMetadata* temp = metadata_;
  metadata_ = NULL;
  return temp;
}
inline ::tensorflow::RunMetadata* SessionRunResponse::mutable_metadata() {
  
  if (metadata_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::RunMetadata>(GetArenaNoVirtual());
    metadata_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.SessionRunResponse.metadata)
  return metadata_;
}
inline void SessionRunResponse::set_allocated_metadata(::tensorflow::RunMetadata* metadata) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(metadata_);
  }
  if (metadata) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(metadata)->GetArena();
    if (message_arena != submessage_arena) {
      metadata = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, metadata, submessage_arena);
    }
    
  } else {
    
  }
  metadata_ = metadata;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.SessionRunResponse.metadata)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fsession_5fservice_2eproto
