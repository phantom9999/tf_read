// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/tpu/kernels/tpu_compilation_cache.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto

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
#include "tensorflow/compiler/tf2xla/host_compute_metadata.pb.h"
#include "tensorflow/core/tpu/kernels/tpu_compilation_cache_common.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto 

namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto
namespace tensorflow {
namespace tpu {
class GetTpuProgramResponseExternal;
class GetTpuProgramResponseExternalDefaultTypeInternal;
extern GetTpuProgramResponseExternalDefaultTypeInternal _GetTpuProgramResponseExternal_default_instance_;
class GetTpuProgramResponseExternal_Blob;
class GetTpuProgramResponseExternal_BlobDefaultTypeInternal;
extern GetTpuProgramResponseExternal_BlobDefaultTypeInternal _GetTpuProgramResponseExternal_Blob_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::tpu::GetTpuProgramResponseExternal* Arena::CreateMaybeMessage<::tensorflow::tpu::GetTpuProgramResponseExternal>(Arena*);
template<> ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* Arena::CreateMaybeMessage<::tensorflow::tpu::GetTpuProgramResponseExternal_Blob>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace tpu {

// ===================================================================

class GetTpuProgramResponseExternal_Blob : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.GetTpuProgramResponseExternal.Blob) */ {
 public:
  GetTpuProgramResponseExternal_Blob();
  virtual ~GetTpuProgramResponseExternal_Blob();

  GetTpuProgramResponseExternal_Blob(const GetTpuProgramResponseExternal_Blob& from);

