// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SourceProof.proto

#ifndef PROTOBUF_SourceProof_2eproto__INCLUDED
#define PROTOBUF_SourceProof_2eproto__INCLUDED

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
#include "Enums.pb.h"  // IWYU pragma: export
#include "Signature.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_SourceProof_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsSourceProofImpl();
void InitDefaultsSourceProof();
inline void InitDefaults() {
  InitDefaultsSourceProof();
}
}  // namespace protobuf_SourceProof_2eproto
namespace opentxs {
namespace proto {
class SourceProof;
class SourceProofDefaultTypeInternal;
extern SourceProofDefaultTypeInternal _SourceProof_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class SourceProof : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.SourceProof) */ {
 public:
  SourceProof();
  virtual ~SourceProof();

  SourceProof(const SourceProof& from);

  inline SourceProof& operator=(const SourceProof& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SourceProof(SourceProof&& from) noexcept
    : SourceProof() {
    *this = ::std::move(from);
  }

  inline SourceProof& operator=(SourceProof&& from) noexcept {
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

  static const SourceProof& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SourceProof* internal_default_instance() {
    return reinterpret_cast<const SourceProof*>(
               &_SourceProof_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SourceProof* other);
  friend void swap(SourceProof& a, SourceProof& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SourceProof* New() const PROTOBUF_FINAL { return New(NULL); }

  SourceProof* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SourceProof& from);
  void MergeFrom(const SourceProof& from);
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
  void InternalSwap(SourceProof* other);
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

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.SourceProofType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::opentxs::proto::SourceProofType type() const;
  void set_type(::opentxs::proto::SourceProofType value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.SourceProof)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 version_;
  int type_;
  friend struct ::protobuf_SourceProof_2eproto::TableStruct;
  friend void ::protobuf_SourceProof_2eproto::InitDefaultsSourceProofImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SourceProof

// optional uint32 version = 1;
inline bool SourceProof::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SourceProof::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SourceProof::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SourceProof::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 SourceProof::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.SourceProof.version)
  return version_;
}
inline void SourceProof::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.SourceProof.version)
}

// optional .opentxs.proto.SourceProofType type = 2;
inline bool SourceProof::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SourceProof::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SourceProof::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SourceProof::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::SourceProofType SourceProof::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.SourceProof.type)
  return static_cast< ::opentxs::proto::SourceProofType >(type_);
}
inline void SourceProof::set_type(::opentxs::proto::SourceProofType value) {
  assert(::opentxs::proto::SourceProofType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.SourceProof.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SourceProof_2eproto__INCLUDED
