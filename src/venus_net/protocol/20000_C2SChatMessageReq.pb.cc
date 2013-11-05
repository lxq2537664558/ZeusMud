// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 20000_C2SChatMessageReq.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "20000_C2SChatMessageReq.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

namespace {

const ::google::protobuf::Descriptor* C2SChatMessageReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  C2SChatMessageReq_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_20000_5fC2SChatMessageReq_2eproto() {
  protobuf_AddDesc_20000_5fC2SChatMessageReq_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "20000_C2SChatMessageReq.proto");
  GOOGLE_CHECK(file != NULL);
  C2SChatMessageReq_descriptor_ = file->message_type(0);
  static const int C2SChatMessageReq_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SChatMessageReq, chat_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SChatMessageReq, chat_content_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SChatMessageReq, private_chat_target_),
  };
  C2SChatMessageReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      C2SChatMessageReq_descriptor_,
      C2SChatMessageReq::default_instance_,
      C2SChatMessageReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SChatMessageReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SChatMessageReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(C2SChatMessageReq));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_20000_5fC2SChatMessageReq_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    C2SChatMessageReq_descriptor_, &C2SChatMessageReq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_20000_5fC2SChatMessageReq_2eproto() {
  delete C2SChatMessageReq::default_instance_;
  delete C2SChatMessageReq_reflection_;
}

void protobuf_AddDesc_20000_5fC2SChatMessageReq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\03520000_C2SChatMessageReq.proto\022\010Protoco"
    "l\"Y\n\021C2SChatMessageReq\022\021\n\tchat_type\030\001 \002("
    "\005\022\024\n\014chat_content\030\002 \002(\014\022\033\n\023private_chat_"
    "target\030\003 \001(\004", 132);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "20000_C2SChatMessageReq.proto", &protobuf_RegisterTypes);
  C2SChatMessageReq::default_instance_ = new C2SChatMessageReq();
  C2SChatMessageReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_20000_5fC2SChatMessageReq_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_20000_5fC2SChatMessageReq_2eproto {
  StaticDescriptorInitializer_20000_5fC2SChatMessageReq_2eproto() {
    protobuf_AddDesc_20000_5fC2SChatMessageReq_2eproto();
  }
} static_descriptor_initializer_20000_5fC2SChatMessageReq_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int C2SChatMessageReq::kChatTypeFieldNumber;
const int C2SChatMessageReq::kChatContentFieldNumber;
const int C2SChatMessageReq::kPrivateChatTargetFieldNumber;
#endif  // !_MSC_VER

C2SChatMessageReq::C2SChatMessageReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void C2SChatMessageReq::InitAsDefaultInstance() {
}

C2SChatMessageReq::C2SChatMessageReq(const C2SChatMessageReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void C2SChatMessageReq::SharedCtor() {
  _cached_size_ = 0;
  chat_type_ = 0;
  chat_content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  private_chat_target_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

C2SChatMessageReq::~C2SChatMessageReq() {
  SharedDtor();
}

void C2SChatMessageReq::SharedDtor() {
  if (chat_content_ != &::google::protobuf::internal::kEmptyString) {
    delete chat_content_;
  }
  if (this != default_instance_) {
  }
}

void C2SChatMessageReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* C2SChatMessageReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return C2SChatMessageReq_descriptor_;
}

const C2SChatMessageReq& C2SChatMessageReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_20000_5fC2SChatMessageReq_2eproto();
  return *default_instance_;
}

C2SChatMessageReq* C2SChatMessageReq::default_instance_ = NULL;

C2SChatMessageReq* C2SChatMessageReq::New() const {
  return new C2SChatMessageReq;
}

void C2SChatMessageReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    chat_type_ = 0;
    if (has_chat_content()) {
      if (chat_content_ != &::google::protobuf::internal::kEmptyString) {
        chat_content_->clear();
      }
    }
    private_chat_target_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool C2SChatMessageReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 chat_type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &chat_type_)));
          set_has_chat_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_chat_content;
        break;
      }

      // required bytes chat_content = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_chat_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_chat_content()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_private_chat_target;
        break;
      }

      // optional uint64 private_chat_target = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_private_chat_target:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &private_chat_target_)));
          set_has_private_chat_target();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void C2SChatMessageReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 chat_type = 1;
  if (has_chat_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->chat_type(), output);
  }

  // required bytes chat_content = 2;
  if (has_chat_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->chat_content(), output);
  }

  // optional uint64 private_chat_target = 3;
  if (has_private_chat_target()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->private_chat_target(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* C2SChatMessageReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 chat_type = 1;
  if (has_chat_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->chat_type(), target);
  }

  // required bytes chat_content = 2;
  if (has_chat_content()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->chat_content(), target);
  }

  // optional uint64 private_chat_target = 3;
  if (has_private_chat_target()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->private_chat_target(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int C2SChatMessageReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 chat_type = 1;
    if (has_chat_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->chat_type());
    }

    // required bytes chat_content = 2;
    if (has_chat_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->chat_content());
    }

    // optional uint64 private_chat_target = 3;
    if (has_private_chat_target()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->private_chat_target());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void C2SChatMessageReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const C2SChatMessageReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const C2SChatMessageReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void C2SChatMessageReq::MergeFrom(const C2SChatMessageReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_chat_type()) {
      set_chat_type(from.chat_type());
    }
    if (from.has_chat_content()) {
      set_chat_content(from.chat_content());
    }
    if (from.has_private_chat_target()) {
      set_private_chat_target(from.private_chat_target());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void C2SChatMessageReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C2SChatMessageReq::CopyFrom(const C2SChatMessageReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SChatMessageReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void C2SChatMessageReq::Swap(C2SChatMessageReq* other) {
  if (other != this) {
    std::swap(chat_type_, other->chat_type_);
    std::swap(chat_content_, other->chat_content_);
    std::swap(private_chat_target_, other->private_chat_target_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata C2SChatMessageReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = C2SChatMessageReq_descriptor_;
  metadata.reflection = C2SChatMessageReq_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)