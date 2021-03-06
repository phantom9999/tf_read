// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/coordination_config.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto 

namespace protobuf_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto
namespace tensorflow {
class CoordinationServiceConfig;
class CoordinationServiceConfigDefaultTypeInternal;
extern CoordinationServiceConfigDefaultTypeInternal _CoordinationServiceConfig_default_instance_;
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::CoordinationServiceConfig* Arena::CreateMaybeMessage<::tensorflow::CoordinationServiceConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {

// ===================================================================

class CoordinationServiceConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CoordinationServiceConfig) */ {
 public:
  CoordinationServiceConfig();
  virtual ~CoordinationServiceConfig();

  CoordinationServiceConfig(const CoordinationServiceConfig& from);

  inline CoordinationServiceConfig& operator=(const CoordinationServiceConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CoordinationServiceConfig(CoordinationServiceConfig&& from) noexcept
    : CoordinationServiceConfig() {
    *this = ::std::move(from);
  }

  inline CoordinationServiceConfig& operator=(CoordinationServiceConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CoordinationServiceConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CoordinationServiceConfig* internal_default_instance() {
    return reinterpret_cast<const CoordinationServiceConfig*>(
               &_CoordinationServiceConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CoordinationServiceConfig* other);
  friend void swap(CoordinationServiceConfig& a, CoordinationServiceConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CoordinationServiceConfig* New() const final {
    return CreateMaybeMessage<CoordinationServiceConfig>(NULL);
  }

  CoordinationServiceConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CoordinationServiceConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CoordinationServiceConfig& from);
  void MergeFrom(const CoordinationServiceConfig& from);
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
  void InternalSwap(CoordinationServiceConfig* other);
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

  // repeated string coordinated_jobs = 6;
  int coordinated_jobs_size() const;
  void clear_coordinated_jobs();
  static const int kCoordinatedJobsFieldNumber = 6;
  const ::std::string& coordinated_jobs(int index) const;
  ::std::string* mutable_coordinated_jobs(int index);
  void set_coordinated_jobs(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_coordinated_jobs(int index, ::std::string&& value);
  #endif
  void set_coordinated_jobs(int index, const char* value);
  void set_coordinated_jobs(int index, const char* value, size_t size);
  ::std::string* add_coordinated_jobs();
  void add_coordinated_jobs(const ::std::string& value);
  #if LANG_CXX11
  void add_coordinated_jobs(::std::string&& value);
  #endif
  void add_coordinated_jobs(const char* value);
  void add_coordinated_jobs(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& coordinated_jobs() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_coordinated_jobs();

  // string service_type = 1;
  void clear_service_type();
  static const int kServiceTypeFieldNumber = 1;
  const ::std::string& service_type() const;
  void set_service_type(const ::std::string& value);
  #if LANG_CXX11
  void set_service_type(::std::string&& value);
  #endif
  void set_service_type(const char* value);
  void set_service_type(const char* value, size_t size);
  ::std::string* mutable_service_type();
  ::std::string* release_service_type();
  void set_allocated_service_type(::std::string* service_type);

  // string service_leader = 2;
  void clear_service_leader();
  static const int kServiceLeaderFieldNumber = 2;
  const ::std::string& service_leader() const;
  void set_service_leader(const ::std::string& value);
  #if LANG_CXX11
  void set_service_leader(::std::string&& value);
  #endif
  void set_service_leader(const char* value);
  void set_service_leader(const char* value, size_t size);
  ::std::string* mutable_service_leader();
  ::std::string* release_service_leader();
  void set_allocated_service_leader(::std::string* service_leader);

  // int64 cluster_register_timeout_in_ms = 4;
  void clear_cluster_register_timeout_in_ms();
  static const int kClusterRegisterTimeoutInMsFieldNumber = 4;
  ::google::protobuf::int64 cluster_register_timeout_in_ms() const;
  void set_cluster_register_timeout_in_ms(::google::protobuf::int64 value);

  // int64 heartbeat_timeout_in_ms = 5;
  void clear_heartbeat_timeout_in_ms();
  static const int kHeartbeatTimeoutInMsFieldNumber = 5;
  ::google::protobuf::int64 heartbeat_timeout_in_ms() const;
  void set_heartbeat_timeout_in_ms(::google::protobuf::int64 value);

  // int64 shutdown_barrier_timeout_in_ms = 7;
  void clear_shutdown_barrier_timeout_in_ms();
  static const int kShutdownBarrierTimeoutInMsFieldNumber = 7;
  ::google::protobuf::int64 shutdown_barrier_timeout_in_ms() const;
  void set_shutdown_barrier_timeout_in_ms(::google::protobuf::int64 value);

  // bool enable_health_check = 3;
  void clear_enable_health_check();
  static const int kEnableHealthCheckFieldNumber = 3;
  bool enable_health_check() const;
  void set_enable_health_check(bool value);

  // bool agent_destruction_without_shutdown = 8;
  void clear_agent_destruction_without_shutdown();
  static const int kAgentDestructionWithoutShutdownFieldNumber = 8;
  bool agent_destruction_without_shutdown() const;
  void set_agent_destruction_without_shutdown(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.CoordinationServiceConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> coordinated_jobs_;
  ::google::protobuf::internal::ArenaStringPtr service_type_;
  ::google::protobuf::internal::ArenaStringPtr service_leader_;
  ::google::protobuf::int64 cluster_register_timeout_in_ms_;
  ::google::protobuf::int64 heartbeat_timeout_in_ms_;
  ::google::protobuf::int64 shutdown_barrier_timeout_in_ms_;
  bool enable_health_check_;
  bool agent_destruction_without_shutdown_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CoordinationServiceConfig

// string service_type = 1;
inline void CoordinationServiceConfig::clear_service_type() {
  service_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CoordinationServiceConfig::service_type() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.service_type)
  return service_type_.GetNoArena();
}
inline void CoordinationServiceConfig::set_service_type(const ::std::string& value) {
  
  service_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.service_type)
}
#if LANG_CXX11
inline void CoordinationServiceConfig::set_service_type(::std::string&& value) {
  
  service_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.CoordinationServiceConfig.service_type)
}
#endif
inline void CoordinationServiceConfig::set_service_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  service_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.CoordinationServiceConfig.service_type)
}
inline void CoordinationServiceConfig::set_service_type(const char* value, size_t size) {
  
  service_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CoordinationServiceConfig.service_type)
}
inline ::std::string* CoordinationServiceConfig::mutable_service_type() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CoordinationServiceConfig.service_type)
  return service_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CoordinationServiceConfig::release_service_type() {
  // @@protoc_insertion_point(field_release:tensorflow.CoordinationServiceConfig.service_type)
  
  return service_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CoordinationServiceConfig::set_allocated_service_type(::std::string* service_type) {
  if (service_type != NULL) {
    
  } else {
    
  }
  service_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_type);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CoordinationServiceConfig.service_type)
}

// string service_leader = 2;
inline void CoordinationServiceConfig::clear_service_leader() {
  service_leader_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CoordinationServiceConfig::service_leader() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.service_leader)
  return service_leader_.GetNoArena();
}
inline void CoordinationServiceConfig::set_service_leader(const ::std::string& value) {
  
  service_leader_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.service_leader)
}
#if LANG_CXX11
inline void CoordinationServiceConfig::set_service_leader(::std::string&& value) {
  
  service_leader_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.CoordinationServiceConfig.service_leader)
}
#endif
inline void CoordinationServiceConfig::set_service_leader(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  service_leader_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.CoordinationServiceConfig.service_leader)
}
inline void CoordinationServiceConfig::set_service_leader(const char* value, size_t size) {
  
  service_leader_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CoordinationServiceConfig.service_leader)
}
inline ::std::string* CoordinationServiceConfig::mutable_service_leader() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CoordinationServiceConfig.service_leader)
  return service_leader_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CoordinationServiceConfig::release_service_leader() {
  // @@protoc_insertion_point(field_release:tensorflow.CoordinationServiceConfig.service_leader)
  
  return service_leader_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CoordinationServiceConfig::set_allocated_service_leader(::std::string* service_leader) {
  if (service_leader != NULL) {
    
  } else {
    
  }
  service_leader_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_leader);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CoordinationServiceConfig.service_leader)
}

// bool enable_health_check = 3;
inline void CoordinationServiceConfig::clear_enable_health_check() {
  enable_health_check_ = false;
}
inline bool CoordinationServiceConfig::enable_health_check() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.enable_health_check)
  return enable_health_check_;
}
inline void CoordinationServiceConfig::set_enable_health_check(bool value) {
  
  enable_health_check_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.enable_health_check)
}

