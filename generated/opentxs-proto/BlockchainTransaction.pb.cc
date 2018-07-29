// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BlockchainTransaction.proto

#include "BlockchainTransaction.pb.h"

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
class BlockchainTransactionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BlockchainTransaction>
      _instance;
} _BlockchainTransaction_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_BlockchainTransaction_2eproto {
void InitDefaultsBlockchainTransactionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_BlockchainTransactionInput_2eproto::InitDefaultsBlockchainTransactionInput();
  protobuf_BlockchainTransactionOutput_2eproto::InitDefaultsBlockchainTransactionOutput();
  {
    void* ptr = &::opentxs::proto::_BlockchainTransaction_default_instance_;
    new (ptr) ::opentxs::proto::BlockchainTransaction();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::BlockchainTransaction::InitAsDefaultInstance();
}

void InitDefaultsBlockchainTransaction() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBlockchainTransactionImpl);
}

}  // namespace protobuf_BlockchainTransaction_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void BlockchainTransaction::InitAsDefaultInstance() {
}
void BlockchainTransaction::clear_input() {
  input_.Clear();
}
void BlockchainTransaction::clear_output() {
  output_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlockchainTransaction::kVersionFieldNumber;
const int BlockchainTransaction::kChainFieldNumber;
const int BlockchainTransaction::kTxidFieldNumber;
const int BlockchainTransaction::kTxversionFieldNumber;
const int BlockchainTransaction::kLocktimeFieldNumber;
const int BlockchainTransaction::kSerializedFieldNumber;
const int BlockchainTransaction::kInputFieldNumber;
const int BlockchainTransaction::kOutputFieldNumber;
const int BlockchainTransaction::kConfirmationsFieldNumber;
const int BlockchainTransaction::kBlockhashFieldNumber;
const int BlockchainTransaction::kBlockindexFieldNumber;
const int BlockchainTransaction::kFeeFieldNumber;
const int BlockchainTransaction::kTimeFieldNumber;
const int BlockchainTransaction::kConflictsFieldNumber;
const int BlockchainTransaction::kMemoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlockchainTransaction::BlockchainTransaction()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_BlockchainTransaction_2eproto::InitDefaultsBlockchainTransaction();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.BlockchainTransaction)
}
BlockchainTransaction::BlockchainTransaction(const BlockchainTransaction& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      input_(from.input_),
      output_(from.output_),
      conflicts_(from.conflicts_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  txid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_txid()) {
    txid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.txid_);
  }
  serialized_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serialized()) {
    serialized_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serialized_);
  }
  blockhash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_blockhash()) {
    blockhash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockhash_);
  }
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_memo()) {
    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&time_) -
    reinterpret_cast<char*>(&version_)) + sizeof(time_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.BlockchainTransaction)
}

void BlockchainTransaction::SharedCtor() {
  _cached_size_ = 0;
  txid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialized_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  blockhash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&version_)) + sizeof(time_));
}

BlockchainTransaction::~BlockchainTransaction() {
  // @@protoc_insertion_point(destructor:opentxs.proto.BlockchainTransaction)
  SharedDtor();
}

void BlockchainTransaction::SharedDtor() {
  txid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialized_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  blockhash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BlockchainTransaction::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BlockchainTransaction& BlockchainTransaction::default_instance() {
  ::protobuf_BlockchainTransaction_2eproto::InitDefaultsBlockchainTransaction();
  return *internal_default_instance();
}

BlockchainTransaction* BlockchainTransaction::New(::google::protobuf::Arena* arena) const {
  BlockchainTransaction* n = new BlockchainTransaction;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlockchainTransaction::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.BlockchainTransaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  input_.Clear();
  output_.Clear();
  conflicts_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!txid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*txid_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!serialized_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*serialized_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!blockhash_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*blockhash_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(!memo_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*memo_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 240u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&locktime_) -
        reinterpret_cast<char*>(&version_)) + sizeof(locktime_));
  }
  if (cached_has_bits & 3840u) {
    ::memset(&confirmations_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&time_) -
        reinterpret_cast<char*>(&confirmations_)) + sizeof(time_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BlockchainTransaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.BlockchainTransaction)
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

      // optional .opentxs.proto.ContactItemType chain = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::ContactItemType_IsValid(value)) {
            set_chain(static_cast< ::opentxs::proto::ContactItemType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string txid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_txid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 txversion = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_txversion();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &txversion_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 locktime = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_locktime();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &locktime_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes serialized = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_serialized()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.BlockchainTransactionInput input = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_input()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.BlockchainTransactionOutput output = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_output()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 confirmations = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          set_has_confirmations();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &confirmations_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string blockhash = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_blockhash()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 blockindex = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          set_has_blockindex();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &blockindex_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 fee = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          set_has_fee();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &fee_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 time = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          set_has_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string conflicts = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_conflicts()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string memo = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_memo()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.BlockchainTransaction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.BlockchainTransaction)
  return false;
#undef DO_
}

void BlockchainTransaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.BlockchainTransaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional .opentxs.proto.ContactItemType chain = 2;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->chain(), output);
  }

  // optional string txid = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->txid(), output);
  }

  // optional uint32 txversion = 4;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->txversion(), output);
  }

  // optional uint32 locktime = 5;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->locktime(), output);
  }

  // optional bytes serialized = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->serialized(), output);
  }

  // repeated .opentxs.proto.BlockchainTransactionInput input = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->input_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      7, this->input(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.BlockchainTransactionOutput output = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->output_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      8, this->output(static_cast<int>(i)), output);
  }

  // optional uint32 confirmations = 9;
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->confirmations(), output);
  }

  // optional string blockhash = 10;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->blockhash(), output);
  }

  // optional uint32 blockindex = 11;
  if (cached_has_bits & 0x00000200u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->blockindex(), output);
  }

  // optional uint64 fee = 12;
  if (cached_has_bits & 0x00000400u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->fee(), output);
  }

  // optional int64 time = 13;
  if (cached_has_bits & 0x00000800u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(13, this->time(), output);
  }

  // repeated string conflicts = 14;
  for (int i = 0, n = this->conflicts_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      14, this->conflicts(i), output);
  }

  // optional string memo = 15;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->memo(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.BlockchainTransaction)
}

size_t BlockchainTransaction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.BlockchainTransaction)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .opentxs.proto.BlockchainTransactionInput input = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->input_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->input(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.BlockchainTransactionOutput output = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->output_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->output(static_cast<int>(i)));
    }
  }

  // repeated string conflicts = 14;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->conflicts_size());
  for (int i = 0, n = this->conflicts_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->conflicts(i));
  }

  if (_has_bits_[0 / 32] & 255u) {
    // optional string txid = 3;
    if (has_txid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->txid());
    }

    // optional bytes serialized = 6;
    if (has_serialized()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->serialized());
    }

    // optional string blockhash = 10;
    if (has_blockhash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->blockhash());
    }

    // optional string memo = 15;
    if (has_memo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->memo());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional .opentxs.proto.ContactItemType chain = 2;
    if (has_chain()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->chain());
    }

    // optional uint32 txversion = 4;
    if (has_txversion()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->txversion());
    }

    // optional uint32 locktime = 5;
    if (has_locktime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->locktime());
    }

  }
  if (_has_bits_[8 / 32] & 3840u) {
    // optional uint32 confirmations = 9;
    if (has_confirmations()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->confirmations());
    }

    // optional uint32 blockindex = 11;
    if (has_blockindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->blockindex());
    }

    // optional uint64 fee = 12;
    if (has_fee()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->fee());
    }

    // optional int64 time = 13;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->time());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlockchainTransaction::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BlockchainTransaction*>(&from));
}

void BlockchainTransaction::MergeFrom(const BlockchainTransaction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.BlockchainTransaction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  input_.MergeFrom(from.input_);
  output_.MergeFrom(from.output_);
  conflicts_.MergeFrom(from.conflicts_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_txid();
      txid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.txid_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_serialized();
      serialized_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serialized_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_blockhash();
      blockhash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockhash_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_memo();
      memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
    }
    if (cached_has_bits & 0x00000010u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000020u) {
      chain_ = from.chain_;
    }
    if (cached_has_bits & 0x00000040u) {
      txversion_ = from.txversion_;
    }
    if (cached_has_bits & 0x00000080u) {
      locktime_ = from.locktime_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 3840u) {
    if (cached_has_bits & 0x00000100u) {
      confirmations_ = from.confirmations_;
    }
    if (cached_has_bits & 0x00000200u) {
      blockindex_ = from.blockindex_;
    }
    if (cached_has_bits & 0x00000400u) {
      fee_ = from.fee_;
    }
    if (cached_has_bits & 0x00000800u) {
      time_ = from.time_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void BlockchainTransaction::CopyFrom(const BlockchainTransaction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.BlockchainTransaction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockchainTransaction::IsInitialized() const {
  return true;
}

void BlockchainTransaction::Swap(BlockchainTransaction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlockchainTransaction::InternalSwap(BlockchainTransaction* other) {
  using std::swap;
  input_.InternalSwap(&other->input_);
  output_.InternalSwap(&other->output_);
  conflicts_.InternalSwap(&other->conflicts_);
  txid_.Swap(&other->txid_);
  serialized_.Swap(&other->serialized_);
  blockhash_.Swap(&other->blockhash_);
  memo_.Swap(&other->memo_);
  swap(version_, other->version_);
  swap(chain_, other->chain_);
  swap(txversion_, other->txversion_);
  swap(locktime_, other->locktime_);
  swap(confirmations_, other->confirmations_);
  swap(blockindex_, other->blockindex_);
  swap(fee_, other->fee_);
  swap(time_, other->time_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string BlockchainTransaction::GetTypeName() const {
  return "opentxs.proto.BlockchainTransaction";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
