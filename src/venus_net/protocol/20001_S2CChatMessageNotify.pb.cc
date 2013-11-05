// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 20001_S2CChatMessageNotify.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "20001_S2CChatMessageNotify.pb.h"

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

const ::google::protobuf::Descriptor* S2CChatMessageNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  S2CChatMessageNotify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_20001_5fS2CChatMessageNotify_2eproto() {
  protobuf_AddDesc_20001_5fS2CChatMessageNotify_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "20001_S2CChatMessageNotify.proto");
  GOOGLE_CHECK(file != NULL);
  S2CChatMessageNotify_descriptor_ = file->message_type(0);
  static const int S2CChatMessageNotify_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CChatMessageNotify, chat_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CChatMessageNotify, source_player_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CChatMessageNotify, chat_content_),
  };
  S2CChatMessageNotify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      S2CChatMessageNotify_descriptor_,
      S2CChatMessageNotify::default_instance_,
      S2CChatMessageNotify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CChatMessageNotify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CChatMessageNotify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(S2CChatMessageNotify));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_20001_5fS2CChatMessageNotify_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    S2CChatMessageNotify_descriptor_, &S2CChatMessageNotify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_20001_5fS2CChatMessageNotify_2eproto() {
  delete S2CChatMessageNotify::default_instance_;
  delete S2CChatMessageNotify_reflection_;
}

void protobuf_AddDesc_20001_5fS2CChatMessageNotify_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n 20001_S2CChatMessageNotify.proto\022\010Prot"
    "ocol\"V\n\024S2CChatMessageNotify\022\021\n\tchat_typ"
    "e\030\001 \002(\005\022\025\n\rsource_player\030\002 \001(\014\022\024\n\014chat_c"
    "ontent\030\003 \002(\014", 132);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "20001_S2CChatMessageNotify.proto", &protobuf_RegisterTypes);
  S2CChatMessageNotify::default_instance_ = new S2CChatMessageNotify();
  S2CChatMessageNotify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_20001_5fS2CChatMessageNotify_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_20001_5fS2CChatMessageNotify_2eproto {
  StaticDescriptorInitializer_20001_5fS2CChatMessageNotify_2eproto() {
    protobuf_AddDesc_20001_5fS2CChatMessageNotify_2eproto();
  }
} static_descriptor_initializer_20001_5fS2CChatMessageNotify_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int S2CChatMessageNotify::kChatTypeFieldNumber;
const int S2CChatMessageNotify::kSourcePlayerFieldNumber;
const int S2CChatMessageNotify::kChatContentFieldNumber;
#endif  // !_MSC_VER

S2CChatMessageNotify::S2CChatMessageNotify()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void S2CChatMessageNotify::InitAsDefaultInstance() {
}

S2CChatMessageNotify::S2CChatMessageNotify(const S2CChatMessageNotify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void S2CChatMessageNotify::SharedCtor() {
  _cached_size_ = 0;
  chat_type_ = 0;
  source_player_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  chat_content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CChatMessageNotify::~S2CChatMessageNotify() {
  SharedDtor();
}

void S2CChatMessageNotify::SharedDtor() {
  if (source_player_ != &::google::protobuf::internal::kEmptyString) {
    delete source_player_;
  }
  if (chat_content_ != &::google::protobuf::internal::kEmptyString) {
    delete chat_content_;
  }
  if (this != default_instance_) {
  }
}

void S2CChatMessageNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* S2CChatMessageNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return S2CChatMessageNotify_descriptor_;
}

const S2CChatMessageNotify& S2CChatMessageNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_20001_5fS2CChatMessageNotify_2eproto();
  return *default_instance_;
}

S2CChatMessageNotify* S2CChatMessageNotify::default_instance_ = NULL;

S2CChatMessageNotify* S2CChatMessageNotify::New() const {
  return new S2CChatMessageNotify;
}

void S2CChatMessageNotify::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    chat_type_ = 0;
    if (has_source_player()) {
      if (source_player_ != &::google::protobuf::internal::kEmptyString) {
        source_player_->clear();
      }
    }
    if (has_chat_content()) {
      if (chat_content_ != &::google::protobuf::internal::kEmptyString) {
        chat_content_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool S2CChatMessageNotify::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_source_player;
        break;
      }

      // optional bytes source_player = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_source_player:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_source_player()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_chat_content;
        break;
      }

      // required bytes chat_content = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_chat_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_chat_content()));
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

void S2CChatMessageNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 chat_type = 1;
  if (has_chat_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->chat_type(), output);
  }

  // optional bytes source_player = 2;
  if (has_source_player()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->source_player(), output);
  }

  // required bytes chat_content = 3;
  if (has_chat_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->chat_content(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* S2CChatMessageNotify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 chat_type = 1;
  if (has_chat_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->chat_type(), target);
  }

  // optional bytes source_player = 2;
  if (has_source_player()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->source_player(), target);
  }

  // required bytes chat_content = 3;
  if (has_chat_content()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->chat_content(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int S2CChatMessageNotify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 chat_type = 1;
    if (has_chat_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->chat_type());
    }

    // optional bytes source_player = 2;
    if (has_source_player()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->source_player());
    }

    // required bytes chat_content = 3;
    if (has_chat_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->chat_content());
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

void S2CChatMessageNotify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const S2CChatMessageNotify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const S2CChatMessageNotify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void S2CChatMessageNotify::MergeFrom(const S2CChatMessageNotify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_chat_type()) {
      set_chat_type(from.chat_type());
    }
    if (from.has_source_player()) {
      set_source_player(from.source_player());
    }
    if (from.has_chat_content()) {
      set_chat_content(from.chat_content());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void S2CChatMessageNotify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S2CChatMessageNotify::CopyFrom(const S2CChatMessageNotify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CChatMessageNotify::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;

  return true;
}

void S2CChatMessageNotify::Swap(S2CChatMessageNotify* other) {
  if (other != this) {
    std::swap(chat_type_, other->chat_type_);
    std::swap(source_player_, other->source_player_);
    std::swap(chat_content_, other->chat_content_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata S2CChatMessageNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = S2CChatMessageNotify_descriptor_;
  metadata.reflection = S2CChatMessageNotify_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)