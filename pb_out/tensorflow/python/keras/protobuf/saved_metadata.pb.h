// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/python/keras/protobuf/saved_metadata.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto

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
#include "tensorflow/python/keras/protobuf/versions.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto 

namespace protobuf_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto {
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
}  // namespace protobuf_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto
namespace third_party {
namespace tensorflow {
namespace python {
namespace keras {
namespace protobuf {
class SavedMetadata;
class SavedMetadataDefaultTypeInternal;
extern SavedMetadataDefaultTypeInternal _SavedMetadata_default_instance_;
class SavedObject;
class SavedObjectDefaultTypeInternal;
extern SavedObjectDefaultTypeInternal _SavedObject_default_instance_;
}  // namespace protobuf
}  // namespace keras
}  // namespace python
}  // namespace tensorflow
}  // namespace third_party
namespace google {
namespace protobuf {
template<> ::third_party::tensorflow::python::keras::protobuf::SavedMetadata* Arena::CreateMaybeMessage<::third_party::tensorflow::python::keras::protobuf::SavedMetadata>(Arena*);
template<> ::third_party::tensorflow::python::keras::protobuf::SavedObject* Arena::CreateMaybeMessage<::third_party::tensorflow::python::keras::protobuf::SavedObject>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace third_party {
namespace tensorflow {
namespace python {
namespace keras {
namespace protobuf {

// ===================================================================

class SavedMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:third_party.tensorflow.python.keras.protobuf.SavedMetadata) */ {
 public:
  SavedMetadata();
  virtual ~SavedMetadata();

  SavedMetadata(const SavedMetadata& from);

  inline SavedMetadata& operator=(const SavedMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SavedMetadata(SavedMetadata&& from) noexcept
    : SavedMetadata() {
    *this = ::std::move(from);
  }

  inline SavedMetadata& operator=(SavedMetadata&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedMetadata& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SavedMetadata* internal_default_instance() {
    return reinterpret_cast<const SavedMetadata*>(
               &_SavedMetadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SavedMetadata* other);
  friend void swap(SavedMetadata& a, SavedMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SavedMetadata* New() const final {
    return CreateMaybeMessage<SavedMetadata>(NULL);
  }

  SavedMetadata* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SavedMetadata>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SavedMetadata& from);
  void MergeFrom(const SavedMetadata& from);
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
  void InternalSwap(SavedMetadata* other);
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

  // repeated .third_party.tensorflow.python.keras.protobuf.SavedObject nodes = 1;
  int nodes_size() const;
  void clear_nodes();
  static const int kNodesFieldNumber = 1;
  ::third_party::tensorflow::python::keras::protobuf::SavedObject* mutable_nodes(int index);
  ::google::protobuf::RepeatedPtrField< ::third_party::tensorflow::python::keras::protobuf::SavedObject >*
      mutable_nodes();
  const ::third_party::tensorflow::python::keras::protobuf::SavedObject& nodes(int index) const;
  ::third_party::tensorflow::python::keras::protobuf::SavedObject* add_nodes();
  const ::google::protobuf::RepeatedPtrField< ::third_party::tensorflow::python::keras::protobuf::SavedObject >&
      nodes() const;

  // @@protoc_insertion_point(class_scope:third_party.tensorflow.python.keras.protobuf.SavedMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::third_party::tensorflow::python::keras::protobuf::SavedObject > nodes_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SavedObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:third_party.tensorflow.python.keras.protobuf.SavedObject) */ {
 public:
  SavedObject();
  virtual ~SavedObject();

  SavedObject(const SavedObject& from);

  inline SavedObject& operator=(const SavedObject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SavedObject(SavedObject&& from) noexcept
    : SavedObject() {
    *this = ::std::move(from);
  }

  inline SavedObject& operator=(SavedObject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedObject& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SavedObject* internal_default_instance() {
    return reinterpret_cast<const SavedObject*>(
               &_SavedObject_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SavedObject* other);
  friend void swap(SavedObject& a, SavedObject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SavedObject* New() const final {
    return CreateMaybeMessage<SavedObject>(NULL);
  }

  SavedObject* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SavedObject>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SavedObject& from);
  void MergeFrom(const SavedObject& from);
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
  void InternalSwap(SavedObject* other);
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

  // string node_path = 3;
  void clear_node_path();
  static const int kNodePathFieldNumber = 3;
  const ::std::string& node_path() const;
  void set_node_path(const ::std::string& value);
  #if LANG_CXX11
  void set_node_path(::std::string&& value);
  #endif
  void set_node_path(const char* value);
  void set_node_path(const char* value, size_t size);
  ::std::string* mutable_node_path();
  ::std::string* release_node_path();
  void set_allocated_node_path(::std::string* node_path);

  // string identifier = 4;
  void clear_identifier();
  static const int kIdentifierFieldNumber = 4;
  const ::std::string& identifier() const;
  void set_identifier(const ::std::string& value);
  #if LANG_CXX11
  void set_identifier(::std::string&& value);
  #endif
  void set_identifier(const char* value);
  void set_identifier(const char* value, size_t size);
  ::std::string* mutable_identifier();
  ::std::string* release_identifier();
  void set_allocated_identifier(::std::string* identifier);

  // string metadata = 5;
  void clear_metadata();
  static const int kMetadataFieldNumber = 5;
  const ::std::string& metadata() const;
  void set_metadata(const ::std::string& value);
  #if LANG_CXX11
  void set_metadata(::std::string&& value);
  #endif
  void set_metadata(const char* value);
  void set_metadata(const char* value, size_t size);
  ::std::string* mutable_metadata();
  ::std::string* release_metadata();
  void set_allocated_metadata(::std::string* metadata);

  // .third_party.tensorflow.python.keras.protobuf.VersionDef version = 6;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 6;
  private:
  const ::third_party::tensorflow::python::keras::protobuf::VersionDef& _internal_version() const;
  public:
  const ::third_party::tensorflow::python::keras::protobuf::VersionDef& version() const;
  ::third_party::tensorflow::python::keras::protobuf::VersionDef* release_version();
  ::third_party::tensorflow::python::keras::protobuf::VersionDef* mutable_version();
  void set_allocated_version(::third_party::tensorflow::python::keras::protobuf::VersionDef* version);

  // int32 node_id = 2;
  void clear_node_id();
  static const int kNodeIdFieldNumber = 2;
  ::google::protobuf::int32 node_id() const;
  void set_node_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:third_party.tensorflow.python.keras.protobuf.SavedObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr node_path_;
  ::google::protobuf::internal::ArenaStringPtr identifier_;
  ::google::protobuf::internal::ArenaStringPtr metadata_;
  ::third_party::tensorflow::python::keras::protobuf::VersionDef* version_;
  ::google::protobuf::int32 node_id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SavedMetadata

// repeated .third_party.tensorflow.python.keras.protobuf.SavedObject nodes = 1;
inline int SavedMetadata::nodes_size() const {
  return nodes_.size();
}
inline void SavedMetadata::clear_nodes() {
  nodes_.Clear();
}
inline ::third_party::tensorflow::python::keras::protobuf::SavedObject* SavedMetadata::mutable_nodes(int index) {
  // @@protoc_insertion_point(field_mutable:third_party.tensorflow.python.keras.protobuf.SavedMetadata.nodes)
  return nodes_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::third_party::tensorflow::python::keras::protobuf::SavedObject >*
SavedMetadata::mutable_nodes() {
  // @@protoc_insertion_point(field_mutable_list:third_party.tensorflow.python.keras.protobuf.SavedMetadata.nodes)
  return &nodes_;
}
inline const ::third_party::tensorflow::python::keras::protobuf::SavedObject& SavedMetadata::nodes(int index) const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.python.keras.protobuf.SavedMetadata.nodes)
  return nodes_.Get(index);
}
inline ::third_party::tensorflow::python::keras::protobuf::SavedObject* SavedMetadata::add_nodes() {
  // @@protoc_insertion_point(field_add:third_party.tensorflow.python.keras.protobuf.SavedMetadata.nodes)
  return nodes_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::third_party::tensorflow::python::keras::protobuf::SavedObject >&
SavedMetadata::nodes() const {
  // @@protoc_insertion_point(field_list:third_party.tensorflow.python.keras.protobuf.SavedMetadata.nodes)
  return nodes_;
}

// -------------------------------------------------------------------

// SavedObject

// int32 node_id = 2;
inline void SavedObject::clear_node_id() {
  node_id_ = 0;
}
inline ::google::protobuf::int32 SavedObject::node_id() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.python.keras.protobuf.SavedObject.node_id)
  return node_id_;
}
inline void SavedObject::set_node_id(::google::protobuf::int32 value) {
  
  node_id_ = value;
  // @@protoc_insertion_point(field_set:third_party.tensorflow.python.keras.protobuf.SavedObject.node_id)
}

// string node_path = 3;
inline void SavedObject::clear_node_path() {
  node_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SavedObject::node_path() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
  return node_path_.GetNoArena();
}
inline void SavedObject::set_node_path(const ::std::string& value) {
  
  node_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
}
#if LANG_CXX11
inline void SavedObject::set_node_path(::std::string&& value) {
  
  node_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
}
#endif
inline void SavedObject::set_node_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  node_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
}
inline void SavedObject::set_node_path(const char* value, size_t size) {
  
  node_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
}
inline ::std::string* SavedObject::mutable_node_path() {
  
  // @@protoc_insertion_point(field_mutable:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
  return node_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SavedObject::release_node_path() {
  // @@protoc_insertion_point(field_release:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
  
  return node_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedObject::set_allocated_node_path(::std::string* node_path) {
  if (node_path != NULL) {
    
  } else {
    
  }
  node_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), node_path);
  // @@protoc_insertion_point(field_set_allocated:third_party.tensorflow.python.keras.protobuf.SavedObject.node_path)
}

// string identifier = 4;
inline void SavedObject::clear_identifier() {
  identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SavedObject::identifier() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
  return identifier_.GetNoArena();
}
inline void SavedObject::set_identifier(const ::std::string& value) {
  
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
}
#if LANG_CXX11
inline void SavedObject::set_identifier(::std::string&& value) {
  
  identifier_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
}
#endif
inline void SavedObject::set_identifier(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
}
inline void SavedObject::set_identifier(const char* value, size_t size) {
  
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
}
inline ::std::string* SavedObject::mutable_identifier() {
  
  // @@protoc_insertion_point(field_mutable:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
  return identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SavedObject::release_identifier() {
  // @@protoc_insertion_point(field_release:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
  
  return identifier_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedObject::set_allocated_identifier(::std::string* identifier) {
  if (identifier != NULL) {
    
  } else {
    
  }
  identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identifier);
  // @@protoc_insertion_point(field_set_allocated:third_party.tensorflow.python.keras.protobuf.SavedObject.identifier)
}

// string metadata = 5;
inline void SavedObject::clear_metadata() {
  metadata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SavedObject::metadata() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
  return metadata_.GetNoArena();
}
inline void SavedObject::set_metadata(const ::std::string& value) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
}
#if LANG_CXX11
inline void SavedObject::set_metadata(::std::string&& value) {
  
  metadata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
}
#endif
inline void SavedObject::set_metadata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
}
inline void SavedObject::set_metadata(const char* value, size_t size) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
}
inline ::std::string* SavedObject::mutable_metadata() {
  
  // @@protoc_insertion_point(field_mutable:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
  return metadata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SavedObject::release_metadata() {
  // @@protoc_insertion_point(field_release:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
  
  return metadata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedObject::set_allocated_metadata(::std::string* metadata) {
  if (metadata != NULL) {
    
  } else {
    
  }
  metadata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), metadata);
  // @@protoc_insertion_point(field_set_allocated:third_party.tensorflow.python.keras.protobuf.SavedObject.metadata)
}

// .third_party.tensorflow.python.keras.protobuf.VersionDef version = 6;
inline bool SavedObject::has_version() const {
  return this != internal_default_instance() && version_ != NULL;
}
inline const ::third_party::tensorflow::python::keras::protobuf::VersionDef& SavedObject::_internal_version() const {
  return *version_;
}
inline const ::third_party::tensorflow::python::keras::protobuf::VersionDef& SavedObject::version() const {
  const ::third_party::tensorflow::python::keras::protobuf::VersionDef* p = version_;
  // @@protoc_insertion_point(field_get:third_party.tensorflow.python.keras.protobuf.SavedObject.version)
  return p != NULL ? *p : *reinterpret_cast<const ::third_party::tensorflow::python::keras::protobuf::VersionDef*>(
      &::third_party::tensorflow::python::keras::protobuf::_VersionDef_default_instance_);
}
inline ::third_party::tensorflow::python::keras::protobuf::VersionDef* SavedObject::release_version() {
  // @@protoc_insertion_point(field_release:third_party.tensorflow.python.keras.protobuf.SavedObject.version)
  
  ::third_party::tensorflow::python::keras::protobuf::VersionDef* temp = version_;
  version_ = NULL;
  return temp;
}
inline ::third_party::tensorflow::python::keras::protobuf::VersionDef* SavedObject::mutable_version() {
  
  if (version_ == NULL) {
    auto* p = CreateMaybeMessage<::third_party::tensorflow::python::keras::protobuf::VersionDef>(GetArenaNoVirtual());
    version_ = p;
  }
  // @@protoc_insertion_point(field_mutable:third_party.tensorflow.python.keras.protobuf.SavedObject.version)
  return version_;
}
inline void SavedObject::set_allocated_version(::third_party::tensorflow::python::keras::protobuf::VersionDef* version) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(version_);
  }
  if (version) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      version = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    
  } else {
    
  }
  version_ = version;
  // @@protoc_insertion_point(field_set_allocated:third_party.tensorflow.python.keras.protobuf.SavedObject.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace keras
}  // namespace python
}  // namespace tensorflow
}  // namespace third_party

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fpython_2fkeras_2fprotobuf_2fsaved_5fmetadata_2eproto
