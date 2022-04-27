// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto

#include "tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.pb.h"

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

namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Value;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_FeatureId;
}  // namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto
namespace tensorflow {
namespace decision_trees {
class MatchingValuesTestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MatchingValuesTest>
      _instance;
} _MatchingValuesTest_default_instance_;
class ConstResultTestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ConstResultTest>
      _instance;
} _ConstResultTest_default_instance_;
}  // namespace decision_trees
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto {
static void InitDefaultsMatchingValuesTest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::decision_trees::_MatchingValuesTest_default_instance_;
    new (ptr) ::tensorflow::decision_trees::MatchingValuesTest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::decision_trees::MatchingValuesTest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_MatchingValuesTest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsMatchingValuesTest}, {
      &protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::scc_info_FeatureId.base,
      &protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::scc_info_Value.base,}};

static void InitDefaultsConstResultTest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::decision_trees::_ConstResultTest_default_instance_;
    new (ptr) ::tensorflow::decision_trees::ConstResultTest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::decision_trees::ConstResultTest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_ConstResultTest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsConstResultTest}, {
      &protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::scc_info_FeatureId.base,
      &protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::scc_info_Value.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_MatchingValuesTest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ConstResultTest.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, feature_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, inverse_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::ConstResultTest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::ConstResultTest, feature_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::ConstResultTest, value_for_dtype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::ConstResultTest, test_result_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::decision_trees::MatchingValuesTest)},
  { 8, -1, sizeof(::tensorflow::decision_trees::ConstResultTest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::decision_trees::_MatchingValuesTest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::decision_trees::_ConstResultTest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\nKtensorflow/contrib/decision_trees/prot"
      "o/generic_tree_model_extensions.proto\022\031t"
      "ensorflow.decision_trees\032@tensorflow/con"
      "trib/decision_trees/proto/generic_tree_m"
      "odel.proto\"\220\001\n\022MatchingValuesTest\0228\n\nfea"
      "ture_id\030\001 \001(\0132$.tensorflow.decision_tree"
      "s.FeatureId\022/\n\005value\030\002 \003(\0132 .tensorflow."
      "decision_trees.Value\022\017\n\007inverse\030\003 \001(\010\"\233\001"
      "\n\017ConstResultTest\0228\n\nfeature_id\030\001 \001(\0132$."
      "tensorflow.decision_trees.FeatureId\0229\n\017v"
      "alue_for_dtype\030\002 \001(\0132 .tensorflow.decisi"
      "on_trees.Value\022\023\n\013test_result\030\003 \001(\010b\006pro"
      "to3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 483);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::AddDescriptors();
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
}  // namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto
namespace tensorflow {
namespace decision_trees {

// ===================================================================

void MatchingValuesTest::InitAsDefaultInstance() {
  ::tensorflow::decision_trees::_MatchingValuesTest_default_instance_._instance.get_mutable()->feature_id_ = const_cast< ::tensorflow::decision_trees::FeatureId*>(
      ::tensorflow::decision_trees::FeatureId::internal_default_instance());
}
void MatchingValuesTest::clear_feature_id() {
  if (GetArenaNoVirtual() == NULL && feature_id_ != NULL) {
    delete feature_id_;
  }
  feature_id_ = NULL;
}
void MatchingValuesTest::clear_value() {
  value_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MatchingValuesTest::kFeatureIdFieldNumber;
const int MatchingValuesTest::kValueFieldNumber;
const int MatchingValuesTest::kInverseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MatchingValuesTest::MatchingValuesTest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::scc_info_MatchingValuesTest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.decision_trees.MatchingValuesTest)
}
MatchingValuesTest::MatchingValuesTest(const MatchingValuesTest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      value_(from.value_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_feature_id()) {
    feature_id_ = new ::tensorflow::decision_trees::FeatureId(*from.feature_id_);
  } else {
    feature_id_ = NULL;
  }
  inverse_ = from.inverse_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.decision_trees.MatchingValuesTest)
}

void MatchingValuesTest::SharedCtor() {
  ::memset(&feature_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&inverse_) -
      reinterpret_cast<char*>(&feature_id_)) + sizeof(inverse_));
}

MatchingValuesTest::~MatchingValuesTest() {
  // @@protoc_insertion_point(destructor:tensorflow.decision_trees.MatchingValuesTest)
  SharedDtor();
}

void MatchingValuesTest::SharedDtor() {
  if (this != internal_default_instance()) delete feature_id_;
}

void MatchingValuesTest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MatchingValuesTest::descriptor() {
  ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MatchingValuesTest& MatchingValuesTest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::scc_info_MatchingValuesTest.base);
  return *internal_default_instance();
}


