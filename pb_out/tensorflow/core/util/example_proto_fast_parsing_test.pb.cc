// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/example_proto_fast_parsing_test.proto

#include "tensorflow/core/util/example_proto_fast_parsing_test.pb.h"

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

namespace protobuf_tensorflow_2fcore_2fexample_2ffeature_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fexample_2ffeature_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Features;
}  // namespace protobuf_tensorflow_2fcore_2fexample_2ffeature_2eproto
namespace tensorflow {
class ExampleWithExtrasDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ExampleWithExtras>
      _instance;
} _ExampleWithExtras_default_instance_;
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto {
static void InitDefaultsExampleWithExtras() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_ExampleWithExtras_default_instance_;
    new (ptr) ::tensorflow::ExampleWithExtras();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ExampleWithExtras::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_ExampleWithExtras =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsExampleWithExtras}, {
      &protobuf_tensorflow_2fcore_2fexample_2ffeature_2eproto::scc_info_Features.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ExampleWithExtras.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, features_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra3_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra4_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra5_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra6_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ExampleWithExtras, extra7_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::ExampleWithExtras)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_ExampleWithExtras_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/core/util/example_proto_fast_parsing_test.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n:tensorflow/core/util/example_proto_fas"
      "t_parsing_test.proto\022\ntensorflow\032%tensor"
      "flow/core/example/feature.proto\"\310\001\n\021Exam"
      "pleWithExtras\022&\n\010features\030\001 \001(\0132\024.tensor"
      "flow.Features\022\017\n\006extra1\030\271\n \001(\t\022\017\n\006extra2"
      "\030\272\n \001(\003\022\017\n\006extra3\030\273\n \001(\007\022\017\n\006extra4\030\274\n \001("
      "\006\022\017\n\006extra5\030\275\n \001(\001\022\017\n\006extra6\030\276\n \003(\002\022%\n\006e"
      "xtra7\030\277\n \001(\0132\024.tensorflow.FeaturesB\003\370\001\001b"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 327);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/util/example_proto_fast_parsing_test.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fcore_2fexample_2ffeature_2eproto::AddDescriptors();
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
}  // namespace protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto
namespace tensorflow {

// ===================================================================

void ExampleWithExtras::InitAsDefaultInstance() {
  ::tensorflow::_ExampleWithExtras_default_instance_._instance.get_mutable()->features_ = const_cast< ::tensorflow::Features*>(
      ::tensorflow::Features::internal_default_instance());
  ::tensorflow::_ExampleWithExtras_default_instance_._instance.get_mutable()->extra7_ = const_cast< ::tensorflow::Features*>(
      ::tensorflow::Features::internal_default_instance());
}
void ExampleWithExtras::unsafe_arena_set_allocated_features(
    ::tensorflow::Features* features) {
  if (GetArenaNoVirtual() == NULL) {
    delete features_;
  }
  features_ = features;
  if (features) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ExampleWithExtras.features)
}
void ExampleWithExtras::clear_features() {
  if (GetArenaNoVirtual() == NULL && features_ != NULL) {
    delete features_;
  }
  features_ = NULL;
}
void ExampleWithExtras::unsafe_arena_set_allocated_extra7(
    ::tensorflow::Features* extra7) {
  if (GetArenaNoVirtual() == NULL) {
    delete extra7_;
  }
  extra7_ = extra7;
  if (extra7) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ExampleWithExtras.extra7)
}
void ExampleWithExtras::clear_extra7() {
  if (GetArenaNoVirtual() == NULL && extra7_ != NULL) {
    delete extra7_;
  }
  extra7_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExampleWithExtras::kFeaturesFieldNumber;
const int ExampleWithExtras::kExtra1FieldNumber;
const int ExampleWithExtras::kExtra2FieldNumber;
const int ExampleWithExtras::kExtra3FieldNumber;
const int ExampleWithExtras::kExtra4FieldNumber;
const int ExampleWithExtras::kExtra5FieldNumber;
const int ExampleWithExtras::kExtra6FieldNumber;
const int ExampleWithExtras::kExtra7FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExampleWithExtras::ExampleWithExtras()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::scc_info_ExampleWithExtras.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ExampleWithExtras)
}
ExampleWithExtras::ExampleWithExtras(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  extra6_(arena) {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::scc_info_ExampleWithExtras.base);
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ExampleWithExtras)
}
ExampleWithExtras::ExampleWithExtras(const ExampleWithExtras& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      extra6_(from.extra6_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  extra1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.extra1().size() > 0) {
    extra1_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extra1(),
      GetArenaNoVirtual());
  }
  if (from.has_features()) {
    features_ = new ::tensorflow::Features(*from.features_);
  } else {
    features_ = NULL;
  }
  if (from.has_extra7()) {
    extra7_ = new ::tensorflow::Features(*from.extra7_);
  } else {
    extra7_ = NULL;
  }
  ::memcpy(&extra3_, &from.extra3_,
    static_cast<size_t>(reinterpret_cast<char*>(&extra5_) -
    reinterpret_cast<char*>(&extra3_)) + sizeof(extra5_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.ExampleWithExtras)
}

