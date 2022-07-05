// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/tpu/kernels/tpu_compilation_cache_common.proto

#include "tensorflow/core/tpu/kernels/tpu_compilation_cache_common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TpuCompilationUidAndIndex;
}  // namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto
namespace tensorflow {
namespace tpu {
class TpuCompilationUidAndIndexDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TpuCompilationUidAndIndex>
      _instance;
} _TpuCompilationUidAndIndex_default_instance_;
class GetTpuProgramRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GetTpuProgramRequest>
      _instance;
  ::google::protobuf::internal::ArenaStringPtr key_;
  const ::tensorflow::tpu::TpuCompilationUidAndIndex* uid_and_index_;
} _GetTpuProgramRequest_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto {
static void InitDefaultsTpuCompilationUidAndIndex() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::tpu::_TpuCompilationUidAndIndex_default_instance_;
    new (ptr) ::tensorflow::tpu::TpuCompilationUidAndIndex();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::tpu::TpuCompilationUidAndIndex::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TpuCompilationUidAndIndex =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTpuCompilationUidAndIndex}, {}};

static void InitDefaultsGetTpuProgramRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::tpu::_GetTpuProgramRequest_default_instance_;
    new (ptr) ::tensorflow::tpu::GetTpuProgramRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::tpu::GetTpuProgramRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_GetTpuProgramRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsGetTpuProgramRequest}, {
      &protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::scc_info_TpuCompilationUidAndIndex.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TpuCompilationUidAndIndex.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GetTpuProgramRequest.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationUidAndIndex, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationUidAndIndex, uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationUidAndIndex, proto_index_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::GetTpuProgramRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::GetTpuProgramRequest, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::tensorflow::tpu::GetTpuProgramRequestDefaultTypeInternal, key_),
  offsetof(::tensorflow::tpu::GetTpuProgramRequestDefaultTypeInternal, uid_and_index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::GetTpuProgramRequest, fetch_target_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::GetTpuProgramRequest, key_oneof_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::tpu::TpuCompilationUidAndIndex)},
  { 7, -1, sizeof(::tensorflow::tpu::GetTpuProgramRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::tpu::_TpuCompilationUidAndIndex_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::tpu::_GetTpuProgramRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/core/tpu/kernels/tpu_compilation_cache_common.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n>tensorflow/core/tpu/kernels/tpu_compil"
      "ation_cache_common.proto\022\016tensorflow.tpu"
      "\"=\n\031TpuCompilationUidAndIndex\022\013\n\003uid\030\001 \001"
      "(\003\022\023\n\013proto_index\030\002 \001(\005\"\271\001\n\024GetTpuProgra"
      "mRequest\022\r\n\003key\030\001 \001(\tH\000\022B\n\ruid_and_index"
      "\030\002 \001(\0132).tensorflow.tpu.TpuCompilationUi"
      "dAndIndexH\000\022A\n\014fetch_target\030\003 \001(\0162+.tens"
      "orflow.tpu.CompilationCacheFetchTargetB\013"
      "\n\tkey_oneof*R\n\033CompilationCacheFetchTarg"
      "et\022\013\n\007INVALID\020\000\022\010\n\004MAIN\020\001\022\014\n\010SHARDING\020\002\022"
      "\016\n\nUNSHARDING\020\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 423);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/tpu/kernels/tpu_compilation_cache_common.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto
namespace tensorflow {
namespace tpu {
const ::google::protobuf::EnumDescriptor* CompilationCacheFetchTarget_descriptor() {
  protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::file_level_enum_descriptors[0];
}
bool CompilationCacheFetchTarget_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void TpuCompilationUidAndIndex::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TpuCompilationUidAndIndex::kUidFieldNumber;
const int TpuCompilationUidAndIndex::kProtoIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TpuCompilationUidAndIndex::TpuCompilationUidAndIndex()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::scc_info_TpuCompilationUidAndIndex.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.tpu.TpuCompilationUidAndIndex)
}
TpuCompilationUidAndIndex::TpuCompilationUidAndIndex(const TpuCompilationUidAndIndex& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&uid_, &from.uid_,
    static_cast<size_t>(reinterpret_cast<char*>(&proto_index_) -
    reinterpret_cast<char*>(&uid_)) + sizeof(proto_index_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.tpu.TpuCompilationUidAndIndex)
}

void TpuCompilationUidAndIndex::SharedCtor() {
  ::memset(&uid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&proto_index_) -
      reinterpret_cast<char*>(&uid_)) + sizeof(proto_index_));
}

TpuCompilationUidAndIndex::~TpuCompilationUidAndIndex() {
  // @@protoc_insertion_point(destructor:tensorflow.tpu.TpuCompilationUidAndIndex)
  SharedDtor();
}

void TpuCompilationUidAndIndex::SharedDtor() {
}

