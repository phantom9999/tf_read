// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/security/fuzzing/checkpoint_reader_fuzz_input.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto

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
#include "tensorflow/core/util/saved_tensor_slice.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto 

namespace protobuf_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto {
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
}  // namespace protobuf_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto
namespace tensorflow {
class CheckpointReaderFuzzInput;
class CheckpointReaderFuzzInputDefaultTypeInternal;
extern CheckpointReaderFuzzInputDefaultTypeInternal _CheckpointReaderFuzzInput_default_instance_;
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::CheckpointReaderFuzzInput* Arena::CreateMaybeMessage<::tensorflow::CheckpointReaderFuzzInput>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {

// ===================================================================

class CheckpointReaderFuzzInput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CheckpointReaderFuzzInput) */ {
 public:
  CheckpointReaderFuzzInput();
  virtual ~CheckpointReaderFuzzInput();

  CheckpointReaderFuzzInput(const CheckpointReaderFuzzInput& from);

  inline CheckpointReaderFuzzInput& operator=(const CheckpointReaderFuzzInput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CheckpointReaderFuzzInput(CheckpointReaderFuzzInput&& from) noexcept
    : CheckpointReaderFuzzInput() {
    *this = ::std::move(from);
  }

  inline CheckpointReaderFuzzInput& operator=(CheckpointReaderFuzzInput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CheckpointReaderFuzzInput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CheckpointReaderFuzzInput* internal_default_instance() {
    return reinterpret_cast<const CheckpointReaderFuzzInput*>(
               &_CheckpointReaderFuzzInput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CheckpointReaderFuzzInput* other);
  friend void swap(CheckpointReaderFuzzInput& a, CheckpointReaderFuzzInput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CheckpointReaderFuzzInput* New() const final {
    return CreateMaybeMessage<CheckpointReaderFuzzInput>(NULL);
  }

  CheckpointReaderFuzzInput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CheckpointReaderFuzzInput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CheckpointReaderFuzzInput& from);
  void MergeFrom(const CheckpointReaderFuzzInput& from);
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
  void InternalSwap(CheckpointReaderFuzzInput* other);
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

  // repeated .tensorflow.SavedSlice data = 2;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 2;
  ::tensorflow::SavedSlice* mutable_data(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSlice >*
      mutable_data();
  const ::tensorflow::SavedSlice& data(int index) const;
  ::tensorflow::SavedSlice* add_data();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSlice >&
      data() const;

  // .tensorflow.SavedTensorSliceMeta meta = 1;
  bool has_meta() const;
  void clear_meta();
  static const int kMetaFieldNumber = 1;
  private:
  const ::tensorflow::SavedTensorSliceMeta& _internal_meta() const;
  public:
  const ::tensorflow::SavedTensorSliceMeta& meta() const;
  ::tensorflow::SavedTensorSliceMeta* release_meta();
  ::tensorflow::SavedTensorSliceMeta* mutable_meta();
  void set_allocated_meta(::tensorflow::SavedTensorSliceMeta* meta);

  // @@protoc_insertion_point(class_scope:tensorflow.CheckpointReaderFuzzInput)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSlice > data_;
  ::tensorflow::SavedTensorSliceMeta* meta_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CheckpointReaderFuzzInput

// .tensorflow.SavedTensorSliceMeta meta = 1;
inline bool CheckpointReaderFuzzInput::has_meta() const {
  return this != internal_default_instance() && meta_ != NULL;
}
inline const ::tensorflow::SavedTensorSliceMeta& CheckpointReaderFuzzInput::_internal_meta() const {
  return *meta_;
}
inline const ::tensorflow::SavedTensorSliceMeta& CheckpointReaderFuzzInput::meta() const {
  const ::tensorflow::SavedTensorSliceMeta* p = meta_;
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointReaderFuzzInput.meta)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::SavedTensorSliceMeta*>(
      &::tensorflow::_SavedTensorSliceMeta_default_instance_);
}
inline ::tensorflow::SavedTensorSliceMeta* CheckpointReaderFuzzInput::release_meta() {
  // @@protoc_insertion_point(field_release:tensorflow.CheckpointReaderFuzzInput.meta)
  
  ::tensorflow::SavedTensorSliceMeta* temp = meta_;
  meta_ = NULL;
  return temp;
}
inline ::tensorflow::SavedTensorSliceMeta* CheckpointReaderFuzzInput::mutable_meta() {
  
  if (meta_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::SavedTensorSliceMeta>(GetArenaNoVirtual());
    meta_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointReaderFuzzInput.meta)
  return meta_;
}
inline void CheckpointReaderFuzzInput::set_allocated_meta(::tensorflow::SavedTensorSliceMeta* meta) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(meta_);
  }
  if (meta) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(meta)->GetArena();
    if (message_arena != submessage_arena) {
      meta = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, meta, submessage_arena);
    }
    
  } else {
    
  }
  meta_ = meta;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CheckpointReaderFuzzInput.meta)
}

// repeated .tensorflow.SavedSlice data = 2;
inline int CheckpointReaderFuzzInput::data_size() const {
  return data_.size();
}
inline ::tensorflow::SavedSlice* CheckpointReaderFuzzInput::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointReaderFuzzInput.data)
  return data_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSlice >*
CheckpointReaderFuzzInput::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CheckpointReaderFuzzInput.data)
  return &data_;
}
inline const ::tensorflow::SavedSlice& CheckpointReaderFuzzInput::data(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointReaderFuzzInput.data)
  return data_.Get(index);
}
inline ::tensorflow::SavedSlice* CheckpointReaderFuzzInput::add_data() {
  // @@protoc_insertion_point(field_add:tensorflow.CheckpointReaderFuzzInput.data)
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSlice >&
CheckpointReaderFuzzInput::data() const {
  // @@protoc_insertion_point(field_list:tensorflow.CheckpointReaderFuzzInput.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fsecurity_2ffuzzing_2fcheckpoint_5freader_5ffuzz_5finput_2eproto