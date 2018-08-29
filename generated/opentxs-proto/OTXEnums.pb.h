// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OTXEnums.proto

#ifndef PROTOBUF_OTXEnums_2eproto__INCLUDED
#define PROTOBUF_OTXEnums_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_OTXEnums_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
inline void InitDefaults() {
}
}  // namespace protobuf_OTXEnums_2eproto
namespace opentxs {
namespace proto {
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

enum ServerRequestType {
  SERVERREQUEST_ERROR = 0,
  SERVERREQUEST_ACTIVATE = 1
};
bool ServerRequestType_IsValid(int value);
const ServerRequestType ServerRequestType_MIN = SERVERREQUEST_ERROR;
const ServerRequestType ServerRequestType_MAX = SERVERREQUEST_ACTIVATE;
const int ServerRequestType_ARRAYSIZE = ServerRequestType_MAX + 1;

enum ServerReplyType {
  SERVERREPLY_ERROR = 0,
  SERVERREPLY_ACTIVATE = 1,
  SERVERREPLY_PUSH = 255
};
bool ServerReplyType_IsValid(int value);
const ServerReplyType ServerReplyType_MIN = SERVERREPLY_ERROR;
const ServerReplyType ServerReplyType_MAX = SERVERREPLY_PUSH;
const int ServerReplyType_ARRAYSIZE = ServerReplyType_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::opentxs::proto::ServerRequestType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::ServerReplyType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_OTXEnums_2eproto__INCLUDED