void TpuCompilationUidAndIndex::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TpuCompilationUidAndIndex::descriptor() {
  ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TpuCompilationUidAndIndex& TpuCompilationUidAndIndex::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::scc_info_TpuCompilationUidAndIndex.base);
  return *internal_default_instance();
}


void TpuCompilationUidAndIndex::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&uid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&proto_index_) -
      reinterpret_cast<char*>(&uid_)) + sizeof(proto_index_));
  _internal_metadata_.Clear();
}

bool TpuCompilationUidAndIndex::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 uid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 proto_index = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &proto_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.tpu.TpuCompilationUidAndIndex)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.tpu.TpuCompilationUidAndIndex)
  return false;
#undef DO_
}

void TpuCompilationUidAndIndex::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 uid = 1;
  if (this->uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->uid(), output);
  }

  // int32 proto_index = 2;
  if (this->proto_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->proto_index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.tpu.TpuCompilationUidAndIndex)
}

::google::protobuf::uint8* TpuCompilationUidAndIndex::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 uid = 1;
  if (this->uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->uid(), target);
  }

  // int32 proto_index = 2;
  if (this->proto_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->proto_index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.tpu.TpuCompilationUidAndIndex)
  return target;
}

size_t TpuCompilationUidAndIndex::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int64 uid = 1;
  if (this->uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->uid());
  }

  // int32 proto_index = 2;
  if (this->proto_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->proto_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TpuCompilationUidAndIndex::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  GOOGLE_DCHECK_NE(&from, this);
  const TpuCompilationUidAndIndex* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TpuCompilationUidAndIndex>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.tpu.TpuCompilationUidAndIndex)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.tpu.TpuCompilationUidAndIndex)
    MergeFrom(*source);
  }
}

void TpuCompilationUidAndIndex::MergeFrom(const TpuCompilationUidAndIndex& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.uid() != 0) {
    set_uid(from.uid());
  }
  if (from.proto_index() != 0) {
    set_proto_index(from.proto_index());
  }
}

void TpuCompilationUidAndIndex::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TpuCompilationUidAndIndex::CopyFrom(const TpuCompilationUidAndIndex& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.tpu.TpuCompilationUidAndIndex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TpuCompilationUidAndIndex::IsInitialized() const {
  return true;
}

void TpuCompilationUidAndIndex::Swap(TpuCompilationUidAndIndex* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TpuCompilationUidAndIndex::InternalSwap(TpuCompilationUidAndIndex* other) {
  using std::swap;
  swap(uid_, other->uid_);
  swap(proto_index_, other->proto_index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TpuCompilationUidAndIndex::GetMetadata() const {
  protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GetTpuProgramRequest::InitAsDefaultInstance() {
  ::tensorflow::tpu::_GetTpuProgramRequest_default_instance_.key_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::tensorflow::tpu::_GetTpuProgramRequest_default_instance_.uid_and_index_ = const_cast< ::tensorflow::tpu::TpuCompilationUidAndIndex*>(
      ::tensorflow::tpu::TpuCompilationUidAndIndex::internal_default_instance());
}
void GetTpuProgramRequest::set_allocated_uid_and_index(::tensorflow::tpu::TpuCompilationUidAndIndex* uid_and_index) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_key_oneof();
  if (uid_and_index) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      uid_and_index = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, uid_and_index, submessage_arena);
    }
    set_has_uid_and_index();
    key_oneof_.uid_and_index_ = uid_and_index;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.GetTpuProgramRequest.uid_and_index)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetTpuProgramRequest::kKeyFieldNumber;
const int GetTpuProgramRequest::kUidAndIndexFieldNumber;
const int GetTpuProgramRequest::kFetchTargetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetTpuProgramRequest::GetTpuProgramRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::scc_info_GetTpuProgramRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.tpu.GetTpuProgramRequest)
}
GetTpuProgramRequest::GetTpuProgramRequest(const GetTpuProgramRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  fetch_target_ = from.fetch_target_;
  clear_has_key_oneof();
  switch (from.key_oneof_case()) {
    case kKey: {
      set_key(from.key());
      break;
    }
    case kUidAndIndex: {
      mutable_uid_and_index()->::tensorflow::tpu::TpuCompilationUidAndIndex::MergeFrom(from.uid_and_index());
      break;
    }
    case KEY_ONEOF_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.tpu.GetTpuProgramRequest)
}

void GetTpuProgramRequest::SharedCtor() {
  fetch_target_ = 0;
  clear_has_key_oneof();
}

GetTpuProgramRequest::~GetTpuProgramRequest() {
  // @@protoc_insertion_point(destructor:tensorflow.tpu.GetTpuProgramRequest)
  SharedDtor();
}

void GetTpuProgramRequest::SharedDtor() {
  if (has_key_oneof()) {
    clear_key_oneof();
  }
}

void GetTpuProgramRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GetTpuProgramRequest::descriptor() {
  ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GetTpuProgramRequest& GetTpuProgramRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::scc_info_GetTpuProgramRequest.base);
  return *internal_default_instance();
}


void GetTpuProgramRequest::clear_key_oneof() {
// @@protoc_insertion_point(one_of_clear_start:tensorflow.tpu.GetTpuProgramRequest)
  switch (key_oneof_case()) {
    case kKey: {
      key_oneof_.key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kUidAndIndex: {
      delete key_oneof_.uid_and_index_;
      break;
    }
    case KEY_ONEOF_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = KEY_ONEOF_NOT_SET;
}


void GetTpuProgramRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.tpu.GetTpuProgramRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  fetch_target_ = 0;
  clear_key_oneof();
  _internal_metadata_.Clear();
}

bool GetTpuProgramRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.tpu.GetTpuProgramRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), static_cast<int>(this->key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.tpu.GetTpuProgramRequest.key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.tpu.TpuCompilationUidAndIndex uid_and_index = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_uid_and_index()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.tpu.CompilationCacheFetchTarget fetch_target = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_fetch_target(static_cast< ::tensorflow::tpu::CompilationCacheFetchTarget >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.tpu.GetTpuProgramRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.tpu.GetTpuProgramRequest)
  return false;
#undef DO_
}

void GetTpuProgramRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.tpu.GetTpuProgramRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.tpu.GetTpuProgramRequest.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // .tensorflow.tpu.TpuCompilationUidAndIndex uid_and_index = 2;
  if (has_uid_and_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_uid_and_index(), output);
  }

  // .tensorflow.tpu.CompilationCacheFetchTarget fetch_target = 3;
  if (this->fetch_target() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->fetch_target(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.tpu.GetTpuProgramRequest)
}

::google::protobuf::uint8* GetTpuProgramRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.tpu.GetTpuProgramRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), static_cast<int>(this->key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.tpu.GetTpuProgramRequest.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // .tensorflow.tpu.TpuCompilationUidAndIndex uid_and_index = 2;
  if (has_uid_and_index()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_uid_and_index(), deterministic, target);
  }

  // .tensorflow.tpu.CompilationCacheFetchTarget fetch_target = 3;
  if (this->fetch_target() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->fetch_target(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.tpu.GetTpuProgramRequest)
  return target;
}

size_t GetTpuProgramRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.tpu.GetTpuProgramRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .tensorflow.tpu.CompilationCacheFetchTarget fetch_target = 3;
  if (this->fetch_target() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fetch_target());
  }

  switch (key_oneof_case()) {
    // string key = 1;
    case kKey: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
      break;
    }
    // .tensorflow.tpu.TpuCompilationUidAndIndex uid_and_index = 2;
    case kUidAndIndex: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *key_oneof_.uid_and_index_);
      break;
    }
    case KEY_ONEOF_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetTpuProgramRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.tpu.GetTpuProgramRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetTpuProgramRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetTpuProgramRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.tpu.GetTpuProgramRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.tpu.GetTpuProgramRequest)
    MergeFrom(*source);
  }
}

void GetTpuProgramRequest::MergeFrom(const GetTpuProgramRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.tpu.GetTpuProgramRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.fetch_target() != 0) {
    set_fetch_target(from.fetch_target());
  }
  switch (from.key_oneof_case()) {
    case kKey: {
      set_key(from.key());
      break;
    }
    case kUidAndIndex: {
      mutable_uid_and_index()->::tensorflow::tpu::TpuCompilationUidAndIndex::MergeFrom(from.uid_and_index());
      break;
    }
    case KEY_ONEOF_NOT_SET: {
      break;
    }
  }
}

void GetTpuProgramRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.tpu.GetTpuProgramRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetTpuProgramRequest::CopyFrom(const GetTpuProgramRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.tpu.GetTpuProgramRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetTpuProgramRequest::IsInitialized() const {
  return true;
}

void GetTpuProgramRequest::Swap(GetTpuProgramRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetTpuProgramRequest::InternalSwap(GetTpuProgramRequest* other) {
  using std::swap;
  swap(fetch_target_, other->fetch_target_);
  swap(key_oneof_, other->key_oneof_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GetTpuProgramRequest::GetMetadata() const {
  protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompilation_5fcache_5fcommon_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tpu
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::tpu::TpuCompilationUidAndIndex* Arena::CreateMaybeMessage< ::tensorflow::tpu::TpuCompilationUidAndIndex >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::tpu::TpuCompilationUidAndIndex >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::tpu::GetTpuProgramRequest* Arena::CreateMaybeMessage< ::tensorflow::tpu::GetTpuProgramRequest >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::tpu::GetTpuProgramRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
