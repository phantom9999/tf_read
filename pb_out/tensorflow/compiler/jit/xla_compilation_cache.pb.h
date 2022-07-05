// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/compiler/jit/xla_compilation_cache.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto

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
#include "tensorflow/compiler/xla/service/hlo.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto 

namespace protobuf_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto {
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
}  // namespace protobuf_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto
namespace tensorflow {
class XlaSerializedCacheEntry;
class XlaSerializedCacheEntryDefaultTypeInternal;
extern XlaSerializedCacheEntryDefaultTypeInternal _XlaSerializedCacheEntry_default_instance_;
class XlaSerializedCacheKey;
class XlaSerializedCacheKeyDefaultTypeInternal;
extern XlaSerializedCacheKeyDefaultTypeInternal _XlaSerializedCacheKey_default_instance_;
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::XlaSerializedCacheEntry* Arena::CreateMaybeMessage<::tensorflow::XlaSerializedCacheEntry>(Arena*);
template<> ::tensorflow::XlaSerializedCacheKey* Arena::CreateMaybeMessage<::tensorflow::XlaSerializedCacheKey>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {

// ===================================================================

class XlaSerializedCacheKey : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.XlaSerializedCacheKey) */ {
 public:
  XlaSerializedCacheKey();
  virtual ~XlaSerializedCacheKey();

  XlaSerializedCacheKey(const XlaSerializedCacheKey& from);

