// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_address_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_address_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_address_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_address_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_address_2eproto;
class Address;
struct AddressDefaultTypeInternal;
extern AddressDefaultTypeInternal _Address_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Address* Arena::CreateMaybeMessage<::Address>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Address final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Address) */ {
 public:
  inline Address() : Address(nullptr) {}
  ~Address() override;
  explicit PROTOBUF_CONSTEXPR Address(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Address(const Address& from);
  Address(Address&& from) noexcept
    : Address() {
    *this = ::std::move(from);
  }

  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  inline Address& operator=(Address&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Address& default_instance() {
    return *internal_default_instance();
  }
  static inline const Address* internal_default_instance() {
    return reinterpret_cast<const Address*>(
               &_Address_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Address& a, Address& b) {
    a.Swap(&b);
  }
  inline void Swap(Address* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Address* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Address* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Address>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Address& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Address& from) {
    Address::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Address* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Address";
  }
  protected:
  explicit Address(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPhoneNumberFieldNumber = 3,
    kStreetFieldNumber = 1,
    kBuildingFieldNumber = 2,
  };
  // repeated string phone_number = 3;
  int phone_number_size() const;
  private:
  int _internal_phone_number_size() const;
  public:
  void clear_phone_number();
  const std::string& phone_number(int index) const;
  std::string* mutable_phone_number(int index);
  void set_phone_number(int index, const std::string& value);
  void set_phone_number(int index, std::string&& value);
  void set_phone_number(int index, const char* value);
  void set_phone_number(int index, const char* value, size_t size);
  std::string* add_phone_number();
  void add_phone_number(const std::string& value);
  void add_phone_number(std::string&& value);
  void add_phone_number(const char* value);
  void add_phone_number(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& phone_number() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_phone_number();
  private:
  const std::string& _internal_phone_number(int index) const;
  std::string* _internal_add_phone_number();
  public:

  // string street = 1;
  void clear_street();
  const std::string& street() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_street(ArgT0&& arg0, ArgT... args);
  std::string* mutable_street();
  PROTOBUF_NODISCARD std::string* release_street();
  void set_allocated_street(std::string* street);
  private:
  const std::string& _internal_street() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_street(const std::string& value);
  std::string* _internal_mutable_street();
  public:

  // uint32 building = 2;
  void clear_building();
  uint32_t building() const;
  void set_building(uint32_t value);
  private:
  uint32_t _internal_building() const;
  void _internal_set_building(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Address)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> phone_number_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr street_;
    uint32_t building_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_address_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Address

// string street = 1;
inline void Address::clear_street() {
  _impl_.street_.ClearToEmpty();
}
inline const std::string& Address::street() const {
  // @@protoc_insertion_point(field_get:Address.street)
  return _internal_street();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Address::set_street(ArgT0&& arg0, ArgT... args) {
 
 _impl_.street_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Address.street)
}
inline std::string* Address::mutable_street() {
  std::string* _s = _internal_mutable_street();
  // @@protoc_insertion_point(field_mutable:Address.street)
  return _s;
}
inline const std::string& Address::_internal_street() const {
  return _impl_.street_.Get();
}
inline void Address::_internal_set_street(const std::string& value) {
  
  _impl_.street_.Set(value, GetArenaForAllocation());
}
inline std::string* Address::_internal_mutable_street() {
  
  return _impl_.street_.Mutable(GetArenaForAllocation());
}
inline std::string* Address::release_street() {
  // @@protoc_insertion_point(field_release:Address.street)
  return _impl_.street_.Release();
}
inline void Address::set_allocated_street(std::string* street) {
  if (street != nullptr) {
    
  } else {
    
  }
  _impl_.street_.SetAllocated(street, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.street_.IsDefault()) {
    _impl_.street_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Address.street)
}

// uint32 building = 2;
inline void Address::clear_building() {
  _impl_.building_ = 0u;
}
inline uint32_t Address::_internal_building() const {
  return _impl_.building_;
}
inline uint32_t Address::building() const {
  // @@protoc_insertion_point(field_get:Address.building)
  return _internal_building();
}
inline void Address::_internal_set_building(uint32_t value) {
  
  _impl_.building_ = value;
}
inline void Address::set_building(uint32_t value) {
  _internal_set_building(value);
  // @@protoc_insertion_point(field_set:Address.building)
}

// repeated string phone_number = 3;
inline int Address::_internal_phone_number_size() const {
  return _impl_.phone_number_.size();
}
inline int Address::phone_number_size() const {
  return _internal_phone_number_size();
}
inline void Address::clear_phone_number() {
  _impl_.phone_number_.Clear();
}
inline std::string* Address::add_phone_number() {
  std::string* _s = _internal_add_phone_number();
  // @@protoc_insertion_point(field_add_mutable:Address.phone_number)
  return _s;
}
inline const std::string& Address::_internal_phone_number(int index) const {
  return _impl_.phone_number_.Get(index);
}
inline const std::string& Address::phone_number(int index) const {
  // @@protoc_insertion_point(field_get:Address.phone_number)
  return _internal_phone_number(index);
}
inline std::string* Address::mutable_phone_number(int index) {
  // @@protoc_insertion_point(field_mutable:Address.phone_number)
  return _impl_.phone_number_.Mutable(index);
}
inline void Address::set_phone_number(int index, const std::string& value) {
  _impl_.phone_number_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:Address.phone_number)
}
inline void Address::set_phone_number(int index, std::string&& value) {
  _impl_.phone_number_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:Address.phone_number)
}
inline void Address::set_phone_number(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.phone_number_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Address.phone_number)
}
inline void Address::set_phone_number(int index, const char* value, size_t size) {
  _impl_.phone_number_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Address.phone_number)
}
inline std::string* Address::_internal_add_phone_number() {
  return _impl_.phone_number_.Add();
}
inline void Address::add_phone_number(const std::string& value) {
  _impl_.phone_number_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Address.phone_number)
}
inline void Address::add_phone_number(std::string&& value) {
  _impl_.phone_number_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Address.phone_number)
}
inline void Address::add_phone_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.phone_number_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Address.phone_number)
}
inline void Address::add_phone_number(const char* value, size_t size) {
  _impl_.phone_number_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Address.phone_number)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Address::phone_number() const {
  // @@protoc_insertion_point(field_list:Address.phone_number)
  return _impl_.phone_number_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Address::mutable_phone_number() {
  // @@protoc_insertion_point(field_mutable_list:Address.phone_number)
  return &_impl_.phone_number_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_address_2eproto