  inline GetTpuProgramResponseExternal_Blob& operator=(const GetTpuProgramResponseExternal_Blob& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetTpuProgramResponseExternal_Blob(GetTpuProgramResponseExternal_Blob&& from) noexcept
    : GetTpuProgramResponseExternal_Blob() {
    *this = ::std::move(from);
  }

  inline GetTpuProgramResponseExternal_Blob& operator=(GetTpuProgramResponseExternal_Blob&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetTpuProgramResponseExternal_Blob& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetTpuProgramResponseExternal_Blob* internal_default_instance() {
    return reinterpret_cast<const GetTpuProgramResponseExternal_Blob*>(
               &_GetTpuProgramResponseExternal_Blob_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GetTpuProgramResponseExternal_Blob* other);
  friend void swap(GetTpuProgramResponseExternal_Blob& a, GetTpuProgramResponseExternal_Blob& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetTpuProgramResponseExternal_Blob* New() const final {
    return CreateMaybeMessage<GetTpuProgramResponseExternal_Blob>(NULL);
  }

  GetTpuProgramResponseExternal_Blob* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetTpuProgramResponseExternal_Blob>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetTpuProgramResponseExternal_Blob& from);
  void MergeFrom(const GetTpuProgramResponseExternal_Blob& from);
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
  void InternalSwap(GetTpuProgramResponseExternal_Blob* other);
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

  // bytes data = 1;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.GetTpuProgramResponseExternal.Blob)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetTpuProgramResponseExternal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.GetTpuProgramResponseExternal) */ {
 public:
  GetTpuProgramResponseExternal();
  virtual ~GetTpuProgramResponseExternal();

  GetTpuProgramResponseExternal(const GetTpuProgramResponseExternal& from);

  inline GetTpuProgramResponseExternal& operator=(const GetTpuProgramResponseExternal& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetTpuProgramResponseExternal(GetTpuProgramResponseExternal&& from) noexcept
    : GetTpuProgramResponseExternal() {
    *this = ::std::move(from);
  }

  inline GetTpuProgramResponseExternal& operator=(GetTpuProgramResponseExternal&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetTpuProgramResponseExternal& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetTpuProgramResponseExternal* internal_default_instance() {
    return reinterpret_cast<const GetTpuProgramResponseExternal*>(
               &_GetTpuProgramResponseExternal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(GetTpuProgramResponseExternal* other);
  friend void swap(GetTpuProgramResponseExternal& a, GetTpuProgramResponseExternal& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetTpuProgramResponseExternal* New() const final {
    return CreateMaybeMessage<GetTpuProgramResponseExternal>(NULL);
  }

  GetTpuProgramResponseExternal* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetTpuProgramResponseExternal>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetTpuProgramResponseExternal& from);
  void MergeFrom(const GetTpuProgramResponseExternal& from);
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
  void InternalSwap(GetTpuProgramResponseExternal* other);
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

  typedef GetTpuProgramResponseExternal_Blob Blob;

  // accessors -------------------------------------------------------

  // .tensorflow.tpu.GetTpuProgramResponseExternal.Blob proto = 1;
  bool has_proto() const;
  void clear_proto();
  static const int kProtoFieldNumber = 1;
  private:
  const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& _internal_proto() const;
  public:
  const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& proto() const;
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* release_proto();
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* mutable_proto();
  void set_allocated_proto(::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* proto);

  // .tensorflow.tf2xla.HostComputeMetadata host_compute_metadata = 2;
  bool has_host_compute_metadata() const;
  void clear_host_compute_metadata();
  static const int kHostComputeMetadataFieldNumber = 2;
  private:
  const ::tensorflow::tf2xla::HostComputeMetadata& _internal_host_compute_metadata() const;
  public:
  const ::tensorflow::tf2xla::HostComputeMetadata& host_compute_metadata() const;
  ::tensorflow::tf2xla::HostComputeMetadata* release_host_compute_metadata();
  ::tensorflow::tf2xla::HostComputeMetadata* mutable_host_compute_metadata();
  void set_allocated_host_compute_metadata(::tensorflow::tf2xla::HostComputeMetadata* host_compute_metadata);

  // .tensorflow.tpu.GetTpuProgramResponseExternal.Blob compiler_metadata = 4;
  bool has_compiler_metadata() const;
  void clear_compiler_metadata();
  static const int kCompilerMetadataFieldNumber = 4;
  private:
  const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& _internal_compiler_metadata() const;
  public:
  const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& compiler_metadata() const;
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* release_compiler_metadata();
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* mutable_compiler_metadata();
  void set_allocated_compiler_metadata(::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* compiler_metadata);

  // bool may_modify_variables = 3;
  void clear_may_modify_variables();
  static const int kMayModifyVariablesFieldNumber = 3;
  bool may_modify_variables() const;
  void set_may_modify_variables(bool value);

  // bool is_empty = 5;
  void clear_is_empty();
  static const int kIsEmptyFieldNumber = 5;
  bool is_empty() const;
  void set_is_empty(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.GetTpuProgramResponseExternal)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* proto_;
  ::tensorflow::tf2xla::HostComputeMetadata* host_compute_metadata_;
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* compiler_metadata_;
  bool may_modify_variables_;
  bool is_empty_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetTpuProgramResponseExternal_Blob

// bytes data = 1;
inline void GetTpuProgramResponseExternal_Blob::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetTpuProgramResponseExternal_Blob::data() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
  return data_.GetNoArena();
}
inline void GetTpuProgramResponseExternal_Blob::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
}
#if LANG_CXX11
inline void GetTpuProgramResponseExternal_Blob::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
}
#endif
inline void GetTpuProgramResponseExternal_Blob::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
}
inline void GetTpuProgramResponseExternal_Blob::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
}
inline ::std::string* GetTpuProgramResponseExternal_Blob::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetTpuProgramResponseExternal_Blob::release_data() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetTpuProgramResponseExternal_Blob::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.GetTpuProgramResponseExternal.Blob.data)
}

// -------------------------------------------------------------------

// GetTpuProgramResponseExternal

// .tensorflow.tpu.GetTpuProgramResponseExternal.Blob proto = 1;
inline bool GetTpuProgramResponseExternal::has_proto() const {
  return this != internal_default_instance() && proto_ != NULL;
}
inline void GetTpuProgramResponseExternal::clear_proto() {
  if (GetArenaNoVirtual() == NULL && proto_ != NULL) {
    delete proto_;
  }
  proto_ = NULL;
}
inline const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& GetTpuProgramResponseExternal::_internal_proto() const {
  return *proto_;
}
inline const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& GetTpuProgramResponseExternal::proto() const {
  const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* p = proto_;
  // @@protoc_insertion_point(field_get:tensorflow.tpu.GetTpuProgramResponseExternal.proto)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob*>(
      &::tensorflow::tpu::_GetTpuProgramResponseExternal_Blob_default_instance_);
}
inline ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* GetTpuProgramResponseExternal::release_proto() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.GetTpuProgramResponseExternal.proto)
  
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* temp = proto_;
  proto_ = NULL;
  return temp;
}
inline ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* GetTpuProgramResponseExternal::mutable_proto() {
  
  if (proto_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::tpu::GetTpuProgramResponseExternal_Blob>(GetArenaNoVirtual());
    proto_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.GetTpuProgramResponseExternal.proto)
  return proto_;
}
inline void GetTpuProgramResponseExternal::set_allocated_proto(::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* proto) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete proto_;
  }
  if (proto) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      proto = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, proto, submessage_arena);
    }
    
  } else {
    
  }
  proto_ = proto;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.GetTpuProgramResponseExternal.proto)
}

