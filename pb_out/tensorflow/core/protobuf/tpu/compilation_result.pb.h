// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tpu/compilation_result.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto

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
#include "tensorflow/compiler/xla/service/hlo.pb.h"
#include "tensorflow/core/protobuf/error_codes.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto 

namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto
namespace tensorflow {
namespace tpu {
class CompilationResultProto;
class CompilationResultProtoDefaultTypeInternal;
extern CompilationResultProtoDefaultTypeInternal _CompilationResultProto_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::tpu::CompilationResultProto* Arena::CreateMaybeMessage<::tensorflow::tpu::CompilationResultProto>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace tpu {

enum CompilationResultProto_ErrorCode {
  CompilationResultProto_ErrorCode_UNKNOWN = 0,
  CompilationResultProto_ErrorCode_OUT_OF_MEMORY = 1,
  CompilationResultProto_ErrorCode_CompilationResultProto_ErrorCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CompilationResultProto_ErrorCode_CompilationResultProto_ErrorCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CompilationResultProto_ErrorCode_IsValid(int value);
const CompilationResultProto_ErrorCode CompilationResultProto_ErrorCode_ErrorCode_MIN = CompilationResultProto_ErrorCode_UNKNOWN;
const CompilationResultProto_ErrorCode CompilationResultProto_ErrorCode_ErrorCode_MAX = CompilationResultProto_ErrorCode_OUT_OF_MEMORY;
const int CompilationResultProto_ErrorCode_ErrorCode_ARRAYSIZE = CompilationResultProto_ErrorCode_ErrorCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* CompilationResultProto_ErrorCode_descriptor();
inline const ::std::string& CompilationResultProto_ErrorCode_Name(CompilationResultProto_ErrorCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    CompilationResultProto_ErrorCode_descriptor(), value);
}
inline bool CompilationResultProto_ErrorCode_Parse(
    const ::std::string& name, CompilationResultProto_ErrorCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CompilationResultProto_ErrorCode>(
    CompilationResultProto_ErrorCode_descriptor(), name, value);
}
// ===================================================================

class CompilationResultProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.CompilationResultProto) */ {
 public:
  CompilationResultProto();
  virtual ~CompilationResultProto();

  CompilationResultProto(const CompilationResultProto& from);

