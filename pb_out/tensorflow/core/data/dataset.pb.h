// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/data/dataset.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2fdata_2fdataset_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2fdata_2fdataset_2eproto

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
#include "tensorflow/core/framework/tensor.pb.h"
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fdata_2fdataset_2eproto 

namespace protobuf_tensorflow_2fcore_2fdata_2fdataset_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fdata_2fdataset_2eproto
namespace tensorflow {
namespace data {
class CompressedComponentMetadata;
class CompressedComponentMetadataDefaultTypeInternal;
extern CompressedComponentMetadataDefaultTypeInternal _CompressedComponentMetadata_default_instance_;
class CompressedElement;
class CompressedElementDefaultTypeInternal;
extern CompressedElementDefaultTypeInternal _CompressedElement_default_instance_;
class UncompressedElement;
class UncompressedElementDefaultTypeInternal;
extern UncompressedElementDefaultTypeInternal _UncompressedElement_default_instance_;
}  // namespace data
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::data::CompressedComponentMetadata* Arena::CreateMaybeMessage<::tensorflow::data::CompressedComponentMetadata>(Arena*);
template<> ::tensorflow::data::CompressedElement* Arena::CreateMaybeMessage<::tensorflow::data::CompressedElement>(Arena*);
template<> ::tensorflow::data::UncompressedElement* Arena::CreateMaybeMessage<::tensorflow::data::UncompressedElement>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace data {

// ===================================================================

class CompressedComponentMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.data.CompressedComponentMetadata) */ {
 public:
  CompressedComponentMetadata();
  virtual ~CompressedComponentMetadata();

  CompressedComponentMetadata(const CompressedComponentMetadata& from);

