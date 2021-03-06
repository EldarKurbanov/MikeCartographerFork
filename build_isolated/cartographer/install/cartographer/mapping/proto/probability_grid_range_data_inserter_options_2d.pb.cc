// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/probability_grid_range_data_inserter_options_2d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/probability_grid_range_data_inserter_options_2d.pb.h"

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

const ::google::protobuf::Descriptor* ProbabilityGridRangeDataInserterOptions2D_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProbabilityGridRangeDataInserterOptions2D_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/probability_grid_range_data_inserter_options_2d.proto");
  GOOGLE_CHECK(file != NULL);
  ProbabilityGridRangeDataInserterOptions2D_descriptor_ = file->message_type(0);
  static const int ProbabilityGridRangeDataInserterOptions2D_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGridRangeDataInserterOptions2D, hit_probability_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGridRangeDataInserterOptions2D, miss_probability_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGridRangeDataInserterOptions2D, insert_free_space_),
  };
  ProbabilityGridRangeDataInserterOptions2D_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProbabilityGridRangeDataInserterOptions2D_descriptor_,
      ProbabilityGridRangeDataInserterOptions2D::default_instance_,
      ProbabilityGridRangeDataInserterOptions2D_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProbabilityGridRangeDataInserterOptions2D),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGridRangeDataInserterOptions2D, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGridRangeDataInserterOptions2D, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProbabilityGridRangeDataInserterOptions2D_descriptor_, &ProbabilityGridRangeDataInserterOptions2D::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto() {
  delete ProbabilityGridRangeDataInserterOptions2D::default_instance_;
  delete ProbabilityGridRangeDataInserterOptions2D_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nPcartographer/mapping/proto/probability"
    "_grid_range_data_inserter_options_2d.pro"
    "to\022\032cartographer.mapping.proto\"y\n)Probab"
    "ilityGridRangeDataInserterOptions2D\022\027\n\017h"
    "it_probability\030\001 \001(\001\022\030\n\020miss_probability"
    "\030\002 \001(\001\022\031\n\021insert_free_space\030\003 \001(\010b\006proto"
    "3", 241);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/probability_grid_range_data_inserter_options_2d.proto", &protobuf_RegisterTypes);
  ProbabilityGridRangeDataInserterOptions2D::default_instance_ = new ProbabilityGridRangeDataInserterOptions2D();
  ProbabilityGridRangeDataInserterOptions2D::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProbabilityGridRangeDataInserterOptions2D::kHitProbabilityFieldNumber;
const int ProbabilityGridRangeDataInserterOptions2D::kMissProbabilityFieldNumber;
const int ProbabilityGridRangeDataInserterOptions2D::kInsertFreeSpaceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProbabilityGridRangeDataInserterOptions2D::ProbabilityGridRangeDataInserterOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
}

void ProbabilityGridRangeDataInserterOptions2D::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProbabilityGridRangeDataInserterOptions2D::ProbabilityGridRangeDataInserterOptions2D(const ProbabilityGridRangeDataInserterOptions2D& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
}

void ProbabilityGridRangeDataInserterOptions2D::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  hit_probability_ = 0;
  miss_probability_ = 0;
  insert_free_space_ = false;
}

ProbabilityGridRangeDataInserterOptions2D::~ProbabilityGridRangeDataInserterOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  SharedDtor();
}

void ProbabilityGridRangeDataInserterOptions2D::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProbabilityGridRangeDataInserterOptions2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProbabilityGridRangeDataInserterOptions2D::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProbabilityGridRangeDataInserterOptions2D_descriptor_;
}

const ProbabilityGridRangeDataInserterOptions2D& ProbabilityGridRangeDataInserterOptions2D::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
  return *default_instance_;
}

ProbabilityGridRangeDataInserterOptions2D* ProbabilityGridRangeDataInserterOptions2D::default_instance_ = NULL;

ProbabilityGridRangeDataInserterOptions2D* ProbabilityGridRangeDataInserterOptions2D::New(::google::protobuf::Arena* arena) const {
  ProbabilityGridRangeDataInserterOptions2D* n = new ProbabilityGridRangeDataInserterOptions2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProbabilityGridRangeDataInserterOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ProbabilityGridRangeDataInserterOptions2D, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ProbabilityGridRangeDataInserterOptions2D*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(hit_probability_, insert_free_space_);

#undef ZR_HELPER_
#undef ZR_

}

bool ProbabilityGridRangeDataInserterOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
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
        if (input->ExpectTag(24)) goto parse_insert_free_space;
        break;
      }

      // optional bool insert_free_space = 3;
      case 3: {
        if (tag == 24) {
         parse_insert_free_space:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &insert_free_space_)));

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
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  return false;
#undef DO_
}

void ProbabilityGridRangeDataInserterOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  // optional double hit_probability = 1;
  if (this->hit_probability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->hit_probability(), output);
  }

  // optional double miss_probability = 2;
  if (this->miss_probability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->miss_probability(), output);
  }

  // optional bool insert_free_space = 3;
  if (this->insert_free_space() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->insert_free_space(), output);
  }

  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
}

::google::protobuf::uint8* ProbabilityGridRangeDataInserterOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  // optional double hit_probability = 1;
  if (this->hit_probability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->hit_probability(), target);
  }

  // optional double miss_probability = 2;
  if (this->miss_probability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->miss_probability(), target);
  }

  // optional bool insert_free_space = 3;
  if (this->insert_free_space() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->insert_free_space(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  return target;
}

int ProbabilityGridRangeDataInserterOptions2D::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  int total_size = 0;

  // optional double hit_probability = 1;
  if (this->hit_probability() != 0) {
    total_size += 1 + 8;
  }

  // optional double miss_probability = 2;
  if (this->miss_probability() != 0) {
    total_size += 1 + 8;
  }

  // optional bool insert_free_space = 3;
  if (this->insert_free_space() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProbabilityGridRangeDataInserterOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ProbabilityGridRangeDataInserterOptions2D* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProbabilityGridRangeDataInserterOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
    MergeFrom(*source);
  }
}

void ProbabilityGridRangeDataInserterOptions2D::MergeFrom(const ProbabilityGridRangeDataInserterOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.hit_probability() != 0) {
    set_hit_probability(from.hit_probability());
  }
  if (from.miss_probability() != 0) {
    set_miss_probability(from.miss_probability());
  }
  if (from.insert_free_space() != 0) {
    set_insert_free_space(from.insert_free_space());
  }
}

void ProbabilityGridRangeDataInserterOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProbabilityGridRangeDataInserterOptions2D::CopyFrom(const ProbabilityGridRangeDataInserterOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProbabilityGridRangeDataInserterOptions2D::IsInitialized() const {

  return true;
}

void ProbabilityGridRangeDataInserterOptions2D::Swap(ProbabilityGridRangeDataInserterOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProbabilityGridRangeDataInserterOptions2D::InternalSwap(ProbabilityGridRangeDataInserterOptions2D* other) {
  std::swap(hit_probability_, other->hit_probability_);
  std::swap(miss_probability_, other->miss_probability_);
  std::swap(insert_free_space_, other->insert_free_space_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProbabilityGridRangeDataInserterOptions2D::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProbabilityGridRangeDataInserterOptions2D_descriptor_;
  metadata.reflection = ProbabilityGridRangeDataInserterOptions2D_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProbabilityGridRangeDataInserterOptions2D

// optional double hit_probability = 1;
void ProbabilityGridRangeDataInserterOptions2D::clear_hit_probability() {
  hit_probability_ = 0;
}
 double ProbabilityGridRangeDataInserterOptions2D::hit_probability() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.hit_probability)
  return hit_probability_;
}
 void ProbabilityGridRangeDataInserterOptions2D::set_hit_probability(double value) {
  
  hit_probability_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.hit_probability)
}

// optional double miss_probability = 2;
void ProbabilityGridRangeDataInserterOptions2D::clear_miss_probability() {
  miss_probability_ = 0;
}
 double ProbabilityGridRangeDataInserterOptions2D::miss_probability() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.miss_probability)
  return miss_probability_;
}
 void ProbabilityGridRangeDataInserterOptions2D::set_miss_probability(double value) {
  
  miss_probability_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.miss_probability)
}

// optional bool insert_free_space = 3;
void ProbabilityGridRangeDataInserterOptions2D::clear_insert_free_space() {
  insert_free_space_ = false;
}
 bool ProbabilityGridRangeDataInserterOptions2D::insert_free_space() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.insert_free_space)
  return insert_free_space_;
}
 void ProbabilityGridRangeDataInserterOptions2D::set_insert_free_space(bool value) {
  
  insert_free_space_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.insert_free_space)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
