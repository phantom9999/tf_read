// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/core/logging.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_5fserving_2fcore_2flogging_2eproto
#define PROTOBUF_INCLUDED_tensorflow_5fserving_2fcore_2flogging_2eproto

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
#include "tensorflow_serving/apis/model.pb.h"
#include "tensorflow_serving/config/logging_config.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_5fserving_2fcore_2flogging_2eproto 

namespace protobuf_tensorflow_5fserving_2fcore_2flogging_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_5fserving_2fcore_2flogging_2eproto
namespace tensorflow {
namespace serving {
class LogMetadata;
class LogMetadataDefaultTypeInternal;
extern LogMetadataDefaultTypeInternal _LogMetadata_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::serving::LogMetadata* Arena::CreateMaybeMessage<::tensorflow::serving::LogMetadata>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace serving {

// ===================================================================

class LogMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.LogMetadata) */ {
 public:
  LogMetadata();
  virtual ~LogMetadata();

  LogMetadata(const LogMetadata& from);

  inline LogMetadata& operator=(const LogMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogMetadata(LogMetadata&& from) noexcept
    : LogMetadata() {
    *this = ::std::move(from);
  }

  inline LogMetadata& operator=(LogMetadata&& from) noexcept {
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
  static const LogMetadata& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogMetadata* internal_default_instance() {
    return reinterpret_cast<const LogMetadata*>(
               &_LogMetadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(LogMetadata* other);
  void Swap(LogMetadata* other);
  friend void swap(LogMetadata& a, LogMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogMetadata* New() const final {
    return CreateMaybeMessage<LogMetadata>(NULL);
  }

  LogMetadata* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LogMetadata>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LogMetadata& from);
  void MergeFrom(const LogMetadata& from);
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
  void InternalSwap(LogMetadata* other);
  protected:
  explicit LogMetadata(::google::protobuf::Arena* arena);
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

  // repeated string saved_model_tags = 3;
  int saved_model_tags_size() const;
  void clear_saved_model_tags();
  static const int kSavedModelTagsFieldNumber = 3;
  const ::std::string& saved_model_tags(int index) const;
  ::std::string* mutable_saved_model_tags(int index);
  void set_saved_model_tags(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_saved_model_tags(int index, ::std::string&& value);
  #endif
  void set_saved_model_tags(int index, const char* value);
  void set_saved_model_tags(int index, const char* value, size_t size);
  ::std::string* add_saved_model_tags();
  void add_saved_model_tags(const ::std::string& value);
  #if LANG_CXX11
  void add_saved_model_tags(::std::string&& value);
  #endif
  void add_saved_model_tags(const char* value);
  void add_saved_model_tags(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& saved_model_tags() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_saved_model_tags();

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

  // .tensorflow.serving.SamplingConfig sampling_config = 2;
  bool has_sampling_config() const;
  void clear_sampling_config();
  static const int kSamplingConfigFieldNumber = 2;
  private:
  const ::tensorflow::serving::SamplingConfig& _internal_sampling_config() const;
  public:
  const ::tensorflow::serving::SamplingConfig& sampling_config() const;
  ::tensorflow::serving::SamplingConfig* release_sampling_config();
  ::tensorflow::serving::SamplingConfig* mutable_sampling_config();
  void set_allocated_sampling_config(::tensorflow::serving::SamplingConfig* sampling_config);
  void unsafe_arena_set_allocated_sampling_config(
      ::tensorflow::serving::SamplingConfig* sampling_config);
  ::tensorflow::serving::SamplingConfig* unsafe_arena_release_sampling_config();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.LogMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::std::string> saved_model_tags_;
  ::tensorflow::serving::ModelSpec* model_spec_;
  ::tensorflow::serving::SamplingConfig* sampling_config_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fcore_2flogging_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogMetadata

// .tensorflow.serving.ModelSpec model_spec = 1;
inline bool LogMetadata::has_model_spec() const {
  return this != internal_default_instance() && model_spec_ != NULL;
}
inline const ::tensorflow::serving::ModelSpec& LogMetadata::_internal_model_spec() const {
  return *model_spec_;
}
inline const ::tensorflow::serving::ModelSpec& LogMetadata::model_spec() const {
  const ::tensorflow::serving::ModelSpec* p = model_spec_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.LogMetadata.model_spec)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelSpec*>(
      &::tensorflow::serving::_ModelSpec_default_instance_);
}
inline ::tensorflow::serving::ModelSpec* LogMetadata::release_model_spec() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.LogMetadata.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* LogMetadata::unsafe_arena_release_model_spec() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.LogMetadata.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  model_spec_ = NULL;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* LogMetadata::mutable_model_spec() {
  
  if (model_spec_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelSpec>(GetArenaNoVirtual());
    model_spec_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.LogMetadata.model_spec)
  return model_spec_;
}
inline void LogMetadata::set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec) {
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
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.LogMetadata.model_spec)
}

// .tensorflow.serving.SamplingConfig sampling_config = 2;
inline bool LogMetadata::has_sampling_config() const {
  return this != internal_default_instance() && sampling_config_ != NULL;
}
inline const ::tensorflow::serving::SamplingConfig& LogMetadata::_internal_sampling_config() const {
  return *sampling_config_;
}
inline const ::tensorflow::serving::SamplingConfig& LogMetadata::sampling_config() const {
  const ::tensorflow::serving::SamplingConfig* p = sampling_config_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.LogMetadata.sampling_config)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::serving::SamplingConfig*>(
      &::tensorflow::serving::_SamplingConfig_default_instance_);
}
inline ::tensorflow::serving::SamplingConfig* LogMetadata::release_sampling_config() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.LogMetadata.sampling_config)
  
  ::tensorflow::serving::SamplingConfig* temp = sampling_config_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  sampling_config_ = NULL;
  return temp;
}
inline ::tensorflow::serving::SamplingConfig* LogMetadata::unsafe_arena_release_sampling_config() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.LogMetadata.sampling_config)
  
