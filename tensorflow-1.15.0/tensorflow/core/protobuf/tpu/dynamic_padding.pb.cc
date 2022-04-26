// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tpu/dynamic_padding.proto

#include "tensorflow/core/protobuf/tpu/dynamic_padding.pb.h"

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

namespace tensorflow {
namespace tpu {
class PaddingMapDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PaddingMap>
      _instance;
} _PaddingMap_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto {
static void InitDefaultsPaddingMap() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::tpu::_PaddingMap_default_instance_;
    new (ptr) ::tensorflow::tpu::PaddingMap();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::tpu::PaddingMap::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PaddingMap =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPaddingMap}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PaddingMap.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::PaddingMap, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::PaddingMap, arg_index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::PaddingMap, shape_index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::PaddingMap, padding_arg_index_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::tpu::PaddingMap)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::tpu::_PaddingMap_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/core/protobuf/tpu/dynamic_padding.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n2tensorflow/core/protobuf/tpu/dynamic_p"
      "adding.proto\022\016tensorflow.tpu\"O\n\nPaddingM"
      "ap\022\021\n\targ_index\030\001 \001(\005\022\023\n\013shape_index\030\002 \001"
      "(\005\022\031\n\021padding_arg_index\030\003 \001(\005B\003\370\001\001b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 162);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/tpu/dynamic_padding.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto
namespace tensorflow {
namespace tpu {

// ===================================================================

void PaddingMap::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PaddingMap::kArgIndexFieldNumber;
const int PaddingMap::kShapeIndexFieldNumber;
const int PaddingMap::kPaddingArgIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PaddingMap::PaddingMap()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::scc_info_PaddingMap.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.tpu.PaddingMap)
}
PaddingMap::PaddingMap(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::scc_info_PaddingMap.base);
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.tpu.PaddingMap)
}
PaddingMap::PaddingMap(const PaddingMap& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&arg_index_, &from.arg_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&padding_arg_index_) -
    reinterpret_cast<char*>(&arg_index_)) + sizeof(padding_arg_index_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.tpu.PaddingMap)
}

void PaddingMap::SharedCtor() {
  ::memset(&arg_index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&padding_arg_index_) -
      reinterpret_cast<char*>(&arg_index_)) + sizeof(padding_arg_index_));
}

PaddingMap::~PaddingMap() {
  // @@protoc_insertion_point(destructor:tensorflow.tpu.PaddingMap)
  SharedDtor();
}

void PaddingMap::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void PaddingMap::ArenaDtor(void* object) {
  PaddingMap* _this = reinterpret_cast< PaddingMap* >(object);
  (void)_this;
}
void PaddingMap::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void PaddingMap::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PaddingMap::descriptor() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PaddingMap& PaddingMap::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::scc_info_PaddingMap.base);
  return *internal_default_instance();
}


void PaddingMap::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.tpu.PaddingMap)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&arg_index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&padding_arg_index_) -
      reinterpret_cast<char*>(&arg_index_)) + sizeof(padding_arg_index_));
  _internal_metadata_.Clear();
}

bool PaddingMap::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.tpu.PaddingMap)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 arg_index = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &arg_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 shape_index = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &shape_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 padding_arg_index = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &padding_arg_index_)));
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
  // @@protoc_insertion_point(parse_success:tensorflow.tpu.PaddingMap)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.tpu.PaddingMap)
  return false;
#undef DO_
}

void PaddingMap::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.tpu.PaddingMap)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 arg_index = 1;
  if (this->arg_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->arg_index(), output);
  }

  // int32 shape_index = 2;
  if (this->shape_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->shape_index(), output);
  }

  // int32 padding_arg_index = 3;
  if (this->padding_arg_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->padding_arg_index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.tpu.PaddingMap)
}

::google::protobuf::uint8* PaddingMap::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.tpu.PaddingMap)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 arg_index = 1;
  if (this->arg_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->arg_index(), target);
  }

  // int32 shape_index = 2;
  if (this->shape_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->shape_index(), target);
  }

  // int32 padding_arg_index = 3;
  if (this->padding_arg_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->padding_arg_index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.tpu.PaddingMap)
  return target;
}

size_t PaddingMap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.tpu.PaddingMap)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 arg_index = 1;
  if (this->arg_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->arg_index());
  }

  // int32 shape_index = 2;
  if (this->shape_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->shape_index());
  }

  // int32 padding_arg_index = 3;
  if (this->padding_arg_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->padding_arg_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PaddingMap::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.tpu.PaddingMap)
  GOOGLE_DCHECK_NE(&from, this);
  const PaddingMap* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PaddingMap>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.tpu.PaddingMap)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.tpu.PaddingMap)
    MergeFrom(*source);
  }
}

void PaddingMap::MergeFrom(const PaddingMap& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.tpu.PaddingMap)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.arg_index() != 0) {
    set_arg_index(from.arg_index());
  }
  if (from.shape_index() != 0) {
    set_shape_index(from.shape_index());
  }
  if (from.padding_arg_index() != 0) {
    set_padding_arg_index(from.padding_arg_index());
  }
}

void PaddingMap::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.tpu.PaddingMap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PaddingMap::CopyFrom(const PaddingMap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.tpu.PaddingMap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PaddingMap::IsInitialized() const {
  return true;
}

void PaddingMap::Swap(PaddingMap* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    PaddingMap* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void PaddingMap::UnsafeArenaSwap(PaddingMap* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void PaddingMap::InternalSwap(PaddingMap* other) {
  using std::swap;
  swap(arg_index_, other->arg_index_);
  swap(shape_index_, other->shape_index_);
  swap(padding_arg_index_, other->padding_arg_index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PaddingMap::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fdynamic_5fpadding_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tpu
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::tpu::PaddingMap* Arena::CreateMaybeMessage< ::tensorflow::tpu::PaddingMap >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::tpu::PaddingMap >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
