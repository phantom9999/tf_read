// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/tpu/kernels/tpu_compile.proto

#include "tensorflow/core/tpu/kernels/tpu_compile.pb.h"

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

namespace protobuf_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_AttrValue;
}  // namespace protobuf_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto
namespace protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_FunctionDefLibrary;
}  // namespace protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto
namespace protobuf_tensorflow_2fcore_2fframework_2ftensor_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fframework_2ftensor_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_TensorProto;
}  // namespace protobuf_tensorflow_2fcore_2fframework_2ftensor_2eproto
namespace protobuf_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TensorShapeProto;
}  // namespace protobuf_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto
namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompile_5fmetadata_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompile_5fmetadata_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_TPUCompileMetadataProto;
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompile_5fmetadata_2eproto
namespace tensorflow {
namespace tpu {
class TpuCompilationRequestProtoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TpuCompilationRequestProto>
      _instance;
} _TpuCompilationRequestProto_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto {
static void InitDefaultsTpuCompilationRequestProto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::tpu::_TpuCompilationRequestProto_default_instance_;
    new (ptr) ::tensorflow::tpu::TpuCompilationRequestProto();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::tpu::TpuCompilationRequestProto::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<5> scc_info_TpuCompilationRequestProto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsTpuCompilationRequestProto}, {
      &protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompile_5fmetadata_2eproto::scc_info_TPUCompileMetadataProto.base,
      &protobuf_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto::scc_info_TensorShapeProto.base,
      &protobuf_tensorflow_2fcore_2fframework_2ftensor_2eproto::scc_info_TensorProto.base,
      &protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto::scc_info_FunctionDefLibrary.base,
      &protobuf_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto::scc_info_AttrValue.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TpuCompilationRequestProto.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, use_experimental_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, use_mlir_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, return_hlo_protos_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, unload_cache_on_session_close_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, metadata_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, arg_shapes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, guaranteed_constants_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, mlir_module_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, fdef_lib_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, graph_def_version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::tpu::TpuCompilationRequestProto, function_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::tpu::TpuCompilationRequestProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::tpu::_TpuCompilationRequestProto_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/core/tpu/kernels/tpu_compile.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n-tensorflow/core/tpu/kernels/tpu_compil"
      "e.proto\022\016tensorflow.tpu\032*tensorflow/core"
      "/framework/attr_value.proto\032(tensorflow/"
      "core/framework/function.proto\032&tensorflo"
      "w/core/framework/tensor.proto\032,tensorflo"
      "w/core/framework/tensor_shape.proto\0323ten"
      "sorflow/core/protobuf/tpu/compile_metada"
      "ta.proto\"\274\003\n\032TpuCompilationRequestProto\022"
      "\030\n\020use_experimental\030\001 \001(\010\022\020\n\010use_mlir\030\002 "
      "\001(\010\022\031\n\021return_hlo_protos\030\003 \001(\010\022%\n\035unload"
      "_cache_on_session_close\030\004 \001(\010\0229\n\010metadat"
      "a\030\005 \001(\0132\'.tensorflow.tpu.TPUCompileMetad"
      "ataProto\0220\n\narg_shapes\030\006 \003(\0132\034.tensorflo"
      "w.TensorShapeProto\0225\n\024guaranteed_constan"
      "ts\030\007 \003(\0132\027.tensorflow.TensorProto\022\023\n\013mli"
      "r_module\030\010 \001(\t\0220\n\010fdef_lib\030\t \001(\0132\036.tenso"
      "rflow.FunctionDefLibrary\022\031\n\021graph_def_ve"
      "rsion\030\n \001(\005\022*\n\010function\030\013 \001(\0132\030.tensorfl"
      "ow.NameAttrListb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 743);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/tpu/kernels/tpu_compile.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto::AddDescriptors();
  ::protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto::AddDescriptors();
  ::protobuf_tensorflow_2fcore_2fframework_2ftensor_2eproto::AddDescriptors();
  ::protobuf_tensorflow_2fcore_2fframework_2ftensor_5fshape_2eproto::AddDescriptors();
  ::protobuf_tensorflow_2fcore_2fprotobuf_2ftpu_2fcompile_5fmetadata_2eproto::AddDescriptors();
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
}  // namespace protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto
namespace tensorflow {
namespace tpu {

// ===================================================================

void TpuCompilationRequestProto::InitAsDefaultInstance() {
  ::tensorflow::tpu::_TpuCompilationRequestProto_default_instance_._instance.get_mutable()->metadata_ = const_cast< ::tensorflow::tpu::TPUCompileMetadataProto*>(
      ::tensorflow::tpu::TPUCompileMetadataProto::internal_default_instance());
  ::tensorflow::tpu::_TpuCompilationRequestProto_default_instance_._instance.get_mutable()->fdef_lib_ = const_cast< ::tensorflow::FunctionDefLibrary*>(
      ::tensorflow::FunctionDefLibrary::internal_default_instance());
  ::tensorflow::tpu::_TpuCompilationRequestProto_default_instance_._instance.get_mutable()->function_ = const_cast< ::tensorflow::NameAttrList*>(
      ::tensorflow::NameAttrList::internal_default_instance());
}
void TpuCompilationRequestProto::clear_metadata() {
  if (GetArenaNoVirtual() == NULL && metadata_ != NULL) {
    delete metadata_;
  }
  metadata_ = NULL;
}
void TpuCompilationRequestProto::clear_arg_shapes() {
  arg_shapes_.Clear();
}
void TpuCompilationRequestProto::clear_guaranteed_constants() {
  guaranteed_constants_.Clear();
}
void TpuCompilationRequestProto::clear_fdef_lib() {
  if (GetArenaNoVirtual() == NULL && fdef_lib_ != NULL) {
    delete fdef_lib_;
  }
  fdef_lib_ = NULL;
}
void TpuCompilationRequestProto::clear_function() {
  if (GetArenaNoVirtual() == NULL && function_ != NULL) {
    delete function_;
  }
  function_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TpuCompilationRequestProto::kUseExperimentalFieldNumber;
const int TpuCompilationRequestProto::kUseMlirFieldNumber;
const int TpuCompilationRequestProto::kReturnHloProtosFieldNumber;
const int TpuCompilationRequestProto::kUnloadCacheOnSessionCloseFieldNumber;
const int TpuCompilationRequestProto::kMetadataFieldNumber;
const int TpuCompilationRequestProto::kArgShapesFieldNumber;
const int TpuCompilationRequestProto::kGuaranteedConstantsFieldNumber;
const int TpuCompilationRequestProto::kMlirModuleFieldNumber;
const int TpuCompilationRequestProto::kFdefLibFieldNumber;
const int TpuCompilationRequestProto::kGraphDefVersionFieldNumber;
const int TpuCompilationRequestProto::kFunctionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TpuCompilationRequestProto::TpuCompilationRequestProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto::scc_info_TpuCompilationRequestProto.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.tpu.TpuCompilationRequestProto)
}
TpuCompilationRequestProto::TpuCompilationRequestProto(const TpuCompilationRequestProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      arg_shapes_(from.arg_shapes_),
      guaranteed_constants_(from.guaranteed_constants_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  mlir_module_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.mlir_module().size() > 0) {
    mlir_module_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mlir_module_);
  }
  if (from.has_metadata()) {
    metadata_ = new ::tensorflow::tpu::TPUCompileMetadataProto(*from.metadata_);
  } else {
    metadata_ = NULL;
  }
  if (from.has_fdef_lib()) {
    fdef_lib_ = new ::tensorflow::FunctionDefLibrary(*from.fdef_lib_);
  } else {
    fdef_lib_ = NULL;
  }
  if (from.has_function()) {
    function_ = new ::tensorflow::NameAttrList(*from.function_);
  } else {
    function_ = NULL;
  }
  ::memcpy(&use_experimental_, &from.use_experimental_,
    static_cast<size_t>(reinterpret_cast<char*>(&graph_def_version_) -
    reinterpret_cast<char*>(&use_experimental_)) + sizeof(graph_def_version_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.tpu.TpuCompilationRequestProto)
}

void TpuCompilationRequestProto::SharedCtor() {
  mlir_module_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&metadata_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&graph_def_version_) -
      reinterpret_cast<char*>(&metadata_)) + sizeof(graph_def_version_));
}

