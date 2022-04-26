// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/conv_autotuning.proto

#include "tensorflow/core/protobuf/conv_autotuning.pb.h"

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

namespace protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ConvolutionDescriptorProto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TensorDescriptorProto;
}  // namespace protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto
namespace tensorflow {
class ConvolutionProtoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ConvolutionProto>
      _instance;
} _ConvolutionProto_default_instance_;
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto {
static void InitDefaultsConvolutionProto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_ConvolutionProto_default_instance_;
    new (ptr) ::tensorflow::ConvolutionProto();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ConvolutionProto::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_ConvolutionProto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsConvolutionProto}, {
      &protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto::scc_info_TensorDescriptorProto.base,
      &protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto::scc_info_ConvolutionDescriptorProto.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ConvolutionProto.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, kind_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, input_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, filter_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, output_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, conv_desc_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, conv_scale_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, side_value_scale_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, activation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, input_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, filter_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, output_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, bias_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ConvolutionProto, side_input_address_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::ConvolutionProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_ConvolutionProto_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/core/protobuf/conv_autotuning.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n.tensorflow/core/protobuf/conv_autotuni"
      "ng.proto\022\ntensorflow\032$tensorflow/stream_"
      "executor/dnn.proto\"\235\004\n\020ConvolutionProto\022"
      "2\n\004kind\030\001 \001(\0162$.stream_executor.dnn.Conv"
      "olutionKind\0229\n\005input\030\002 \001(\0132*.stream_exec"
      "utor.dnn.TensorDescriptorProto\022:\n\006filter"
      "\030\003 \001(\0132*.stream_executor.dnn.TensorDescr"
      "iptorProto\022:\n\006output\030\004 \001(\0132*.stream_exec"
      "utor.dnn.TensorDescriptorProto\022B\n\tconv_d"
      "esc\030\005 \001(\0132/.stream_executor.dnn.Convolut"
      "ionDescriptorProto\022\022\n\nconv_scale\030\006 \001(\001\022\030"
      "\n\020side_value_scale\030\007 \001(\001\0227\n\nactivation\030\010"
      " \001(\0162#.stream_executor.dnn.ActivationMod"
      "e\022\025\n\rinput_address\030\t \001(\003\022\026\n\016filter_addre"
      "ss\030\n \001(\003\022\026\n\016output_address\030\013 \001(\003\022\024\n\014bias"
      "_address\030\014 \001(\003\022\032\n\022side_input_address\030\r \001"
      "(\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 650);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/conv_autotuning.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fstream_5fexecutor_2fdnn_2eproto::AddDescriptors();
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
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto
namespace tensorflow {

// ===================================================================

void ConvolutionProto::InitAsDefaultInstance() {
  ::tensorflow::_ConvolutionProto_default_instance_._instance.get_mutable()->input_ = const_cast< ::stream_executor::dnn::TensorDescriptorProto*>(
      ::stream_executor::dnn::TensorDescriptorProto::internal_default_instance());
  ::tensorflow::_ConvolutionProto_default_instance_._instance.get_mutable()->filter_ = const_cast< ::stream_executor::dnn::TensorDescriptorProto*>(
      ::stream_executor::dnn::TensorDescriptorProto::internal_default_instance());
  ::tensorflow::_ConvolutionProto_default_instance_._instance.get_mutable()->output_ = const_cast< ::stream_executor::dnn::TensorDescriptorProto*>(
      ::stream_executor::dnn::TensorDescriptorProto::internal_default_instance());
  ::tensorflow::_ConvolutionProto_default_instance_._instance.get_mutable()->conv_desc_ = const_cast< ::stream_executor::dnn::ConvolutionDescriptorProto*>(
      ::stream_executor::dnn::ConvolutionDescriptorProto::internal_default_instance());
}
void ConvolutionProto::clear_input() {
  if (GetArenaNoVirtual() == NULL && input_ != NULL) {
    delete input_;
  }
  input_ = NULL;
}
void ConvolutionProto::clear_filter() {
  if (GetArenaNoVirtual() == NULL && filter_ != NULL) {
    delete filter_;
  }
  filter_ = NULL;
}
void ConvolutionProto::clear_output() {
  if (GetArenaNoVirtual() == NULL && output_ != NULL) {
    delete output_;
  }
  output_ = NULL;
}
void ConvolutionProto::clear_conv_desc() {
  if (GetArenaNoVirtual() == NULL && conv_desc_ != NULL) {
    delete conv_desc_;
  }
  conv_desc_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ConvolutionProto::kKindFieldNumber;
const int ConvolutionProto::kInputFieldNumber;
const int ConvolutionProto::kFilterFieldNumber;
const int ConvolutionProto::kOutputFieldNumber;
const int ConvolutionProto::kConvDescFieldNumber;
const int ConvolutionProto::kConvScaleFieldNumber;
const int ConvolutionProto::kSideValueScaleFieldNumber;
const int ConvolutionProto::kActivationFieldNumber;
const int ConvolutionProto::kInputAddressFieldNumber;
const int ConvolutionProto::kFilterAddressFieldNumber;
const int ConvolutionProto::kOutputAddressFieldNumber;
const int ConvolutionProto::kBiasAddressFieldNumber;
const int ConvolutionProto::kSideInputAddressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ConvolutionProto::ConvolutionProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto::scc_info_ConvolutionProto.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ConvolutionProto)
}
ConvolutionProto::ConvolutionProto(const ConvolutionProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_input()) {
    input_ = new ::stream_executor::dnn::TensorDescriptorProto(*from.input_);
  } else {
    input_ = NULL;
  }
  if (from.has_filter()) {
    filter_ = new ::stream_executor::dnn::TensorDescriptorProto(*from.filter_);
  } else {
    filter_ = NULL;
  }
  if (from.has_output()) {
    output_ = new ::stream_executor::dnn::TensorDescriptorProto(*from.output_);
  } else {
    output_ = NULL;
  }
  if (from.has_conv_desc()) {
    conv_desc_ = new ::stream_executor::dnn::ConvolutionDescriptorProto(*from.conv_desc_);
  } else {
    conv_desc_ = NULL;
  }
  ::memcpy(&kind_, &from.kind_,
    static_cast<size_t>(reinterpret_cast<char*>(&side_input_address_) -
    reinterpret_cast<char*>(&kind_)) + sizeof(side_input_address_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.ConvolutionProto)
}

void ConvolutionProto::SharedCtor() {
  ::memset(&input_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&side_input_address_) -
      reinterpret_cast<char*>(&input_)) + sizeof(side_input_address_));
}