void MatchingValuesTest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.decision_trees.MatchingValuesTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.Clear();
  if (GetArenaNoVirtual() == NULL && feature_id_ != NULL) {
    delete feature_id_;
  }
  feature_id_ = NULL;
  inverse_ = false;
  _internal_metadata_.Clear();
}

bool MatchingValuesTest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.decision_trees.MatchingValuesTest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tensorflow.decision_trees.FeatureId feature_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_feature_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tensorflow.decision_trees.Value value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool inverse = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &inverse_)));
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
  // @@protoc_insertion_point(parse_success:tensorflow.decision_trees.MatchingValuesTest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.decision_trees.MatchingValuesTest)
  return false;
#undef DO_
}

void MatchingValuesTest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.decision_trees.MatchingValuesTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_feature_id(), output);
  }

  // repeated .tensorflow.decision_trees.Value value = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->value_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->value(static_cast<int>(i)),
      output);
  }

  // bool inverse = 3;
  if (this->inverse() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->inverse(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.decision_trees.MatchingValuesTest)
}

::google::protobuf::uint8* MatchingValuesTest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.decision_trees.MatchingValuesTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_feature_id(), deterministic, target);
  }

  // repeated .tensorflow.decision_trees.Value value = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->value_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->value(static_cast<int>(i)), deterministic, target);
  }

  // bool inverse = 3;
  if (this->inverse() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->inverse(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.decision_trees.MatchingValuesTest)
  return target;
}

size_t MatchingValuesTest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.decision_trees.MatchingValuesTest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .tensorflow.decision_trees.Value value = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->value_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->value(static_cast<int>(i)));
    }
  }

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *feature_id_);
  }

  // bool inverse = 3;
  if (this->inverse() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MatchingValuesTest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.decision_trees.MatchingValuesTest)
  GOOGLE_DCHECK_NE(&from, this);
  const MatchingValuesTest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MatchingValuesTest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.decision_trees.MatchingValuesTest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.decision_trees.MatchingValuesTest)
    MergeFrom(*source);
  }
}

void MatchingValuesTest::MergeFrom(const MatchingValuesTest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.decision_trees.MatchingValuesTest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  value_.MergeFrom(from.value_);
  if (from.has_feature_id()) {
    mutable_feature_id()->::tensorflow::decision_trees::FeatureId::MergeFrom(from.feature_id());
  }
  if (from.inverse() != 0) {
    set_inverse(from.inverse());
  }
}

void MatchingValuesTest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.decision_trees.MatchingValuesTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MatchingValuesTest::CopyFrom(const MatchingValuesTest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.decision_trees.MatchingValuesTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MatchingValuesTest::IsInitialized() const {
  return true;
}

void MatchingValuesTest::Swap(MatchingValuesTest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MatchingValuesTest::InternalSwap(MatchingValuesTest* other) {
  using std::swap;
  CastToBase(&value_)->InternalSwap(CastToBase(&other->value_));
  swap(feature_id_, other->feature_id_);
  swap(inverse_, other->inverse_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MatchingValuesTest::GetMetadata() const {
  protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ConstResultTest::InitAsDefaultInstance() {
  ::tensorflow::decision_trees::_ConstResultTest_default_instance_._instance.get_mutable()->feature_id_ = const_cast< ::tensorflow::decision_trees::FeatureId*>(
      ::tensorflow::decision_trees::FeatureId::internal_default_instance());
  ::tensorflow::decision_trees::_ConstResultTest_default_instance_._instance.get_mutable()->value_for_dtype_ = const_cast< ::tensorflow::decision_trees::Value*>(
      ::tensorflow::decision_trees::Value::internal_default_instance());
}
void ConstResultTest::clear_feature_id() {
  if (GetArenaNoVirtual() == NULL && feature_id_ != NULL) {
    delete feature_id_;
  }
  feature_id_ = NULL;
}
void ConstResultTest::clear_value_for_dtype() {
  if (GetArenaNoVirtual() == NULL && value_for_dtype_ != NULL) {
    delete value_for_dtype_;
  }
  value_for_dtype_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ConstResultTest::kFeatureIdFieldNumber;
const int ConstResultTest::kValueForDtypeFieldNumber;
const int ConstResultTest::kTestResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ConstResultTest::ConstResultTest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::scc_info_ConstResultTest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.decision_trees.ConstResultTest)
}
ConstResultTest::ConstResultTest(const ConstResultTest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_feature_id()) {
    feature_id_ = new ::tensorflow::decision_trees::FeatureId(*from.feature_id_);
  } else {
    feature_id_ = NULL;
  }
  if (from.has_value_for_dtype()) {
    value_for_dtype_ = new ::tensorflow::decision_trees::Value(*from.value_for_dtype_);
  } else {
    value_for_dtype_ = NULL;
  }
  test_result_ = from.test_result_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.decision_trees.ConstResultTest)
}

void ConstResultTest::SharedCtor() {
  ::memset(&feature_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&test_result_) -
      reinterpret_cast<char*>(&feature_id_)) + sizeof(test_result_));
}