// .tensorflow.tf2xla.HostComputeMetadata host_compute_metadata = 2;
inline bool GetTpuProgramResponseExternal::has_host_compute_metadata() const {
  return this != internal_default_instance() && host_compute_metadata_ != NULL;
}
inline const ::tensorflow::tf2xla::HostComputeMetadata& GetTpuProgramResponseExternal::_internal_host_compute_metadata() const {
  return *host_compute_metadata_;
}
inline const ::tensorflow::tf2xla::HostComputeMetadata& GetTpuProgramResponseExternal::host_compute_metadata() const {
  const ::tensorflow::tf2xla::HostComputeMetadata* p = host_compute_metadata_;
  // @@protoc_insertion_point(field_get:tensorflow.tpu.GetTpuProgramResponseExternal.host_compute_metadata)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::tf2xla::HostComputeMetadata*>(
      &::tensorflow::tf2xla::_HostComputeMetadata_default_instance_);
}
inline ::tensorflow::tf2xla::HostComputeMetadata* GetTpuProgramResponseExternal::release_host_compute_metadata() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.GetTpuProgramResponseExternal.host_compute_metadata)
  
  ::tensorflow::tf2xla::HostComputeMetadata* temp = host_compute_metadata_;
  host_compute_metadata_ = NULL;
  return temp;
}
inline ::tensorflow::tf2xla::HostComputeMetadata* GetTpuProgramResponseExternal::mutable_host_compute_metadata() {
  
  if (host_compute_metadata_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::tf2xla::HostComputeMetadata>(GetArenaNoVirtual());
    host_compute_metadata_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.GetTpuProgramResponseExternal.host_compute_metadata)
  return host_compute_metadata_;
}
inline void GetTpuProgramResponseExternal::set_allocated_host_compute_metadata(::tensorflow::tf2xla::HostComputeMetadata* host_compute_metadata) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(host_compute_metadata_);
  }
  if (host_compute_metadata) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(host_compute_metadata)->GetArena();
    if (message_arena != submessage_arena) {
      host_compute_metadata = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, host_compute_metadata, submessage_arena);
    }
    
  } else {
    
  }
  host_compute_metadata_ = host_compute_metadata;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.GetTpuProgramResponseExternal.host_compute_metadata)
}

// bool may_modify_variables = 3;
inline void GetTpuProgramResponseExternal::clear_may_modify_variables() {
  may_modify_variables_ = false;
}
inline bool GetTpuProgramResponseExternal::may_modify_variables() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.GetTpuProgramResponseExternal.may_modify_variables)
  return may_modify_variables_;
}
inline void GetTpuProgramResponseExternal::set_may_modify_variables(bool value) {
  
  may_modify_variables_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.GetTpuProgramResponseExternal.may_modify_variables)
}

// .tensorflow.tpu.GetTpuProgramResponseExternal.Blob compiler_metadata = 4;
inline bool GetTpuProgramResponseExternal::has_compiler_metadata() const {
  return this != internal_default_instance() && compiler_metadata_ != NULL;
}
inline void GetTpuProgramResponseExternal::clear_compiler_metadata() {
  if (GetArenaNoVirtual() == NULL && compiler_metadata_ != NULL) {
    delete compiler_metadata_;
  }
  compiler_metadata_ = NULL;
}
inline const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& GetTpuProgramResponseExternal::_internal_compiler_metadata() const {
  return *compiler_metadata_;
}
inline const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob& GetTpuProgramResponseExternal::compiler_metadata() const {
  const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* p = compiler_metadata_;
  // @@protoc_insertion_point(field_get:tensorflow.tpu.GetTpuProgramResponseExternal.compiler_metadata)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob*>(
      &::tensorflow::tpu::_GetTpuProgramResponseExternal_Blob_default_instance_);
}
inline ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* GetTpuProgramResponseExternal::release_compiler_metadata() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.GetTpuProgramResponseExternal.compiler_metadata)
  
  ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* temp = compiler_metadata_;
  compiler_metadata_ = NULL;
  return temp;
}
inline ::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* GetTpuProgramResponseExternal::mutable_compiler_metadata() {
  
  if (compiler_metadata_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::tpu::GetTpuProgramResponseExternal_Blob>(GetArenaNoVirtual());
    compiler_metadata_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.GetTpuProgramResponseExternal.compiler_metadata)
  return compiler_metadata_;
}
inline void GetTpuProgramResponseExternal::set_allocated_compiler_metadata(::tensorflow::tpu::GetTpuProgramResponseExternal_Blob* compiler_metadata) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete compiler_metadata_;
  }
  if (compiler_metadata) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      compiler_metadata = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, compiler_metadata, submessage_arena);
    }
    
  } else {
    
  }
  compiler_metadata_ = compiler_metadata;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.GetTpuProgramResponseExternal.compiler_metadata)
}

// bool is_empty = 5;
inline void GetTpuProgramResponseExternal::clear_is_empty() {
  is_empty_ = false;
}
inline bool GetTpuProgramResponseExternal::is_empty() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.GetTpuProgramResponseExternal.is_empty)
  return is_empty_;
}
inline void GetTpuProgramResponseExternal::set_is_empty(bool value) {
  
  is_empty_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.GetTpuProgramResponseExternal.is_empty)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tpu
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_2eproto