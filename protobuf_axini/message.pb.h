// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_message_2eproto

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
#include "label.pb.h"
#include "announcement.pb.h"
#include "configuration.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_message_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_message_2eproto;
namespace PluginAdapter {
namespace Api {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class Message_Error;
class Message_ErrorDefaultTypeInternal;
extern Message_ErrorDefaultTypeInternal _Message_Error_default_instance_;
class Message_Ready;
class Message_ReadyDefaultTypeInternal;
extern Message_ReadyDefaultTypeInternal _Message_Ready_default_instance_;
class Message_Reset;
class Message_ResetDefaultTypeInternal;
extern Message_ResetDefaultTypeInternal _Message_Reset_default_instance_;
}  // namespace Api
}  // namespace PluginAdapter
PROTOBUF_NAMESPACE_OPEN
template<> ::PluginAdapter::Api::Message* Arena::CreateMaybeMessage<::PluginAdapter::Api::Message>(Arena*);
template<> ::PluginAdapter::Api::Message_Error* Arena::CreateMaybeMessage<::PluginAdapter::Api::Message_Error>(Arena*);
template<> ::PluginAdapter::Api::Message_Ready* Arena::CreateMaybeMessage<::PluginAdapter::Api::Message_Ready>(Arena*);
template<> ::PluginAdapter::Api::Message_Reset* Arena::CreateMaybeMessage<::PluginAdapter::Api::Message_Reset>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PluginAdapter {
namespace Api {

// ===================================================================

class Message_Reset :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PluginAdapter.Api.Message.Reset) */ {
 public:
  Message_Reset();
  virtual ~Message_Reset();

  Message_Reset(const Message_Reset& from);
  Message_Reset(Message_Reset&& from) noexcept
    : Message_Reset() {
    *this = ::std::move(from);
  }

  inline Message_Reset& operator=(const Message_Reset& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message_Reset& operator=(Message_Reset&& from) noexcept {
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
  static const Message_Reset& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message_Reset* internal_default_instance() {
    return reinterpret_cast<const Message_Reset*>(
               &_Message_Reset_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Message_Reset& a, Message_Reset& b) {
    a.Swap(&b);
  }
  inline void Swap(Message_Reset* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message_Reset* New() const final {
    return CreateMaybeMessage<Message_Reset>(nullptr);
  }

  Message_Reset* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message_Reset>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message_Reset& from);
  void MergeFrom(const Message_Reset& from);
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
  void InternalSwap(Message_Reset* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PluginAdapter.Api.Message.Reset";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:PluginAdapter.Api.Message.Reset)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class Message_Ready :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PluginAdapter.Api.Message.Ready) */ {
 public:
  Message_Ready();
  virtual ~Message_Ready();

  Message_Ready(const Message_Ready& from);
  Message_Ready(Message_Ready&& from) noexcept
    : Message_Ready() {
    *this = ::std::move(from);
  }

  inline Message_Ready& operator=(const Message_Ready& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message_Ready& operator=(Message_Ready&& from) noexcept {
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
  static const Message_Ready& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message_Ready* internal_default_instance() {
    return reinterpret_cast<const Message_Ready*>(
               &_Message_Ready_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Message_Ready& a, Message_Ready& b) {
    a.Swap(&b);
  }
  inline void Swap(Message_Ready* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message_Ready* New() const final {
    return CreateMaybeMessage<Message_Ready>(nullptr);
  }

  Message_Ready* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message_Ready>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message_Ready& from);
  void MergeFrom(const Message_Ready& from);
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
  void InternalSwap(Message_Ready* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PluginAdapter.Api.Message.Ready";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:PluginAdapter.Api.Message.Ready)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class Message_Error :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PluginAdapter.Api.Message.Error) */ {
 public:
  Message_Error();
  virtual ~Message_Error();

  Message_Error(const Message_Error& from);
  Message_Error(Message_Error&& from) noexcept
    : Message_Error() {
    *this = ::std::move(from);
  }

  inline Message_Error& operator=(const Message_Error& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message_Error& operator=(Message_Error&& from) noexcept {
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
  static const Message_Error& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message_Error* internal_default_instance() {
    return reinterpret_cast<const Message_Error*>(
               &_Message_Error_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Message_Error& a, Message_Error& b) {
    a.Swap(&b);
  }
  inline void Swap(Message_Error* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message_Error* New() const final {
    return CreateMaybeMessage<Message_Error>(nullptr);
  }

  Message_Error* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message_Error>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message_Error& from);
  void MergeFrom(const Message_Error& from);
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
  void InternalSwap(Message_Error* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PluginAdapter.Api.Message.Error";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:PluginAdapter.Api.Message.Error)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class Message :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PluginAdapter.Api.Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
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
  static const Message& default_instance();

  enum TypeCase {
    kError = 1,
    kAnnouncement = 2,
    kConfiguration = 3,
    kLabel = 4,
    kReset = 5,
    kReady = 6,
    TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
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
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PluginAdapter.Api.Message";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Message_Reset Reset;
  typedef Message_Ready Ready;
  typedef Message_Error Error;

  // accessors -------------------------------------------------------

  enum : int {
    kErrorFieldNumber = 1,
    kAnnouncementFieldNumber = 2,
    kConfigurationFieldNumber = 3,
    kLabelFieldNumber = 4,
    kResetFieldNumber = 5,
    kReadyFieldNumber = 6,
  };
  // .PluginAdapter.Api.Message.Error error = 1;
  bool has_error() const;
  private:
  bool _internal_has_error() const;
  public:
  void clear_error();
  const ::PluginAdapter::Api::Message_Error& error() const;
  ::PluginAdapter::Api::Message_Error* release_error();
  ::PluginAdapter::Api::Message_Error* mutable_error();
  void set_allocated_error(::PluginAdapter::Api::Message_Error* error);
  private:
  const ::PluginAdapter::Api::Message_Error& _internal_error() const;
  ::PluginAdapter::Api::Message_Error* _internal_mutable_error();
  public:

  // .PluginAdapter.Api.Announcement announcement = 2;
  bool has_announcement() const;
  private:
  bool _internal_has_announcement() const;
  public:
  void clear_announcement();
  const ::PluginAdapter::Api::Announcement& announcement() const;
  ::PluginAdapter::Api::Announcement* release_announcement();
  ::PluginAdapter::Api::Announcement* mutable_announcement();
  void set_allocated_announcement(::PluginAdapter::Api::Announcement* announcement);
  private:
  const ::PluginAdapter::Api::Announcement& _internal_announcement() const;
  ::PluginAdapter::Api::Announcement* _internal_mutable_announcement();
  public:

  // .PluginAdapter.Api.Configuration configuration = 3;
  bool has_configuration() const;
  private:
  bool _internal_has_configuration() const;
  public:
  void clear_configuration();
  const ::PluginAdapter::Api::Configuration& configuration() const;
  ::PluginAdapter::Api::Configuration* release_configuration();
  ::PluginAdapter::Api::Configuration* mutable_configuration();
  void set_allocated_configuration(::PluginAdapter::Api::Configuration* configuration);
  private:
  const ::PluginAdapter::Api::Configuration& _internal_configuration() const;
  ::PluginAdapter::Api::Configuration* _internal_mutable_configuration();
  public:

  // .PluginAdapter.Api.Label label = 4;
  bool has_label() const;
  private:
  bool _internal_has_label() const;
  public:
  void clear_label();
  const ::PluginAdapter::Api::Label& label() const;
  ::PluginAdapter::Api::Label* release_label();
  ::PluginAdapter::Api::Label* mutable_label();
  void set_allocated_label(::PluginAdapter::Api::Label* label);
  private:
  const ::PluginAdapter::Api::Label& _internal_label() const;
  ::PluginAdapter::Api::Label* _internal_mutable_label();
  public:

  // .PluginAdapter.Api.Message.Reset reset = 5;
  bool has_reset() const;
  private:
  bool _internal_has_reset() const;
  public:
  void clear_reset();
  const ::PluginAdapter::Api::Message_Reset& reset() const;
  ::PluginAdapter::Api::Message_Reset* release_reset();
  ::PluginAdapter::Api::Message_Reset* mutable_reset();
  void set_allocated_reset(::PluginAdapter::Api::Message_Reset* reset);
  private:
  const ::PluginAdapter::Api::Message_Reset& _internal_reset() const;
  ::PluginAdapter::Api::Message_Reset* _internal_mutable_reset();
  public:

  // .PluginAdapter.Api.Message.Ready ready = 6;
  bool has_ready() const;
  private:
  bool _internal_has_ready() const;
  public:
  void clear_ready();
  const ::PluginAdapter::Api::Message_Ready& ready() const;
  ::PluginAdapter::Api::Message_Ready* release_ready();
  ::PluginAdapter::Api::Message_Ready* mutable_ready();
  void set_allocated_ready(::PluginAdapter::Api::Message_Ready* ready);
  private:
  const ::PluginAdapter::Api::Message_Ready& _internal_ready() const;
  ::PluginAdapter::Api::Message_Ready* _internal_mutable_ready();
  public:

  void clear_type();
  TypeCase type_case() const;
  // @@protoc_insertion_point(class_scope:PluginAdapter.Api.Message)
 private:
  class _Internal;
  void set_has_error();
  void set_has_announcement();
  void set_has_configuration();
  void set_has_label();
  void set_has_reset();
  void set_has_ready();

  inline bool has_type() const;
  inline void clear_has_type();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  union TypeUnion {
    TypeUnion() {}
    ::PluginAdapter::Api::Message_Error* error_;
    ::PluginAdapter::Api::Announcement* announcement_;
    ::PluginAdapter::Api::Configuration* configuration_;
    ::PluginAdapter::Api::Label* label_;
    ::PluginAdapter::Api::Message_Reset* reset_;
    ::PluginAdapter::Api::Message_Ready* ready_;
  } type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message_Reset

// -------------------------------------------------------------------

// Message_Ready

// -------------------------------------------------------------------

// Message_Error

// string message = 1;
inline void Message_Error::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Message_Error::message() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.Error.message)
  return _internal_message();
}
inline void Message_Error::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:PluginAdapter.Api.Message.Error.message)
}
inline std::string* Message_Error::mutable_message() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.Error.message)
  return _internal_mutable_message();
}
inline const std::string& Message_Error::_internal_message() const {
  return message_.GetNoArena();
}
inline void Message_Error::_internal_set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Message_Error::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PluginAdapter.Api.Message.Error.message)
}
inline void Message_Error::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PluginAdapter.Api.Message.Error.message)
}
inline void Message_Error::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PluginAdapter.Api.Message.Error.message)
}
inline std::string* Message_Error::_internal_mutable_message() {
  
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message_Error::release_message() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.Error.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message_Error::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:PluginAdapter.Api.Message.Error.message)
}

// -------------------------------------------------------------------

// Message

// .PluginAdapter.Api.Message.Error error = 1;
inline bool Message::_internal_has_error() const {
  return type_case() == kError;
}
inline bool Message::has_error() const {
  return _internal_has_error();
}
inline void Message::set_has_error() {
  _oneof_case_[0] = kError;
}
inline void Message::clear_error() {
  if (_internal_has_error()) {
    delete type_.error_;
    clear_has_type();
  }
}
inline ::PluginAdapter::Api::Message_Error* Message::release_error() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.error)
  if (has_error()) {
    clear_has_type();
      ::PluginAdapter::Api::Message_Error* temp = type_.error_;
    type_.error_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PluginAdapter::Api::Message_Error& Message::_internal_error() const {
  return _internal_has_error()
      ? *type_.error_
      : *reinterpret_cast< ::PluginAdapter::Api::Message_Error*>(&::PluginAdapter::Api::_Message_Error_default_instance_);
}
inline const ::PluginAdapter::Api::Message_Error& Message::error() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.error)
  return _internal_error();
}
inline ::PluginAdapter::Api::Message_Error* Message::_internal_mutable_error() {
  if (!_internal_has_error()) {
    clear_type();
    set_has_error();
    type_.error_ = CreateMaybeMessage< ::PluginAdapter::Api::Message_Error >(
        GetArenaNoVirtual());
  }
  return type_.error_;
}
inline ::PluginAdapter::Api::Message_Error* Message::mutable_error() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.error)
  return _internal_mutable_error();
}

