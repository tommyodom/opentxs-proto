// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StoragePaymentWorkflows.proto

#ifndef PROTOBUF_StoragePaymentWorkflows_2eproto__INCLUDED
#define PROTOBUF_StoragePaymentWorkflows_2eproto__INCLUDED

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
#include "StorageItemHash.pb.h"  // IWYU pragma: export
#include "StorageWorkflowIndex.pb.h"  // IWYU pragma: export
#include "StorageWorkflowType.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_StoragePaymentWorkflows_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsStoragePaymentWorkflowsImpl();
void InitDefaultsStoragePaymentWorkflows();
inline void InitDefaults() {
  InitDefaultsStoragePaymentWorkflows();
}
}  // namespace protobuf_StoragePaymentWorkflows_2eproto
namespace opentxs {
namespace proto {
class StoragePaymentWorkflows;
class StoragePaymentWorkflowsDefaultTypeInternal;
extern StoragePaymentWorkflowsDefaultTypeInternal _StoragePaymentWorkflows_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class StoragePaymentWorkflows : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.StoragePaymentWorkflows) */ {
 public:
  StoragePaymentWorkflows();
  virtual ~StoragePaymentWorkflows();

  StoragePaymentWorkflows(const StoragePaymentWorkflows& from);

  inline StoragePaymentWorkflows& operator=(const StoragePaymentWorkflows& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StoragePaymentWorkflows(StoragePaymentWorkflows&& from) noexcept
    : StoragePaymentWorkflows() {
    *this = ::std::move(from);
  }

  inline StoragePaymentWorkflows& operator=(StoragePaymentWorkflows&& from) noexcept {
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

  static const StoragePaymentWorkflows& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StoragePaymentWorkflows* internal_default_instance() {
    return reinterpret_cast<const StoragePaymentWorkflows*>(
               &_StoragePaymentWorkflows_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StoragePaymentWorkflows* other);
  friend void swap(StoragePaymentWorkflows& a, StoragePaymentWorkflows& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StoragePaymentWorkflows* New() const PROTOBUF_FINAL { return New(NULL); }

  StoragePaymentWorkflows* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const StoragePaymentWorkflows& from);
  void MergeFrom(const StoragePaymentWorkflows& from);
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
  void InternalSwap(StoragePaymentWorkflows* other);
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

  // repeated .opentxs.proto.StorageItemHash workflow = 2;
  int workflow_size() const;
  void clear_workflow();
  static const int kWorkflowFieldNumber = 2;
  const ::opentxs::proto::StorageItemHash& workflow(int index) const;
  ::opentxs::proto::StorageItemHash* mutable_workflow(int index);
  ::opentxs::proto::StorageItemHash* add_workflow();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >*
      mutable_workflow();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >&
      workflow() const;

  // repeated .opentxs.proto.StorageWorkflowIndex items = 3;
  int items_size() const;
  void clear_items();
  static const int kItemsFieldNumber = 3;
  const ::opentxs::proto::StorageWorkflowIndex& items(int index) const;
  ::opentxs::proto::StorageWorkflowIndex* mutable_items(int index);
  ::opentxs::proto::StorageWorkflowIndex* add_items();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >*
      mutable_items();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >&
      items() const;

  // repeated .opentxs.proto.StorageWorkflowIndex accounts = 4;
  int accounts_size() const;
  void clear_accounts();
  static const int kAccountsFieldNumber = 4;
  const ::opentxs::proto::StorageWorkflowIndex& accounts(int index) const;
  ::opentxs::proto::StorageWorkflowIndex* mutable_accounts(int index);
  ::opentxs::proto::StorageWorkflowIndex* add_accounts();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >*
      mutable_accounts();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >&
      accounts() const;

  // repeated .opentxs.proto.StorageWorkflowIndex units = 5;
  int units_size() const;
  void clear_units();
  static const int kUnitsFieldNumber = 5;
  const ::opentxs::proto::StorageWorkflowIndex& units(int index) const;
  ::opentxs::proto::StorageWorkflowIndex* mutable_units(int index);
  ::opentxs::proto::StorageWorkflowIndex* add_units();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >*
      mutable_units();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >&
      units() const;

  // repeated .opentxs.proto.StorageWorkflowType types = 6;
  int types_size() const;
  void clear_types();
  static const int kTypesFieldNumber = 6;
  const ::opentxs::proto::StorageWorkflowType& types(int index) const;
  ::opentxs::proto::StorageWorkflowType* mutable_types(int index);
  ::opentxs::proto::StorageWorkflowType* add_types();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowType >*
      mutable_types();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowType >&
      types() const;

  // repeated string archived = 7;
  int archived_size() const;
  void clear_archived();
  static const int kArchivedFieldNumber = 7;
  const ::std::string& archived(int index) const;
  ::std::string* mutable_archived(int index);
  void set_archived(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_archived(int index, ::std::string&& value);
  #endif
  void set_archived(int index, const char* value);
  void set_archived(int index, const char* value, size_t size);
  ::std::string* add_archived();
  void add_archived(const ::std::string& value);
  #if LANG_CXX11
  void add_archived(::std::string&& value);
  #endif
  void add_archived(const char* value);
  void add_archived(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& archived() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_archived();

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.StoragePaymentWorkflows)
 private:
  void set_has_version();
  void clear_has_version();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash > workflow_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex > items_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex > accounts_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex > units_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowType > types_;
  ::google::protobuf::RepeatedPtrField< ::std::string> archived_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_StoragePaymentWorkflows_2eproto::TableStruct;
  friend void ::protobuf_StoragePaymentWorkflows_2eproto::InitDefaultsStoragePaymentWorkflowsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StoragePaymentWorkflows

// optional uint32 version = 1;
inline bool StoragePaymentWorkflows::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StoragePaymentWorkflows::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StoragePaymentWorkflows::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StoragePaymentWorkflows::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 StoragePaymentWorkflows::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.version)
  return version_;
}
inline void StoragePaymentWorkflows::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StoragePaymentWorkflows.version)
}

// repeated .opentxs.proto.StorageItemHash workflow = 2;
inline int StoragePaymentWorkflows::workflow_size() const {
  return workflow_.size();
}
inline const ::opentxs::proto::StorageItemHash& StoragePaymentWorkflows::workflow(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.workflow)
  return workflow_.Get(index);
}
inline ::opentxs::proto::StorageItemHash* StoragePaymentWorkflows::mutable_workflow(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StoragePaymentWorkflows.workflow)
  return workflow_.Mutable(index);
}
inline ::opentxs::proto::StorageItemHash* StoragePaymentWorkflows::add_workflow() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.workflow)
  return workflow_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >*
