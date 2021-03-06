// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/range_data_inserter_options_3d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/range_data_inserter_options_3d.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* RangeDataInserterOptions3D_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RangeDataInserterOptions3D_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/range_data_inserter_options_3d.proto");
  GOOGLE_CHECK(file != NULL);
  RangeDataInserterOptions3D_descriptor_ = file->message_type(0);
  static const int RangeDataInserterOptions3D_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions3D, hit_probability_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions3D, miss_probability_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions3D, num_free_space_voxels_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions3D, intensity_threshold_),
  };
  RangeDataInserterOptions3D_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RangeDataInserterOptions3D_descriptor_,
      RangeDataInserterOptions3D::default_instance_,
      RangeDataInserterOptions3D_offsets_,
      -1,
      -1,
      -1,
      sizeof(RangeDataInserterOptions3D),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions3D, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions3D, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RangeDataInserterOptions3D_descriptor_, &RangeDataInserterOptions3D::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto() {
  delete RangeDataInserterOptions3D::default_instance_;
  delete RangeDataInserterOptions3D_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\?cartographer/mapping/proto/range_data_"
    "inserter_options_3d.proto\022\032cartographer."
    "mapping.proto\"\213\001\n\032RangeDataInserterOptio"
    "ns3D\022\027\n\017hit_probability\030\001 \001(\001\022\030\n\020miss_pr"
    "obability\030\002 \001(\001\022\035\n\025num_free_space_voxels"
    "\030\003 \001(\005\022\033\n\023intensity_threshold\030\004 \001(\002b\006pro"
    "to3", 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/range_data_inserter_options_3d.proto", &protobuf_RegisterTypes);
  RangeDataInserterOptions3D::default_instance_ = new RangeDataInserterOptions3D();
  RangeDataInserterOptions3D::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RangeDataInserterOptions3D::kHitProbabilityFieldNumber;
const int RangeDataInserterOptions3D::kMissProbabilityFieldNumber;
const int RangeDataInserterOptions3D::kNumFreeSpaceVoxelsFieldNumber;
const int RangeDataInserterOptions3D::kIntensityThresholdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RangeDataInserterOptions3D::RangeDataInserterOptions3D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.RangeDataInserterOptions3D)
}

void RangeDataInserterOptions3D::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RangeDataInserterOptions3D::RangeDataInserterOptions3D(const RangeDataInserterOptions3D& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.RangeDataInserterOptions3D)
}

void RangeDataInserterOptions3D::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  hit_probability_ = 0;
  miss_probability_ = 0;
  num_free_space_voxels_ = 0;
  intensity_threshold_ = 0;
}

RangeDataInserterOptions3D::~RangeDataInserterOptions3D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.RangeDataInserterOptions3D)
  SharedDtor();
}

void RangeDataInserterOptions3D::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RangeDataInserterOptions3D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RangeDataInserterOptions3D::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RangeDataInserterOptions3D_descriptor_;
}

const RangeDataInserterOptions3D& RangeDataInserterOptions3D::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto();
  return *default_instance_;
}

RangeDataInserterOptions3D* RangeDataInserterOptions3D::default_instance_ = NULL;

RangeDataInserterOptions3D* RangeDataInserterOptions3D::New(::google::protobuf::Arena* arena) const {
  RangeDataInserterOptions3D* n = new RangeDataInserterOptions3D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RangeDataInserterOptions3D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(RangeDataInserterOptions3D, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<RangeDataInserterOptions3D*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(hit_probability_, intensity_threshold_);

#undef ZR_HELPER_
#undef ZR_

}

bool RangeDataInserterOptions3D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double hit_probability = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &hit_probability_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_miss_probability;
        break;
      }

      // optional double miss_probability = 2;
      case 2: {
        if (tag == 17) {
         parse_miss_probability:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &miss_probability_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_num_free_space_voxels;
        break;
      }

      // optional int32 num_free_space_voxels = 3;
      case 3: {
        if (tag == 24) {
         parse_num_free_space_voxels:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_free_space_voxels_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_intensity_threshold;
        break;
      }

      // optional float intensity_threshold = 4;
      case 4: {
        if (tag == 37) {
         parse_intensity_threshold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &intensity_threshold_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.RangeDataInserterOptions3D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.RangeDataInserterOptions3D)
  return false;
#undef DO_
}

void RangeDataInserterOptions3D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  // optional double hit_probability = 1;
  if (this->hit_probability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->hit_probability(), output);
  }

  // optional double miss_probability = 2;
  if (this->miss_probability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->miss_probability(), output);
  }

  // optional int32 num_free_space_voxels = 3;
  if (this->num_free_space_voxels() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->num_free_space_voxels(), output);
  }

  // optional float intensity_threshold = 4;
  if (this->intensity_threshold() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->intensity_threshold(), output);
  }

  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.RangeDataInserterOptions3D)
}

::google::protobuf::uint8* RangeDataInserterOptions3D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  // optional double hit_probability = 1;
  if (this->hit_probability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->hit_probability(), target);
  }

  // optional double miss_probability = 2;
  if (this->miss_probability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->miss_probability(), target);
  }

  // optional int32 num_free_space_voxels = 3;
  if (this->num_free_space_voxels() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->num_free_space_voxels(), target);
  }

  // optional float intensity_threshold = 4;
  if (this->intensity_threshold() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->intensity_threshold(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.RangeDataInserterOptions3D)
  return target;
}

int RangeDataInserterOptions3D::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  int total_size = 0;

  // optional double hit_probability = 1;
  if (this->hit_probability() != 0) {
    total_size += 1 + 8;
  }

  // optional double miss_probability = 2;
  if (this->miss_probability() != 0) {
    total_size += 1 + 8;
  }

  // optional int32 num_free_space_voxels = 3;
  if (this->num_free_space_voxels() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_free_space_voxels());
  }

  // optional float intensity_threshold = 4;
  if (this->intensity_threshold() != 0) {
    total_size += 1 + 4;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RangeDataInserterOptions3D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RangeDataInserterOptions3D* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RangeDataInserterOptions3D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.RangeDataInserterOptions3D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.RangeDataInserterOptions3D)
    MergeFrom(*source);
  }
}

void RangeDataInserterOptions3D::MergeFrom(const RangeDataInserterOptions3D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.hit_probability() != 0) {
    set_hit_probability(from.hit_probability());
  }
  if (from.miss_probability() != 0) {
    set_miss_probability(from.miss_probability());
  }
  if (from.num_free_space_voxels() != 0) {
    set_num_free_space_voxels(from.num_free_space_voxels());
  }
  if (from.intensity_threshold() != 0) {
    set_intensity_threshold(from.intensity_threshold());
  }
}

void RangeDataInserterOptions3D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RangeDataInserterOptions3D::CopyFrom(const RangeDataInserterOptions3D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.RangeDataInserterOptions3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RangeDataInserterOptions3D::IsInitialized() const {

  return true;
}

void RangeDataInserterOptions3D::Swap(RangeDataInserterOptions3D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RangeDataInserterOptions3D::InternalSwap(RangeDataInserterOptions3D* other) {
  std::swap(hit_probability_, other->hit_probability_);
  std::swap(miss_probability_, other->miss_probability_);
  std::swap(num_free_space_voxels_, other->num_free_space_voxels_);
  std::swap(intensity_threshold_, other->intensity_threshold_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RangeDataInserterOptions3D::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RangeDataInserterOptions3D_descriptor_;
  metadata.reflection = RangeDataInserterOptions3D_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RangeDataInserterOptions3D

// optional double hit_probability = 1;
void RangeDataInserterOptions3D::clear_hit_probability() {
  hit_probability_ = 0;
}
 double RangeDataInserterOptions3D::hit_probability() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions3D.hit_probability)
  return hit_probability_;
}
 void RangeDataInserterOptions3D::set_hit_probability(double value) {
  
  hit_probability_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.RangeDataInserterOptions3D.hit_probability)
}

// optional double miss_probability = 2;
void RangeDataInserterOptions3D::clear_miss_probability() {
  miss_probability_ = 0;
}
 double RangeDataInserterOptions3D::miss_probability() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions3D.miss_probability)
  return miss_probability_;
}
 void RangeDataInserterOptions3D::set_miss_probability(double value) {
  
  miss_probability_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.RangeDataInserterOptions3D.miss_probability)
}

// optional int32 num_free_space_voxels = 3;
void RangeDataInserterOptions3D::clear_num_free_space_voxels() {
  num_free_space_voxels_ = 0;
}
 ::google::protobuf::int32 RangeDataInserterOptions3D::num_free_space_voxels() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions3D.num_free_space_voxels)
  return num_free_space_voxels_;
}
 void RangeDataInserterOptions3D::set_num_free_space_voxels(::google::protobuf::int32 value) {
  
  num_free_space_voxels_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.RangeDataInserterOptions3D.num_free_space_voxels)
}

// optional float intensity_threshold = 4;
void RangeDataInserterOptions3D::clear_intensity_threshold() {
  intensity_threshold_ = 0;
}
 float RangeDataInserterOptions3D::intensity_threshold() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions3D.intensity_threshold)
  return intensity_threshold_;
}
 void RangeDataInserterOptions3D::set_intensity_threshold(float value) {
  
  intensity_threshold_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.RangeDataInserterOptions3D.intensity_threshold)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