  inline CompressedComponentMetadata& operator=(const CompressedComponentMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CompressedComponentMetadata(CompressedComponentMetadata&& from) noexcept
    : CompressedComponentMetadata() {
    *this = ::std::move(from);
  }

  inline CompressedComponentMetadata& operator=(CompressedComponentMetadata&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CompressedComponentMetadata& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CompressedComponentMetadata* internal_default_instance() {
    return reinterpret_cast<const CompressedComponentMetadata*>(
               &_CompressedComponentMetadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CompressedComponentMetadata* other);
  friend void swap(CompressedComponentMetadata& a, CompressedComponentMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CompressedComponentMetadata* New() const final {
    return CreateMaybeMessage<CompressedComponentMetadata>(NULL);
  }

  CompressedComponentMetadata* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CompressedComponentMetadata>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CompressedComponentMetadata& from);
  void MergeFrom(const CompressedComponentMetadata& from);
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
  void InternalSwap(CompressedComponentMetadata* other);
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

  // .tensorflow.TensorShapeProto tensor_shape = 2;
  bool has_tensor_shape() const;
  void clear_tensor_shape();
  static const int kTensorShapeFieldNumber = 2;
  private:
  const ::tensorflow::TensorShapeProto& _internal_tensor_shape() const;
  public:
  const ::tensorflow::TensorShapeProto& tensor_shape() const;
  ::tensorflow::TensorShapeProto* release_tensor_shape();
  ::tensorflow::TensorShapeProto* mutable_tensor_shape();
  void set_allocated_tensor_shape(::tensorflow::TensorShapeProto* tensor_shape);

  // int64 tensor_size_bytes = 3;
  void clear_tensor_size_bytes();
  static const int kTensorSizeBytesFieldNumber = 3;
  ::google::protobuf::int64 tensor_size_bytes() const;
  void set_tensor_size_bytes(::google::protobuf::int64 value);

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  static const int kDtypeFieldNumber = 1;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.data.CompressedComponentMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::tensorflow::TensorShapeProto* tensor_shape_;
  ::google::protobuf::int64 tensor_size_bytes_;
  int dtype_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fdata_2fdataset_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CompressedElement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.data.CompressedElement) */ {
 public:
  CompressedElement();
  virtual ~CompressedElement();

  CompressedElement(const CompressedElement& from);

  inline CompressedElement& operator=(const CompressedElement& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CompressedElement(CompressedElement&& from) noexcept
    : CompressedElement() {
    *this = ::std::move(from);
  }

  inline CompressedElement& operator=(CompressedElement&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CompressedElement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CompressedElement* internal_default_instance() {
    return reinterpret_cast<const CompressedElement*>(
               &_CompressedElement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CompressedElement* other);
  friend void swap(CompressedElement& a, CompressedElement& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CompressedElement* New() const final {
    return CreateMaybeMessage<CompressedElement>(NULL);
  }

  CompressedElement* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CompressedElement>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CompressedElement& from);
  void MergeFrom(const CompressedElement& from);
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
  void InternalSwap(CompressedElement* other);
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

  // repeated .tensorflow.data.CompressedComponentMetadata component_metadata = 2;
  int component_metadata_size() const;
  void clear_component_metadata();
  static const int kComponentMetadataFieldNumber = 2;
  ::tensorflow::data::CompressedComponentMetadata* mutable_component_metadata(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::data::CompressedComponentMetadata >*
      mutable_component_metadata();
  const ::tensorflow::data::CompressedComponentMetadata& component_metadata(int index) const;
  ::tensorflow::data::CompressedComponentMetadata* add_component_metadata();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::data::CompressedComponentMetadata >&
      component_metadata() const;

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

  // @@protoc_insertion_point(class_scope:tensorflow.data.CompressedElement)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::data::CompressedComponentMetadata > component_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fdata_2fdataset_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class UncompressedElement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.data.UncompressedElement) */ {
 public:
  UncompressedElement();
  virtual ~UncompressedElement();

  UncompressedElement(const UncompressedElement& from);

  inline UncompressedElement& operator=(const UncompressedElement& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UncompressedElement(UncompressedElement&& from) noexcept
    : UncompressedElement() {
    *this = ::std::move(from);
  }

  inline UncompressedElement& operator=(UncompressedElement&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UncompressedElement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UncompressedElement* internal_default_instance() {
    return reinterpret_cast<const UncompressedElement*>(
               &_UncompressedElement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(UncompressedElement* other);
  friend void swap(UncompressedElement& a, UncompressedElement& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UncompressedElement* New() const final {
    return CreateMaybeMessage<UncompressedElement>(NULL);
  }

  UncompressedElement* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UncompressedElement>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UncompressedElement& from);
  void MergeFrom(const UncompressedElement& from);
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
  void InternalSwap(UncompressedElement* other);
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

  // repeated .tensorflow.TensorProto components = 1;
  int components_size() const;
  void clear_components();
  static const int kComponentsFieldNumber = 1;
  ::tensorflow::TensorProto* mutable_components(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorProto >*
      mutable_components();
  const ::tensorflow::TensorProto& components(int index) const;
  ::tensorflow::TensorProto* add_components();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorProto >&
      components() const;

  // @@protoc_insertion_point(class_scope:tensorflow.data.UncompressedElement)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorProto > components_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fdata_2fdataset_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CompressedComponentMetadata

// .tensorflow.DataType dtype = 1;
inline void CompressedComponentMetadata::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType CompressedComponentMetadata::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.data.CompressedComponentMetadata.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void CompressedComponentMetadata::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.data.CompressedComponentMetadata.dtype)
}

// .tensorflow.TensorShapeProto tensor_shape = 2;
inline bool CompressedComponentMetadata::has_tensor_shape() const {
  return this != internal_default_instance() && tensor_shape_ != NULL;
}
inline const ::tensorflow::TensorShapeProto& CompressedComponentMetadata::_internal_tensor_shape() const {
  return *tensor_shape_;
}
inline const ::tensorflow::TensorShapeProto& CompressedComponentMetadata::tensor_shape() const {
  const ::tensorflow::TensorShapeProto* p = tensor_shape_;
  // @@protoc_insertion_point(field_get:tensorflow.data.CompressedComponentMetadata.tensor_shape)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::TensorShapeProto*>(
      &::tensorflow::_TensorShapeProto_default_instance_);
}
inline ::tensorflow::TensorShapeProto* CompressedComponentMetadata::release_tensor_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.data.CompressedComponentMetadata.tensor_shape)
  
  ::tensorflow::TensorShapeProto* temp = tensor_shape_;
  tensor_shape_ = NULL;
  return temp;
}
inline ::tensorflow::TensorShapeProto* CompressedComponentMetadata::mutable_tensor_shape() {
  
  if (tensor_shape_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::TensorShapeProto>(GetArenaNoVirtual());
    tensor_shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.data.CompressedComponentMetadata.tensor_shape)
  return tensor_shape_;
}
inline void CompressedComponentMetadata::set_allocated_tensor_shape(::tensorflow::TensorShapeProto* tensor_shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(tensor_shape_);
  }
  if (tensor_shape) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(tensor_shape)->GetArena();
    if (message_arena != submessage_arena) {
      tensor_shape = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, tensor_shape, submessage_arena);
    }
    
  } else {
    
  }
  tensor_shape_ = tensor_shape;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.data.CompressedComponentMetadata.tensor_shape)
}

// int64 tensor_size_bytes = 3;
inline void CompressedComponentMetadata::clear_tensor_size_bytes() {
  tensor_size_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CompressedComponentMetadata::tensor_size_bytes() const {
  // @@protoc_insertion_point(field_get:tensorflow.data.CompressedComponentMetadata.tensor_size_bytes)
  return tensor_size_bytes_;
}
inline void CompressedComponentMetadata::set_tensor_size_bytes(::google::protobuf::int64 value) {
  
  tensor_size_bytes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.data.CompressedComponentMetadata.tensor_size_bytes)
}

// -------------------------------------------------------------------

// CompressedElement

// bytes data = 1;
inline void CompressedElement::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CompressedElement::data() const {
  // @@protoc_insertion_point(field_get:tensorflow.data.CompressedElement.data)
  return data_.GetNoArena();
}
inline void CompressedElement::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.data.CompressedElement.data)
}
#if LANG_CXX11
inline void CompressedElement::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.data.CompressedElement.data)
}
#endif
inline void CompressedElement::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.data.CompressedElement.data)
}
inline void CompressedElement::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.data.CompressedElement.data)
}
inline ::std::string* CompressedElement::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.data.CompressedElement.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CompressedElement::release_data() {
  // @@protoc_insertion_point(field_release:tensorflow.data.CompressedElement.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompressedElement::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.data.CompressedElement.data)
}

