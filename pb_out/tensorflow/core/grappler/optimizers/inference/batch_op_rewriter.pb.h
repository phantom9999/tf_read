// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/grappler/optimizers/inference/batch_op_rewriter.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto 

namespace protobuf_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto
namespace tensorflow {
namespace serving {
class BatchOpRewriteConfig;
class BatchOpRewriteConfigDefaultTypeInternal;
extern BatchOpRewriteConfigDefaultTypeInternal _BatchOpRewriteConfig_default_instance_;
class BatchOpRewriteConfig_AdaptiveBatchSchedulerOption;
class BatchOpRewriteConfig_AdaptiveBatchSchedulerOptionDefaultTypeInternal;
extern BatchOpRewriteConfig_AdaptiveBatchSchedulerOptionDefaultTypeInternal _BatchOpRewriteConfig_AdaptiveBatchSchedulerOption_default_instance_;
class BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse;
class BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUseDefaultTypeInternal;
extern BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUseDefaultTypeInternal _BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::serving::BatchOpRewriteConfig* Arena::CreateMaybeMessage<::tensorflow::serving::BatchOpRewriteConfig>(Arena*);
template<> ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption* Arena::CreateMaybeMessage<::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption>(Arena*);
template<> ::tensorflow::serving::BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse* Arena::CreateMaybeMessage<::tensorflow::serving::BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace serving {

// ===================================================================

class BatchOpRewriteConfig_AdaptiveBatchSchedulerOption : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption) */ {
 public:
  BatchOpRewriteConfig_AdaptiveBatchSchedulerOption();
  virtual ~BatchOpRewriteConfig_AdaptiveBatchSchedulerOption();

  BatchOpRewriteConfig_AdaptiveBatchSchedulerOption(const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& from);