  inline CompilationResultProto& operator=(const CompilationResultProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CompilationResultProto(CompilationResultProto&& from) noexcept
    : CompilationResultProto() {
    *this = ::std::move(from);
  }

  inline CompilationResultProto& operator=(CompilationResultProto&& from) noexcept {
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
  static const CompilationResultProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CompilationResultProto* internal_default_instance() {
    return reinterpret_cast<const CompilationResultProto*>(
               &_CompilationResultProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(CompilationResultProto* other);
  void Swap(CompilationResultProto* other);
  friend void swap(CompilationResultProto& a, CompilationResultProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CompilationResultProto* New() const final {
    return CreateMaybeMessage<CompilationResultProto>(NULL);
  }

  CompilationResultProto* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CompilationResultProto>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CompilationResultProto& from);
  void MergeFrom(const CompilationResultProto& from);
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
  void InternalSwap(CompilationResultProto* other);
  protected:
  explicit CompilationResultProto(::google::protobuf::Arena* arena);
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

  typedef CompilationResultProto_ErrorCode ErrorCode;
  static const ErrorCode UNKNOWN =
    CompilationResultProto_ErrorCode_UNKNOWN;
  static const ErrorCode OUT_OF_MEMORY =
    CompilationResultProto_ErrorCode_OUT_OF_MEMORY;
  static inline bool ErrorCode_IsValid(int value) {
    return CompilationResultProto_ErrorCode_IsValid(value);
  }
  static const ErrorCode ErrorCode_MIN =
    CompilationResultProto_ErrorCode_ErrorCode_MIN;
  static const ErrorCode ErrorCode_MAX =
    CompilationResultProto_ErrorCode_ErrorCode_MAX;
  static const int ErrorCode_ARRAYSIZE =
    CompilationResultProto_ErrorCode_ErrorCode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ErrorCode_descriptor() {
    return CompilationResultProto_ErrorCode_descriptor();
  }
  static inline const ::std::string& ErrorCode_Name(ErrorCode value) {
    return CompilationResultProto_ErrorCode_Name(value);
  }
  static inline bool ErrorCode_Parse(const ::std::string& name,
      ErrorCode* value) {
    return CompilationResultProto_ErrorCode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .xla.HloProto hlo_protos = 3;
  int hlo_protos_size() const;
  void clear_hlo_protos();
  static const int kHloProtosFieldNumber = 3;
  ::xla::HloProto* mutable_hlo_protos(int index);
  ::google::protobuf::RepeatedPtrField< ::xla::HloProto >*
      mutable_hlo_protos();
  const ::xla::HloProto& hlo_protos(int index) const;
  ::xla::HloProto* add_hlo_protos();
  const ::google::protobuf::RepeatedPtrField< ::xla::HloProto >&
      hlo_protos() const;

  // string status_error_message = 2;
  void clear_status_error_message();
  static const int kStatusErrorMessageFieldNumber = 2;
  const ::std::string& status_error_message() const;
  void set_status_error_message(const ::std::string& value);
  #if LANG_CXX11
  void set_status_error_message(::std::string&& value);
  #endif
  void set_status_error_message(const char* value);
  void set_status_error_message(const char* value, size_t size);
  ::std::string* mutable_status_error_message();
  ::std::string* release_status_error_message();
  void set_allocated_status_error_message(::std::string* status_error_message);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_status_error_message();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_status_error_message(
      ::std::string* status_error_message);

  // .tensorflow.error.Code status_code = 1;
  void clear_status_code();
  static const int kStatusCodeFieldNumber = 1;
  ::tensorflow::error::Code status_code() const;
  void set_status_code(::tensorflow::error::Code value);

  // .tensorflow.tpu.CompilationResultProto.ErrorCode error_code = 4;
  void clear_error_code();
  static const int kErrorCodeFieldNumber = 4;
  ::tensorflow::tpu::CompilationResultProto_ErrorCode error_code() const;
  void set_error_code(::tensorflow::tpu::CompilationResultProto_ErrorCode value);

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.CompilationResultProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::xla::HloProto > hlo_protos_;
  ::google::protobuf::internal::ArenaStringPtr status_error_message_;
  int status_code_;
  int error_code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CompilationResultProto

// .tensorflow.error.Code status_code = 1;
inline void CompilationResultProto::clear_status_code() {
  status_code_ = 0;
}
inline ::tensorflow::error::Code CompilationResultProto::status_code() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.CompilationResultProto.status_code)
  return static_cast< ::tensorflow::error::Code >(status_code_);
}
inline void CompilationResultProto::set_status_code(::tensorflow::error::Code value) {
  
  status_code_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.CompilationResultProto.status_code)
}

// string status_error_message = 2;
inline void CompilationResultProto::clear_status_error_message() {
  status_error_message_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& CompilationResultProto::status_error_message() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.CompilationResultProto.status_error_message)
  return status_error_message_.Get();
}
inline void CompilationResultProto::set_status_error_message(const ::std::string& value) {
  
  status_error_message_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.tpu.CompilationResultProto.status_error_message)
}
#if LANG_CXX11
inline void CompilationResultProto::set_status_error_message(::std::string&& value) {
  
  status_error_message_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.tpu.CompilationResultProto.status_error_message)
}
#endif
inline void CompilationResultProto::set_status_error_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  status_error_message_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.tpu.CompilationResultProto.status_error_message)
}
inline void CompilationResultProto::set_status_error_message(const char* value,
    size_t size) {
  
  status_error_message_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tpu.CompilationResultProto.status_error_message)
}
inline ::std::string* CompilationResultProto::mutable_status_error_message() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.CompilationResultProto.status_error_message)
  return status_error_message_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CompilationResultProto::release_status_error_message() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.CompilationResultProto.status_error_message)
  
  return status_error_message_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void CompilationResultProto::set_allocated_status_error_message(::std::string* status_error_message) {
  if (status_error_message != NULL) {
    
  } else {
    
  }
  status_error_message_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status_error_message,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.CompilationResultProto.status_error_message)
}
inline ::std::string* CompilationResultProto::unsafe_arena_release_status_error_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.tpu.CompilationResultProto.status_error_message)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return status_error_message_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void CompilationResultProto::unsafe_arena_set_allocated_status_error_message(
    ::std::string* status_error_message) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (status_error_message != NULL) {
    
  } else {
    
  }
  status_error_message_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      status_error_message, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.tpu.CompilationResultProto.status_error_message)
}

// repeated .xla.HloProto hlo_protos = 3;
inline int CompilationResultProto::hlo_protos_size() const {
  return hlo_protos_.size();
}
inline ::xla::HloProto* CompilationResultProto::mutable_hlo_protos(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.CompilationResultProto.hlo_protos)
  return hlo_protos_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::xla::HloProto >*
CompilationResultProto::mutable_hlo_protos() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tpu.CompilationResultProto.hlo_protos)
  return &hlo_protos_;
}
inline const ::xla::HloProto& CompilationResultProto::hlo_protos(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.CompilationResultProto.hlo_protos)
  return hlo_protos_.Get(index);
}
inline ::xla::HloProto* CompilationResultProto::add_hlo_protos() {
  // @@protoc_insertion_point(field_add:tensorflow.tpu.CompilationResultProto.hlo_protos)
  return hlo_protos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::xla::HloProto >&
CompilationResultProto::hlo_protos() const {
  // @@protoc_insertion_point(field_list:tensorflow.tpu.CompilationResultProto.hlo_protos)
  return hlo_protos_;
}

// .tensorflow.tpu.CompilationResultProto.ErrorCode error_code = 4;
inline void CompilationResultProto::clear_error_code() {
  error_code_ = 0;
}
inline ::tensorflow::tpu::CompilationResultProto_ErrorCode CompilationResultProto::error_code() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.CompilationResultProto.error_code)
  return static_cast< ::tensorflow::tpu::CompilationResultProto_ErrorCode >(error_code_);
}
inline void CompilationResultProto::set_error_code(::tensorflow::tpu::CompilationResultProto_ErrorCode value) {
  
  error_code_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.CompilationResultProto.error_code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tpu
}  // namespace tensorflow

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::tpu::CompilationResultProto_ErrorCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::tpu::CompilationResultProto_ErrorCode>() {
  return ::tensorflow::tpu::CompilationResultProto_ErrorCode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompilation_5fresult_2eproto
