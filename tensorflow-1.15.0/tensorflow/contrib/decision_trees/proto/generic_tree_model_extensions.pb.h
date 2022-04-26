// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto

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
#include "tensorflow/contrib/decision_trees/proto/generic_tree_model.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto 

namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto
namespace tensorflow {
namespace decision_trees {
class ConstResultTest;
class ConstResultTestDefaultTypeInternal;
extern ConstResultTestDefaultTypeInternal _ConstResultTest_default_instance_;
class MatchingValuesTest;
class MatchingValuesTestDefaultTypeInternal;
extern MatchingValuesTestDefaultTypeInternal _MatchingValuesTest_default_instance_;
}  // namespace decision_trees
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::decision_trees::ConstResultTest* Arena::CreateMaybeMessage<::tensorflow::decision_trees::ConstResultTest>(Arena*);
template<> ::tensorflow::decision_trees::MatchingValuesTest* Arena::CreateMaybeMessage<::tensorflow::decision_trees::MatchingValuesTest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace decision_trees {

// ===================================================================

class MatchingValuesTest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.decision_trees.MatchingValuesTest) */ {
 public:
  MatchingValuesTest();
  virtual ~MatchingValuesTest();

  MatchingValuesTest(const MatchingValuesTest& from);

  inline MatchingValuesTest& operator=(const MatchingValuesTest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MatchingValuesTest(MatchingValuesTest&& from) noexcept
    : MatchingValuesTest() {
    *this = ::std::move(from);
  }

  inline MatchingValuesTest& operator=(MatchingValuesTest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MatchingValuesTest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MatchingValuesTest* internal_default_instance() {
    return reinterpret_cast<const MatchingValuesTest*>(
               &_MatchingValuesTest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MatchingValuesTest* other);
  friend void swap(MatchingValuesTest& a, MatchingValuesTest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MatchingValuesTest* New() const final {
    return CreateMaybeMessage<MatchingValuesTest>(NULL);
  }

  MatchingValuesTest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MatchingValuesTest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MatchingValuesTest& from);
  void MergeFrom(const MatchingValuesTest& from);
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
  void InternalSwap(MatchingValuesTest* other);
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

  // repeated .tensorflow.decision_trees.Value value = 2;
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  ::tensorflow::decision_trees::Value* mutable_value(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::decision_trees::Value >*
      mutable_value();
  const ::tensorflow::decision_trees::Value& value(int index) const;
  ::tensorflow::decision_trees::Value* add_value();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::decision_trees::Value >&
      value() const;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  bool has_feature_id() const;
  void clear_feature_id();
  static const int kFeatureIdFieldNumber = 1;
  private:
  const ::tensorflow::decision_trees::FeatureId& _internal_feature_id() const;
  public:
  const ::tensorflow::decision_trees::FeatureId& feature_id() const;
  ::tensorflow::decision_trees::FeatureId* release_feature_id();
  ::tensorflow::decision_trees::FeatureId* mutable_feature_id();
  void set_allocated_feature_id(::tensorflow::decision_trees::FeatureId* feature_id);

  // bool inverse = 3;
  void clear_inverse();
  static const int kInverseFieldNumber = 3;
  bool inverse() const;
  void set_inverse(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.decision_trees.MatchingValuesTest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::decision_trees::Value > value_;
  ::tensorflow::decision_trees::FeatureId* feature_id_;
  bool inverse_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ConstResultTest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.decision_trees.ConstResultTest) */ {
 public:
  ConstResultTest();
  virtual ~ConstResultTest();

  ConstResultTest(const ConstResultTest& from);

  inline ConstResultTest& operator=(const ConstResultTest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ConstResultTest(ConstResultTest&& from) noexcept
    : ConstResultTest() {
    *this = ::std::move(from);
  }

  inline ConstResultTest& operator=(ConstResultTest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConstResultTest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConstResultTest* internal_default_instance() {
    return reinterpret_cast<const ConstResultTest*>(
               &_ConstResultTest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ConstResultTest* other);
  friend void swap(ConstResultTest& a, ConstResultTest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ConstResultTest* New() const final {
    return CreateMaybeMessage<ConstResultTest>(NULL);
  }

  ConstResultTest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ConstResultTest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ConstResultTest& from);
  void MergeFrom(const ConstResultTest& from);
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
  void InternalSwap(ConstResultTest* other);
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

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  bool has_feature_id() const;
  void clear_feature_id();
  static const int kFeatureIdFieldNumber = 1;
  private:
  const ::tensorflow::decision_trees::FeatureId& _internal_feature_id() const;
  public:
  const ::tensorflow::decision_trees::FeatureId& feature_id() const;
  ::tensorflow::decision_trees::FeatureId* release_feature_id();
  ::tensorflow::decision_trees::FeatureId* mutable_feature_id();
  void set_allocated_feature_id(::tensorflow::decision_trees::FeatureId* feature_id);

  // .tensorflow.decision_trees.Value value_for_dtype = 2;
  bool has_value_for_dtype() const;
  void clear_value_for_dtype();
  static const int kValueForDtypeFieldNumber = 2;
  private:
  const ::tensorflow::decision_trees::Value& _internal_value_for_dtype() const;
  public:
  const ::tensorflow::decision_trees::Value& value_for_dtype() const;
  ::tensorflow::decision_trees::Value* release_value_for_dtype();
  ::tensorflow::decision_trees::Value* mutable_value_for_dtype();
  void set_allocated_value_for_dtype(::tensorflow::decision_trees::Value* value_for_dtype);

  // bool test_result = 3;
  void clear_test_result();
  static const int kTestResultFieldNumber = 3;
  bool test_result() const;
  void set_test_result(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.decision_trees.ConstResultTest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::tensorflow::decision_trees::FeatureId* feature_id_;
  ::tensorflow::decision_trees::Value* value_for_dtype_;
  bool test_result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MatchingValuesTest

// .tensorflow.decision_trees.FeatureId feature_id = 1;
inline bool MatchingValuesTest::has_feature_id() const {
  return this != internal_default_instance() && feature_id_ != NULL;
}
inline const ::tensorflow::decision_trees::FeatureId& MatchingValuesTest::_internal_feature_id() const {
  return *feature_id_;
}
inline const ::tensorflow::decision_trees::FeatureId& MatchingValuesTest::feature_id() const {
  const ::tensorflow::decision_trees::FeatureId* p = feature_id_;
  // @@protoc_insertion_point(field_get:tensorflow.decision_trees.MatchingValuesTest.feature_id)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::decision_trees::FeatureId*>(
      &::tensorflow::decision_trees::_FeatureId_default_instance_);
}
inline ::tensorflow::decision_trees::FeatureId* MatchingValuesTest::release_feature_id() {
  // @@protoc_insertion_point(field_release:tensorflow.decision_trees.MatchingValuesTest.feature_id)
  
  ::tensorflow::decision_trees::FeatureId* temp = feature_id_;
  feature_id_ = NULL;
  return temp;
}
inline ::tensorflow::decision_trees::FeatureId* MatchingValuesTest::mutable_feature_id() {
  
  if (feature_id_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::decision_trees::FeatureId>(GetArenaNoVirtual());
    feature_id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.decision_trees.MatchingValuesTest.feature_id)
  return feature_id_;
}
inline void MatchingValuesTest::set_allocated_feature_id(::tensorflow::decision_trees::FeatureId* feature_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(feature_id_);
  }
  if (feature_id) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(feature_id)->GetArena();
    if (message_arena != submessage_arena) {
      feature_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, feature_id, submessage_arena);
    }
    
  } else {
    
  }
  feature_id_ = feature_id;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.decision_trees.MatchingValuesTest.feature_id)
}

// repeated .tensorflow.decision_trees.Value value = 2;
inline int MatchingValuesTest::value_size() const {
  return value_.size();
}
inline ::tensorflow::decision_trees::Value* MatchingValuesTest::mutable_value(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.decision_trees.MatchingValuesTest.value)
  return value_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::decision_trees::Value >*
MatchingValuesTest::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.decision_trees.MatchingValuesTest.value)
  return &value_;
}
inline const ::tensorflow::decision_trees::Value& MatchingValuesTest::value(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.decision_trees.MatchingValuesTest.value)
  return value_.Get(index);
}
inline ::tensorflow::decision_trees::Value* MatchingValuesTest::add_value() {
  // @@protoc_insertion_point(field_add:tensorflow.decision_trees.MatchingValuesTest.value)
  return value_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::decision_trees::Value >&
MatchingValuesTest::value() const {
  // @@protoc_insertion_point(field_list:tensorflow.decision_trees.MatchingValuesTest.value)
  return value_;
}

// bool inverse = 3;
inline void MatchingValuesTest::clear_inverse() {
  inverse_ = false;
}
inline bool MatchingValuesTest::inverse() const {
  // @@protoc_insertion_point(field_get:tensorflow.decision_trees.MatchingValuesTest.inverse)
  return inverse_;
}
inline void MatchingValuesTest::set_inverse(bool value) {
  
  inverse_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.decision_trees.MatchingValuesTest.inverse)
}

// -------------------------------------------------------------------

// ConstResultTest

// .tensorflow.decision_trees.FeatureId feature_id = 1;
inline bool ConstResultTest::has_feature_id() const {
  return this != internal_default_instance() && feature_id_ != NULL;
}
inline const ::tensorflow::decision_trees::FeatureId& ConstResultTest::_internal_feature_id() const {
  return *feature_id_;
}
inline const ::tensorflow::decision_trees::FeatureId& ConstResultTest::feature_id() const {
  const ::tensorflow::decision_trees::FeatureId* p = feature_id_;
  // @@protoc_insertion_point(field_get:tensorflow.decision_trees.ConstResultTest.feature_id)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::decision_trees::FeatureId*>(
      &::tensorflow::decision_trees::_FeatureId_default_instance_);
}
inline ::tensorflow::decision_trees::FeatureId* ConstResultTest::release_feature_id() {
  // @@protoc_insertion_point(field_release:tensorflow.decision_trees.ConstResultTest.feature_id)
  
  ::tensorflow::decision_trees::FeatureId* temp = feature_id_;
  feature_id_ = NULL;
  return temp;
}
inline ::tensorflow::decision_trees::FeatureId* ConstResultTest::mutable_feature_id() {
  
  if (feature_id_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::decision_trees::FeatureId>(GetArenaNoVirtual());
    feature_id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.decision_trees.ConstResultTest.feature_id)
  return feature_id_;
}
inline void ConstResultTest::set_allocated_feature_id(::tensorflow::decision_trees::FeatureId* feature_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(feature_id_);
  }
  if (feature_id) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(feature_id)->GetArena();
    if (message_arena != submessage_arena) {
      feature_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, feature_id, submessage_arena);
    }
    
  } else {
    
  }
  feature_id_ = feature_id;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.decision_trees.ConstResultTest.feature_id)
}