  inline XlaSerializedCacheKey& operator=(const XlaSerializedCacheKey& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XlaSerializedCacheKey(XlaSerializedCacheKey&& from) noexcept
    : XlaSerializedCacheKey() {
    *this = ::std::move(from);
  }

  inline XlaSerializedCacheKey& operator=(XlaSerializedCacheKey&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XlaSerializedCacheKey& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XlaSerializedCacheKey* internal_default_instance() {
    return reinterpret_cast<const XlaSerializedCacheKey*>(
               &_XlaSerializedCacheKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(XlaSerializedCacheKey* other);
  friend void swap(XlaSerializedCacheKey& a, XlaSerializedCacheKey& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XlaSerializedCacheKey* New() const final {
    return CreateMaybeMessage<XlaSerializedCacheKey>(NULL);
  }

  XlaSerializedCacheKey* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<XlaSerializedCacheKey>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const XlaSerializedCacheKey& from);
  void MergeFrom(const XlaSerializedCacheKey& from);
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
  void InternalSwap(XlaSerializedCacheKey* other);
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

  // string device_type = 3;
  void clear_device_type();
  static const int kDeviceTypeFieldNumber = 3;
  const ::std::string& device_type() const;
  void set_device_type(const ::std::string& value);
  #if LANG_CXX11
  void set_device_type(::std::string&& value);
  #endif
  void set_device_type(const char* value);
  void set_device_type(const char* value, size_t size);
  ::std::string* mutable_device_type();
  ::std::string* release_device_type();
  void set_allocated_device_type(::std::string* device_type);

  // string prefix = 4;
  void clear_prefix();
  static const int kPrefixFieldNumber = 4;
  const ::std::string& prefix() const;
  void set_prefix(const ::std::string& value);
  #if LANG_CXX11
  void set_prefix(::std::string&& value);
  #endif
  void set_prefix(const char* value);
  void set_prefix(const char* value, size_t size);
  ::std::string* mutable_prefix();
  ::std::string* release_prefix();
  void set_allocated_prefix(::std::string* prefix);

  // uint64 signature_fingerprint = 1;
  void clear_signature_fingerprint();
  static const int kSignatureFingerprintFieldNumber = 1;
  ::google::protobuf::uint64 signature_fingerprint() const;
  void set_signature_fingerprint(::google::protobuf::uint64 value);

  // uint64 cluster_fingerprint = 2;
  void clear_cluster_fingerprint();
  static const int kClusterFingerprintFieldNumber = 2;
  ::google::protobuf::uint64 cluster_fingerprint() const;
  void set_cluster_fingerprint(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:tensorflow.XlaSerializedCacheKey)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr device_type_;
  ::google::protobuf::internal::ArenaStringPtr prefix_;
  ::google::protobuf::uint64 signature_fingerprint_;
  ::google::protobuf::uint64 cluster_fingerprint_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class XlaSerializedCacheEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.XlaSerializedCacheEntry) */ {
 public:
  XlaSerializedCacheEntry();
  virtual ~XlaSerializedCacheEntry();

  XlaSerializedCacheEntry(const XlaSerializedCacheEntry& from);

  inline XlaSerializedCacheEntry& operator=(const XlaSerializedCacheEntry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XlaSerializedCacheEntry(XlaSerializedCacheEntry&& from) noexcept
    : XlaSerializedCacheEntry() {
    *this = ::std::move(from);
  }

  inline XlaSerializedCacheEntry& operator=(XlaSerializedCacheEntry&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XlaSerializedCacheEntry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XlaSerializedCacheEntry* internal_default_instance() {
    return reinterpret_cast<const XlaSerializedCacheEntry*>(
               &_XlaSerializedCacheEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(XlaSerializedCacheEntry* other);
  friend void swap(XlaSerializedCacheEntry& a, XlaSerializedCacheEntry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XlaSerializedCacheEntry* New() const final {
    return CreateMaybeMessage<XlaSerializedCacheEntry>(NULL);
  }

  XlaSerializedCacheEntry* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<XlaSerializedCacheEntry>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const XlaSerializedCacheEntry& from);
  void MergeFrom(const XlaSerializedCacheEntry& from);
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
  void InternalSwap(XlaSerializedCacheEntry* other);
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

  // bytes executable = 3;
  void clear_executable();
  static const int kExecutableFieldNumber = 3;
  const ::std::string& executable() const;
  void set_executable(const ::std::string& value);
  #if LANG_CXX11
  void set_executable(::std::string&& value);
  #endif
  void set_executable(const char* value);
  void set_executable(const void* value, size_t size);
  ::std::string* mutable_executable();
  ::std::string* release_executable();
  void set_allocated_executable(::std::string* executable);

  // .tensorflow.XlaSerializedCacheKey key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  private:
  const ::tensorflow::XlaSerializedCacheKey& _internal_key() const;
  public:
  const ::tensorflow::XlaSerializedCacheKey& key() const;
  ::tensorflow::XlaSerializedCacheKey* release_key();
  ::tensorflow::XlaSerializedCacheKey* mutable_key();
  void set_allocated_key(::tensorflow::XlaSerializedCacheKey* key);

  // .xla.HloModuleProto hlo_module = 2;
  bool has_hlo_module() const;
  void clear_hlo_module();
  static const int kHloModuleFieldNumber = 2;
  private:
  const ::xla::HloModuleProto& _internal_hlo_module() const;
  public:
  const ::xla::HloModuleProto& hlo_module() const;
  ::xla::HloModuleProto* release_hlo_module();
  ::xla::HloModuleProto* mutable_hlo_module();
  void set_allocated_hlo_module(::xla::HloModuleProto* hlo_module);

  // @@protoc_insertion_point(class_scope:tensorflow.XlaSerializedCacheEntry)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr executable_;
  ::tensorflow::XlaSerializedCacheKey* key_;
  ::xla::HloModuleProto* hlo_module_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// XlaSerializedCacheKey

// uint64 signature_fingerprint = 1;
inline void XlaSerializedCacheKey::clear_signature_fingerprint() {
  signature_fingerprint_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 XlaSerializedCacheKey::signature_fingerprint() const {
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheKey.signature_fingerprint)
  return signature_fingerprint_;
}
inline void XlaSerializedCacheKey::set_signature_fingerprint(::google::protobuf::uint64 value) {
  
  signature_fingerprint_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.XlaSerializedCacheKey.signature_fingerprint)
}

// uint64 cluster_fingerprint = 2;
inline void XlaSerializedCacheKey::clear_cluster_fingerprint() {
  cluster_fingerprint_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 XlaSerializedCacheKey::cluster_fingerprint() const {
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheKey.cluster_fingerprint)
  return cluster_fingerprint_;
}
inline void XlaSerializedCacheKey::set_cluster_fingerprint(::google::protobuf::uint64 value) {
  
  cluster_fingerprint_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.XlaSerializedCacheKey.cluster_fingerprint)
}

// string device_type = 3;
inline void XlaSerializedCacheKey::clear_device_type() {
  device_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XlaSerializedCacheKey::device_type() const {
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheKey.device_type)
  return device_type_.GetNoArena();
}
inline void XlaSerializedCacheKey::set_device_type(const ::std::string& value) {
  
  device_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.XlaSerializedCacheKey.device_type)
}
#if LANG_CXX11
inline void XlaSerializedCacheKey::set_device_type(::std::string&& value) {
  
  device_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.XlaSerializedCacheKey.device_type)
}
#endif
inline void XlaSerializedCacheKey::set_device_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  device_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.XlaSerializedCacheKey.device_type)
}
inline void XlaSerializedCacheKey::set_device_type(const char* value, size_t size) {
  
  device_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.XlaSerializedCacheKey.device_type)
}
inline ::std::string* XlaSerializedCacheKey::mutable_device_type() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.XlaSerializedCacheKey.device_type)
  return device_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XlaSerializedCacheKey::release_device_type() {
  // @@protoc_insertion_point(field_release:tensorflow.XlaSerializedCacheKey.device_type)
  
  return device_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XlaSerializedCacheKey::set_allocated_device_type(::std::string* device_type) {
  if (device_type != NULL) {
    
  } else {
    
  }
  device_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_type);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.XlaSerializedCacheKey.device_type)
}

// string prefix = 4;
inline void XlaSerializedCacheKey::clear_prefix() {
  prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XlaSerializedCacheKey::prefix() const {
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheKey.prefix)
  return prefix_.GetNoArena();
}
inline void XlaSerializedCacheKey::set_prefix(const ::std::string& value) {
  
  prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.XlaSerializedCacheKey.prefix)
}
#if LANG_CXX11
inline void XlaSerializedCacheKey::set_prefix(::std::string&& value) {
  
  prefix_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.XlaSerializedCacheKey.prefix)
}
#endif
inline void XlaSerializedCacheKey::set_prefix(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.XlaSerializedCacheKey.prefix)
}
inline void XlaSerializedCacheKey::set_prefix(const char* value, size_t size) {
  
  prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.XlaSerializedCacheKey.prefix)
}
inline ::std::string* XlaSerializedCacheKey::mutable_prefix() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.XlaSerializedCacheKey.prefix)
  return prefix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XlaSerializedCacheKey::release_prefix() {
  // @@protoc_insertion_point(field_release:tensorflow.XlaSerializedCacheKey.prefix)
  
  return prefix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XlaSerializedCacheKey::set_allocated_prefix(::std::string* prefix) {
  if (prefix != NULL) {
    
  } else {
    
  }
  prefix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), prefix);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.XlaSerializedCacheKey.prefix)
}

