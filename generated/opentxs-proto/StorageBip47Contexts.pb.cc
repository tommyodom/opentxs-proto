// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageBip47Contexts.proto

#include "StorageBip47Contexts.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opentxs {
namespace proto {
class StorageBip47ContextsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StorageBip47Contexts>
      _instance;
} _StorageBip47Contexts_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_StorageBip47Contexts_2eproto {
void InitDefaultsStorageBip47ContextsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_StorageItemHash_2eproto::InitDefaultsStorageItemHash();
  protobuf_StorageBip47ChannelList_2eproto::InitDefaultsStorageBip47ChannelList();
  protobuf_StorageBip47AddressIndex_2eproto::InitDefaultsStorageBip47AddressIndex();
  {
    void* ptr = &::opentxs::proto::_StorageBip47Contexts_default_instance_;
    new (ptr) ::opentxs::proto::StorageBip47Contexts();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::StorageBip47Contexts::InitAsDefaultInstance();
}

void InitDefaultsStorageBip47Contexts() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStorageBip47ContextsImpl);
}

}  // namespace protobuf_StorageBip47Contexts_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void StorageBip47Contexts::InitAsDefaultInstance() {
}
void StorageBip47Contexts::clear_context() {
  context_.Clear();
}
void StorageBip47Contexts::clear_index() {
  index_.Clear();
}
void StorageBip47Contexts::clear_address() {
  address_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StorageBip47Contexts::kVersionFieldNumber;
const int StorageBip47Contexts::kContextFieldNumber;
const int StorageBip47Contexts::kIndexFieldNumber;
const int StorageBip47Contexts::kAddressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StorageBip47Contexts::StorageBip47Contexts()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_StorageBip47Contexts_2eproto::InitDefaultsStorageBip47Contexts();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.StorageBip47Contexts)
}
StorageBip47Contexts::StorageBip47Contexts(const StorageBip47Contexts& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      context_(from.context_),
      index_(from.index_),
      address_(from.address_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.StorageBip47Contexts)
}

void StorageBip47Contexts::SharedCtor() {
  _cached_size_ = 0;
  version_ = 0u;
}

StorageBip47Contexts::~StorageBip47Contexts() {
  // @@protoc_insertion_point(destructor:opentxs.proto.StorageBip47Contexts)
  SharedDtor();
}

void StorageBip47Contexts::SharedDtor() {
}

void StorageBip47Contexts::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StorageBip47Contexts& StorageBip47Contexts::default_instance() {
  ::protobuf_StorageBip47Contexts_2eproto::InitDefaultsStorageBip47Contexts();
  return *internal_default_instance();
}

StorageBip47Contexts* StorageBip47Contexts::New(::google::protobuf::Arena* arena) const {
  StorageBip47Contexts* n = new StorageBip47Contexts;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StorageBip47Contexts::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.StorageBip47Contexts)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  context_.Clear();
  index_.Clear();
  address_.Clear();
  version_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StorageBip47Contexts::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.StorageBip47Contexts)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageItemHash context = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_context()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageBip47ChannelList index = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_index()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageBip47AddressIndex address = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_address()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opentxs.proto.StorageBip47Contexts)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.StorageBip47Contexts)
  return false;
#undef DO_
}

void StorageBip47Contexts::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.StorageBip47Contexts)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // repeated .opentxs.proto.StorageItemHash context = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->context_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->context(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageBip47ChannelList index = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->index_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->index(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageBip47AddressIndex address = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->address_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->address(static_cast<int>(i)), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.StorageBip47Contexts)
}

size_t StorageBip47Contexts::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.StorageBip47Contexts)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .opentxs.proto.StorageItemHash context = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->context_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->context(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageBip47ChannelList index = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->index_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->index(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageBip47AddressIndex address = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->address_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->address(static_cast<int>(i)));
    }
  }

  // optional uint32 version = 1;
  if (has_version()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StorageBip47Contexts::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StorageBip47Contexts*>(&from));
}

void StorageBip47Contexts::MergeFrom(const StorageBip47Contexts& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.StorageBip47Contexts)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  context_.MergeFrom(from.context_);
  index_.MergeFrom(from.index_);
  address_.MergeFrom(from.address_);
  if (from.has_version()) {
    set_version(from.version());
  }
}

void StorageBip47Contexts::CopyFrom(const StorageBip47Contexts& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.StorageBip47Contexts)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StorageBip47Contexts::IsInitialized() const {
  return true;
}

void StorageBip47Contexts::Swap(StorageBip47Contexts* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StorageBip47Contexts::InternalSwap(StorageBip47Contexts* other) {
  using std::swap;
  context_.InternalSwap(&other->context_);
  index_.InternalSwap(&other->index_);
  address_.InternalSwap(&other->address_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string StorageBip47Contexts::GetTypeName() const {
  return "opentxs.proto.StorageBip47Contexts";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