void ExampleWithExtras::SharedCtor() {
  extra1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&features_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&extra5_) -
      reinterpret_cast<char*>(&features_)) + sizeof(extra5_));
}

ExampleWithExtras::~ExampleWithExtras() {
  // @@protoc_insertion_point(destructor:tensorflow.ExampleWithExtras)
  SharedDtor();
}

void ExampleWithExtras::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  extra1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete features_;
  if (this != internal_default_instance()) delete extra7_;
}

void ExampleWithExtras::ArenaDtor(void* object) {
  ExampleWithExtras* _this = reinterpret_cast< ExampleWithExtras* >(object);
  (void)_this;
}
void ExampleWithExtras::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ExampleWithExtras::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ExampleWithExtras::descriptor() {
  ::protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ExampleWithExtras& ExampleWithExtras::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::scc_info_ExampleWithExtras.base);
  return *internal_default_instance();
}


void ExampleWithExtras::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ExampleWithExtras)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  extra6_.Clear();
  extra1_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  if (GetArenaNoVirtual() == NULL && features_ != NULL) {
    delete features_;
  }
  features_ = NULL;
  if (GetArenaNoVirtual() == NULL && extra7_ != NULL) {
    delete extra7_;
  }
  extra7_ = NULL;
  ::memset(&extra3_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&extra5_) -
      reinterpret_cast<char*>(&extra3_)) + sizeof(extra5_));
  _internal_metadata_.Clear();
}

