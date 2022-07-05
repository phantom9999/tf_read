// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/get_model_status.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto
#define PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow_serving/apis/model.pb.h"
#include "tensorflow_serving/apis/status.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto 

namespace protobuf_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto
namespace tensorflow {
namespace serving {
class GetModelStatusRequest;
class GetModelStatusRequestDefaultTypeInternal;
extern GetModelStatusRequestDefaultTypeInternal _GetModelStatusRequest_default_instance_;
class GetModelStatusResponse;
class GetModelStatusResponseDefaultTypeInternal;
extern GetModelStatusResponseDefaultTypeInternal _GetModelStatusResponse_default_instance_;
class ModelVersionStatus;
class ModelVersionStatusDefaultTypeInternal;
extern ModelVersionStatusDefaultTypeInternal _ModelVersionStatus_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::serving::GetModelStatusRequest* Arena::CreateMaybeMessage<::tensorflow::serving::GetModelStatusRequest>(Arena*);
template<> ::tensorflow::serving::GetModelStatusResponse* Arena::CreateMaybeMessage<::tensorflow::serving::GetModelStatusResponse>(Arena*);
template<> ::tensorflow::serving::ModelVersionStatus* Arena::CreateMaybeMessage<::tensorflow::serving::ModelVersionStatus>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace serving {

enum ModelVersionStatus_State {
  ModelVersionStatus_State_UNKNOWN = 0,
  ModelVersionStatus_State_START = 10,
  ModelVersionStatus_State_LOADING = 20,
  ModelVersionStatus_State_AVAILABLE = 30,
  ModelVersionStatus_State_UNLOADING = 40,
  ModelVersionStatus_State_END = 50,
  ModelVersionStatus_State_ModelVersionStatus_State_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ModelVersionStatus_State_ModelVersionStatus_State_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ModelVersionStatus_State_IsValid(int value);
const ModelVersionStatus_State ModelVersionStatus_State_State_MIN = ModelVersionStatus_State_UNKNOWN;
const ModelVersionStatus_State ModelVersionStatus_State_State_MAX = ModelVersionStatus_State_END;
const int ModelVersionStatus_State_State_ARRAYSIZE = ModelVersionStatus_State_State_MAX + 1;

const ::google::protobuf::EnumDescriptor* ModelVersionStatus_State_descriptor();
inline const ::std::string& ModelVersionStatus_State_Name(ModelVersionStatus_State value) {
  return ::google::protobuf::internal::NameOfEnum(
    ModelVersionStatus_State_descriptor(), value);
}
inline bool ModelVersionStatus_State_Parse(
    const ::std::string& name, ModelVersionStatus_State* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ModelVersionStatus_State>(
    ModelVersionStatus_State_descriptor(), name, value);
}
// ===================================================================

class GetModelStatusRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.GetModelStatusRequest) */ {
 public:
  GetModelStatusRequest();
  virtual ~GetModelStatusRequest();

  GetModelStatusRequest(const GetModelStatusRequest& from);

  inline GetModelStatusRequest& operator=(const GetModelStatusRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetModelStatusRequest(GetModelStatusRequest&& from) noexcept
    : GetModelStatusRequest() {
    *this = ::std::move(from);
  }

  inline GetModelStatusRequest& operator=(GetModelStatusRequest&& from) noexcept {
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
  static const GetModelStatusRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetModelStatusRequest* internal_default_instance() {
    return reinterpret_cast<const GetModelStatusRequest*>(
               &_GetModelStatusRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(GetModelStatusRequest* other);
  void Swap(GetModelStatusRequest* other);
  friend void swap(GetModelStatusRequest& a, GetModelStatusRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetModelStatusRequest* New() const final {
    return CreateMaybeMessage<GetModelStatusRequest>(NULL);
  }

  GetModelStatusRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetModelStatusRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetModelStatusRequest& from);
  void MergeFrom(const GetModelStatusRequest& from);
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
  void InternalSwap(GetModelStatusRequest* other);
  protected:
  explicit GetModelStatusRequest(::google::protobuf::Arena* arena);
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

  // @@protoc_insertion_point(class_scope:tensorflow.serving.GetModelStatusRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::serving::ModelSpec* model_spec_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ModelVersionStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.ModelVersionStatus) */ {
 public:
  ModelVersionStatus();
  virtual ~ModelVersionStatus();

  ModelVersionStatus(const ModelVersionStatus& from);

  inline ModelVersionStatus& operator=(const ModelVersionStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ModelVersionStatus(ModelVersionStatus&& from) noexcept
    : ModelVersionStatus() {
    *this = ::std::move(from);
  }

  inline ModelVersionStatus& operator=(ModelVersionStatus&& from) noexcept {
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
  static const ModelVersionStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModelVersionStatus* internal_default_instance() {
    return reinterpret_cast<const ModelVersionStatus*>(
               &_ModelVersionStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(ModelVersionStatus* other);
  void Swap(ModelVersionStatus* other);
  friend void swap(ModelVersionStatus& a, ModelVersionStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ModelVersionStatus* New() const final {
    return CreateMaybeMessage<ModelVersionStatus>(NULL);
  }

  ModelVersionStatus* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ModelVersionStatus>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ModelVersionStatus& from);
  void MergeFrom(const ModelVersionStatus& from);
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
  void InternalSwap(ModelVersionStatus* other);
  protected:
  explicit ModelVersionStatus(::google::protobuf::Arena* arena);
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

  typedef ModelVersionStatus_State State;
  static const State UNKNOWN =
    ModelVersionStatus_State_UNKNOWN;
  static const State START =
    ModelVersionStatus_State_START;
  static const State LOADING =
    ModelVersionStatus_State_LOADING;
  static const State AVAILABLE =
    ModelVersionStatus_State_AVAILABLE;
  static const State UNLOADING =
    ModelVersionStatus_State_UNLOADING;
  static const State END =
    ModelVersionStatus_State_END;
  static inline bool State_IsValid(int value) {
    return ModelVersionStatus_State_IsValid(value);
  }
  static const State State_MIN =
    ModelVersionStatus_State_State_MIN;
  static const State State_MAX =
    ModelVersionStatus_State_State_MAX;
  static const int State_ARRAYSIZE =
    ModelVersionStatus_State_State_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  State_descriptor() {
    return ModelVersionStatus_State_descriptor();
  }
  static inline const ::std::string& State_Name(State value) {
    return ModelVersionStatus_State_Name(value);
  }
  static inline bool State_Parse(const ::std::string& name,
      State* value) {
    return ModelVersionStatus_State_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .tensorflow.serving.StatusProto status = 3;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 3;
  private:
  const ::tensorflow::serving::StatusProto& _internal_status() const;
  public:
  const ::tensorflow::serving::StatusProto& status() const;
  ::tensorflow::serving::StatusProto* release_status();
  ::tensorflow::serving::StatusProto* mutable_status();
  void set_allocated_status(::tensorflow::serving::StatusProto* status);
  void unsafe_arena_set_allocated_status(
      ::tensorflow::serving::StatusProto* status);
  ::tensorflow::serving::StatusProto* unsafe_arena_release_status();

  // int64 version = 1;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::int64 version() const;
  void set_version(::google::protobuf::int64 value);

  // .tensorflow.serving.ModelVersionStatus.State state = 2;
  void clear_state();
  static const int kStateFieldNumber = 2;
  ::tensorflow::serving::ModelVersionStatus_State state() const;
  void set_state(::tensorflow::serving::ModelVersionStatus_State value);

  // @@protoc_insertion_point(class_scope:tensorflow.serving.ModelVersionStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::serving::StatusProto* status_;
  ::google::protobuf::int64 version_;
  int state_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetModelStatusResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.GetModelStatusResponse) */ {
 public:
  GetModelStatusResponse();
  virtual ~GetModelStatusResponse();

  GetModelStatusResponse(const GetModelStatusResponse& from);

  inline GetModelStatusResponse& operator=(const GetModelStatusResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetModelStatusResponse(GetModelStatusResponse&& from) noexcept
    : GetModelStatusResponse() {
    *this = ::std::move(from);
  }

  inline GetModelStatusResponse& operator=(GetModelStatusResponse&& from) noexcept {
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
  static const GetModelStatusResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetModelStatusResponse* internal_default_instance() {
    return reinterpret_cast<const GetModelStatusResponse*>(
               &_GetModelStatusResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(GetModelStatusResponse* other);
  void Swap(GetModelStatusResponse* other);
  friend void swap(GetModelStatusResponse& a, GetModelStatusResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetModelStatusResponse* New() const final {
    return CreateMaybeMessage<GetModelStatusResponse>(NULL);
  }

  GetModelStatusResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetModelStatusResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetModelStatusResponse& from);
  void MergeFrom(const GetModelStatusResponse& from);
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
  void InternalSwap(GetModelStatusResponse* other);
  protected:
  explicit GetModelStatusResponse(::google::protobuf::Arena* arena);
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

  // repeated .tensorflow.serving.ModelVersionStatus model_version_status = 1[json_name = "model_version_status"];
  int model_version_status_size() const;
  void clear_model_version_status();
  static const int kModelVersionStatusFieldNumber = 1;
  ::tensorflow::serving::ModelVersionStatus* mutable_model_version_status(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::serving::ModelVersionStatus >*
      mutable_model_version_status();
  const ::tensorflow::serving::ModelVersionStatus& model_version_status(int index) const;
  ::tensorflow::serving::ModelVersionStatus* add_model_version_status();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::serving::ModelVersionStatus >&
      model_version_status() const;

  // @@protoc_insertion_point(class_scope:tensorflow.serving.GetModelStatusResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::serving::ModelVersionStatus > model_version_status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetModelStatusRequest

// .tensorflow.serving.ModelSpec model_spec = 1;
inline bool GetModelStatusRequest::has_model_spec() const {
  return this != internal_default_instance() && model_spec_ != NULL;
}
inline const ::tensorflow::serving::ModelSpec& GetModelStatusRequest::_internal_model_spec() const {
  return *model_spec_;
}
inline const ::tensorflow::serving::ModelSpec& GetModelStatusRequest::model_spec() const {
  const ::tensorflow::serving::ModelSpec* p = model_spec_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.GetModelStatusRequest.model_spec)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelSpec*>(
      &::tensorflow::serving::_ModelSpec_default_instance_);
}
inline ::tensorflow::serving::ModelSpec* GetModelStatusRequest::release_model_spec() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.GetModelStatusRequest.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* GetModelStatusRequest::unsafe_arena_release_model_spec() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.GetModelStatusRequest.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* GetModelStatusRequest::mutable_model_spec() {
  
  if (model_spec_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelSpec>(GetArenaNoVirtual());
    model_spec_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.GetModelStatusRequest.model_spec)
  return model_spec_;
}
inline void GetModelStatusRequest::set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec) {
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
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.GetModelStatusRequest.model_spec)
}

// -------------------------------------------------------------------

// ModelVersionStatus

// int64 version = 1;
inline void ModelVersionStatus::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ModelVersionStatus::version() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelVersionStatus.version)
  return version_;
}
inline void ModelVersionStatus::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.serving.ModelVersionStatus.version)
}

// .tensorflow.serving.ModelVersionStatus.State state = 2;
inline void ModelVersionStatus::clear_state() {
  state_ = 0;
}
inline ::tensorflow::serving::ModelVersionStatus_State ModelVersionStatus::state() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelVersionStatus.state)
  return static_cast< ::tensorflow::serving::ModelVersionStatus_State >(state_);
}
inline void ModelVersionStatus::set_state(::tensorflow::serving::ModelVersionStatus_State value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.serving.ModelVersionStatus.state)
}

// .tensorflow.serving.StatusProto status = 3;
inline bool ModelVersionStatus::has_status() const {
  return this != internal_default_instance() && status_ != NULL;
}
inline const ::tensorflow::serving::StatusProto& ModelVersionStatus::_internal_status() const {
  return *status_;
}
inline const ::tensorflow::serving::StatusProto& ModelVersionStatus::status() const {
  const ::tensorflow::serving::StatusProto* p = status_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.ModelVersionStatus.status)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::serving::StatusProto*>(
      &::tensorflow::serving::_StatusProto_default_instance_);
}
inline ::tensorflow::serving::StatusProto* ModelVersionStatus::release_status() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ModelVersionStatus.status)
  
  ::tensorflow::serving::StatusProto* temp = status_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  status_ = NULL;
  return temp;
}
inline ::tensorflow::serving::StatusProto* ModelVersionStatus::unsafe_arena_release_status() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.ModelVersionStatus.status)
  
  ::tensorflow::serving::StatusProto* temp = status_;
  status_ = NULL;
  return temp;
}
inline ::tensorflow::serving::StatusProto* ModelVersionStatus::mutable_status() {
  
  if (status_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::StatusProto>(GetArenaNoVirtual());
    status_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ModelVersionStatus.status)
  return status_;
}
inline void ModelVersionStatus::set_allocated_status(::tensorflow::serving::StatusProto* status) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(status_);
  }
  if (status) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(status)->GetArena();
    if (message_arena != submessage_arena) {
      status = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, status, submessage_arena);
    }
    
  } else {
    
  }
  status_ = status;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ModelVersionStatus.status)
}

