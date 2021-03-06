// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 10000_C2SLoginReq.proto

#ifndef PROTOBUF_10000_5fC2SLoginReq_2eproto__INCLUDED
#define PROTOBUF_10000_5fC2SLoginReq_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_10000_5fC2SLoginReq_2eproto();
void protobuf_AssignDesc_10000_5fC2SLoginReq_2eproto();
void protobuf_ShutdownFile_10000_5fC2SLoginReq_2eproto();

class C2SLoginReq;

// ===================================================================

class C2SLoginReq : public ::google::protobuf::Message {
 public:
  C2SLoginReq();
  virtual ~C2SLoginReq();

  C2SLoginReq(const C2SLoginReq& from);

  inline C2SLoginReq& operator=(const C2SLoginReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const C2SLoginReq& default_instance();

  void Swap(C2SLoginReq* other);

  // implements Message ----------------------------------------------

  C2SLoginReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const C2SLoginReq& from);
  void MergeFrom(const C2SLoginReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string email = 1;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 1;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:Protocol.C2SLoginReq)
 private:
  inline void set_has_email();
  inline void clear_has_email();
  inline void set_has_password();
  inline void clear_has_password();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* email_;
  ::std::string* password_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_10000_5fC2SLoginReq_2eproto();
  friend void protobuf_AssignDesc_10000_5fC2SLoginReq_2eproto();
  friend void protobuf_ShutdownFile_10000_5fC2SLoginReq_2eproto();

  void InitAsDefaultInstance();
  static C2SLoginReq* default_instance_;
};
// ===================================================================


// ===================================================================

// C2SLoginReq

// required string email = 1;
inline bool C2SLoginReq::has_email() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void C2SLoginReq::set_has_email() {
  _has_bits_[0] |= 0x00000001u;
}
inline void C2SLoginReq::clear_has_email() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void C2SLoginReq::clear_email() {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& C2SLoginReq::email() const {
  return *email_;
}
inline void C2SLoginReq::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void C2SLoginReq::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void C2SLoginReq::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* C2SLoginReq::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  return email_;
}
inline ::std::string* C2SLoginReq::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void C2SLoginReq::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string password = 2;
inline bool C2SLoginReq::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void C2SLoginReq::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void C2SLoginReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void C2SLoginReq::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& C2SLoginReq::password() const {
  return *password_;
}
inline void C2SLoginReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void C2SLoginReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void C2SLoginReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* C2SLoginReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* C2SLoginReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void C2SLoginReq::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_10000_5fC2SLoginReq_2eproto__INCLUDED