// -------------------------------------------------------------------

// XlaSerializedCacheEntry

// .tensorflow.XlaSerializedCacheKey key = 1;
inline bool XlaSerializedCacheEntry::has_key() const {
  return this != internal_default_instance() && key_ != NULL;
}
inline void XlaSerializedCacheEntry::clear_key() {
  if (GetArenaNoVirtual() == NULL && key_ != NULL) {
    delete key_;
  }
  key_ = NULL;
}
inline const ::tensorflow::XlaSerializedCacheKey& XlaSerializedCacheEntry::_internal_key() const {
  return *key_;
}
inline const ::tensorflow::XlaSerializedCacheKey& XlaSerializedCacheEntry::key() const {
  const ::tensorflow::XlaSerializedCacheKey* p = key_;
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheEntry.key)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::XlaSerializedCacheKey*>(
      &::tensorflow::_XlaSerializedCacheKey_default_instance_);
}
inline ::tensorflow::XlaSerializedCacheKey* XlaSerializedCacheEntry::release_key() {
  // @@protoc_insertion_point(field_release:tensorflow.XlaSerializedCacheEntry.key)
  
  ::tensorflow::XlaSerializedCacheKey* temp = key_;
  key_ = NULL;
  return temp;
}
inline ::tensorflow::XlaSerializedCacheKey* XlaSerializedCacheEntry::mutable_key() {
  
  if (key_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::XlaSerializedCacheKey>(GetArenaNoVirtual());
    key_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.XlaSerializedCacheEntry.key)
  return key_;
}
inline void XlaSerializedCacheEntry::set_allocated_key(::tensorflow::XlaSerializedCacheKey* key) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete key_;
  }
  if (key) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      key = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, key, submessage_arena);
    }
    
  } else {
    
  }
  key_ = key;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.XlaSerializedCacheEntry.key)
}