ConvolutionProto::~ConvolutionProto() {
  // @@protoc_insertion_point(destructor:tensorflow.ConvolutionProto)
  SharedDtor();
}

void ConvolutionProto::SharedDtor() {
  if (this != internal_default_instance()) delete input_;
  if (this != internal_default_instance()) delete filter_;
  if (this != internal_default_instance()) delete output_;
  if (this != internal_default_instance()) delete conv_desc_;
}

void ConvolutionProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ConvolutionProto::descriptor() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ConvolutionProto& ConvolutionProto::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto::scc_info_ConvolutionProto.base);
  return *internal_default_instance();
}


void ConvolutionProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ConvolutionProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && input_ != NULL) {
    delete input_;
  }
  input_ = NULL;
  if (GetArenaNoVirtual() == NULL && filter_ != NULL) {
    delete filter_;
  }
  filter_ = NULL;
  if (GetArenaNoVirtual() == NULL && output_ != NULL) {
    delete output_;
  }
  output_ = NULL;
  if (GetArenaNoVirtual() == NULL && conv_desc_ != NULL) {
    delete conv_desc_;
  }
  conv_desc_ = NULL;
  ::memset(&kind_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&side_input_address_) -
      reinterpret_cast<char*>(&kind_)) + sizeof(side_input_address_));
  _internal_metadata_.Clear();
}