// .PluginAdapter.Api.Announcement announcement = 2;
inline bool Message::_internal_has_announcement() const {
  return type_case() == kAnnouncement;
}
inline bool Message::has_announcement() const {
  return _internal_has_announcement();
}
inline void Message::set_has_announcement() {
  _oneof_case_[0] = kAnnouncement;
}
inline ::PluginAdapter::Api::Announcement* Message::release_announcement() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.announcement)
  if (has_announcement()) {
    clear_has_type();
      ::PluginAdapter::Api::Announcement* temp = type_.announcement_;
    type_.announcement_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PluginAdapter::Api::Announcement& Message::_internal_announcement() const {
  return _internal_has_announcement()
      ? *type_.announcement_
      : *reinterpret_cast< ::PluginAdapter::Api::Announcement*>(&::PluginAdapter::Api::_Announcement_default_instance_);
}
inline const ::PluginAdapter::Api::Announcement& Message::announcement() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.announcement)
  return _internal_announcement();
}
inline ::PluginAdapter::Api::Announcement* Message::_internal_mutable_announcement() {
  if (!_internal_has_announcement()) {
    clear_type();
    set_has_announcement();
    type_.announcement_ = CreateMaybeMessage< ::PluginAdapter::Api::Announcement >(
        GetArenaNoVirtual());
  }
  return type_.announcement_;
}
inline ::PluginAdapter::Api::Announcement* Message::mutable_announcement() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.announcement)
  return _internal_mutable_announcement();
}

