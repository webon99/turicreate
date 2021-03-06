/* Copyright © 2017 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Scaler.proto

#ifndef PROTOBUF_Scaler_2eproto__INCLUDED
#define PROTOBUF_Scaler_2eproto__INCLUDED

#include <string>

#include <protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <protobuf/arena.h>
#include <protobuf/arenastring.h>
#include <protobuf/generated_message_util.h>
#include <protobuf/message_lite.h>
#include <protobuf/repeated_field.h>
#include <protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Scaler_2eproto();
void protobuf_InitDefaults_Scaler_2eproto();
void protobuf_AssignDesc_Scaler_2eproto();
void protobuf_ShutdownFile_Scaler_2eproto();

class Scaler;

// ===================================================================

class Scaler : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.Scaler) */ {
 public:
  Scaler();
  virtual ~Scaler();

  Scaler(const Scaler& from);

  inline Scaler& operator=(const Scaler& from) {
    CopyFrom(from);
    return *this;
  }

  static const Scaler& default_instance();

  static const Scaler* internal_default_instance();

  void Swap(Scaler* other);

  // implements Message ----------------------------------------------

  inline Scaler* New() const { return New(NULL); }

  Scaler* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Scaler& from);
  void MergeFrom(const Scaler& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Scaler* other);
  void UnsafeMergeFrom(const Scaler& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double shiftValue = 1;
  int shiftvalue_size() const;
  void clear_shiftvalue();
  static const int kShiftValueFieldNumber = 1;
  double shiftvalue(int index) const;
  void set_shiftvalue(int index, double value);
  void add_shiftvalue(double value);
  const ::google::protobuf::RepeatedField< double >&
      shiftvalue() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_shiftvalue();

  // repeated double scaleValue = 2;
  int scalevalue_size() const;
  void clear_scalevalue();
  static const int kScaleValueFieldNumber = 2;
  double scalevalue(int index) const;
  void set_scalevalue(int index, double value);
  void add_scalevalue(double value);
  const ::google::protobuf::RepeatedField< double >&
      scalevalue() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_scalevalue();

  // @@protoc_insertion_point(class_scope:CoreML.Specification.Scaler)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::RepeatedField< double > shiftvalue_;
  mutable int _shiftvalue_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > scalevalue_;
  mutable int _scalevalue_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_Scaler_2eproto_impl();
  friend void  protobuf_AddDesc_Scaler_2eproto_impl();
  friend void protobuf_AssignDesc_Scaler_2eproto();
  friend void protobuf_ShutdownFile_Scaler_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Scaler> Scaler_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Scaler

// repeated double shiftValue = 1;
inline int Scaler::shiftvalue_size() const {
  return shiftvalue_.size();
}
inline void Scaler::clear_shiftvalue() {
  shiftvalue_.Clear();
}
inline double Scaler::shiftvalue(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.Scaler.shiftValue)
  return shiftvalue_.Get(index);
}
inline void Scaler::set_shiftvalue(int index, double value) {
  shiftvalue_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.Scaler.shiftValue)
}
inline void Scaler::add_shiftvalue(double value) {
  shiftvalue_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.Scaler.shiftValue)
}
inline const ::google::protobuf::RepeatedField< double >&
Scaler::shiftvalue() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.Scaler.shiftValue)
  return shiftvalue_;
}
inline ::google::protobuf::RepeatedField< double >*
Scaler::mutable_shiftvalue() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.Scaler.shiftValue)
  return &shiftvalue_;
}

// repeated double scaleValue = 2;
inline int Scaler::scalevalue_size() const {
  return scalevalue_.size();
}
inline void Scaler::clear_scalevalue() {
  scalevalue_.Clear();
}
inline double Scaler::scalevalue(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.Scaler.scaleValue)
  return scalevalue_.Get(index);
}
inline void Scaler::set_scalevalue(int index, double value) {
  scalevalue_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.Scaler.scaleValue)
}
inline void Scaler::add_scalevalue(double value) {
  scalevalue_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.Scaler.scaleValue)
}
inline const ::google::protobuf::RepeatedField< double >&
Scaler::scalevalue() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.Scaler.scaleValue)
  return scalevalue_;
}
inline ::google::protobuf::RepeatedField< double >*
Scaler::mutable_scalevalue() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.Scaler.scaleValue)
  return &scalevalue_;
}

inline const Scaler* Scaler::internal_default_instance() {
  return &Scaler_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Scaler_2eproto__INCLUDED