// .xla.HloModuleProto hlo_module = 2;
inline bool XlaSerializedCacheEntry::has_hlo_module() const {
  return this != internal_default_instance() && hlo_module_ != NULL;
}
inline const ::xla::HloModuleProto& XlaSerializedCacheEntry::_internal_hlo_module() const {
  return *hlo_module_;
}
inline const ::xla::HloModuleProto& XlaSerializedCacheEntry::hlo_module() const {
  const ::xla::HloModuleProto* p = hlo_module_;
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheEntry.hlo_module)
  return p != NULL ? *p : *reinterpret_cast<const ::xla::HloModuleProto*>(
      &::xla::_HloModuleProto_default_instance_);
}
inline ::xla::HloModuleProto* XlaSerializedCacheEntry::release_hlo_module() {
  // @@protoc_insertion_point(field_release:tensorflow.XlaSerializedCacheEntry.hlo_module)
  
  ::xla::HloModuleProto* temp = hlo_module_;
  hlo_module_ = NULL;
  return temp;
}
inline ::xla::HloModuleProto* XlaSerializedCacheEntry::mutable_hlo_module() {
  
  if (hlo_module_ == NULL) {
    auto* p = CreateMaybeMessage<::xla::HloModuleProto>(GetArenaNoVirtual());
    hlo_module_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.XlaSerializedCacheEntry.hlo_module)
  return hlo_module_;
}
inline void XlaSerializedCacheEntry::set_allocated_hlo_module(::xla::HloModuleProto* hlo_module) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(hlo_module_);
  }
  if (hlo_module) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(hlo_module)->GetArena();
    if (message_arena != submessage_arena) {
      hlo_module = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, hlo_module, submessage_arena);
    }
    
  } else {
    
  }
  hlo_module_ = hlo_module;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.XlaSerializedCacheEntry.hlo_module)
}

// bytes executable = 3;
inline void XlaSerializedCacheEntry::clear_executable() {
  executable_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XlaSerializedCacheEntry::executable() const {
  // @@protoc_insertion_point(field_get:tensorflow.XlaSerializedCacheEntry.executable)
  return executable_.GetNoArena();
}
inline void XlaSerializedCacheEntry::set_executable(const ::std::string& value) {
  
  executable_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.XlaSerializedCacheEntry.executable)
}
#if LANG_CXX11
inline void XlaSerializedCacheEntry::set_executable(::std::string&& value) {
  
  executable_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.XlaSerializedCacheEntry.executable)
}
#endif
inline void XlaSerializedCacheEntry::set_executable(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  executable_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.XlaSerializedCacheEntry.executable)
}
inline void XlaSerializedCacheEntry::set_executable(const void* value, size_t size) {
  
  executable_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.XlaSerializedCacheEntry.executable)
}
inline ::std::string* XlaSerializedCacheEntry::mutable_executable() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.XlaSerializedCacheEntry.executable)
  return executable_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XlaSerializedCacheEntry::release_executable() {
  // @@protoc_insertion_point(field_release:tensorflow.XlaSerializedCacheEntry.executable)
  
  return executable_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XlaSerializedCacheEntry::set_allocated_executable(::std::string* executable) {
  if (executable != NULL) {
    
  } else {
    
  }
  executable_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), executable);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.XlaSerializedCacheEntry.executable)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcompiler_2fjit_2fxla_5fcompilation_5fcache_2eproto