// int64 cluster_register_timeout_in_ms = 4;
inline void CoordinationServiceConfig::clear_cluster_register_timeout_in_ms() {
  cluster_register_timeout_in_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CoordinationServiceConfig::cluster_register_timeout_in_ms() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.cluster_register_timeout_in_ms)
  return cluster_register_timeout_in_ms_;
}
inline void CoordinationServiceConfig::set_cluster_register_timeout_in_ms(::google::protobuf::int64 value) {
  
  cluster_register_timeout_in_ms_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.cluster_register_timeout_in_ms)
}

// int64 heartbeat_timeout_in_ms = 5;
inline void CoordinationServiceConfig::clear_heartbeat_timeout_in_ms() {
  heartbeat_timeout_in_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CoordinationServiceConfig::heartbeat_timeout_in_ms() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.heartbeat_timeout_in_ms)
  return heartbeat_timeout_in_ms_;
}
inline void CoordinationServiceConfig::set_heartbeat_timeout_in_ms(::google::protobuf::int64 value) {
  
  heartbeat_timeout_in_ms_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.heartbeat_timeout_in_ms)
}

// repeated string coordinated_jobs = 6;
inline int CoordinationServiceConfig::coordinated_jobs_size() const {
  return coordinated_jobs_.size();
}
inline void CoordinationServiceConfig::clear_coordinated_jobs() {
  coordinated_jobs_.Clear();
}
inline const ::std::string& CoordinationServiceConfig::coordinated_jobs(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  return coordinated_jobs_.Get(index);
}
inline ::std::string* CoordinationServiceConfig::mutable_coordinated_jobs(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  return coordinated_jobs_.Mutable(index);
}
inline void CoordinationServiceConfig::set_coordinated_jobs(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  coordinated_jobs_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void CoordinationServiceConfig::set_coordinated_jobs(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  coordinated_jobs_.Mutable(index)->assign(std::move(value));
}
#endif
inline void CoordinationServiceConfig::set_coordinated_jobs(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  coordinated_jobs_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.CoordinationServiceConfig.coordinated_jobs)
}
inline void CoordinationServiceConfig::set_coordinated_jobs(int index, const char* value, size_t size) {
  coordinated_jobs_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CoordinationServiceConfig.coordinated_jobs)
}
inline ::std::string* CoordinationServiceConfig::add_coordinated_jobs() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  return coordinated_jobs_.Add();
}
inline void CoordinationServiceConfig::add_coordinated_jobs(const ::std::string& value) {
  coordinated_jobs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.CoordinationServiceConfig.coordinated_jobs)
}
#if LANG_CXX11
inline void CoordinationServiceConfig::add_coordinated_jobs(::std::string&& value) {
  coordinated_jobs_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.CoordinationServiceConfig.coordinated_jobs)
}
#endif
inline void CoordinationServiceConfig::add_coordinated_jobs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  coordinated_jobs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.CoordinationServiceConfig.coordinated_jobs)
}
inline void CoordinationServiceConfig::add_coordinated_jobs(const char* value, size_t size) {
  coordinated_jobs_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.CoordinationServiceConfig.coordinated_jobs)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CoordinationServiceConfig::coordinated_jobs() const {
  // @@protoc_insertion_point(field_list:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  return coordinated_jobs_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CoordinationServiceConfig::mutable_coordinated_jobs() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CoordinationServiceConfig.coordinated_jobs)
  return &coordinated_jobs_;
}

// int64 shutdown_barrier_timeout_in_ms = 7;
inline void CoordinationServiceConfig::clear_shutdown_barrier_timeout_in_ms() {
  shutdown_barrier_timeout_in_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CoordinationServiceConfig::shutdown_barrier_timeout_in_ms() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.shutdown_barrier_timeout_in_ms)
  return shutdown_barrier_timeout_in_ms_;
}
inline void CoordinationServiceConfig::set_shutdown_barrier_timeout_in_ms(::google::protobuf::int64 value) {
  
  shutdown_barrier_timeout_in_ms_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.shutdown_barrier_timeout_in_ms)
}

// bool agent_destruction_without_shutdown = 8;
inline void CoordinationServiceConfig::clear_agent_destruction_without_shutdown() {
  agent_destruction_without_shutdown_ = false;
}
inline bool CoordinationServiceConfig::agent_destruction_without_shutdown() const {
  // @@protoc_insertion_point(field_get:tensorflow.CoordinationServiceConfig.agent_destruction_without_shutdown)
  return agent_destruction_without_shutdown_;
}
inline void CoordinationServiceConfig::set_agent_destruction_without_shutdown(bool value) {
  
  agent_destruction_without_shutdown_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CoordinationServiceConfig.agent_destruction_without_shutdown)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fcoordination_5fconfig_2eproto