// -------------------------------------------------------------------

// GetModelStatusResponse

// repeated .tensorflow.serving.ModelVersionStatus model_version_status = 1[json_name = "model_version_status"];
inline int GetModelStatusResponse::model_version_status_size() const {
  return model_version_status_.size();
}
inline void GetModelStatusResponse::clear_model_version_status() {
  model_version_status_.Clear();
}
inline ::tensorflow::serving::ModelVersionStatus* GetModelStatusResponse::mutable_model_version_status(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.GetModelStatusResponse.model_version_status)
  return model_version_status_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::serving::ModelVersionStatus >*
GetModelStatusResponse::mutable_model_version_status() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.GetModelStatusResponse.model_version_status)
  return &model_version_status_;
}
inline const ::tensorflow::serving::ModelVersionStatus& GetModelStatusResponse::model_version_status(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.GetModelStatusResponse.model_version_status)
  return model_version_status_.Get(index);
}
inline ::tensorflow::serving::ModelVersionStatus* GetModelStatusResponse::add_model_version_status() {
  // @@protoc_insertion_point(field_add:tensorflow.serving.GetModelStatusResponse.model_version_status)
  return model_version_status_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::serving::ModelVersionStatus >&
GetModelStatusResponse::model_version_status() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.GetModelStatusResponse.model_version_status)
  return model_version_status_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::serving::ModelVersionStatus_State> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::serving::ModelVersionStatus_State>() {
  return ::tensorflow::serving::ModelVersionStatus_State_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto
