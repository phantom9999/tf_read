// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/profiler/protobuf/hardware_types.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto 

namespace protobuf_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto
namespace tensorflow {
namespace profiler {
class DeviceCapabilities;
class DeviceCapabilitiesDefaultTypeInternal;
extern DeviceCapabilitiesDefaultTypeInternal _DeviceCapabilities_default_instance_;
class GPUComputeCapability;
class GPUComputeCapabilityDefaultTypeInternal;
extern GPUComputeCapabilityDefaultTypeInternal _GPUComputeCapability_default_instance_;
}  // namespace profiler
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::profiler::DeviceCapabilities* Arena::CreateMaybeMessage<::tensorflow::profiler::DeviceCapabilities>(Arena*);
template<> ::tensorflow::profiler::GPUComputeCapability* Arena::CreateMaybeMessage<::tensorflow::profiler::GPUComputeCapability>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace profiler {

enum HardwareType {
  UNKNOWN_HARDWARE = 0,
  CPU_ONLY = 1,
  GPU = 2,
  TPU = 3,
  HardwareType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  HardwareType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool HardwareType_IsValid(int value);
const HardwareType HardwareType_MIN = UNKNOWN_HARDWARE;
const HardwareType HardwareType_MAX = TPU;
const int HardwareType_ARRAYSIZE = HardwareType_MAX + 1;

const ::google::protobuf::EnumDescriptor* HardwareType_descriptor();
inline const ::std::string& HardwareType_Name(HardwareType value) {
  return ::google::protobuf::internal::NameOfEnum(
    HardwareType_descriptor(), value);
}
inline bool HardwareType_Parse(
    const ::std::string& name, HardwareType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HardwareType>(
    HardwareType_descriptor(), name, value);
}
// ===================================================================

class GPUComputeCapability : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.profiler.GPUComputeCapability) */ {
 public:
  GPUComputeCapability();
  virtual ~GPUComputeCapability();

  GPUComputeCapability(const GPUComputeCapability& from);

  inline GPUComputeCapability& operator=(const GPUComputeCapability& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GPUComputeCapability(GPUComputeCapability&& from) noexcept
    : GPUComputeCapability() {
    *this = ::std::move(from);
  }

  inline GPUComputeCapability& operator=(GPUComputeCapability&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GPUComputeCapability& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GPUComputeCapability* internal_default_instance() {
    return reinterpret_cast<const GPUComputeCapability*>(
               &_GPUComputeCapability_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GPUComputeCapability* other);
  friend void swap(GPUComputeCapability& a, GPUComputeCapability& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GPUComputeCapability* New() const final {
    return CreateMaybeMessage<GPUComputeCapability>(NULL);
  }

  GPUComputeCapability* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GPUComputeCapability>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GPUComputeCapability& from);
  void MergeFrom(const GPUComputeCapability& from);
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
  void InternalSwap(GPUComputeCapability* other);
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

  // uint32 major = 1;
  void clear_major();
  static const int kMajorFieldNumber = 1;
  ::google::protobuf::uint32 major() const;
  void set_major(::google::protobuf::uint32 value);

  // uint32 minor = 2;
  void clear_minor();
  static const int kMinorFieldNumber = 2;
  ::google::protobuf::uint32 minor() const;
  void set_minor(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.profiler.GPUComputeCapability)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 major_;
  ::google::protobuf::uint32 minor_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DeviceCapabilities : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.profiler.DeviceCapabilities) */ {
 public:
  DeviceCapabilities();
  virtual ~DeviceCapabilities();

  DeviceCapabilities(const DeviceCapabilities& from);

  inline DeviceCapabilities& operator=(const DeviceCapabilities& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DeviceCapabilities(DeviceCapabilities&& from) noexcept
    : DeviceCapabilities() {
    *this = ::std::move(from);
  }

  inline DeviceCapabilities& operator=(DeviceCapabilities&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DeviceCapabilities& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DeviceCapabilities* internal_default_instance() {
    return reinterpret_cast<const DeviceCapabilities*>(
               &_DeviceCapabilities_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DeviceCapabilities* other);
  friend void swap(DeviceCapabilities& a, DeviceCapabilities& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DeviceCapabilities* New() const final {
    return CreateMaybeMessage<DeviceCapabilities>(NULL);
  }

  DeviceCapabilities* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DeviceCapabilities>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DeviceCapabilities& from);
  void MergeFrom(const DeviceCapabilities& from);
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
  void InternalSwap(DeviceCapabilities* other);
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

  // string device_vendor = 6;
  void clear_device_vendor();
  static const int kDeviceVendorFieldNumber = 6;
  const ::std::string& device_vendor() const;
  void set_device_vendor(const ::std::string& value);
  #if LANG_CXX11
  void set_device_vendor(::std::string&& value);
  #endif
  void set_device_vendor(const char* value);
  void set_device_vendor(const char* value, size_t size);
  ::std::string* mutable_device_vendor();
  ::std::string* release_device_vendor();
  void set_allocated_device_vendor(::std::string* device_vendor);

  // .tensorflow.profiler.GPUComputeCapability compute_capability = 5;
  bool has_compute_capability() const;
  void clear_compute_capability();
  static const int kComputeCapabilityFieldNumber = 5;
  private:
  const ::tensorflow::profiler::GPUComputeCapability& _internal_compute_capability() const;
  public:
  const ::tensorflow::profiler::GPUComputeCapability& compute_capability() const;
  ::tensorflow::profiler::GPUComputeCapability* release_compute_capability();
  ::tensorflow::profiler::GPUComputeCapability* mutable_compute_capability();
  void set_allocated_compute_capability(::tensorflow::profiler::GPUComputeCapability* compute_capability);

  // double clock_rate_in_ghz = 1;
  void clear_clock_rate_in_ghz();
  static const int kClockRateInGhzFieldNumber = 1;
  double clock_rate_in_ghz() const;
  void set_clock_rate_in_ghz(double value);

  // uint64 memory_size_in_bytes = 3;
  void clear_memory_size_in_bytes();
  static const int kMemorySizeInBytesFieldNumber = 3;
  ::google::protobuf::uint64 memory_size_in_bytes() const;
  void set_memory_size_in_bytes(::google::protobuf::uint64 value);

  // uint64 memory_bandwidth = 4;
  void clear_memory_bandwidth();
  static const int kMemoryBandwidthFieldNumber = 4;
  ::google::protobuf::uint64 memory_bandwidth() const;
  void set_memory_bandwidth(::google::protobuf::uint64 value);

  // uint32 num_cores = 2;
  void clear_num_cores();
  static const int kNumCoresFieldNumber = 2;
  ::google::protobuf::uint32 num_cores() const;
  void set_num_cores(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.profiler.DeviceCapabilities)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr device_vendor_;
  ::tensorflow::profiler::GPUComputeCapability* compute_capability_;
  double clock_rate_in_ghz_;
  ::google::protobuf::uint64 memory_size_in_bytes_;
  ::google::protobuf::uint64 memory_bandwidth_;
  ::google::protobuf::uint32 num_cores_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GPUComputeCapability

// uint32 major = 1;
inline void GPUComputeCapability::clear_major() {
  major_ = 0u;
}
inline ::google::protobuf::uint32 GPUComputeCapability::major() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.GPUComputeCapability.major)
  return major_;
}
inline void GPUComputeCapability::set_major(::google::protobuf::uint32 value) {
  
  major_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.profiler.GPUComputeCapability.major)
}

// uint32 minor = 2;
inline void GPUComputeCapability::clear_minor() {
  minor_ = 0u;
}
inline ::google::protobuf::uint32 GPUComputeCapability::minor() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.GPUComputeCapability.minor)
  return minor_;
}
inline void GPUComputeCapability::set_minor(::google::protobuf::uint32 value) {
  
  minor_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.profiler.GPUComputeCapability.minor)
}

// -------------------------------------------------------------------

// DeviceCapabilities

// double clock_rate_in_ghz = 1;
inline void DeviceCapabilities::clear_clock_rate_in_ghz() {
  clock_rate_in_ghz_ = 0;
}
inline double DeviceCapabilities::clock_rate_in_ghz() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.DeviceCapabilities.clock_rate_in_ghz)
  return clock_rate_in_ghz_;
}
inline void DeviceCapabilities::set_clock_rate_in_ghz(double value) {
  
  clock_rate_in_ghz_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.profiler.DeviceCapabilities.clock_rate_in_ghz)
}

// uint32 num_cores = 2;
inline void DeviceCapabilities::clear_num_cores() {
  num_cores_ = 0u;
}
inline ::google::protobuf::uint32 DeviceCapabilities::num_cores() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.DeviceCapabilities.num_cores)
  return num_cores_;
}
inline void DeviceCapabilities::set_num_cores(::google::protobuf::uint32 value) {
  
  num_cores_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.profiler.DeviceCapabilities.num_cores)
}

// uint64 memory_size_in_bytes = 3;
inline void DeviceCapabilities::clear_memory_size_in_bytes() {
  memory_size_in_bytes_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 DeviceCapabilities::memory_size_in_bytes() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.DeviceCapabilities.memory_size_in_bytes)
  return memory_size_in_bytes_;
}
inline void DeviceCapabilities::set_memory_size_in_bytes(::google::protobuf::uint64 value) {
  
  memory_size_in_bytes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.profiler.DeviceCapabilities.memory_size_in_bytes)
}

// uint64 memory_bandwidth = 4;
inline void DeviceCapabilities::clear_memory_bandwidth() {
  memory_bandwidth_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 DeviceCapabilities::memory_bandwidth() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.DeviceCapabilities.memory_bandwidth)
  return memory_bandwidth_;
}
inline void DeviceCapabilities::set_memory_bandwidth(::google::protobuf::uint64 value) {
  
  memory_bandwidth_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.profiler.DeviceCapabilities.memory_bandwidth)
}

