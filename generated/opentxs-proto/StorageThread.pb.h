// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageThread.proto

#ifndef PROTOBUF_StorageThread_2eproto__INCLUDED
#define PROTOBUF_StorageThread_2eproto__INCLUDED

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
#include "StorageThreadItem.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_StorageThread_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsStorageThreadImpl();
void InitDefaultsStorageThread();
inline void InitDefaults() {
  InitDefaultsStorageThread();
}
}  // namespace protobuf_StorageThread_2eproto
namespace opentxs {
namespace proto {
class StorageThread;
class StorageThreadDefaultTypeInternal;
extern StorageThreadDefaultTypeInternal _StorageThread_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class StorageThread : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.StorageThread) */ {
 public:
  StorageThread();
  virtual ~StorageThread();

  StorageThread(const StorageThread& from);

  inline StorageThread& operator=(const StorageThread& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StorageThread(StorageThread&& from) noexcept
    : StorageThread() {
    *this = ::std::move(from);
  }

  inline StorageThread& operator=(StorageThread&& from) noexcept {
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

  static const StorageThread& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StorageThread* internal_default_instance() {
    return reinterpret_cast<const StorageThread*>(
               &_StorageThread_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StorageThread* other);
  friend void swap(StorageThread& a, StorageThread& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StorageThread* New() const PROTOBUF_FINAL { return New(NULL); }

  StorageThread* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const StorageThread& from);
  void MergeFrom(const StorageThread& from);
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
  void InternalSwap(StorageThread* other);
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

  // repeated string participant = 3;
  int participant_size() const;
  void clear_participant();
  static const int kParticipantFieldNumber = 3;
  const ::std::string& participant(int index) const;
  ::std::string* mutable_participant(int index);
  void set_participant(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_participant(int index, ::std::string&& value);
  #endif
  void set_participant(int index, const char* value);
  void set_participant(int index, const char* value, size_t size);
  ::std::string* add_participant();
  void add_participant(const ::std::string& value);
  #if LANG_CXX11
  void add_participant(::std::string&& value);
  #endif
  void add_participant(const char* value);
  void add_participant(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& participant() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_participant();

  // repeated .opentxs.proto.StorageThreadItem item = 4;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 4;
  const ::opentxs::proto::StorageThreadItem& item(int index) const;
  ::opentxs::proto::StorageThreadItem* mutable_item(int index);
  ::opentxs::proto::StorageThreadItem* add_item();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageThreadItem >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageThreadItem >&
      item() const;

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

  // @@protoc_insertion_point(class_scope:opentxs.proto.StorageThread)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> participant_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageThreadItem > item_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_StorageThread_2eproto::TableStruct;
  friend void ::protobuf_StorageThread_2eproto::InitDefaultsStorageThreadImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StorageThread

// optional uint32 version = 1;
inline bool StorageThread::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StorageThread::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StorageThread::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StorageThread::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 StorageThread::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageThread.version)
  return version_;
}
inline void StorageThread::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageThread.version)
}

// optional string id = 2;
inline bool StorageThread::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StorageThread::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StorageThread::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StorageThread::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& StorageThread::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageThread.id)
  return id_.GetNoArena();
}
inline void StorageThread::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageThread.id)
}
#if LANG_CXX11
inline void StorageThread::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.StorageThread.id)
}
#endif
inline void StorageThread::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageThread.id)
}
inline void StorageThread::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageThread.id)
}
inline ::std::string* StorageThread::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageThread.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageThread::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.StorageThread.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageThread::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.StorageThread.id)
}

// repeated string participant = 3;
inline int StorageThread::participant_size() const {
  return participant_.size();
}
inline void StorageThread::clear_participant() {
  participant_.Clear();
}
inline const ::std::string& StorageThread::participant(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageThread.participant)
  return participant_.Get(index);
}
inline ::std::string* StorageThread::mutable_participant(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageThread.participant)
  return participant_.Mutable(index);
}
inline void StorageThread::set_participant(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageThread.participant)
  participant_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void StorageThread::set_participant(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageThread.participant)
  participant_.Mutable(index)->assign(std::move(value));
}
#endif
inline void StorageThread::set_participant(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  participant_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageThread.participant)
}
inline void StorageThread::set_participant(int index, const char* value, size_t size) {
  participant_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageThread.participant)
}
inline ::std::string* StorageThread::add_participant() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.StorageThread.participant)
  return participant_.Add();
}
inline void StorageThread::add_participant(const ::std::string& value) {
  participant_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageThread.participant)
}
#if LANG_CXX11
inline void StorageThread::add_participant(::std::string&& value) {
  participant_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageThread.participant)
}
#endif
inline void StorageThread::add_participant(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  participant_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.StorageThread.participant)
}
inline void StorageThread::add_participant(const char* value, size_t size) {
  participant_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.StorageThread.participant)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
StorageThread::participant() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageThread.participant)
  return participant_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
StorageThread::mutable_participant() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageThread.participant)
  return &participant_;
}

// repeated .opentxs.proto.StorageThreadItem item = 4;
inline int StorageThread::item_size() const {
  return item_.size();
}
inline const ::opentxs::proto::StorageThreadItem& StorageThread::item(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageThread.item)
  return item_.Get(index);
}
inline ::opentxs::proto::StorageThreadItem* StorageThread::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageThread.item)
  return item_.Mutable(index);
}
inline ::opentxs::proto::StorageThreadItem* StorageThread::add_item() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageThread.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageThreadItem >*
StorageThread::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageThread.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageThreadItem >&
StorageThread::item() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageThread.item)
  return item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StorageThread_2eproto__INCLUDED