// .tensorflow.decision_trees.Value value_for_dtype = 2;
inline bool ConstResultTest::has_value_for_dtype() const {
  return this != internal_default_instance() && value_for_dtype_ != NULL;
}
inline const ::tensorflow::decision_trees::Value& ConstResultTest::_internal_value_for_dtype() const {
  return *value_for_dtype_;
}
inline const ::tensorflow::decision_trees::Value& ConstResultTest::value_for_dtype() const {
  const ::tensorflow::decision_trees::Value* p = value_for_dtype_;
  // @@protoc_insertion_point(field_get:tensorflow.decision_trees.ConstResultTest.value_for_dtype)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::decision_trees::Value*>(
      &::tensorflow::decision_trees::_Value_default_instance_);
}
inline ::tensorflow::decision_trees::Value* ConstResultTest::release_value_for_dtype() {
  // @@protoc_insertion_point(field_release:tensorflow.decision_trees.ConstResultTest.value_for_dtype)
  
  ::tensorflow::decision_trees::Value* temp = value_for_dtype_;
  value_for_dtype_ = NULL;
  return temp;
}
inline ::tensorflow::decision_trees::Value* ConstResultTest::mutable_value_for_dtype() {
  
  if (value_for_dtype_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::decision_trees::Value>(GetArenaNoVirtual());
    value_for_dtype_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.decision_trees.ConstResultTest.value_for_dtype)
  return value_for_dtype_;
}
inline void ConstResultTest::set_allocated_value_for_dtype(::tensorflow::decision_trees::Value* value_for_dtype) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(value_for_dtype_);
  }
  if (value_for_dtype) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(value_for_dtype)->GetArena();
    if (message_arena != submessage_arena) {
      value_for_dtype = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, value_for_dtype, submessage_arena);
    }
    
  } else {
    
  }
  value_for_dtype_ = value_for_dtype;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.decision_trees.ConstResultTest.value_for_dtype)
}

// bool test_result = 3;
inline void ConstResultTest::clear_test_result() {
  test_result_ = false;
}
inline bool ConstResultTest::test_result() const {
  // @@protoc_insertion_point(field_get:tensorflow.decision_trees.ConstResultTest.test_result)
  return test_result_;
}
inline void ConstResultTest::set_test_result(bool value) {
  
  test_result_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.decision_trees.ConstResultTest.test_result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace decision_trees
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto
