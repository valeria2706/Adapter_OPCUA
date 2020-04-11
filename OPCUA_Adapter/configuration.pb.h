// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: configuration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_configuration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_configuration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_configuration_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_configuration_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_configuration_2eproto;
namespace PluginAdapter {
namespace Api {
class Configuration;
class ConfigurationDefaultTypeInternal;
extern ConfigurationDefaultTypeInternal _Configuration_default_instance_;
class Configuration_Item;
class Configuration_ItemDefaultTypeInternal;
extern Configuration_ItemDefaultTypeInternal _Configuration_Item_default_instance_;
}  // namespace Api
}  // namespace PluginAdapter
PROTOBUF_NAMESPACE_OPEN
template<> ::PluginAdapter::Api::Configuration* Arena::CreateMaybeMessage<::PluginAdapter::Api::Configuration>(Arena*);
template<> ::PluginAdapter::Api::Configuration_Item* Arena::CreateMaybeMessage<::PluginAdapter::Api::Configuration_Item>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PluginAdapter {
namespace Api {

// ===================================================================

class Configuration_Item :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PluginAdapter.Api.Configuration.Item) */ {
 public:
  Configuration_Item();
  virtual ~Configuration_Item();

  Configuration_Item(const Configuration_Item& from);
  Configuration_Item(Configuration_Item&& from) noexcept
    : Configuration_Item() {
    *this = ::std::move(from);
  }

  inline Configuration_Item& operator=(const Configuration_Item& from) {
    CopyFrom(from);
    return *this;
  }
  inline Configuration_Item& operator=(Configuration_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Configuration_Item& default_instance();

  enum TypeCase {
    kString = 3,
    kInteger = 4,
    kFloat = 5,
    kBoolean = 6,
    TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Configuration_Item* internal_default_instance() {
    return reinterpret_cast<const Configuration_Item*>(
               &_Configuration_Item_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Configuration_Item& a, Configuration_Item& b) {
    a.Swap(&b);
  }
  inline void Swap(Configuration_Item* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Configuration_Item* New() const final {
    return CreateMaybeMessage<Configuration_Item>(nullptr);
  }

  Configuration_Item* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Configuration_Item>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Configuration_Item& from);
  void MergeFrom(const Configuration_Item& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Configuration_Item* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PluginAdapter.Api.Configuration.Item";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_configuration_2eproto);
    return ::descriptor_table_configuration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
    kDescriptionFieldNumber = 2,
    kStringFieldNumber = 3,
    kIntegerFieldNumber = 4,
    kFloatFieldNumber = 5,
    kBooleanFieldNumber = 6,
  };
  // string key = 1;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // string description = 2;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // string string = 3;
  private:
  bool _internal_has_string() const;
  public:
  void clear_string();
  const std::string& string() const;
  void set_string(const std::string& value);
  void set_string(std::string&& value);
  void set_string(const char* value);
  void set_string(const char* value, size_t size);
  std::string* mutable_string();
  std::string* release_string();
  void set_allocated_string(std::string* string);
  private:
  const std::string& _internal_string() const;
  void _internal_set_string(const std::string& value);
  std::string* _internal_mutable_string();
  public:

  // int64 integer = 4;
  private:
  bool _internal_has_integer() const;
  public:
  void clear_integer();
  ::PROTOBUF_NAMESPACE_ID::int64 integer() const;
  void set_integer(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_integer() const;
  void _internal_set_integer(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // float float = 5;
  private:
  bool _internal_has_float_() const;
  public:
  void clear_float_();
  float float_() const;
  void set_float_(float value);
  private:
  float _internal_float_() const;
  void _internal_set_float_(float value);
  public:

  // bool boolean = 6;
  private:
  bool _internal_has_boolean() const;
  public:
  void clear_boolean();
  bool boolean() const;
  void set_boolean(bool value);
  private:
  bool _internal_boolean() const;
  void _internal_set_boolean(bool value);
  public:

  void clear_type();
  TypeCase type_case() const;
  // @@protoc_insertion_point(class_scope:PluginAdapter.Api.Configuration.Item)
 private:
  class _Internal;
  void set_has_string();
  void set_has_integer();
  void set_has_float_();
  void set_has_boolean();

  inline bool has_type() const;
  inline void clear_has_type();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  union TypeUnion {
    TypeUnion() {}
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_;
    ::PROTOBUF_NAMESPACE_ID::int64 integer_;
    float float__;
    bool boolean_;
  } type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_configuration_2eproto;
};
// -------------------------------------------------------------------

class Configuration :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PluginAdapter.Api.Configuration) */ {
 public:
  Configuration();
  virtual ~Configuration();

  Configuration(const Configuration& from);
  Configuration(Configuration&& from) noexcept
    : Configuration() {
    *this = ::std::move(from);
  }

  inline Configuration& operator=(const Configuration& from) {
    CopyFrom(from);
    return *this;
  }
  inline Configuration& operator=(Configuration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Configuration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Configuration* internal_default_instance() {
    return reinterpret_cast<const Configuration*>(
               &_Configuration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Configuration& a, Configuration& b) {
    a.Swap(&b);
  }
  inline void Swap(Configuration* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Configuration* New() const final {
    return CreateMaybeMessage<Configuration>(nullptr);
  }

  Configuration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Configuration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Configuration& from);
  void MergeFrom(const Configuration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Configuration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PluginAdapter.Api.Configuration";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_configuration_2eproto);
    return ::descriptor_table_configuration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Configuration_Item Item;

  // accessors -------------------------------------------------------

  enum : int {
    kItemsFieldNumber = 1,
  };
  // repeated .PluginAdapter.Api.Configuration.Item items = 1;
  int items_size() const;
  private:
  int _internal_items_size() const;
  public:
  void clear_items();
  ::PluginAdapter::Api::Configuration_Item* mutable_items(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PluginAdapter::Api::Configuration_Item >*
      mutable_items();
  private:
  const ::PluginAdapter::Api::Configuration_Item& _internal_items(int index) const;
  ::PluginAdapter::Api::Configuration_Item* _internal_add_items();
  public:
  const ::PluginAdapter::Api::Configuration_Item& items(int index) const;
  ::PluginAdapter::Api::Configuration_Item* add_items();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PluginAdapter::Api::Configuration_Item >&
      items() const;

  // @@protoc_insertion_point(class_scope:PluginAdapter.Api.Configuration)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PluginAdapter::Api::Configuration_Item > items_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_configuration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Configuration_Item

// string key = 1;
inline void Configuration_Item::clear_key() {
  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Configuration_Item::key() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.Item.key)
  return _internal_key();
}
inline void Configuration_Item::set_key(const std::string& value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.key)
}
inline std::string* Configuration_Item::mutable_key() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Configuration.Item.key)
  return _internal_mutable_key();
}
inline const std::string& Configuration_Item::_internal_key() const {
  return key_.GetNoArena();
}
inline void Configuration_Item::_internal_set_key(const std::string& value) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Configuration_Item::set_key(std::string&& value) {
  
  key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PluginAdapter.Api.Configuration.Item.key)
}
inline void Configuration_Item::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PluginAdapter.Api.Configuration.Item.key)
}
inline void Configuration_Item::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PluginAdapter.Api.Configuration.Item.key)
}
inline std::string* Configuration_Item::_internal_mutable_key() {
  
  return key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Configuration_Item::release_key() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Configuration.Item.key)
  
  return key_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Configuration_Item::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:PluginAdapter.Api.Configuration.Item.key)
}

