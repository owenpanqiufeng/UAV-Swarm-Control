// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mapbuffer.proto

#ifndef PROTOBUF_mapbuffer_2eproto__INCLUDED
#define PROTOBUF_mapbuffer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace mapbuffer {
class MapBuffer;
class MapBufferDefaultTypeInternal;
extern MapBufferDefaultTypeInternal _MapBuffer_default_instance_;
}  // namespace mapbuffer

namespace mapbuffer {

namespace protobuf_mapbuffer_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_mapbuffer_2eproto

// ===================================================================

class MapBuffer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mapbuffer.MapBuffer) */ {
 public:
  MapBuffer();
  virtual ~MapBuffer();

  MapBuffer(const MapBuffer& from);

  inline MapBuffer& operator=(const MapBuffer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MapBuffer(MapBuffer&& from) noexcept
    : MapBuffer() {
    *this = ::std::move(from);
  }

  inline MapBuffer& operator=(MapBuffer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MapBuffer& default_instance();

  static inline const MapBuffer* internal_default_instance() {
    return reinterpret_cast<const MapBuffer*>(
               &_MapBuffer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MapBuffer* other);
  friend void swap(MapBuffer& a, MapBuffer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MapBuffer* New() const PROTOBUF_FINAL { return New(NULL); }

  MapBuffer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MapBuffer& from);
  void MergeFrom(const MapBuffer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MapBuffer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float MB_item = 1;
  int mb_item_size() const;
  void clear_mb_item();
  static const int kMBItemFieldNumber = 1;
  float mb_item(int index) const;
  void set_mb_item(int index, float value);
  void add_mb_item(float value);
  const ::google::protobuf::RepeatedField< float >&
      mb_item() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_mb_item();

  // int32 seedi = 2;
  void clear_seedi();
  static const int kSeediFieldNumber = 2;
  ::google::protobuf::int32 seedi() const;
  void set_seedi(::google::protobuf::int32 value);

  // int32 seedj = 3;
  void clear_seedj();
  static const int kSeedjFieldNumber = 3;
  ::google::protobuf::int32 seedj() const;
  void set_seedj(::google::protobuf::int32 value);

  // int32 length = 4;
  void clear_length();
  static const int kLengthFieldNumber = 4;
  ::google::protobuf::int32 length() const;
  void set_length(::google::protobuf::int32 value);

  // int32 usid = 5;
  void clear_usid();
  static const int kUsidFieldNumber = 5;
  ::google::protobuf::int32 usid() const;
  void set_usid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:mapbuffer.MapBuffer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > mb_item_;
  mutable int _mb_item_cached_byte_size_;
  ::google::protobuf::int32 seedi_;
  ::google::protobuf::int32 seedj_;
  ::google::protobuf::int32 length_;
  ::google::protobuf::int32 usid_;
  mutable int _cached_size_;
  friend struct protobuf_mapbuffer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MapBuffer

// repeated float MB_item = 1;
inline int MapBuffer::mb_item_size() const {
  return mb_item_.size();
}
inline void MapBuffer::clear_mb_item() {
  mb_item_.Clear();
}
inline float MapBuffer::mb_item(int index) const {
  // @@protoc_insertion_point(field_get:mapbuffer.MapBuffer.MB_item)
  return mb_item_.Get(index);
}
inline void MapBuffer::set_mb_item(int index, float value) {
  mb_item_.Set(index, value);
  // @@protoc_insertion_point(field_set:mapbuffer.MapBuffer.MB_item)
}
inline void MapBuffer::add_mb_item(float value) {
  mb_item_.Add(value);
  // @@protoc_insertion_point(field_add:mapbuffer.MapBuffer.MB_item)
}
inline const ::google::protobuf::RepeatedField< float >&
MapBuffer::mb_item() const {
  // @@protoc_insertion_point(field_list:mapbuffer.MapBuffer.MB_item)
  return mb_item_;
}
inline ::google::protobuf::RepeatedField< float >*
MapBuffer::mutable_mb_item() {
  // @@protoc_insertion_point(field_mutable_list:mapbuffer.MapBuffer.MB_item)
  return &mb_item_;
}

// int32 seedi = 2;
inline void MapBuffer::clear_seedi() {
  seedi_ = 0;
}
inline ::google::protobuf::int32 MapBuffer::seedi() const {
  // @@protoc_insertion_point(field_get:mapbuffer.MapBuffer.seedi)
  return seedi_;
}
inline void MapBuffer::set_seedi(::google::protobuf::int32 value) {
  
  seedi_ = value;
  // @@protoc_insertion_point(field_set:mapbuffer.MapBuffer.seedi)
}

// int32 seedj = 3;
inline void MapBuffer::clear_seedj() {
  seedj_ = 0;
}
inline ::google::protobuf::int32 MapBuffer::seedj() const {
  // @@protoc_insertion_point(field_get:mapbuffer.MapBuffer.seedj)
  return seedj_;
}
inline void MapBuffer::set_seedj(::google::protobuf::int32 value) {
  
  seedj_ = value;
  // @@protoc_insertion_point(field_set:mapbuffer.MapBuffer.seedj)
}

// int32 length = 4;
inline void MapBuffer::clear_length() {
  length_ = 0;
}
inline ::google::protobuf::int32 MapBuffer::length() const {
  // @@protoc_insertion_point(field_get:mapbuffer.MapBuffer.length)
  return length_;
}
inline void MapBuffer::set_length(::google::protobuf::int32 value) {
  
  length_ = value;
  // @@protoc_insertion_point(field_set:mapbuffer.MapBuffer.length)
}

// int32 usid = 5;
inline void MapBuffer::clear_usid() {
  usid_ = 0;
}
inline ::google::protobuf::int32 MapBuffer::usid() const {
  // @@protoc_insertion_point(field_get:mapbuffer.MapBuffer.usid)
  return usid_;
}
inline void MapBuffer::set_usid(::google::protobuf::int32 value) {
  
  usid_ = value;
  // @@protoc_insertion_point(field_set:mapbuffer.MapBuffer.usid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace mapbuffer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mapbuffer_2eproto__INCLUDED