StoragePaymentWorkflows::mutable_workflow() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StoragePaymentWorkflows.workflow)
  return &workflow_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >&
StoragePaymentWorkflows::workflow() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StoragePaymentWorkflows.workflow)
  return workflow_;
}

// repeated .opentxs.proto.StorageWorkflowIndex items = 3;
inline int StoragePaymentWorkflows::items_size() const {
  return items_.size();
}
inline const ::opentxs::proto::StorageWorkflowIndex& StoragePaymentWorkflows::items(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.items)
  return items_.Get(index);
}
inline ::opentxs::proto::StorageWorkflowIndex* StoragePaymentWorkflows::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StoragePaymentWorkflows.items)
  return items_.Mutable(index);
}
inline ::opentxs::proto::StorageWorkflowIndex* StoragePaymentWorkflows::add_items() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.items)
  return items_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >*
StoragePaymentWorkflows::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StoragePaymentWorkflows.items)
  return &items_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >&
StoragePaymentWorkflows::items() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StoragePaymentWorkflows.items)
  return items_;
}

// repeated .opentxs.proto.StorageWorkflowIndex accounts = 4;
inline int StoragePaymentWorkflows::accounts_size() const {
  return accounts_.size();
}
inline const ::opentxs::proto::StorageWorkflowIndex& StoragePaymentWorkflows::accounts(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.accounts)
  return accounts_.Get(index);
}
inline ::opentxs::proto::StorageWorkflowIndex* StoragePaymentWorkflows::mutable_accounts(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StoragePaymentWorkflows.accounts)
  return accounts_.Mutable(index);
}
inline ::opentxs::proto::StorageWorkflowIndex* StoragePaymentWorkflows::add_accounts() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.accounts)
  return accounts_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >*
