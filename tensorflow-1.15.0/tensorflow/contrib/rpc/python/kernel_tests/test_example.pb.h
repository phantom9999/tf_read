// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/rpc/python/kernel_tests/test_example.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto 

namespace protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto {
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
}  // namespace protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto
namespace tensorflow {
namespace contrib {
namespace rpc {
class TestCase;
class TestCaseDefaultTypeInternal;
extern TestCaseDefaultTypeInternal _TestCase_default_instance_;
}  // namespace rpc
}  // namespace contrib
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::contrib::rpc::TestCase* Arena::CreateMaybeMessage<::tensorflow::contrib::rpc::TestCase>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace contrib {
namespace rpc {

// ===================================================================

class TestCase : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.contrib.rpc.TestCase) */ {
 public:
  TestCase();
  virtual ~TestCase();

  TestCase(const TestCase& from);

  inline TestCase& operator=(const TestCase& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestCase(TestCase&& from) noexcept
    : TestCase() {
    *this = ::std::move(from);
  }

  inline TestCase& operator=(TestCase&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestCase& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestCase* internal_default_instance() {
    return reinterpret_cast<const TestCase*>(
               &_TestCase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TestCase* other);
  friend void swap(TestCase& a, TestCase& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestCase* New() const final {
    return CreateMaybeMessage<TestCase>(NULL);
  }

  TestCase* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestCase>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestCase& from);
  void MergeFrom(const TestCase& from);
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
  void InternalSwap(TestCase* other);
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

  // repeated int32 values = 1;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 1;
  ::google::protobuf::int32 values(int index) const;
  void set_values(int index, ::google::protobuf::int32 value);
  void add_values(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      values() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_values();

  // @@protoc_insertion_point(class_scope:tensorflow.contrib.rpc.TestCase)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > values_;
  friend struct ::protobuf_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestCase

// repeated int32 values = 1;
inline int TestCase::values_size() const {
  return values_.size();
}
inline void TestCase::clear_values() {
  values_.Clear();
}
inline ::google::protobuf::int32 TestCase::values(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.contrib.rpc.TestCase.values)
  return values_.Get(index);
}
inline void TestCase::set_values(int index, ::google::protobuf::int32 value) {
  values_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.contrib.rpc.TestCase.values)
}
inline void TestCase::add_values(::google::protobuf::int32 value) {
  values_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.contrib.rpc.TestCase.values)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
TestCase::values() const {
  // @@protoc_insertion_point(field_list:tensorflow.contrib.rpc.TestCase.values)
  return values_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
TestCase::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.contrib.rpc.TestCase.values)
  return &values_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc
}  // namespace contrib
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcontrib_2frpc_2fpython_2fkernel_5ftests_2ftest_5fexample_2eproto