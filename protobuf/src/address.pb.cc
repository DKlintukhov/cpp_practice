// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#include "address.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Address::Address(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.phone_number_)*/{}
  , /*decltype(_impl_.street_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.building_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AddressDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddressDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddressDefaultTypeInternal() {}
  union {
    Address _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddressDefaultTypeInternal _Address_default_instance_;
static ::_pb::Metadata file_level_metadata_address_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_address_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_address_2eproto = nullptr;

const uint32_t TableStruct_address_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Address, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::Address, _impl_.street_),
  PROTOBUF_FIELD_OFFSET(::Address, _impl_.building_),
  PROTOBUF_FIELD_OFFSET(::Address, _impl_.phone_number_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Address)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Address_default_instance_._instance,
};

const char descriptor_table_protodef_address_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\raddress.proto\"A\n\007Address\022\016\n\006street\030\001 \001"
  "(\t\022\020\n\010building\030\002 \001(\r\022\024\n\014phone_number\030\003 \003"
  "(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_address_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_address_2eproto = {
    false, false, 90, descriptor_table_protodef_address_2eproto,
    "address.proto",
    &descriptor_table_address_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_address_2eproto::offsets,
    file_level_metadata_address_2eproto, file_level_enum_descriptors_address_2eproto,
    file_level_service_descriptors_address_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_address_2eproto_getter() {
  return &descriptor_table_address_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_address_2eproto(&descriptor_table_address_2eproto);

// ===================================================================

class Address::_Internal {
 public:
};

Address::Address(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Address)
}
Address::Address(const Address& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Address* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_number_){from._impl_.phone_number_}
    , decltype(_impl_.street_){}
    , decltype(_impl_.building_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.street_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.street_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_street().empty()) {
    _this->_impl_.street_.Set(from._internal_street(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.building_ = from._impl_.building_;
  // @@protoc_insertion_point(copy_constructor:Address)
}

inline void Address::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_number_){arena}
    , decltype(_impl_.street_){}
    , decltype(_impl_.building_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.street_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.street_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Address::~Address() {
  // @@protoc_insertion_point(destructor:Address)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Address::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.phone_number_.~RepeatedPtrField();
  _impl_.street_.Destroy();
}

void Address::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Address::Clear() {
// @@protoc_insertion_point(message_clear_start:Address)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.phone_number_.Clear();
  _impl_.street_.ClearToEmpty();
  _impl_.building_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Address::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string street = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_street();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Address.street"));
        } else
          goto handle_unusual;
        continue;
      // uint32 building = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.building_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string phone_number = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_phone_number();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Address.phone_number"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Address::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Address)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string street = 1;
  if (!this->_internal_street().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_street().data(), static_cast<int>(this->_internal_street().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Address.street");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_street(), target);
  }

  // uint32 building = 2;
  if (this->_internal_building() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_building(), target);
  }

  // repeated string phone_number = 3;
  for (int i = 0, n = this->_internal_phone_number_size(); i < n; i++) {
    const auto& s = this->_internal_phone_number(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Address.phone_number");
    target = stream->WriteString(3, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Address)
  return target;
}

size_t Address::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Address)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string phone_number = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.phone_number_.size());
  for (int i = 0, n = _impl_.phone_number_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.phone_number_.Get(i));
  }

  // string street = 1;
  if (!this->_internal_street().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_street());
  }

  // uint32 building = 2;
  if (this->_internal_building() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_building());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Address::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Address::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Address::GetClassData() const { return &_class_data_; }


void Address::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Address*>(&to_msg);
  auto& from = static_cast<const Address&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Address)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.phone_number_.MergeFrom(from._impl_.phone_number_);
  if (!from._internal_street().empty()) {
    _this->_internal_set_street(from._internal_street());
  }
  if (from._internal_building() != 0) {
    _this->_internal_set_building(from._internal_building());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Address::CopyFrom(const Address& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Address)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Address::IsInitialized() const {
  return true;
}

void Address::InternalSwap(Address* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.phone_number_.InternalSwap(&other->_impl_.phone_number_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.street_, lhs_arena,
      &other->_impl_.street_, rhs_arena
  );
  swap(_impl_.building_, other->_impl_.building_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Address::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_address_2eproto_getter, &descriptor_table_address_2eproto_once,
      file_level_metadata_address_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Address*
Arena::CreateMaybeMessage< ::Address >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Address >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