  ::tensorflow::serving::SamplingConfig* temp = sampling_config_;
  sampling_config_ = NULL;
  return temp;
}
inline ::tensorflow::serving::SamplingConfig* LogMetadata::mutable_sampling_config() {
  
  if (sampling_config_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::SamplingConfig>(GetArenaNoVirtual());
    sampling_config_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.LogMetadata.sampling_config)
  return sampling_config_;
}
inline void LogMetadata::set_allocated_sampling_config(::tensorflow::serving::SamplingConfig* sampling_config) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(sampling_config_);
  }
  if (sampling_config) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(sampling_config)->GetArena();
    if (message_arena != submessage_arena) {
      sampling_config = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, sampling_config, submessage_arena);
    }
    
  } else {
    
  }
  sampling_config_ = sampling_config;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.LogMetadata.sampling_config)
}

// repeated string saved_model_tags = 3;
inline int LogMetadata::saved_model_tags_size() const {
  return saved_model_tags_.size();
}
inline void LogMetadata::clear_saved_model_tags() {
  saved_model_tags_.Clear();
}
inline const ::std::string& LogMetadata::saved_model_tags(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.LogMetadata.saved_model_tags)
  return saved_model_tags_.Get(index);
}
inline ::std::string* LogMetadata::mutable_saved_model_tags(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.LogMetadata.saved_model_tags)
  return saved_model_tags_.Mutable(index);
}
inline void LogMetadata::set_saved_model_tags(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.LogMetadata.saved_model_tags)
  saved_model_tags_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void LogMetadata::set_saved_model_tags(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.LogMetadata.saved_model_tags)
  saved_model_tags_.Mutable(index)->assign(std::move(value));
}
#endif
inline void LogMetadata::set_saved_model_tags(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  saved_model_tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.LogMetadata.saved_model_tags)
}
inline void LogMetadata::set_saved_model_tags(int index, const char* value, size_t size) {
  saved_model_tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.LogMetadata.saved_model_tags)
}
inline ::std::string* LogMetadata::add_saved_model_tags() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.serving.LogMetadata.saved_model_tags)
  return saved_model_tags_.Add();
}
inline void LogMetadata::add_saved_model_tags(const ::std::string& value) {
  saved_model_tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.serving.LogMetadata.saved_model_tags)
}
#if LANG_CXX11
inline void LogMetadata::add_saved_model_tags(::std::string&& value) {
  saved_model_tags_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.serving.LogMetadata.saved_model_tags)
}
#endif
inline void LogMetadata::add_saved_model_tags(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  saved_model_tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.serving.LogMetadata.saved_model_tags)
}
inline void LogMetadata::add_saved_model_tags(const char* value, size_t size) {
  saved_model_tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.serving.LogMetadata.saved_model_tags)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LogMetadata::saved_model_tags() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.LogMetadata.saved_model_tags)
  return saved_model_tags_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LogMetadata::mutable_saved_model_tags() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.LogMetadata.saved_model_tags)
  return &saved_model_tags_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_5fserving_2fcore_2flogging_2eproto