// .PluginAdapter.Api.Configuration configuration = 3;
inline bool Message::_internal_has_configuration() const {
  return type_case() == kConfiguration;
}
inline bool Message::has_configuration() const {
  return _internal_has_configuration();
}
inline void Message::set_has_configuration() {
  _oneof_case_[0] = kConfiguration;
}
inline ::PluginAdapter::Api::Configuration* Message::release_configuration() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.configuration)
  if (has_configuration()) {
    clear_has_type();
      ::PluginAdapter::Api::Configuration* temp = type_.configuration_;
    type_.configuration_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PluginAdapter::Api::Configuration& Message::_internal_configuration() const {
  return _internal_has_configuration()
      ? *type_.configuration_
      : *reinterpret_cast< ::PluginAdapter::Api::Configuration*>(&::PluginAdapter::Api::_Configuration_default_instance_);
}
inline const ::PluginAdapter::Api::Configuration& Message::configuration() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.configuration)
  return _internal_configuration();
}
inline ::PluginAdapter::Api::Configuration* Message::_internal_mutable_configuration() {
  if (!_internal_has_configuration()) {
    clear_type();
    set_has_configuration();
    type_.configuration_ = CreateMaybeMessage< ::PluginAdapter::Api::Configuration >(
        GetArenaNoVirtual());
  }
  return type_.configuration_;
}
inline ::PluginAdapter::Api::Configuration* Message::mutable_configuration() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.configuration)
  return _internal_mutable_configuration();
}

