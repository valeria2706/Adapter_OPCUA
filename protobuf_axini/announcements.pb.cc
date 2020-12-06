// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: announcements.proto

#include "announcements.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_announcement_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Announcement_announcement_2eproto;
namespace PluginAdapter {
namespace Api {
class AnnouncementsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Announcements> _instance;
} _Announcements_default_instance_;
}  // namespace Api
}  // namespace PluginAdapter
static void InitDefaultsscc_info_Announcements_announcements_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::PluginAdapter::Api::_Announcements_default_instance_;
    new (ptr) ::PluginAdapter::Api::Announcements();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Announcements_announcements_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Announcements_announcements_2eproto}, {
      &scc_info_Announcement_announcement_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_announcements_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_announcements_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_announcements_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_announcements_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PluginAdapter::Api::Announcements, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::PluginAdapter::Api::Announcements, announcements_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::PluginAdapter::Api::Announcements)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::PluginAdapter::Api::_Announcements_default_instance_),
};

const char descriptor_table_protodef_announcements_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023announcements.proto\022\021PluginAdapter.Api"
  "\032\022announcement.proto\"G\n\rAnnouncements\0226\n"
  "\rannouncements\030\001 \003(\0132\037.PluginAdapter.Api"
  ".Announcementb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_announcements_2eproto_deps[1] = {
  &::descriptor_table_announcement_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_announcements_2eproto_sccs[1] = {
  &scc_info_Announcements_announcements_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_announcements_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_announcements_2eproto = {
  false, false, descriptor_table_protodef_announcements_2eproto, "announcements.proto", 141,
  &descriptor_table_announcements_2eproto_once, descriptor_table_announcements_2eproto_sccs, descriptor_table_announcements_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_announcements_2eproto::offsets,
  file_level_metadata_announcements_2eproto, 1, file_level_enum_descriptors_announcements_2eproto, file_level_service_descriptors_announcements_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_announcements_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_announcements_2eproto)), true);
namespace PluginAdapter {
namespace Api {

// ===================================================================

class Announcements::_Internal {
 public:
};

void Announcements::clear_announcements() {
  announcements_.Clear();
}
Announcements::Announcements(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  announcements_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:PluginAdapter.Api.Announcements)
}
Announcements::Announcements(const Announcements& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      announcements_(from.announcements_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:PluginAdapter.Api.Announcements)
}

void Announcements::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Announcements_announcements_2eproto.base);
}

Announcements::~Announcements() {
  // @@protoc_insertion_point(destructor:PluginAdapter.Api.Announcements)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Announcements::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Announcements::ArenaDtor(void* object) {
  Announcements* _this = reinterpret_cast< Announcements* >(object);
  (void)_this;
}
void Announcements::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Announcements::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Announcements& Announcements::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Announcements_announcements_2eproto.base);
  return *internal_default_instance();
}


void Announcements::Clear() {
// @@protoc_insertion_point(message_clear_start:PluginAdapter.Api.Announcements)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  announcements_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Announcements::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .PluginAdapter.Api.Announcement announcements = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_announcements(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Announcements::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PluginAdapter.Api.Announcements)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .PluginAdapter.Api.Announcement announcements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_announcements_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_announcements(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PluginAdapter.Api.Announcements)
  return target;
}

size_t Announcements::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PluginAdapter.Api.Announcements)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .PluginAdapter.Api.Announcement announcements = 1;
  total_size += 1UL * this->_internal_announcements_size();
  for (const auto& msg : this->announcements_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Announcements::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PluginAdapter.Api.Announcements)
  GOOGLE_DCHECK_NE(&from, this);
  const Announcements* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Announcements>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PluginAdapter.Api.Announcements)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PluginAdapter.Api.Announcements)
    MergeFrom(*source);
  }
}

void Announcements::MergeFrom(const Announcements& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PluginAdapter.Api.Announcements)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  announcements_.MergeFrom(from.announcements_);
}

void Announcements::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PluginAdapter.Api.Announcements)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Announcements::CopyFrom(const Announcements& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PluginAdapter.Api.Announcements)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Announcements::IsInitialized() const {
  return true;
}

void Announcements::InternalSwap(Announcements* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  announcements_.InternalSwap(&other->announcements_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Announcements::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Api
}  // namespace PluginAdapter
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PluginAdapter::Api::Announcements* Arena::CreateMaybeMessage< ::PluginAdapter::Api::Announcements >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PluginAdapter::Api::Announcements >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