StoragePaymentWorkflows::mutable_accounts() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StoragePaymentWorkflows.accounts)
  return &accounts_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >&
StoragePaymentWorkflows::accounts() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StoragePaymentWorkflows.accounts)
  return accounts_;
}

// repeated .opentxs.proto.StorageWorkflowIndex units = 5;
inline int StoragePaymentWorkflows::units_size() const {
  return units_.size();
}
inline const ::opentxs::proto::StorageWorkflowIndex& StoragePaymentWorkflows::units(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.units)
  return units_.Get(index);
}
inline ::opentxs::proto::StorageWorkflowIndex* StoragePaymentWorkflows::mutable_units(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StoragePaymentWorkflows.units)
  return units_.Mutable(index);
}
inline ::opentxs::proto::StorageWorkflowIndex* StoragePaymentWorkflows::add_units() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.units)
  return units_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >*
StoragePaymentWorkflows::mutable_units() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StoragePaymentWorkflows.units)
  return &units_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowIndex >&
StoragePaymentWorkflows::units() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StoragePaymentWorkflows.units)
  return units_;
}

// repeated .opentxs.proto.StorageWorkflowType types = 6;
inline int StoragePaymentWorkflows::types_size() const {
  return types_.size();
}
inline const ::opentxs::proto::StorageWorkflowType& StoragePaymentWorkflows::types(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.types)
  return types_.Get(index);
}
inline ::opentxs::proto::StorageWorkflowType* StoragePaymentWorkflows::mutable_types(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StoragePaymentWorkflows.types)
  return types_.Mutable(index);
}
inline ::opentxs::proto::StorageWorkflowType* StoragePaymentWorkflows::add_types() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.types)
  return types_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowType >*
StoragePaymentWorkflows::mutable_types() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StoragePaymentWorkflows.types)
  return &types_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageWorkflowType >&
StoragePaymentWorkflows::types() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StoragePaymentWorkflows.types)
  return types_;
}

// repeated string archived = 7;
inline int StoragePaymentWorkflows::archived_size() const {
  return archived_.size();
}
inline void StoragePaymentWorkflows::clear_archived() {
  archived_.Clear();
}
inline const ::std::string& StoragePaymentWorkflows::archived(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StoragePaymentWorkflows.archived)
  return archived_.Get(index);
}
inline ::std::string* StoragePaymentWorkflows::mutable_archived(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StoragePaymentWorkflows.archived)
  return archived_.Mutable(index);
}
inline void StoragePaymentWorkflows::set_archived(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StoragePaymentWorkflows.archived)
  archived_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void StoragePaymentWorkflows::set_archived(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StoragePaymentWorkflows.archived)
  archived_.Mutable(index)->assign(std::move(value));
}
#endif
inline void StoragePaymentWorkflows::set_archived(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  archived_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StoragePaymentWorkflows.archived)
}
inline void StoragePaymentWorkflows::set_archived(int index, const char* value, size_t size) {
  archived_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StoragePaymentWorkflows.archived)
}
inline ::std::string* StoragePaymentWorkflows::add_archived() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.StoragePaymentWorkflows.archived)
  return archived_.Add();
}
inline void StoragePaymentWorkflows::add_archived(const ::std::string& value) {
  archived_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.archived)
}
#if LANG_CXX11
inline void StoragePaymentWorkflows::add_archived(::std::string&& value) {
  archived_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.StoragePaymentWorkflows.archived)
}
#endif
inline void StoragePaymentWorkflows::add_archived(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  archived_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.StoragePaymentWorkflows.archived)
}
inline void StoragePaymentWorkflows::add_archived(const char* value, size_t size) {
  archived_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.StoragePaymentWorkflows.archived)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
StoragePaymentWorkflows::archived() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StoragePaymentWorkflows.archived)
  return archived_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
StoragePaymentWorkflows::mutable_archived() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StoragePaymentWorkflows.archived)
  return &archived_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StoragePaymentWorkflows_2eproto__INCLUDED