bool ConvolutionProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ConvolutionProto)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .stream_executor.dnn.ConvolutionKind kind = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_kind(static_cast< ::stream_executor::dnn::ConvolutionKind >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .stream_executor.dnn.TensorDescriptorProto input = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_input()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .stream_executor.dnn.TensorDescriptorProto filter = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_filter()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .stream_executor.dnn.TensorDescriptorProto output = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_output()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .stream_executor.dnn.ConvolutionDescriptorProto conv_desc = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_conv_desc()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double conv_scale = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &conv_scale_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double side_value_scale = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &side_value_scale_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .stream_executor.dnn.ActivationMode activation = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_activation(static_cast< ::stream_executor::dnn::ActivationMode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 input_address = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &input_address_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 filter_address = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &filter_address_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 output_address = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &output_address_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 bias_address = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &bias_address_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 side_input_address = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &side_input_address_)));
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
  // @@protoc_insertion_point(parse_success:tensorflow.ConvolutionProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ConvolutionProto)
  return false;
#undef DO_
}

void ConvolutionProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ConvolutionProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .stream_executor.dnn.ConvolutionKind kind = 1;
  if (this->kind() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->kind(), output);
  }

  // .stream_executor.dnn.TensorDescriptorProto input = 2;
  if (this->has_input()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_input(), output);
  }

  // .stream_executor.dnn.TensorDescriptorProto filter = 3;
  if (this->has_filter()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_filter(), output);
  }

  // .stream_executor.dnn.TensorDescriptorProto output = 4;
  if (this->has_output()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_output(), output);
  }

  // .stream_executor.dnn.ConvolutionDescriptorProto conv_desc = 5;
  if (this->has_conv_desc()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_conv_desc(), output);
  }

  // double conv_scale = 6;
  if (this->conv_scale() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->conv_scale(), output);
  }

  // double side_value_scale = 7;
  if (this->side_value_scale() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->side_value_scale(), output);
  }

  // .stream_executor.dnn.ActivationMode activation = 8;
  if (this->activation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->activation(), output);
  }

  // int64 input_address = 9;
  if (this->input_address() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(9, this->input_address(), output);
  }

  // int64 filter_address = 10;
  if (this->filter_address() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(10, this->filter_address(), output);
  }

  // int64 output_address = 11;
  if (this->output_address() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(11, this->output_address(), output);
  }

  // int64 bias_address = 12;
  if (this->bias_address() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(12, this->bias_address(), output);
  }

  // int64 side_input_address = 13;
  if (this->side_input_address() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(13, this->side_input_address(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.ConvolutionProto)
}

::google::protobuf::uint8* ConvolutionProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ConvolutionProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .stream_executor.dnn.ConvolutionKind kind = 1;
  if (this->kind() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->kind(), target);
  }

  // .stream_executor.dnn.TensorDescriptorProto input = 2;
  if (this->has_input()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_input(), deterministic, target);
  }

  // .stream_executor.dnn.TensorDescriptorProto filter = 3;
  if (this->has_filter()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_filter(), deterministic, target);
  }

  // .stream_executor.dnn.TensorDescriptorProto output = 4;
  if (this->has_output()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_output(), deterministic, target);
  }

  // .stream_executor.dnn.ConvolutionDescriptorProto conv_desc = 5;
  if (this->has_conv_desc()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_conv_desc(), deterministic, target);
  }

  // double conv_scale = 6;
  if (this->conv_scale() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->conv_scale(), target);
  }

  // double side_value_scale = 7;
  if (this->side_value_scale() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->side_value_scale(), target);
  }

  // .stream_executor.dnn.ActivationMode activation = 8;
  if (this->activation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->activation(), target);
  }

  // int64 input_address = 9;
  if (this->input_address() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(9, this->input_address(), target);
  }

  // int64 filter_address = 10;
  if (this->filter_address() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(10, this->filter_address(), target);
  }

  // int64 output_address = 11;
  if (this->output_address() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(11, this->output_address(), target);
  }

  // int64 bias_address = 12;
  if (this->bias_address() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(12, this->bias_address(), target);
  }

  // int64 side_input_address = 13;
  if (this->side_input_address() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(13, this->side_input_address(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ConvolutionProto)
  return target;
}

size_t ConvolutionProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ConvolutionProto)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .stream_executor.dnn.TensorDescriptorProto input = 2;
  if (this->has_input()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *input_);
  }

  // .stream_executor.dnn.TensorDescriptorProto filter = 3;
  if (this->has_filter()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *filter_);
  }

  // .stream_executor.dnn.TensorDescriptorProto output = 4;
  if (this->has_output()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *output_);
  }

  // .stream_executor.dnn.ConvolutionDescriptorProto conv_desc = 5;
  if (this->has_conv_desc()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *conv_desc_);
  }

  // .stream_executor.dnn.ConvolutionKind kind = 1;
  if (this->kind() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->kind());
  }

  // .stream_executor.dnn.ActivationMode activation = 8;
  if (this->activation() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->activation());
  }

  // double conv_scale = 6;
  if (this->conv_scale() != 0) {
    total_size += 1 + 8;
  }

  // double side_value_scale = 7;
  if (this->side_value_scale() != 0) {
    total_size += 1 + 8;
  }

  // int64 input_address = 9;
  if (this->input_address() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->input_address());
  }

  // int64 filter_address = 10;
  if (this->filter_address() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->filter_address());
  }

  // int64 output_address = 11;
  if (this->output_address() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->output_address());
  }

  // int64 bias_address = 12;
  if (this->bias_address() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->bias_address());
  }

  // int64 side_input_address = 13;
  if (this->side_input_address() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->side_input_address());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ConvolutionProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ConvolutionProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ConvolutionProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ConvolutionProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ConvolutionProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ConvolutionProto)
    MergeFrom(*source);
  }
}