bool ExampleWithExtras::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ExampleWithExtras)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tensorflow.Features features = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_features()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string extra1 = 1337;
      case 1337: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(202u /* 10698 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_extra1()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->extra1().data(), static_cast<int>(this->extra1().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ExampleWithExtras.extra1"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 extra2 = 1338;
      case 1338: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(208u /* 10704 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &extra2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // fixed32 extra3 = 1339;
      case 1339: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(221u /* 10717 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &extra3_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // fixed64 extra4 = 1340;
      case 1340: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(225u /* 10721 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &extra4_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double extra5 = 1341;
      case 1341: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(233u /* 10729 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &extra5_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float extra6 = 1342;
      case 1342: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(242u /* 10738 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_extra6())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(245u /* 10741 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 2, 10738u, input, this->mutable_extra6())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.Features extra7 = 1343;
      case 1343: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(250u /* 10746 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_extra7()));
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
  // @@protoc_insertion_point(parse_success:tensorflow.ExampleWithExtras)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ExampleWithExtras)
  return false;
#undef DO_
}

void ExampleWithExtras::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ExampleWithExtras)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.Features features = 1;
  if (this->has_features()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_features(), output);
  }

  // string extra1 = 1337;
  if (this->extra1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->extra1().data(), static_cast<int>(this->extra1().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ExampleWithExtras.extra1");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1337, this->extra1(), output);
  }

  // int64 extra2 = 1338;
  if (this->extra2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1338, this->extra2(), output);
  }

  // fixed32 extra3 = 1339;
  if (this->extra3() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1339, this->extra3(), output);
  }

  // fixed64 extra4 = 1340;
  if (this->extra4() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1340, this->extra4(), output);
  }

  // double extra5 = 1341;
  if (this->extra5() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1341, this->extra5(), output);
  }

  // repeated float extra6 = 1342;
  if (this->extra6_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1342, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _extra6_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->extra6().data(), this->extra6_size(), output);
  }

  // .tensorflow.Features extra7 = 1343;
  if (this->has_extra7()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1343, this->_internal_extra7(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.ExampleWithExtras)
}

::google::protobuf::uint8* ExampleWithExtras::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ExampleWithExtras)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.Features features = 1;
  if (this->has_features()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_features(), deterministic, target);
  }

  // string extra1 = 1337;
  if (this->extra1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->extra1().data(), static_cast<int>(this->extra1().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ExampleWithExtras.extra1");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1337, this->extra1(), target);
  }

  // int64 extra2 = 1338;
  if (this->extra2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1338, this->extra2(), target);
  }

  // fixed32 extra3 = 1339;
  if (this->extra3() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1339, this->extra3(), target);
  }

  // fixed64 extra4 = 1340;
  if (this->extra4() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1340, this->extra4(), target);
  }

  // double extra5 = 1341;
  if (this->extra5() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1341, this->extra5(), target);
  }

  // repeated float extra6 = 1342;
  if (this->extra6_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1342,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _extra6_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->extra6_, target);
  }

  // .tensorflow.Features extra7 = 1343;
  if (this->has_extra7()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1343, this->_internal_extra7(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ExampleWithExtras)
  return target;
}

size_t ExampleWithExtras::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ExampleWithExtras)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated float extra6 = 1342;
  {
    unsigned int count = static_cast<unsigned int>(this->extra6_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _extra6_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string extra1 = 1337;
  if (this->extra1().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->extra1());
  }

  // .tensorflow.Features features = 1;
  if (this->has_features()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *features_);
  }

  // .tensorflow.Features extra7 = 1343;
  if (this->has_extra7()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *extra7_);
  }

  // fixed32 extra3 = 1339;
  if (this->extra3() != 0) {
    total_size += 2 + 4;
  }

  // int64 extra2 = 1338;
  if (this->extra2() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->extra2());
  }

  // fixed64 extra4 = 1340;
  if (this->extra4() != 0) {
    total_size += 2 + 8;
  }

  // double extra5 = 1341;
  if (this->extra5() != 0) {
    total_size += 2 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ExampleWithExtras::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ExampleWithExtras)
  GOOGLE_DCHECK_NE(&from, this);
  const ExampleWithExtras* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ExampleWithExtras>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ExampleWithExtras)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ExampleWithExtras)
    MergeFrom(*source);
  }
}

void ExampleWithExtras::MergeFrom(const ExampleWithExtras& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ExampleWithExtras)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  extra6_.MergeFrom(from.extra6_);
  if (from.extra1().size() > 0) {
    set_extra1(from.extra1());
  }
  if (from.has_features()) {
    mutable_features()->::tensorflow::Features::MergeFrom(from.features());
  }
  if (from.has_extra7()) {
    mutable_extra7()->::tensorflow::Features::MergeFrom(from.extra7());
  }
  if (from.extra3() != 0) {
    set_extra3(from.extra3());
  }
  if (from.extra2() != 0) {
    set_extra2(from.extra2());
  }
  if (from.extra4() != 0) {
    set_extra4(from.extra4());
  }
  if (from.extra5() != 0) {
    set_extra5(from.extra5());
  }
}

void ExampleWithExtras::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ExampleWithExtras)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExampleWithExtras::CopyFrom(const ExampleWithExtras& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ExampleWithExtras)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExampleWithExtras::IsInitialized() const {
  return true;
}

void ExampleWithExtras::Swap(ExampleWithExtras* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ExampleWithExtras* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void ExampleWithExtras::UnsafeArenaSwap(ExampleWithExtras* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ExampleWithExtras::InternalSwap(ExampleWithExtras* other) {
  using std::swap;
  extra6_.InternalSwap(&other->extra6_);
  extra1_.Swap(&other->extra1_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(features_, other->features_);
  swap(extra7_, other->extra7_);
  swap(extra3_, other->extra3_);
  swap(extra2_, other->extra2_);
  swap(extra4_, other->extra4_);
  swap(extra5_, other->extra5_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ExampleWithExtras::GetMetadata() const {
  protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2futil_2fexample_5fproto_5ffast_5fparsing_5ftest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::ExampleWithExtras* Arena::CreateMaybeMessage< ::tensorflow::ExampleWithExtras >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ExampleWithExtras >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