TpuCompilationRequestProto::~TpuCompilationRequestProto() {
  // @@protoc_insertion_point(destructor:tensorflow.tpu.TpuCompilationRequestProto)
  SharedDtor();
}

void TpuCompilationRequestProto::SharedDtor() {
  mlir_module_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete metadata_;
  if (this != internal_default_instance()) delete fdef_lib_;
  if (this != internal_default_instance()) delete function_;
}

void TpuCompilationRequestProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TpuCompilationRequestProto::descriptor() {
  ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TpuCompilationRequestProto& TpuCompilationRequestProto::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto::scc_info_TpuCompilationRequestProto.base);
  return *internal_default_instance();
}


void TpuCompilationRequestProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.tpu.TpuCompilationRequestProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  arg_shapes_.Clear();
  guaranteed_constants_.Clear();
  mlir_module_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && metadata_ != NULL) {
    delete metadata_;
  }
  metadata_ = NULL;
  if (GetArenaNoVirtual() == NULL && fdef_lib_ != NULL) {
    delete fdef_lib_;
  }
  fdef_lib_ = NULL;
  if (GetArenaNoVirtual() == NULL && function_ != NULL) {
    delete function_;
  }
  function_ = NULL;
  ::memset(&use_experimental_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&graph_def_version_) -
      reinterpret_cast<char*>(&use_experimental_)) + sizeof(graph_def_version_));
  _internal_metadata_.Clear();
}