// string description = 2;
inline void Configuration_Item::clear_description() {
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Configuration_Item::description() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.Item.description)
  return _internal_description();
}
inline void Configuration_Item::set_description(const std::string& value) {
  _internal_set_description(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.description)
}
inline std::string* Configuration_Item::mutable_description() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Configuration.Item.description)
  return _internal_mutable_description();
}
inline const std::string& Configuration_Item::_internal_description() const {
  return description_.GetNoArena();
}
inline void Configuration_Item::_internal_set_description(const std::string& value) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Configuration_Item::set_description(std::string&& value) {
  
  description_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PluginAdapter.Api.Configuration.Item.description)
}
inline void Configuration_Item::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PluginAdapter.Api.Configuration.Item.description)
}
inline void Configuration_Item::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PluginAdapter.Api.Configuration.Item.description)
}
inline std::string* Configuration_Item::_internal_mutable_description() {
  
  return description_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Configuration_Item::release_description() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Configuration.Item.description)
  
  return description_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Configuration_Item::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:PluginAdapter.Api.Configuration.Item.description)
}

// string string = 3;
inline bool Configuration_Item::_internal_has_string() const {
  return type_case() == kString;
}
inline void Configuration_Item::set_has_string() {
  _oneof_case_[0] = kString;
}
inline void Configuration_Item::clear_string() {
  if (_internal_has_string()) {
    type_.string_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    clear_has_type();
  }
}
inline const std::string& Configuration_Item::string() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.Item.string)
  return _internal_string();
}
inline void Configuration_Item::set_string(const std::string& value) {
  _internal_set_string(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.string)
}
inline std::string* Configuration_Item::mutable_string() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Configuration.Item.string)
  return _internal_mutable_string();
}
inline const std::string& Configuration_Item::_internal_string() const {
  if (_internal_has_string()) {
    return type_.string_.GetNoArena();
  }
  return *&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void Configuration_Item::_internal_set_string(const std::string& value) {
  if (!_internal_has_string()) {
    clear_type();
    set_has_string();
    type_.string_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  type_.string_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Configuration_Item::set_string(std::string&& value) {
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.string)
  if (!_internal_has_string()) {
    clear_type();
    set_has_string();
    type_.string_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  type_.string_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PluginAdapter.Api.Configuration.Item.string)
}
inline void Configuration_Item::set_string(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!_internal_has_string()) {
    clear_type();
    set_has_string();
    type_.string_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  type_.string_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PluginAdapter.Api.Configuration.Item.string)
}
inline void Configuration_Item::set_string(const char* value, size_t size) {
  if (!_internal_has_string()) {
    clear_type();
    set_has_string();
    type_.string_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  type_.string_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PluginAdapter.Api.Configuration.Item.string)
}
inline std::string* Configuration_Item::_internal_mutable_string() {
  if (!_internal_has_string()) {
    clear_type();
    set_has_string();
    type_.string_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return type_.string_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Configuration_Item::release_string() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Configuration.Item.string)
  if (_internal_has_string()) {
    clear_has_type();
    return type_.string_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  } else {
    return nullptr;
  }
}
inline void Configuration_Item::set_allocated_string(std::string* string) {
  if (has_type()) {
    clear_type();
  }
  if (string != nullptr) {
    set_has_string();
    type_.string_.UnsafeSetDefault(string);
  }
  // @@protoc_insertion_point(field_set_allocated:PluginAdapter.Api.Configuration.Item.string)
}

// int64 integer = 4;
inline bool Configuration_Item::_internal_has_integer() const {
  return type_case() == kInteger;
}
inline void Configuration_Item::set_has_integer() {
  _oneof_case_[0] = kInteger;
}
inline void Configuration_Item::clear_integer() {
  if (_internal_has_integer()) {
    type_.integer_ = PROTOBUF_LONGLONG(0);
    clear_has_type();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Configuration_Item::_internal_integer() const {
  if (_internal_has_integer()) {
    return type_.integer_;
  }
  return PROTOBUF_LONGLONG(0);
}
inline void Configuration_Item::_internal_set_integer(::PROTOBUF_NAMESPACE_ID::int64 value) {
  if (!_internal_has_integer()) {
    clear_type();
    set_has_integer();
  }
  type_.integer_ = value;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Configuration_Item::integer() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.Item.integer)
  return _internal_integer();
}
inline void Configuration_Item::set_integer(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_integer(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.integer)
}

// float float = 5;
inline bool Configuration_Item::_internal_has_float_() const {
  return type_case() == kFloat;
}
inline void Configuration_Item::set_has_float_() {
  _oneof_case_[0] = kFloat;
}
inline void Configuration_Item::clear_float_() {
  if (_internal_has_float_()) {
    type_.float__ = 0;
    clear_has_type();
  }
}
inline float Configuration_Item::_internal_float_() const {
  if (_internal_has_float_()) {
    return type_.float__;
  }
  return 0;
}
inline void Configuration_Item::_internal_set_float_(float value) {
  if (!_internal_has_float_()) {
    clear_type();
    set_has_float_();
  }
  type_.float__ = value;
}
inline float Configuration_Item::float_() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.Item.float)
  return _internal_float_();
}
inline void Configuration_Item::set_float_(float value) {
  _internal_set_float_(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.float)
}