  inline BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& operator=(const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BatchOpRewriteConfig_AdaptiveBatchSchedulerOption(BatchOpRewriteConfig_AdaptiveBatchSchedulerOption&& from) noexcept
    : BatchOpRewriteConfig_AdaptiveBatchSchedulerOption() {
    *this = ::std::move(from);
  }

  inline BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& operator=(BatchOpRewriteConfig_AdaptiveBatchSchedulerOption&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption* internal_default_instance() {
    return reinterpret_cast<const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption*>(
               &_BatchOpRewriteConfig_AdaptiveBatchSchedulerOption_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BatchOpRewriteConfig_AdaptiveBatchSchedulerOption* other);
  friend void swap(BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& a, BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BatchOpRewriteConfig_AdaptiveBatchSchedulerOption* New() const final {
    return CreateMaybeMessage<BatchOpRewriteConfig_AdaptiveBatchSchedulerOption>(NULL);
  }

  BatchOpRewriteConfig_AdaptiveBatchSchedulerOption* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BatchOpRewriteConfig_AdaptiveBatchSchedulerOption>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& from);
  void MergeFrom(const BatchOpRewriteConfig_AdaptiveBatchSchedulerOption& from);
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
  void InternalSwap(BatchOpRewriteConfig_AdaptiveBatchSchedulerOption* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.UInt32Value min_inflight_batches_limit = 1;
  bool has_min_inflight_batches_limit() const;
  void clear_min_inflight_batches_limit();
  static const int kMinInflightBatchesLimitFieldNumber = 1;
  private:
  const ::google::protobuf::UInt32Value& _internal_min_inflight_batches_limit() const;
  public:
  const ::google::protobuf::UInt32Value& min_inflight_batches_limit() const;
  ::google::protobuf::UInt32Value* release_min_inflight_batches_limit();
  ::google::protobuf::UInt32Value* mutable_min_inflight_batches_limit();
  void set_allocated_min_inflight_batches_limit(::google::protobuf::UInt32Value* min_inflight_batches_limit);

  // .google.protobuf.UInt32Value initial_inflight_batches_limit = 2;
  bool has_initial_inflight_batches_limit() const;
  void clear_initial_inflight_batches_limit();
  static const int kInitialInflightBatchesLimitFieldNumber = 2;
  private:
  const ::google::protobuf::UInt32Value& _internal_initial_inflight_batches_limit() const;
  public:
  const ::google::protobuf::UInt32Value& initial_inflight_batches_limit() const;
  ::google::protobuf::UInt32Value* release_initial_inflight_batches_limit();
  ::google::protobuf::UInt32Value* mutable_initial_inflight_batches_limit();
  void set_allocated_initial_inflight_batches_limit(::google::protobuf::UInt32Value* initial_inflight_batches_limit);

  // .google.protobuf.UInt32Value max_inflight_batches_limit = 3;
  bool has_max_inflight_batches_limit() const;
  void clear_max_inflight_batches_limit();
  static const int kMaxInflightBatchesLimitFieldNumber = 3;
  private:
  const ::google::protobuf::UInt32Value& _internal_max_inflight_batches_limit() const;
  public:
  const ::google::protobuf::UInt32Value& max_inflight_batches_limit() const;
  ::google::protobuf::UInt32Value* release_max_inflight_batches_limit();
  ::google::protobuf::UInt32Value* mutable_max_inflight_batches_limit();
  void set_allocated_max_inflight_batches_limit(::google::protobuf::UInt32Value* max_inflight_batches_limit);

  // .google.protobuf.UInt32Value batches_to_average_over = 4;
  bool has_batches_to_average_over() const;
  void clear_batches_to_average_over();
  static const int kBatchesToAverageOverFieldNumber = 4;
  private:
  const ::google::protobuf::UInt32Value& _internal_batches_to_average_over() const;
  public:
  const ::google::protobuf::UInt32Value& batches_to_average_over() const;
  ::google::protobuf::UInt32Value* release_batches_to_average_over();
  ::google::protobuf::UInt32Value* mutable_batches_to_average_over();
  void set_allocated_batches_to_average_over(::google::protobuf::UInt32Value* batches_to_average_over);

  // @@protoc_insertion_point(class_scope:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::UInt32Value* min_inflight_batches_limit_;
  ::google::protobuf::UInt32Value* initial_inflight_batches_limit_;
  ::google::protobuf::UInt32Value* max_inflight_batches_limit_;
  ::google::protobuf::UInt32Value* batches_to_average_over_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse, 
    ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse, 
    ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse();
  BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse& other);
  static const BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse*>(&_BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class BatchOpRewriteConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.BatchOpRewriteConfig) */ {
 public:
  BatchOpRewriteConfig();
  virtual ~BatchOpRewriteConfig();

  BatchOpRewriteConfig(const BatchOpRewriteConfig& from);

  inline BatchOpRewriteConfig& operator=(const BatchOpRewriteConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BatchOpRewriteConfig(BatchOpRewriteConfig&& from) noexcept
    : BatchOpRewriteConfig() {
    *this = ::std::move(from);
  }

  inline BatchOpRewriteConfig& operator=(BatchOpRewriteConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BatchOpRewriteConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BatchOpRewriteConfig* internal_default_instance() {
    return reinterpret_cast<const BatchOpRewriteConfig*>(
               &_BatchOpRewriteConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(BatchOpRewriteConfig* other);
  friend void swap(BatchOpRewriteConfig& a, BatchOpRewriteConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BatchOpRewriteConfig* New() const final {
    return CreateMaybeMessage<BatchOpRewriteConfig>(NULL);
  }

  BatchOpRewriteConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BatchOpRewriteConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BatchOpRewriteConfig& from);
  void MergeFrom(const BatchOpRewriteConfig& from);
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
  void InternalSwap(BatchOpRewriteConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef BatchOpRewriteConfig_AdaptiveBatchSchedulerOption AdaptiveBatchSchedulerOption;

  // accessors -------------------------------------------------------

  // map<string, .tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption> model_scheduler_options = 1;
  int model_scheduler_options_size() const;
  void clear_model_scheduler_options();
  static const int kModelSchedulerOptionsFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption >&
      model_scheduler_options() const;
  ::google::protobuf::Map< ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption >*
      mutable_model_scheduler_options();

  // bool enable_adaptive_shared_batching_thread_pool = 4;
  void clear_enable_adaptive_shared_batching_thread_pool();
  static const int kEnableAdaptiveSharedBatchingThreadPoolFieldNumber = 4;
  bool enable_adaptive_shared_batching_thread_pool() const;
  void set_enable_adaptive_shared_batching_thread_pool(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.serving.BatchOpRewriteConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      BatchOpRewriteConfig_ModelSchedulerOptionsEntry_DoNotUse,
      ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > model_scheduler_options_;
  bool enable_adaptive_shared_batching_thread_pool_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BatchOpRewriteConfig_AdaptiveBatchSchedulerOption

// .google.protobuf.UInt32Value min_inflight_batches_limit = 1;
inline bool BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::has_min_inflight_batches_limit() const {
  return this != internal_default_instance() && min_inflight_batches_limit_ != NULL;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::_internal_min_inflight_batches_limit() const {
  return *min_inflight_batches_limit_;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::min_inflight_batches_limit() const {
  const ::google::protobuf::UInt32Value* p = min_inflight_batches_limit_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.min_inflight_batches_limit)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::UInt32Value*>(
      &::google::protobuf::_UInt32Value_default_instance_);
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::release_min_inflight_batches_limit() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.min_inflight_batches_limit)
  
  ::google::protobuf::UInt32Value* temp = min_inflight_batches_limit_;
  min_inflight_batches_limit_ = NULL;
  return temp;
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::mutable_min_inflight_batches_limit() {
  
  if (min_inflight_batches_limit_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::UInt32Value>(GetArenaNoVirtual());
    min_inflight_batches_limit_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.min_inflight_batches_limit)
  return min_inflight_batches_limit_;
}
inline void BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::set_allocated_min_inflight_batches_limit(::google::protobuf::UInt32Value* min_inflight_batches_limit) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(min_inflight_batches_limit_);
  }
  if (min_inflight_batches_limit) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(min_inflight_batches_limit)->GetArena();
    if (message_arena != submessage_arena) {
      min_inflight_batches_limit = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, min_inflight_batches_limit, submessage_arena);
    }
    
  } else {
    
  }
  min_inflight_batches_limit_ = min_inflight_batches_limit;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.min_inflight_batches_limit)
}

// .google.protobuf.UInt32Value initial_inflight_batches_limit = 2;
inline bool BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::has_initial_inflight_batches_limit() const {
  return this != internal_default_instance() && initial_inflight_batches_limit_ != NULL;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::_internal_initial_inflight_batches_limit() const {
  return *initial_inflight_batches_limit_;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::initial_inflight_batches_limit() const {
  const ::google::protobuf::UInt32Value* p = initial_inflight_batches_limit_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.initial_inflight_batches_limit)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::UInt32Value*>(
      &::google::protobuf::_UInt32Value_default_instance_);
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::release_initial_inflight_batches_limit() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.initial_inflight_batches_limit)
  
  ::google::protobuf::UInt32Value* temp = initial_inflight_batches_limit_;
  initial_inflight_batches_limit_ = NULL;
  return temp;
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::mutable_initial_inflight_batches_limit() {
  
  if (initial_inflight_batches_limit_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::UInt32Value>(GetArenaNoVirtual());
    initial_inflight_batches_limit_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.initial_inflight_batches_limit)
  return initial_inflight_batches_limit_;
}
inline void BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::set_allocated_initial_inflight_batches_limit(::google::protobuf::UInt32Value* initial_inflight_batches_limit) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(initial_inflight_batches_limit_);
  }
  if (initial_inflight_batches_limit) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(initial_inflight_batches_limit)->GetArena();
    if (message_arena != submessage_arena) {
      initial_inflight_batches_limit = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, initial_inflight_batches_limit, submessage_arena);
    }
    
  } else {
    
  }
  initial_inflight_batches_limit_ = initial_inflight_batches_limit;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.initial_inflight_batches_limit)
}

// .google.protobuf.UInt32Value max_inflight_batches_limit = 3;
inline bool BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::has_max_inflight_batches_limit() const {
  return this != internal_default_instance() && max_inflight_batches_limit_ != NULL;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::_internal_max_inflight_batches_limit() const {
  return *max_inflight_batches_limit_;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::max_inflight_batches_limit() const {
  const ::google::protobuf::UInt32Value* p = max_inflight_batches_limit_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.max_inflight_batches_limit)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::UInt32Value*>(
      &::google::protobuf::_UInt32Value_default_instance_);
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::release_max_inflight_batches_limit() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.max_inflight_batches_limit)
  
  ::google::protobuf::UInt32Value* temp = max_inflight_batches_limit_;
  max_inflight_batches_limit_ = NULL;
  return temp;
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::mutable_max_inflight_batches_limit() {
  
  if (max_inflight_batches_limit_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::UInt32Value>(GetArenaNoVirtual());
    max_inflight_batches_limit_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.max_inflight_batches_limit)
  return max_inflight_batches_limit_;
}
inline void BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::set_allocated_max_inflight_batches_limit(::google::protobuf::UInt32Value* max_inflight_batches_limit) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(max_inflight_batches_limit_);
  }
  if (max_inflight_batches_limit) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(max_inflight_batches_limit)->GetArena();
    if (message_arena != submessage_arena) {
      max_inflight_batches_limit = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, max_inflight_batches_limit, submessage_arena);
    }
    
  } else {
    
  }
  max_inflight_batches_limit_ = max_inflight_batches_limit;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.max_inflight_batches_limit)
}

// .google.protobuf.UInt32Value batches_to_average_over = 4;
inline bool BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::has_batches_to_average_over() const {
  return this != internal_default_instance() && batches_to_average_over_ != NULL;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::_internal_batches_to_average_over() const {
  return *batches_to_average_over_;
}
inline const ::google::protobuf::UInt32Value& BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::batches_to_average_over() const {
  const ::google::protobuf::UInt32Value* p = batches_to_average_over_;
  // @@protoc_insertion_point(field_get:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.batches_to_average_over)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::UInt32Value*>(
      &::google::protobuf::_UInt32Value_default_instance_);
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::release_batches_to_average_over() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.batches_to_average_over)
  