// .PluginAdapter.Api.Label label = 4;
inline bool Message::_internal_has_label() const {
  return type_case() == kLabel;
}
inline bool Message::has_label() const {
  return _internal_has_label();
}
inline void Message::set_has_label() {
  _oneof_case_[0] = kLabel;
}
inline ::PluginAdapter::Api::Label* Message::release_label() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.label)
  if (has_label()) {
    clear_has_type();
      ::PluginAdapter::Api::Label* temp = type_.label_;
    type_.label_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PluginAdapter::Api::Label& Message::_internal_label() const {
  return _internal_has_label()
      ? *type_.label_
      : *reinterpret_cast< ::PluginAdapter::Api::Label*>(&::PluginAdapter::Api::_Label_default_instance_);
}
inline const ::PluginAdapter::Api::Label& Message::label() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.label)
  return _internal_label();
}
inline ::PluginAdapter::Api::Label* Message::_internal_mutable_label() {
  if (!_internal_has_label()) {
    clear_type();
    set_has_label();
    type_.label_ = CreateMaybeMessage< ::PluginAdapter::Api::Label >(
        GetArenaNoVirtual());
  }
  return type_.label_;
}
inline ::PluginAdapter::Api::Label* Message::mutable_label() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.label)
  return _internal_mutable_label();
}