// bool boolean = 6;
inline bool Configuration_Item::_internal_has_boolean() const {
  return type_case() == kBoolean;
}
inline void Configuration_Item::set_has_boolean() {
  _oneof_case_[0] = kBoolean;
}
inline void Configuration_Item::clear_boolean() {
  if (_internal_has_boolean()) {
    type_.boolean_ = false;
    clear_has_type();
  }
}
inline bool Configuration_Item::_internal_boolean() const {
  if (_internal_has_boolean()) {
    return type_.boolean_;
  }
  return false;
}
inline void Configuration_Item::_internal_set_boolean(bool value) {
  if (!_internal_has_boolean()) {
    clear_type();
    set_has_boolean();
  }
  type_.boolean_ = value;
}
inline bool Configuration_Item::boolean() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.Item.boolean)
  return _internal_boolean();
}
inline void Configuration_Item::set_boolean(bool value) {
  _internal_set_boolean(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Configuration.Item.boolean)
}

inline bool Configuration_Item::has_type() const {
  return type_case() != TYPE_NOT_SET;
}
inline void Configuration_Item::clear_has_type() {
  _oneof_case_[0] = TYPE_NOT_SET;
}
inline Configuration_Item::TypeCase Configuration_Item::type_case() const {
  return Configuration_Item::TypeCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Configuration

// repeated .PluginAdapter.Api.Configuration.Item items = 1;
inline int Configuration::_internal_items_size() const {
  return items_.size();
}
inline int Configuration::items_size() const {
  return _internal_items_size();
}
inline void Configuration::clear_items() {
  items_.Clear();
}
inline ::PluginAdapter::Api::Configuration_Item* Configuration::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Configuration.items)
  return items_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PluginAdapter::Api::Configuration_Item >*
Configuration::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:PluginAdapter.Api.Configuration.items)
  return &items_;
}
inline const ::PluginAdapter::Api::Configuration_Item& Configuration::_internal_items(int index) const {
  return items_.Get(index);
}
inline const ::PluginAdapter::Api::Configuration_Item& Configuration::items(int index) const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Configuration.items)
  return _internal_items(index);
}
inline ::PluginAdapter::Api::Configuration_Item* Configuration::_internal_add_items() {
  return items_.Add();
}
inline ::PluginAdapter::Api::Configuration_Item* Configuration::add_items() {
  // @@protoc_insertion_point(field_add:PluginAdapter.Api.Configuration.items)
  return _internal_add_items();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PluginAdapter::Api::Configuration_Item >&
Configuration::items() const {
  // @@protoc_insertion_point(field_list:PluginAdapter.Api.Configuration.items)
  return items_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Api
}  // namespace PluginAdapter

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_configuration_2eproto