bool TpuCompilationRequestProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.tpu.TpuCompilationRequestProto)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool use_experimental = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_experimental_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool use_mlir = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_mlir_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool return_hlo_protos = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &return_hlo_protos_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool unload_cache_on_session_close = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &unload_cache_on_session_close_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.tpu.TPUCompileMetadataProto metadata = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_metadata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tensorflow.TensorShapeProto arg_shapes = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_arg_shapes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tensorflow.TensorProto guaranteed_constants = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_guaranteed_constants()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string mlir_module = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mlir_module()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->mlir_module().data(), static_cast<int>(this->mlir_module().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.tpu.TpuCompilationRequestProto.mlir_module"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.FunctionDefLibrary fdef_lib = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_fdef_lib()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 graph_def_version = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &graph_def_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.NameAttrList function = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_function()));
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
  // @@protoc_insertion_point(parse_success:tensorflow.tpu.TpuCompilationRequestProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.tpu.TpuCompilationRequestProto)
  return false;
#undef DO_
}

void TpuCompilationRequestProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.tpu.TpuCompilationRequestProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool use_experimental = 1;
  if (this->use_experimental() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->use_experimental(), output);
  }

  // bool use_mlir = 2;
  if (this->use_mlir() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->use_mlir(), output);
  }

  // bool return_hlo_protos = 3;
  if (this->return_hlo_protos() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->return_hlo_protos(), output);
  }

  // bool unload_cache_on_session_close = 4;
  if (this->unload_cache_on_session_close() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->unload_cache_on_session_close(), output);
  }

  // .tensorflow.tpu.TPUCompileMetadataProto metadata = 5;
  if (this->has_metadata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_metadata(), output);
  }

  // repeated .tensorflow.TensorShapeProto arg_shapes = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->arg_shapes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6,
      this->arg_shapes(static_cast<int>(i)),
      output);
  }

  // repeated .tensorflow.TensorProto guaranteed_constants = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->guaranteed_constants_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7,
      this->guaranteed_constants(static_cast<int>(i)),
      output);
  }

  // string mlir_module = 8;
  if (this->mlir_module().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mlir_module().data(), static_cast<int>(this->mlir_module().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.tpu.TpuCompilationRequestProto.mlir_module");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->mlir_module(), output);
  }

  // .tensorflow.FunctionDefLibrary fdef_lib = 9;
  if (this->has_fdef_lib()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->_internal_fdef_lib(), output);
  }

  // int32 graph_def_version = 10;
  if (this->graph_def_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->graph_def_version(), output);
  }

  // .tensorflow.NameAttrList function = 11;
  if (this->has_function()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->_internal_function(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.tpu.TpuCompilationRequestProto)
}

::google::protobuf::uint8* TpuCompilationRequestProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.tpu.TpuCompilationRequestProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool use_experimental = 1;
  if (this->use_experimental() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->use_experimental(), target);
  }

  // bool use_mlir = 2;
  if (this->use_mlir() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->use_mlir(), target);
  }

  // bool return_hlo_protos = 3;
  if (this->return_hlo_protos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->return_hlo_protos(), target);
  }

  // bool unload_cache_on_session_close = 4;
  if (this->unload_cache_on_session_close() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->unload_cache_on_session_close(), target);
  }

  // .tensorflow.tpu.TPUCompileMetadataProto metadata = 5;
  if (this->has_metadata()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_metadata(), deterministic, target);
  }

  // repeated .tensorflow.TensorShapeProto arg_shapes = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->arg_shapes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->arg_shapes(static_cast<int>(i)), deterministic, target);
  }

  // repeated .tensorflow.TensorProto guaranteed_constants = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->guaranteed_constants_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->guaranteed_constants(static_cast<int>(i)), deterministic, target);
  }

  // string mlir_module = 8;
  if (this->mlir_module().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mlir_module().data(), static_cast<int>(this->mlir_module().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.tpu.TpuCompilationRequestProto.mlir_module");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->mlir_module(), target);
  }

  // .tensorflow.FunctionDefLibrary fdef_lib = 9;
  if (this->has_fdef_lib()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->_internal_fdef_lib(), deterministic, target);
  }

  // int32 graph_def_version = 10;
  if (this->graph_def_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->graph_def_version(), target);
  }

  // .tensorflow.NameAttrList function = 11;
  if (this->has_function()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        11, this->_internal_function(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.tpu.TpuCompilationRequestProto)
  return target;
}