// .tensorflow.profiler.GPUComputeCapability compute_capability = 5;
inline bool DeviceCapabilities::has_compute_capability() const {
  return this != internal_default_instance() && compute_capability_ != NULL;
}
inline void DeviceCapabilities::clear_compute_capability() {
  if (GetArenaNoVirtual() == NULL && compute_capability_ != NULL) {
    delete compute_capability_;
  }
  compute_capability_ = NULL;
}
inline const ::tensorflow::profiler::GPUComputeCapability& DeviceCapabilities::_internal_compute_capability() const {
  return *compute_capability_;
}
inline const ::tensorflow::profiler::GPUComputeCapability& DeviceCapabilities::compute_capability() const {
  const ::tensorflow::profiler::GPUComputeCapability* p = compute_capability_;
  // @@protoc_insertion_point(field_get:tensorflow.profiler.DeviceCapabilities.compute_capability)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::profiler::GPUComputeCapability*>(
      &::tensorflow::profiler::_GPUComputeCapability_default_instance_);
}
inline ::tensorflow::profiler::GPUComputeCapability* DeviceCapabilities::release_compute_capability() {
  // @@protoc_insertion_point(field_release:tensorflow.profiler.DeviceCapabilities.compute_capability)
  
  ::tensorflow::profiler::GPUComputeCapability* temp = compute_capability_;
  compute_capability_ = NULL;
  return temp;
}
inline ::tensorflow::profiler::GPUComputeCapability* DeviceCapabilities::mutable_compute_capability() {
  
  if (compute_capability_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::profiler::GPUComputeCapability>(GetArenaNoVirtual());
    compute_capability_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.profiler.DeviceCapabilities.compute_capability)
  return compute_capability_;
}
inline void DeviceCapabilities::set_allocated_compute_capability(::tensorflow::profiler::GPUComputeCapability* compute_capability) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete compute_capability_;
  }
  if (compute_capability) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      compute_capability = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, compute_capability, submessage_arena);
    }
    
  } else {
    
  }
  compute_capability_ = compute_capability;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.profiler.DeviceCapabilities.compute_capability)
}

// string device_vendor = 6;
inline void DeviceCapabilities::clear_device_vendor() {
  device_vendor_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DeviceCapabilities::device_vendor() const {
  // @@protoc_insertion_point(field_get:tensorflow.profiler.DeviceCapabilities.device_vendor)
  return device_vendor_.GetNoArena();
}
inline void DeviceCapabilities::set_device_vendor(const ::std::string& value) {
  
  device_vendor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.profiler.DeviceCapabilities.device_vendor)
}
#if LANG_CXX11
inline void DeviceCapabilities::set_device_vendor(::std::string&& value) {
  
  device_vendor_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.profiler.DeviceCapabilities.device_vendor)
}
#endif
inline void DeviceCapabilities::set_device_vendor(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  device_vendor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.profiler.DeviceCapabilities.device_vendor)
}
inline void DeviceCapabilities::set_device_vendor(const char* value, size_t size) {
  
  device_vendor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.profiler.DeviceCapabilities.device_vendor)
}
inline ::std::string* DeviceCapabilities::mutable_device_vendor() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.profiler.DeviceCapabilities.device_vendor)
  return device_vendor_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceCapabilities::release_device_vendor() {
  // @@protoc_insertion_point(field_release:tensorflow.profiler.DeviceCapabilities.device_vendor)
  
  return device_vendor_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceCapabilities::set_allocated_device_vendor(::std::string* device_vendor) {
  if (device_vendor != NULL) {
    
  } else {
    
  }
  device_vendor_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_vendor);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.profiler.DeviceCapabilities.device_vendor)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace profiler
}  // namespace tensorflow

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::profiler::HardwareType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::profiler::HardwareType>() {
  return ::tensorflow::profiler::HardwareType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2fprofiler_2fprotobuf_2fhardware_5ftypes_2eproto