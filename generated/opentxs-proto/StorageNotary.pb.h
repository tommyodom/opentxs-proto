// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageNotary.proto

#ifndef PROTOBUF_StorageNotary_2eproto__INCLUDED
#define PROTOBUF_StorageNotary_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "BlindedSeriesList.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_StorageNotary_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsStorageNotaryImpl();
void InitDefaultsStorageNotary();
inline void InitDefaults() {
  InitDefaultsStorageNotary();
}
}  // namespace protobuf_StorageNotary_2eproto
namespace opentxs {
namespace proto {
class StorageNotary;
class StorageNotaryDefaultTypeInternal;
extern StorageNotaryDefaultTypeInternal _StorageNotary_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class StorageNotary : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.StorageNotary) */ {
 public:
  StorageNotary();
  virtual ~StorageNotary();

  StorageNotary(const StorageNotary& from);

  inline StorageNotary& operator=(const StorageNotary& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StorageNotary(StorageNotary&& from) noexcept
    : StorageNotary() {
    *this = ::std::move(from);
  }

  inline StorageNotary& operator=(StorageNotary&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const StorageNotary& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StorageNotary* internal_default_instance() {
    return reinterpret_cast<const StorageNotary*>(
               &_StorageNotary_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StorageNotary* other);
  friend void swap(StorageNotary& a, StorageNotary& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StorageNotary* New() const PROTOBUF_FINAL { return New(NULL); }

  StorageNotary* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const StorageNotary& from);
  void MergeFrom(const StorageNotary& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StorageNotary* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .opentxs.proto.BlindedSeriesList series = 3;
  int series_size() const;
  void clear_series();
  static const int kSeriesFieldNumber = 3;
  const ::opentxs::proto::BlindedSeriesList& series(int index) const;
  ::opentxs::proto::BlindedSeriesList* mutable_series(int index);
  ::opentxs::proto::BlindedSeriesList* add_series();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::BlindedSeriesList >*
      mutable_series();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::BlindedSeriesList >&
      series() const;

  // optional string id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.StorageNotary)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::BlindedSeriesList > series_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_StorageNotary_2eproto::TableStruct;
  friend void ::protobuf_StorageNotary_2eproto::InitDefaultsStorageNotaryImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StorageNotary

// optional uint32 version = 1;
inline bool StorageNotary::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StorageNotary::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StorageNotary::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StorageNotary::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 StorageNotary::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNotary.version)
  return version_;
}
inline void StorageNotary::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageNotary.version)
}

// optional string id = 2;
inline bool StorageNotary::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StorageNotary::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StorageNotary::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StorageNotary::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& StorageNotary::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNotary.id)
  return id_.GetNoArena();
}
inline void StorageNotary::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageNotary.id)
}
#if LANG_CXX11
inline void StorageNotary::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.StorageNotary.id)
}
#endif
inline void StorageNotary::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageNotary.id)
}
inline void StorageNotary::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageNotary.id)
}
inline ::std::string* StorageNotary::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageNotary.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageNotary::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.StorageNotary.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageNotary::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.StorageNotary.id)
}

// repeated .opentxs.proto.BlindedSeriesList series = 3;
inline int StorageNotary::series_size() const {
  return series_.size();
}
inline const ::opentxs::proto::BlindedSeriesList& StorageNotary::series(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNotary.series)
  return series_.Get(index);
}
inline ::opentxs::proto::BlindedSeriesList* StorageNotary::mutable_series(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageNotary.series)
  return series_.Mutable(index);
}
inline ::opentxs::proto::BlindedSeriesList* StorageNotary::add_series() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageNotary.series)
  return series_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::BlindedSeriesList >*
StorageNotary::mutable_series() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageNotary.series)
  return &series_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::BlindedSeriesList >&
StorageNotary::series() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageNotary.series)
  return series_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StorageNotary_2eproto__INCLUDED