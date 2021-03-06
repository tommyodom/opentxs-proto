// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BlockchainTransactionInput.proto

#include "BlockchainTransactionInput.pb.h"

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
class BlockchainTransactionInputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BlockchainTransactionInput>
      _instance;
} _BlockchainTransactionInput_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_BlockchainTransactionInput_2eproto {
void InitDefaultsBlockchainTransactionInputImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_BlockchainTransactionInput_default_instance_;
    new (ptr) ::opentxs::proto::BlockchainTransactionInput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::BlockchainTransactionInput::InitAsDefaultInstance();
}

void InitDefaultsBlockchainTransactionInput() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBlockchainTransactionInputImpl);
}

}  // namespace protobuf_BlockchainTransactionInput_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void BlockchainTransactionInput::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlockchainTransactionInput::kVersionFieldNumber;
const int BlockchainTransactionInput::kIndexFieldNumber;
const int BlockchainTransactionInput::kSerializedscriptFieldNumber;
const int BlockchainTransactionInput::kSequenceFieldNumber;
const int BlockchainTransactionInput::kAddressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlockchainTransactionInput::BlockchainTransactionInput()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_BlockchainTransactionInput_2eproto::InitDefaultsBlockchainTransactionInput();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.BlockchainTransactionInput)
}
BlockchainTransactionInput::BlockchainTransactionInput(const BlockchainTransactionInput& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      address_(from.address_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serializedscript_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serializedscript()) {
    serializedscript_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serializedscript_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&sequence_) -
    reinterpret_cast<char*>(&version_)) + sizeof(sequence_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.BlockchainTransactionInput)
}

void BlockchainTransactionInput::SharedCtor() {
  _cached_size_ = 0;
  serializedscript_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sequence_) -
      reinterpret_cast<char*>(&version_)) + sizeof(sequence_));
}

BlockchainTransactionInput::~BlockchainTransactionInput() {
  // @@protoc_insertion_point(destructor:opentxs.proto.BlockchainTransactionInput)
  SharedDtor();
}

void BlockchainTransactionInput::SharedDtor() {
  serializedscript_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BlockchainTransactionInput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BlockchainTransactionInput& BlockchainTransactionInput::default_instance() {
  ::protobuf_BlockchainTransactionInput_2eproto::InitDefaultsBlockchainTransactionInput();
  return *internal_default_instance();
}

BlockchainTransactionInput* BlockchainTransactionInput::New(::google::protobuf::Arena* arena) const {
  BlockchainTransactionInput* n = new BlockchainTransactionInput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlockchainTransactionInput::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.BlockchainTransactionInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  address_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!serializedscript_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*serializedscript_.UnsafeRawStringPointer())->clear();
  }
  if (cached_has_bits & 14u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&sequence_) -
        reinterpret_cast<char*>(&version_)) + sizeof(sequence_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BlockchainTransactionInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.BlockchainTransactionInput)
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

      // optional uint32 index = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_index();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes serializedscript = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_serializedscript()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 sequence = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_sequence();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sequence_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string address = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_address()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.BlockchainTransactionInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.BlockchainTransactionInput)
  return false;
#undef DO_
}

void BlockchainTransactionInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.BlockchainTransactionInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional uint32 index = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->index(), output);
  }

  // optional bytes serializedscript = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->serializedscript(), output);
  }

  // optional uint32 sequence = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->sequence(), output);
  }

  // repeated string address = 5;
  for (int i = 0, n = this->address_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->address(i), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.BlockchainTransactionInput)
}

size_t BlockchainTransactionInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.BlockchainTransactionInput)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string address = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->address_size());
  for (int i = 0, n = this->address_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->address(i));
  }

  if (_has_bits_[0 / 32] & 15u) {
    // optional bytes serializedscript = 3;
    if (has_serializedscript()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->serializedscript());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional uint32 index = 2;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->index());
    }

    // optional uint32 sequence = 4;
    if (has_sequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sequence());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlockchainTransactionInput::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BlockchainTransactionInput*>(&from));
}

void BlockchainTransactionInput::MergeFrom(const BlockchainTransactionInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.BlockchainTransactionInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  address_.MergeFrom(from.address_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_serializedscript();
      serializedscript_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serializedscript_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000004u) {
      index_ = from.index_;
    }
    if (cached_has_bits & 0x00000008u) {
      sequence_ = from.sequence_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void BlockchainTransactionInput::CopyFrom(const BlockchainTransactionInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.BlockchainTransactionInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockchainTransactionInput::IsInitialized() const {
  return true;
}

void BlockchainTransactionInput::Swap(BlockchainTransactionInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlockchainTransactionInput::InternalSwap(BlockchainTransactionInput* other) {
  using std::swap;
  address_.InternalSwap(&other->address_);
  serializedscript_.Swap(&other->serializedscript_);
  swap(version_, other->version_);
  swap(index_, other->index_);
  swap(sequence_, other->sequence_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string BlockchainTransactionInput::GetTypeName() const {
  return "opentxs.proto.BlockchainTransactionInput";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