size_t TpuCompilationRequestProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.tpu.TpuCompilationRequestProto)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .tensorflow.TensorShapeProto arg_shapes = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->arg_shapes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->arg_shapes(static_cast<int>(i)));
    }
  }

  // repeated .tensorflow.TensorProto guaranteed_constants = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->guaranteed_constants_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->guaranteed_constants(static_cast<int>(i)));
    }
  }

  // string mlir_module = 8;
  if (this->mlir_module().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mlir_module());
  }

  // .tensorflow.tpu.TPUCompileMetadataProto metadata = 5;
  if (this->has_metadata()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *metadata_);
  }

  // .tensorflow.FunctionDefLibrary fdef_lib = 9;
  if (this->has_fdef_lib()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *fdef_lib_);
  }

  // .tensorflow.NameAttrList function = 11;
  if (this->has_function()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *function_);
  }

  // bool use_experimental = 1;
  if (this->use_experimental() != 0) {
    total_size += 1 + 1;
  }

  // bool use_mlir = 2;
  if (this->use_mlir() != 0) {
    total_size += 1 + 1;
  }

  // bool return_hlo_protos = 3;
  if (this->return_hlo_protos() != 0) {
    total_size += 1 + 1;
  }

  // bool unload_cache_on_session_close = 4;
  if (this->unload_cache_on_session_close() != 0) {
    total_size += 1 + 1;
  }

  // int32 graph_def_version = 10;
  if (this->graph_def_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->graph_def_version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TpuCompilationRequestProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.tpu.TpuCompilationRequestProto)
  GOOGLE_DCHECK_NE(&from, this);
  const TpuCompilationRequestProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TpuCompilationRequestProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.tpu.TpuCompilationRequestProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.tpu.TpuCompilationRequestProto)
    MergeFrom(*source);
  }
}

void TpuCompilationRequestProto::MergeFrom(const TpuCompilationRequestProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.tpu.TpuCompilationRequestProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  arg_shapes_.MergeFrom(from.arg_shapes_);
  guaranteed_constants_.MergeFrom(from.guaranteed_constants_);
  if (from.mlir_module().size() > 0) {

    mlir_module_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mlir_module_);
  }
  if (from.has_metadata()) {
    mutable_metadata()->::tensorflow::tpu::TPUCompileMetadataProto::MergeFrom(from.metadata());
  }
  if (from.has_fdef_lib()) {
    mutable_fdef_lib()->::tensorflow::FunctionDefLibrary::MergeFrom(from.fdef_lib());
  }
  if (from.has_function()) {
    mutable_function()->::tensorflow::NameAttrList::MergeFrom(from.function());
  }
  if (from.use_experimental() != 0) {
    set_use_experimental(from.use_experimental());
  }
  if (from.use_mlir() != 0) {
    set_use_mlir(from.use_mlir());
  }
  if (from.return_hlo_protos() != 0) {
    set_return_hlo_protos(from.return_hlo_protos());
  }
  if (from.unload_cache_on_session_close() != 0) {
    set_unload_cache_on_session_close(from.unload_cache_on_session_close());
  }
  if (from.graph_def_version() != 0) {
    set_graph_def_version(from.graph_def_version());
  }
}

void TpuCompilationRequestProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.tpu.TpuCompilationRequestProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TpuCompilationRequestProto::CopyFrom(const TpuCompilationRequestProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.tpu.TpuCompilationRequestProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TpuCompilationRequestProto::IsInitialized() const {
  return true;
}

void TpuCompilationRequestProto::Swap(TpuCompilationRequestProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TpuCompilationRequestProto::InternalSwap(TpuCompilationRequestProto* other) {
  using std::swap;
  CastToBase(&arg_shapes_)->InternalSwap(CastToBase(&other->arg_shapes_));
  CastToBase(&guaranteed_constants_)->InternalSwap(CastToBase(&other->guaranteed_constants_));
  mlir_module_.Swap(&other->mlir_module_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(metadata_, other->metadata_);
  swap(fdef_lib_, other->fdef_lib_);
  swap(function_, other->function_);
  swap(use_experimental_, other->use_experimental_);
  swap(use_mlir_, other->use_mlir_);
  swap(return_hlo_protos_, other->return_hlo_protos_);
  swap(unload_cache_on_session_close_, other->unload_cache_on_session_close_);
  swap(graph_def_version_, other->graph_def_version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TpuCompilationRequestProto::GetMetadata() const {
  protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2ftpu_2fkernels_2ftpu_5fcompile_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tpu
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::tpu::TpuCompilationRequestProto* Arena::CreateMaybeMessage< ::tensorflow::tpu::TpuCompilationRequestProto >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::tpu::TpuCompilationRequestProto >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
