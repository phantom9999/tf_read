// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/rpc/python/kernel_tests/test_example.proto

#include "tensorflow/contrib/rpc/python/kernel_tests/test_example.pb.h"

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
namespace contrib {
namespace rpc {
class TestCaseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestCase>
      _instance;
} _TestCase_default_instance_;
}  // namespace rpc
}  // namespace contrib
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto {
static void InitDefaultsTestCase() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::contrib::rpc::_TestCase_default_instance_;
    new (ptr) ::tensorflow::contrib::rpc::TestCase();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::contrib::rpc::TestCase::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TestCase =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTestCase}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TestCase.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::contrib::rpc::TestCase, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::contrib::rpc::TestCase, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::contrib::rpc::TestCase, values_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::tensorflow::contrib::rpc::TestCase)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::contrib::rpc::_TestCase_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow/contrib/rpc/python/kernel_tests/test_example.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n=tensorflow/contrib/rpc/python/kernel_t"
      "ests/test_example.proto\022\026tensorflow.cont"
      "rib.rpc\"\032\n\010TestCase\022\016\n\006values\030\001 \003(\0052\352\003\n\017"
      "TestCaseService\022Q\n\tIncrement\022 .tensorflo"
      "w.contrib.rpc.TestCase\032 .tensorflow.cont"
      "rib.rpc.TestCase\"\000\022T\n\014SleepForever\022 .ten"
      "sorflow.contrib.rpc.TestCase\032 .tensorflo"
      "w.contrib.rpc.TestCase\"\000\022]\n\025SometimesSle"
      "epForever\022 .tensorflow.contrib.rpc.TestC"
      "ase\032 .tensorflow.contrib.rpc.TestCase\"\000\022"
      "e\n\035AlwaysFailWithInvalidArgument\022 .tenso"
      "rflow.contrib.rpc.TestCase\032 .tensorflow."
      "contrib.rpc.TestCase\"\000\022h\n SometimesFailW"
      "ithInvalidArgument\022 .tensorflow.contrib."
      "rpc.TestCase\032 .tensorflow.contrib.rpc.Te"
      "stCase\"\000"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 608);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/contrib/rpc/python/kernel_tests/test_example.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto
namespace tensorflow {
namespace contrib {
namespace rpc {

// ===================================================================

void TestCase::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestCase::kValuesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestCase::TestCase()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::scc_info_TestCase.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.contrib.rpc.TestCase)
}
TestCase::TestCase(const TestCase& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      values_(from.values_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.contrib.rpc.TestCase)
}

void TestCase::SharedCtor() {
}

TestCase::~TestCase() {
  // @@protoc_insertion_point(destructor:tensorflow.contrib.rpc.TestCase)
  SharedDtor();
}

void TestCase::SharedDtor() {
}

void TestCase::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TestCase::descriptor() {
  ::protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TestCase& TestCase::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::scc_info_TestCase.base);
  return *internal_default_instance();
}


void TestCase::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.contrib.rpc.TestCase)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  values_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TestCase::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.contrib.rpc.TestCase)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 values = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8u, input, this->mutable_values())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_values())));
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
  // @@protoc_insertion_point(parse_success:tensorflow.contrib.rpc.TestCase)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.contrib.rpc.TestCase)
  return false;
#undef DO_
}

void TestCase::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.contrib.rpc.TestCase)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 values = 1;
  for (int i = 0, n = this->values_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->values(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.contrib.rpc.TestCase)
}

::google::protobuf::uint8* TestCase::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.contrib.rpc.TestCase)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 values = 1;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteInt32ToArray(1, this->values_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.contrib.rpc.TestCase)
  return target;
}

size_t TestCase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.contrib.rpc.TestCase)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated int32 values = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->values_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->values_size());
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestCase::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.contrib.rpc.TestCase)
  GOOGLE_DCHECK_NE(&from, this);
  const TestCase* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestCase>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.contrib.rpc.TestCase)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.contrib.rpc.TestCase)
    MergeFrom(*source);
  }
}

void TestCase::MergeFrom(const TestCase& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.contrib.rpc.TestCase)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  values_.MergeFrom(from.values_);
}

void TestCase::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.contrib.rpc.TestCase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestCase::CopyFrom(const TestCase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.contrib.rpc.TestCase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestCase::IsInitialized() const {
  return true;
}

void TestCase::Swap(TestCase* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestCase::InternalSwap(TestCase* other) {
  using std::swap;
  values_.InternalSwap(&other->values_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TestCase::GetMetadata() const {
  protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace contrib
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::contrib::rpc::TestCase* Arena::CreateMaybeMessage< ::tensorflow::contrib::rpc::TestCase >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::contrib::rpc::TestCase >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