void ConvolutionProto::MergeFrom(const ConvolutionProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ConvolutionProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_input()) {
    mutable_input()->::stream_executor::dnn::TensorDescriptorProto::MergeFrom(from.input());
  }
  if (from.has_filter()) {
    mutable_filter()->::stream_executor::dnn::TensorDescriptorProto::MergeFrom(from.filter());
  }
  if (from.has_output()) {
    mutable_output()->::stream_executor::dnn::TensorDescriptorProto::MergeFrom(from.output());
  }
  if (from.has_conv_desc()) {
    mutable_conv_desc()->::stream_executor::dnn::ConvolutionDescriptorProto::MergeFrom(from.conv_desc());
  }
  if (from.kind() != 0) {
    set_kind(from.kind());
  }
  if (from.activation() != 0) {
    set_activation(from.activation());
  }
  if (from.conv_scale() != 0) {
    set_conv_scale(from.conv_scale());
  }
  if (from.side_value_scale() != 0) {
    set_side_value_scale(from.side_value_scale());
  }
  if (from.input_address() != 0) {
    set_input_address(from.input_address());
  }
  if (from.filter_address() != 0) {
    set_filter_address(from.filter_address());
  }
  if (from.output_address() != 0) {
    set_output_address(from.output_address());
  }
  if (from.bias_address() != 0) {
    set_bias_address(from.bias_address());
  }
  if (from.side_input_address() != 0) {
    set_side_input_address(from.side_input_address());
  }
}

void ConvolutionProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ConvolutionProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConvolutionProto::CopyFrom(const ConvolutionProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ConvolutionProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConvolutionProto::IsInitialized() const {
  return true;
}

void ConvolutionProto::Swap(ConvolutionProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ConvolutionProto::InternalSwap(ConvolutionProto* other) {
  using std::swap;
  swap(input_, other->input_);
  swap(filter_, other->filter_);
  swap(output_, other->output_);
  swap(conv_desc_, other->conv_desc_);
  swap(kind_, other->kind_);
  swap(activation_, other->activation_);
  swap(conv_scale_, other->conv_scale_);
  swap(side_value_scale_, other->side_value_scale_);
  swap(input_address_, other->input_address_);
  swap(filter_address_, other->filter_address_);
  swap(output_address_, other->output_address_);
  swap(bias_address_, other->bias_address_);
  swap(side_input_address_, other->side_input_address_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ConvolutionProto::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::ConvolutionProto* Arena::CreateMaybeMessage< ::tensorflow::ConvolutionProto >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::ConvolutionProto >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