ConstResultTest::~ConstResultTest() {
  // @@protoc_insertion_point(destructor:tensorflow.decision_trees.ConstResultTest)
  SharedDtor();
}

void ConstResultTest::SharedDtor() {
  if (this != internal_default_instance()) delete feature_id_;
  if (this != internal_default_instance()) delete value_for_dtype_;
}

void ConstResultTest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ConstResultTest::descriptor() {
  ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ConstResultTest& ConstResultTest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::scc_info_ConstResultTest.base);
  return *internal_default_instance();
}


void ConstResultTest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.decision_trees.ConstResultTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && feature_id_ != NULL) {
    delete feature_id_;
  }
  feature_id_ = NULL;
  if (GetArenaNoVirtual() == NULL && value_for_dtype_ != NULL) {
    delete value_for_dtype_;
  }
  value_for_dtype_ = NULL;
  test_result_ = false;
  _internal_metadata_.Clear();
}

bool ConstResultTest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.decision_trees.ConstResultTest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tensorflow.decision_trees.FeatureId feature_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_feature_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.decision_trees.Value value_for_dtype = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_value_for_dtype()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool test_result = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &test_result_)));
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
  // @@protoc_insertion_point(parse_success:tensorflow.decision_trees.ConstResultTest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.decision_trees.ConstResultTest)
  return false;
#undef DO_
}

void ConstResultTest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.decision_trees.ConstResultTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_feature_id(), output);
  }

  // .tensorflow.decision_trees.Value value_for_dtype = 2;
  if (this->has_value_for_dtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_value_for_dtype(), output);
  }

  // bool test_result = 3;
  if (this->test_result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->test_result(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.decision_trees.ConstResultTest)
}

::google::protobuf::uint8* ConstResultTest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.decision_trees.ConstResultTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_feature_id(), deterministic, target);
  }

  // .tensorflow.decision_trees.Value value_for_dtype = 2;
  if (this->has_value_for_dtype()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_value_for_dtype(), deterministic, target);
  }

  // bool test_result = 3;
  if (this->test_result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->test_result(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.decision_trees.ConstResultTest)
  return target;
}

size_t ConstResultTest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.decision_trees.ConstResultTest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *feature_id_);
  }

  // .tensorflow.decision_trees.Value value_for_dtype = 2;
  if (this->has_value_for_dtype()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *value_for_dtype_);
  }

  // bool test_result = 3;
  if (this->test_result() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ConstResultTest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.decision_trees.ConstResultTest)
  GOOGLE_DCHECK_NE(&from, this);
  const ConstResultTest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ConstResultTest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.decision_trees.ConstResultTest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.decision_trees.ConstResultTest)
    MergeFrom(*source);
  }
}

void ConstResultTest::MergeFrom(const ConstResultTest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.decision_trees.ConstResultTest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_feature_id()) {
    mutable_feature_id()->::tensorflow::decision_trees::FeatureId::MergeFrom(from.feature_id());
  }
  if (from.has_value_for_dtype()) {
    mutable_value_for_dtype()->::tensorflow::decision_trees::Value::MergeFrom(from.value_for_dtype());
  }
  if (from.test_result() != 0) {
    set_test_result(from.test_result());
  }
}

void ConstResultTest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.decision_trees.ConstResultTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConstResultTest::CopyFrom(const ConstResultTest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.decision_trees.ConstResultTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConstResultTest::IsInitialized() const {
  return true;
}

void ConstResultTest::Swap(ConstResultTest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ConstResultTest::InternalSwap(ConstResultTest* other) {
  using std::swap;
  swap(feature_id_, other->feature_id_);
  swap(value_for_dtype_, other->value_for_dtype_);
  swap(test_result_, other->test_result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ConstResultTest::GetMetadata() const {
  protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace decision_trees
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::decision_trees::MatchingValuesTest* Arena::CreateMaybeMessage< ::tensorflow::decision_trees::MatchingValuesTest >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::decision_trees::MatchingValuesTest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::decision_trees::ConstResultTest* Arena::CreateMaybeMessage< ::tensorflow::decision_trees::ConstResultTest >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::decision_trees::ConstResultTest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)