// repeated .tensorflow.data.CompressedComponentMetadata component_metadata = 2;
inline int CompressedElement::component_metadata_size() const {
  return component_metadata_.size();
}
inline void CompressedElement::clear_component_metadata() {
  component_metadata_.Clear();
}
inline ::tensorflow::data::CompressedComponentMetadata* CompressedElement::mutable_component_metadata(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.data.CompressedElement.component_metadata)
  return component_metadata_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::data::CompressedComponentMetadata >*
CompressedElement::mutable_component_metadata() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.data.CompressedElement.component_metadata)
  return &component_metadata_;
}
inline const ::tensorflow::data::CompressedComponentMetadata& CompressedElement::component_metadata(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.data.CompressedElement.component_metadata)
  return component_metadata_.Get(index);
}
inline ::tensorflow::data::CompressedComponentMetadata* CompressedElement::add_component_metadata() {
  // @@protoc_insertion_point(field_add:tensorflow.data.CompressedElement.component_metadata)
  return component_metadata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::data::CompressedComponentMetadata >&
CompressedElement::component_metadata() const {
  // @@protoc_insertion_point(field_list:tensorflow.data.CompressedElement.component_metadata)
  return component_metadata_;
}

// -------------------------------------------------------------------

// UncompressedElement

// repeated .tensorflow.TensorProto components = 1;
inline int UncompressedElement::components_size() const {
  return components_.size();
}
inline ::tensorflow::TensorProto* UncompressedElement::mutable_components(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.data.UncompressedElement.components)
  return components_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorProto >*
UncompressedElement::mutable_components() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.data.UncompressedElement.components)
  return &components_;
}
inline const ::tensorflow::TensorProto& UncompressedElement::components(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.data.UncompressedElement.components)
  return components_.Get(index);
}
inline ::tensorflow::TensorProto* UncompressedElement::add_components() {
  // @@protoc_insertion_point(field_add:tensorflow.data.UncompressedElement.components)
  return components_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorProto >&
UncompressedElement::components() const {
  // @@protoc_insertion_point(field_list:tensorflow.data.UncompressedElement.components)
  return components_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2fdata_2fdataset_2eproto