// .PluginAdapter.Api.Message.Reset reset = 5;
inline bool Message::_internal_has_reset() const {
  return type_case() == kReset;
}
inline bool Message::has_reset() const {
  return _internal_has_reset();
}
inline void Message::set_has_reset() {
  _oneof_case_[0] = kReset;
}
inline void Message::clear_reset() {
  if (_internal_has_reset()) {
    delete type_.reset_;
    clear_has_type();
  }
}
inline ::PluginAdapter::Api::Message_Reset* Message::release_reset() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.reset)
  if (has_reset()) {
    clear_has_type();
      ::PluginAdapter::Api::Message_Reset* temp = type_.reset_;
    type_.reset_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PluginAdapter::Api::Message_Reset& Message::_internal_reset() const {
  return _internal_has_reset()
      ? *type_.reset_
      : *reinterpret_cast< ::PluginAdapter::Api::Message_Reset*>(&::PluginAdapter::Api::_Message_Reset_default_instance_);
}
inline const ::PluginAdapter::Api::Message_Reset& Message::reset() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.reset)
  return _internal_reset();
}
inline ::PluginAdapter::Api::Message_Reset* Message::_internal_mutable_reset() {
  if (!_internal_has_reset()) {
    clear_type();
    set_has_reset();
    type_.reset_ = CreateMaybeMessage< ::PluginAdapter::Api::Message_Reset >(
        GetArenaNoVirtual());
  }
  return type_.reset_;
}
inline ::PluginAdapter::Api::Message_Reset* Message::mutable_reset() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.reset)
  return _internal_mutable_reset();
}

// .PluginAdapter.Api.Message.Ready ready = 6;
inline bool Message::_internal_has_ready() const {
  return type_case() == kReady;
}
inline bool Message::has_ready() const {
  return _internal_has_ready();
}
inline void Message::set_has_ready() {
  _oneof_case_[0] = kReady;
}
inline void Message::clear_ready() {
  if (_internal_has_ready()) {
    delete type_.ready_;
    clear_has_type();
  }
}
inline ::PluginAdapter::Api::Message_Ready* Message::release_ready() {
  // @@protoc_insertion_point(field_release:PluginAdapter.Api.Message.ready)
  if (has_ready()) {
    clear_has_type();
      ::PluginAdapter::Api::Message_Ready* temp = type_.ready_;
    type_.ready_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PluginAdapter::Api::Message_Ready& Message::_internal_ready() const {
  return _internal_has_ready()
      ? *type_.ready_
      : *reinterpret_cast< ::PluginAdapter::Api::Message_Ready*>(&::PluginAdapter::Api::_Message_Ready_default_instance_);
}
inline const ::PluginAdapter::Api::Message_Ready& Message::ready() const {
  // @@protoc_insertion_point(field_get:PluginAdapter.Api.Message.ready)
  return _internal_ready();
}
inline ::PluginAdapter::Api::Message_Ready* Message::_internal_mutable_ready() {
  if (!_internal_has_ready()) {
    clear_type();
    set_has_ready();
    type_.ready_ = CreateMaybeMessage< ::PluginAdapter::Api::Message_Ready >(
        GetArenaNoVirtual());
  }
  return type_.ready_;
}
inline ::PluginAdapter::Api::Message_Ready* Message::mutable_ready() {
  // @@protoc_insertion_point(field_mutable:PluginAdapter.Api.Message.ready)
  return _internal_mutable_ready();
}

inline bool Message::has_type() const {
  return type_case() != TYPE_NOT_SET;
}
inline void Message::clear_has_type() {
  _oneof_case_[0] = TYPE_NOT_SET;
}
inline Message::TypeCase Message::type_case() const {
  return Message::TypeCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Api
}  // namespace PluginAdapter

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_message_2eproto
