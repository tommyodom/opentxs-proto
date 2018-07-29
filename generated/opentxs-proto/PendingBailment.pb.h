// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PendingBailment.proto

#ifndef PROTOBUF_PendingBailment_2eproto__INCLUDED
#define PROTOBUF_PendingBailment_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace protobuf_PendingBailment_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsPendingBailmentImpl();
void InitDefaultsPendingBailment();
inline void InitDefaults() {
  InitDefaultsPendingBailment();
}
}  // namespace protobuf_PendingBailment_2eproto
namespace opentxs {
namespace proto {
class PendingBailment;
class PendingBailmentDefaultTypeInternal;
extern PendingBailmentDefaultTypeInternal _PendingBailment_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class PendingBailment : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.PendingBailment) */ {
 public:
  PendingBailment();
  virtual ~PendingBailment();

  PendingBailment(const PendingBailment& from);

  inline PendingBailment& operator=(const PendingBailment& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PendingBailment(PendingBailment&& from) noexcept
    : PendingBailment() {
    *this = ::std::move(from);
  }

  inline PendingBailment& operator=(PendingBailment&& from) noexcept {
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

  static const PendingBailment& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PendingBailment* internal_default_instance() {
    return reinterpret_cast<const PendingBailment*>(
               &_PendingBailment_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PendingBailment* other);
  friend void swap(PendingBailment& a, PendingBailment& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PendingBailment* New() const PROTOBUF_FINAL { return New(NULL); }

  PendingBailment* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const PendingBailment& from);
  void MergeFrom(const PendingBailment& from);
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
  void InternalSwap(PendingBailment* other);
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

  // optional string unitID = 2;
  bool has_unitid() const;
  void clear_unitid();
  static const int kUnitIDFieldNumber = 2;
  const ::std::string& unitid() const;
  void set_unitid(const ::std::string& value);
  #if LANG_CXX11
  void set_unitid(::std::string&& value);
  #endif
  void set_unitid(const char* value);
  void set_unitid(const char* value, size_t size);
  ::std::string* mutable_unitid();
  ::std::string* release_unitid();
  void set_allocated_unitid(::std::string* unitid);

  // optional string serverID = 3;
  bool has_serverid() const;
  void clear_serverid();
  static const int kServerIDFieldNumber = 3;
  const ::std::string& serverid() const;
  void set_serverid(const ::std::string& value);
  #if LANG_CXX11
  void set_serverid(::std::string&& value);
  #endif
  void set_serverid(const char* value);
  void set_serverid(const char* value, size_t size);
  ::std::string* mutable_serverid();
  ::std::string* release_serverid();
  void set_allocated_serverid(::std::string* serverid);

  // optional string txid = 4;
  bool has_txid() const;
  void clear_txid();
  static const int kTxidFieldNumber = 4;
  const ::std::string& txid() const;
  void set_txid(const ::std::string& value);
  #if LANG_CXX11
  void set_txid(::std::string&& value);
  #endif
  void set_txid(const char* value);
  void set_txid(const char* value, size_t size);
  ::std::string* mutable_txid();
  ::std::string* release_txid();
  void set_allocated_txid(::std::string* txid);

  // optional string requestID = 5;
  bool has_requestid() const;
  void clear_requestid();
  static const int kRequestIDFieldNumber = 5;
  const ::std::string& requestid() const;
  void set_requestid(const ::std::string& value);
  #if LANG_CXX11
  void set_requestid(::std::string&& value);
  #endif
  void set_requestid(const char* value);
  void set_requestid(const char* value, size_t size);
  ::std::string* mutable_requestid();
  ::std::string* release_requestid();
  void set_allocated_requestid(::std::string* requestid);

  // optional int64 amount = 6;
  bool has_amount() const;
  void clear_amount();
  static const int kAmountFieldNumber = 6;
  ::google::protobuf::int64 amount() const;
  void set_amount(::google::protobuf::int64 value);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.PendingBailment)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_unitid();
  void clear_has_unitid();
  void set_has_serverid();
  void clear_has_serverid();
  void set_has_txid();
  void clear_has_txid();
  void set_has_requestid();
  void clear_has_requestid();
  void set_has_amount();
  void clear_has_amount();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr unitid_;
  ::google::protobuf::internal::ArenaStringPtr serverid_;
  ::google::protobuf::internal::ArenaStringPtr txid_;
  ::google::protobuf::internal::ArenaStringPtr requestid_;
  ::google::protobuf::int64 amount_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_PendingBailment_2eproto::TableStruct;
  friend void ::protobuf_PendingBailment_2eproto::InitDefaultsPendingBailmentImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PendingBailment

// optional uint32 version = 1;
inline bool PendingBailment::has_version() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PendingBailment::set_has_version() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PendingBailment::clear_has_version() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PendingBailment::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 PendingBailment::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PendingBailment.version)
  return version_;
}
inline void PendingBailment::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PendingBailment.version)
}