  ::google::protobuf::UInt32Value* temp = batches_to_average_over_;
  batches_to_average_over_ = NULL;
  return temp;
}
inline ::google::protobuf::UInt32Value* BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::mutable_batches_to_average_over() {
  
  if (batches_to_average_over_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::UInt32Value>(GetArenaNoVirtual());
    batches_to_average_over_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.batches_to_average_over)
  return batches_to_average_over_;
}
inline void BatchOpRewriteConfig_AdaptiveBatchSchedulerOption::set_allocated_batches_to_average_over(::google::protobuf::UInt32Value* batches_to_average_over) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(batches_to_average_over_);
  }
  if (batches_to_average_over) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(batches_to_average_over)->GetArena();
    if (message_arena != submessage_arena) {
      batches_to_average_over = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, batches_to_average_over, submessage_arena);
    }
    
  } else {
    
  }
  batches_to_average_over_ = batches_to_average_over;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption.batches_to_average_over)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// BatchOpRewriteConfig

// bool enable_adaptive_shared_batching_thread_pool = 4;
inline void BatchOpRewriteConfig::clear_enable_adaptive_shared_batching_thread_pool() {
  enable_adaptive_shared_batching_thread_pool_ = false;
}
inline bool BatchOpRewriteConfig::enable_adaptive_shared_batching_thread_pool() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.BatchOpRewriteConfig.enable_adaptive_shared_batching_thread_pool)
  return enable_adaptive_shared_batching_thread_pool_;
}
inline void BatchOpRewriteConfig::set_enable_adaptive_shared_batching_thread_pool(bool value) {
  
  enable_adaptive_shared_batching_thread_pool_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.serving.BatchOpRewriteConfig.enable_adaptive_shared_batching_thread_pool)
}

// map<string, .tensorflow.serving.BatchOpRewriteConfig.AdaptiveBatchSchedulerOption> model_scheduler_options = 1;
inline int BatchOpRewriteConfig::model_scheduler_options_size() const {
  return model_scheduler_options_.size();
}
inline void BatchOpRewriteConfig::clear_model_scheduler_options() {
  model_scheduler_options_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption >&
BatchOpRewriteConfig::model_scheduler_options() const {
  // @@protoc_insertion_point(field_map:tensorflow.serving.BatchOpRewriteConfig.model_scheduler_options)
  return model_scheduler_options_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::tensorflow::serving::BatchOpRewriteConfig_AdaptiveBatchSchedulerOption >*
BatchOpRewriteConfig::mutable_model_scheduler_options() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.serving.BatchOpRewriteConfig.model_scheduler_options)
  return model_scheduler_options_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2fgrappler_2foptimizers_2finference_2fbatch_5fop_5frewriter_2eproto
