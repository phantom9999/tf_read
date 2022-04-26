// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/config/log_collector_config.proto

#include "tensorflow_serving/config/log_collector_config.pb.h"

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
namespace serving {
class LogCollectorConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LogCollectorConfig>
      _instance;
} _LogCollectorConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto {
static void InitDefaultsLogCollectorConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_LogCollectorConfig_default_instance_;
    new (ptr) ::tensorflow::serving::LogCollectorConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::LogCollectorConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LogCollectorConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLogCollectorConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LogCollectorConfig.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::serving::LogCollectorConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::serving::LogCollectorConfig, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::serving::LogCollectorConfig, filename_prefix_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::serving::LogCollectorConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::serving::_LogCollectorConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow_serving/config/log_collector_config.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n4tensorflow_serving/config/log_collecto"
      "r_config.proto\022\022tensorflow.serving\";\n\022Lo"
      "gCollectorConfig\022\014\n\004type\030\001 \001(\t\022\027\n\017filena"
      "me_prefix\030\002 \001(\tB\003\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow_serving/config/log_collector_config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto
namespace tensorflow {
namespace serving {

// ===================================================================

void LogCollectorConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogCollectorConfig::kTypeFieldNumber;
const int LogCollectorConfig::kFilenamePrefixFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogCollectorConfig::LogCollectorConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::scc_info_LogCollectorConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.serving.LogCollectorConfig)
}
LogCollectorConfig::LogCollectorConfig(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::scc_info_LogCollectorConfig.base);
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.LogCollectorConfig)
}
LogCollectorConfig::LogCollectorConfig(const LogCollectorConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.type().size() > 0) {
    type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type(),
      GetArenaNoVirtual());
  }
  filename_prefix_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.filename_prefix().size() > 0) {
    filename_prefix_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.filename_prefix(),
      GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.LogCollectorConfig)
}

void LogCollectorConfig::SharedCtor() {
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  filename_prefix_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LogCollectorConfig::~LogCollectorConfig() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.LogCollectorConfig)
  SharedDtor();
}

void LogCollectorConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  filename_prefix_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LogCollectorConfig::ArenaDtor(void* object) {
  LogCollectorConfig* _this = reinterpret_cast< LogCollectorConfig* >(object);
  (void)_this;
}
void LogCollectorConfig::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void LogCollectorConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LogCollectorConfig::descriptor() {
  ::protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LogCollectorConfig& LogCollectorConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::scc_info_LogCollectorConfig.base);
  return *internal_default_instance();
}


void LogCollectorConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.LogCollectorConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  filename_prefix_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  _internal_metadata_.Clear();
}

bool LogCollectorConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.serving.LogCollectorConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->type().data(), static_cast<int>(this->type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.serving.LogCollectorConfig.type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string filename_prefix = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename_prefix()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->filename_prefix().data(), static_cast<int>(this->filename_prefix().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.serving.LogCollectorConfig.filename_prefix"));
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
  // @@protoc_insertion_point(parse_success:tensorflow.serving.LogCollectorConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.serving.LogCollectorConfig)
  return false;
#undef DO_
}

void LogCollectorConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.serving.LogCollectorConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.LogCollectorConfig.type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type(), output);
  }

  // string filename_prefix = 2;
  if (this->filename_prefix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->filename_prefix().data(), static_cast<int>(this->filename_prefix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.LogCollectorConfig.filename_prefix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->filename_prefix(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.serving.LogCollectorConfig)
}

::google::protobuf::uint8* LogCollectorConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.LogCollectorConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.LogCollectorConfig.type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type(), target);
  }

  // string filename_prefix = 2;
  if (this->filename_prefix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->filename_prefix().data(), static_cast<int>(this->filename_prefix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.LogCollectorConfig.filename_prefix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->filename_prefix(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.LogCollectorConfig)
  return target;
}

size_t LogCollectorConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.LogCollectorConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type());
  }

  // string filename_prefix = 2;
  if (this->filename_prefix().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->filename_prefix());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogCollectorConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.LogCollectorConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const LogCollectorConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogCollectorConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.LogCollectorConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.LogCollectorConfig)
    MergeFrom(*source);
  }
}

void LogCollectorConfig::MergeFrom(const LogCollectorConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.LogCollectorConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type().size() > 0) {
    set_type(from.type());
  }
  if (from.filename_prefix().size() > 0) {
    set_filename_prefix(from.filename_prefix());
  }
}

void LogCollectorConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.LogCollectorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogCollectorConfig::CopyFrom(const LogCollectorConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.LogCollectorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogCollectorConfig::IsInitialized() const {
  return true;
}

void LogCollectorConfig::Swap(LogCollectorConfig* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    LogCollectorConfig* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void LogCollectorConfig::UnsafeArenaSwap(LogCollectorConfig* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void LogCollectorConfig::InternalSwap(LogCollectorConfig* other) {
  using std::swap;
  type_.Swap(&other->type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  filename_prefix_.Swap(&other->filename_prefix_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LogCollectorConfig::GetMetadata() const {
  protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_5fserving_2fconfig_2flog_5fcollector_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::serving::LogCollectorConfig* Arena::CreateMaybeMessage< ::tensorflow::serving::LogCollectorConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::LogCollectorConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