// optional string unitID = 2;
inline bool PendingBailment::has_unitid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PendingBailment::set_has_unitid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PendingBailment::clear_has_unitid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PendingBailment::clear_unitid() {
  unitid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_unitid();
}
inline const ::std::string& PendingBailment::unitid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PendingBailment.unitID)
  return unitid_.GetNoArena();
}
inline void PendingBailment::set_unitid(const ::std::string& value) {
  set_has_unitid();
  unitid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PendingBailment.unitID)
}
#if LANG_CXX11
inline void PendingBailment::set_unitid(::std::string&& value) {
  set_has_unitid();
  unitid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PendingBailment.unitID)
}
#endif
inline void PendingBailment::set_unitid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_unitid();
  unitid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PendingBailment.unitID)
}
inline void PendingBailment::set_unitid(const char* value, size_t size) {
  set_has_unitid();
  unitid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PendingBailment.unitID)
}
inline ::std::string* PendingBailment::mutable_unitid() {
  set_has_unitid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PendingBailment.unitID)
  return unitid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PendingBailment::release_unitid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PendingBailment.unitID)
  clear_has_unitid();
  return unitid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PendingBailment::set_allocated_unitid(::std::string* unitid) {
  if (unitid != NULL) {
    set_has_unitid();
  } else {
    clear_has_unitid();
  }
  unitid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unitid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PendingBailment.unitID)
}

// optional string serverID = 3;
inline bool PendingBailment::has_serverid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PendingBailment::set_has_serverid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PendingBailment::clear_has_serverid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PendingBailment::clear_serverid() {
  serverid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_serverid();
}
inline const ::std::string& PendingBailment::serverid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PendingBailment.serverID)
  return serverid_.GetNoArena();
}
inline void PendingBailment::set_serverid(const ::std::string& value) {
  set_has_serverid();
  serverid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PendingBailment.serverID)
}
#if LANG_CXX11
inline void PendingBailment::set_serverid(::std::string&& value) {
  set_has_serverid();
  serverid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PendingBailment.serverID)
}
#endif
inline void PendingBailment::set_serverid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_serverid();
  serverid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PendingBailment.serverID)
}
inline void PendingBailment::set_serverid(const char* value, size_t size) {
  set_has_serverid();
  serverid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PendingBailment.serverID)
}
inline ::std::string* PendingBailment::mutable_serverid() {
  set_has_serverid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PendingBailment.serverID)
  return serverid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PendingBailment::release_serverid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PendingBailment.serverID)
  clear_has_serverid();
  return serverid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PendingBailment::set_allocated_serverid(::std::string* serverid) {
  if (serverid != NULL) {
    set_has_serverid();
  } else {
    clear_has_serverid();
  }
  serverid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serverid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PendingBailment.serverID)
}

// optional string txid = 4;
inline bool PendingBailment::has_txid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PendingBailment::set_has_txid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PendingBailment::clear_has_txid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PendingBailment::clear_txid() {
  txid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_txid();
}
inline const ::std::string& PendingBailment::txid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PendingBailment.txid)
  return txid_.GetNoArena();
}
inline void PendingBailment::set_txid(const ::std::string& value) {
  set_has_txid();
  txid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PendingBailment.txid)
}
#if LANG_CXX11
inline void PendingBailment::set_txid(::std::string&& value) {
  set_has_txid();
  txid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PendingBailment.txid)
}
#endif
inline void PendingBailment::set_txid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_txid();
  txid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PendingBailment.txid)
}
inline void PendingBailment::set_txid(const char* value, size_t size) {
  set_has_txid();
  txid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PendingBailment.txid)
}
inline ::std::string* PendingBailment::mutable_txid() {
  set_has_txid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PendingBailment.txid)
  return txid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PendingBailment::release_txid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PendingBailment.txid)
  clear_has_txid();
  return txid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PendingBailment::set_allocated_txid(::std::string* txid) {
  if (txid != NULL) {
    set_has_txid();
  } else {
    clear_has_txid();
  }
  txid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), txid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PendingBailment.txid)
}

// optional string requestID = 5;
inline bool PendingBailment::has_requestid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PendingBailment::set_has_requestid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PendingBailment::clear_has_requestid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PendingBailment::clear_requestid() {
  requestid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_requestid();
}
inline const ::std::string& PendingBailment::requestid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PendingBailment.requestID)
  return requestid_.GetNoArena();
}
inline void PendingBailment::set_requestid(const ::std::string& value) {
  set_has_requestid();
  requestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PendingBailment.requestID)
}
#if LANG_CXX11
inline void PendingBailment::set_requestid(::std::string&& value) {
  set_has_requestid();
  requestid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PendingBailment.requestID)
}
#endif
inline void PendingBailment::set_requestid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_requestid();
  requestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PendingBailment.requestID)
}
inline void PendingBailment::set_requestid(const char* value, size_t size) {
  set_has_requestid();
  requestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PendingBailment.requestID)
}
inline ::std::string* PendingBailment::mutable_requestid() {
  set_has_requestid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PendingBailment.requestID)
  return requestid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PendingBailment::release_requestid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PendingBailment.requestID)
  clear_has_requestid();
  return requestid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PendingBailment::set_allocated_requestid(::std::string* requestid) {
  if (requestid != NULL) {
    set_has_requestid();
  } else {
    clear_has_requestid();
  }
  requestid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), requestid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PendingBailment.requestID)
}

// optional int64 amount = 6;
inline bool PendingBailment::has_amount() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PendingBailment::set_has_amount() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PendingBailment::clear_has_amount() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PendingBailment::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
  clear_has_amount();
}
inline ::google::protobuf::int64 PendingBailment::amount() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PendingBailment.amount)
  return amount_;
}
inline void PendingBailment::set_amount(::google::protobuf::int64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PendingBailment.amount)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PendingBailment_2eproto__INCLUDED
