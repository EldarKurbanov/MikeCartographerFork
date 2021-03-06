// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/grid_2d.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/map_limits.pb.h"
#include "cartographer/mapping/proto/probability_grid.pb.h"
#include "cartographer/mapping/proto/tsdf_2d.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();

class Grid2D;
class Grid2D_CellBox;

// ===================================================================

class Grid2D_CellBox : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.Grid2D.CellBox) */ {
 public:
  Grid2D_CellBox();
  virtual ~Grid2D_CellBox();

  Grid2D_CellBox(const Grid2D_CellBox& from);

  inline Grid2D_CellBox& operator=(const Grid2D_CellBox& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Grid2D_CellBox& default_instance();

  void Swap(Grid2D_CellBox* other);

  // implements Message ----------------------------------------------

  inline Grid2D_CellBox* New() const { return New(NULL); }

  Grid2D_CellBox* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Grid2D_CellBox& from);
  void MergeFrom(const Grid2D_CellBox& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Grid2D_CellBox* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 max_x = 1;
  void clear_max_x();
  static const int kMaxXFieldNumber = 1;
  ::google::protobuf::int32 max_x() const;
  void set_max_x(::google::protobuf::int32 value);

  // optional int32 max_y = 2;
  void clear_max_y();
  static const int kMaxYFieldNumber = 2;
  ::google::protobuf::int32 max_y() const;
  void set_max_y(::google::protobuf::int32 value);

  // optional int32 min_x = 3;
  void clear_min_x();
  static const int kMinXFieldNumber = 3;
  ::google::protobuf::int32 min_x() const;
  void set_min_x(::google::protobuf::int32 value);

  // optional int32 min_y = 4;
  void clear_min_y();
  static const int kMinYFieldNumber = 4;
  ::google::protobuf::int32 min_y() const;
  void set_min_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Grid2D.CellBox)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 max_x_;
  ::google::protobuf::int32 max_y_;
  ::google::protobuf::int32 min_x_;
  ::google::protobuf::int32 min_y_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();

  void InitAsDefaultInstance();
  static Grid2D_CellBox* default_instance_;
};
// -------------------------------------------------------------------

class Grid2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.Grid2D) */ {
 public:
  Grid2D();
  virtual ~Grid2D();

  Grid2D(const Grid2D& from);

  inline Grid2D& operator=(const Grid2D& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Grid2D& default_instance();

  enum GridCase {
    kProbabilityGrid2D = 4,
    kTsdf2D = 5,
    GRID_NOT_SET = 0,
  };

  void Swap(Grid2D* other);

  // implements Message ----------------------------------------------

  inline Grid2D* New() const { return New(NULL); }

  Grid2D* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Grid2D& from);
  void MergeFrom(const Grid2D& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Grid2D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Grid2D_CellBox CellBox;

  // accessors -------------------------------------------------------

  // optional .cartographer.mapping.proto.MapLimits limits = 1;
  bool has_limits() const;
  void clear_limits();
  static const int kLimitsFieldNumber = 1;
  const ::cartographer::mapping::proto::MapLimits& limits() const;
  ::cartographer::mapping::proto::MapLimits* mutable_limits();
  ::cartographer::mapping::proto::MapLimits* release_limits();
  void set_allocated_limits(::cartographer::mapping::proto::MapLimits* limits);

  // repeated int32 cells = 2;
  int cells_size() const;
  void clear_cells();
  static const int kCellsFieldNumber = 2;
  ::google::protobuf::int32 cells(int index) const;
  void set_cells(int index, ::google::protobuf::int32 value);
  void add_cells(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      cells() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_cells();

  // optional .cartographer.mapping.proto.Grid2D.CellBox known_cells_box = 3;
  bool has_known_cells_box() const;
  void clear_known_cells_box();
  static const int kKnownCellsBoxFieldNumber = 3;
  const ::cartographer::mapping::proto::Grid2D_CellBox& known_cells_box() const;
  ::cartographer::mapping::proto::Grid2D_CellBox* mutable_known_cells_box();
  ::cartographer::mapping::proto::Grid2D_CellBox* release_known_cells_box();
  void set_allocated_known_cells_box(::cartographer::mapping::proto::Grid2D_CellBox* known_cells_box);

  // optional .cartographer.mapping.proto.ProbabilityGrid probability_grid_2d = 4;
  bool has_probability_grid_2d() const;
  void clear_probability_grid_2d();
  static const int kProbabilityGrid2DFieldNumber = 4;
  const ::cartographer::mapping::proto::ProbabilityGrid& probability_grid_2d() const;
  ::cartographer::mapping::proto::ProbabilityGrid* mutable_probability_grid_2d();
  ::cartographer::mapping::proto::ProbabilityGrid* release_probability_grid_2d();
  void set_allocated_probability_grid_2d(::cartographer::mapping::proto::ProbabilityGrid* probability_grid_2d);

  // optional .cartographer.mapping.proto.TSDF2D tsdf_2d = 5;
  bool has_tsdf_2d() const;
  void clear_tsdf_2d();
  static const int kTsdf2DFieldNumber = 5;
  const ::cartographer::mapping::proto::TSDF2D& tsdf_2d() const;
  ::cartographer::mapping::proto::TSDF2D* mutable_tsdf_2d();
  ::cartographer::mapping::proto::TSDF2D* release_tsdf_2d();
  void set_allocated_tsdf_2d(::cartographer::mapping::proto::TSDF2D* tsdf_2d);

  // optional float min_correspondence_cost = 6;
  void clear_min_correspondence_cost();
  static const int kMinCorrespondenceCostFieldNumber = 6;
  float min_correspondence_cost() const;
  void set_min_correspondence_cost(float value);

  // optional float max_correspondence_cost = 7;
  void clear_max_correspondence_cost();
  static const int kMaxCorrespondenceCostFieldNumber = 7;
  float max_correspondence_cost() const;
  void set_max_correspondence_cost(float value);

  GridCase grid_case() const;
  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Grid2D)
 private:
  inline void set_has_probability_grid_2d();
  inline void set_has_tsdf_2d();

  inline bool has_grid() const;
  void clear_grid();
  inline void clear_has_grid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::cartographer::mapping::proto::MapLimits* limits_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > cells_;
  mutable int _cells_cached_byte_size_;
  ::cartographer::mapping::proto::Grid2D_CellBox* known_cells_box_;
  float min_correspondence_cost_;
  float max_correspondence_cost_;
  union GridUnion {
    GridUnion() {}
    ::cartographer::mapping::proto::ProbabilityGrid* probability_grid_2d_;
    ::cartographer::mapping::proto::TSDF2D* tsdf_2d_;
  } grid_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();

  void InitAsDefaultInstance();
  static Grid2D* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Grid2D_CellBox

// optional int32 max_x = 1;
inline void Grid2D_CellBox::clear_max_x() {
  max_x_ = 0;
}
inline ::google::protobuf::int32 Grid2D_CellBox::max_x() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.CellBox.max_x)
  return max_x_;
}
inline void Grid2D_CellBox::set_max_x(::google::protobuf::int32 value) {
  
  max_x_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.CellBox.max_x)
}

// optional int32 max_y = 2;
inline void Grid2D_CellBox::clear_max_y() {
  max_y_ = 0;
}
inline ::google::protobuf::int32 Grid2D_CellBox::max_y() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.CellBox.max_y)
  return max_y_;
}
inline void Grid2D_CellBox::set_max_y(::google::protobuf::int32 value) {
  
  max_y_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.CellBox.max_y)
}

// optional int32 min_x = 3;
inline void Grid2D_CellBox::clear_min_x() {
  min_x_ = 0;
}
inline ::google::protobuf::int32 Grid2D_CellBox::min_x() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.CellBox.min_x)
  return min_x_;
}
inline void Grid2D_CellBox::set_min_x(::google::protobuf::int32 value) {
  
  min_x_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.CellBox.min_x)
}

// optional int32 min_y = 4;
inline void Grid2D_CellBox::clear_min_y() {
  min_y_ = 0;
}
inline ::google::protobuf::int32 Grid2D_CellBox::min_y() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.CellBox.min_y)
  return min_y_;
}
inline void Grid2D_CellBox::set_min_y(::google::protobuf::int32 value) {
  
  min_y_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.CellBox.min_y)
}

// -------------------------------------------------------------------

// Grid2D

// optional .cartographer.mapping.proto.MapLimits limits = 1;
inline bool Grid2D::has_limits() const {
  return !_is_default_instance_ && limits_ != NULL;
}
inline void Grid2D::clear_limits() {
  if (GetArenaNoVirtual() == NULL && limits_ != NULL) delete limits_;
  limits_ = NULL;
}
inline const ::cartographer::mapping::proto::MapLimits& Grid2D::limits() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.limits)
  return limits_ != NULL ? *limits_ : *default_instance_->limits_;
}
inline ::cartographer::mapping::proto::MapLimits* Grid2D::mutable_limits() {
  
  if (limits_ == NULL) {
    limits_ = new ::cartographer::mapping::proto::MapLimits;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Grid2D.limits)
  return limits_;
}
inline ::cartographer::mapping::proto::MapLimits* Grid2D::release_limits() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Grid2D.limits)
  
  ::cartographer::mapping::proto::MapLimits* temp = limits_;
  limits_ = NULL;
  return temp;
}
inline void Grid2D::set_allocated_limits(::cartographer::mapping::proto::MapLimits* limits) {
  delete limits_;
  limits_ = limits;
  if (limits) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Grid2D.limits)
}

// repeated int32 cells = 2;
inline int Grid2D::cells_size() const {
  return cells_.size();
}
inline void Grid2D::clear_cells() {
  cells_.Clear();
}
inline ::google::protobuf::int32 Grid2D::cells(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.cells)
  return cells_.Get(index);
}
inline void Grid2D::set_cells(int index, ::google::protobuf::int32 value) {
  cells_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.cells)
}
inline void Grid2D::add_cells(::google::protobuf::int32 value) {
  cells_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.Grid2D.cells)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Grid2D::cells() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.Grid2D.cells)
  return cells_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Grid2D::mutable_cells() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.Grid2D.cells)
  return &cells_;
}

// optional .cartographer.mapping.proto.Grid2D.CellBox known_cells_box = 3;
inline bool Grid2D::has_known_cells_box() const {
  return !_is_default_instance_ && known_cells_box_ != NULL;
}
inline void Grid2D::clear_known_cells_box() {
  if (GetArenaNoVirtual() == NULL && known_cells_box_ != NULL) delete known_cells_box_;
  known_cells_box_ = NULL;
}
inline const ::cartographer::mapping::proto::Grid2D_CellBox& Grid2D::known_cells_box() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.known_cells_box)
  return known_cells_box_ != NULL ? *known_cells_box_ : *default_instance_->known_cells_box_;
}
inline ::cartographer::mapping::proto::Grid2D_CellBox* Grid2D::mutable_known_cells_box() {
  
  if (known_cells_box_ == NULL) {
    known_cells_box_ = new ::cartographer::mapping::proto::Grid2D_CellBox;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Grid2D.known_cells_box)
  return known_cells_box_;
}
inline ::cartographer::mapping::proto::Grid2D_CellBox* Grid2D::release_known_cells_box() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Grid2D.known_cells_box)
  
  ::cartographer::mapping::proto::Grid2D_CellBox* temp = known_cells_box_;
  known_cells_box_ = NULL;
  return temp;
}
inline void Grid2D::set_allocated_known_cells_box(::cartographer::mapping::proto::Grid2D_CellBox* known_cells_box) {
  delete known_cells_box_;
  known_cells_box_ = known_cells_box;
  if (known_cells_box) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Grid2D.known_cells_box)
}

// optional .cartographer.mapping.proto.ProbabilityGrid probability_grid_2d = 4;
inline bool Grid2D::has_probability_grid_2d() const {
  return grid_case() == kProbabilityGrid2D;
}
inline void Grid2D::set_has_probability_grid_2d() {
  _oneof_case_[0] = kProbabilityGrid2D;
}
inline void Grid2D::clear_probability_grid_2d() {
  if (has_probability_grid_2d()) {
    delete grid_.probability_grid_2d_;
    clear_has_grid();
  }
}
inline  const ::cartographer::mapping::proto::ProbabilityGrid& Grid2D::probability_grid_2d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.probability_grid_2d)
  return has_probability_grid_2d()
      ? *grid_.probability_grid_2d_
      : ::cartographer::mapping::proto::ProbabilityGrid::default_instance();
}
inline ::cartographer::mapping::proto::ProbabilityGrid* Grid2D::mutable_probability_grid_2d() {
  if (!has_probability_grid_2d()) {
    clear_grid();
    set_has_probability_grid_2d();
    grid_.probability_grid_2d_ = new ::cartographer::mapping::proto::ProbabilityGrid;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Grid2D.probability_grid_2d)
  return grid_.probability_grid_2d_;
}
inline ::cartographer::mapping::proto::ProbabilityGrid* Grid2D::release_probability_grid_2d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Grid2D.probability_grid_2d)
  if (has_probability_grid_2d()) {
    clear_has_grid();
    ::cartographer::mapping::proto::ProbabilityGrid* temp = grid_.probability_grid_2d_;
    grid_.probability_grid_2d_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Grid2D::set_allocated_probability_grid_2d(::cartographer::mapping::proto::ProbabilityGrid* probability_grid_2d) {
  clear_grid();
  if (probability_grid_2d) {
    set_has_probability_grid_2d();
    grid_.probability_grid_2d_ = probability_grid_2d;
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Grid2D.probability_grid_2d)
}

// optional .cartographer.mapping.proto.TSDF2D tsdf_2d = 5;
inline bool Grid2D::has_tsdf_2d() const {
  return grid_case() == kTsdf2D;
}
inline void Grid2D::set_has_tsdf_2d() {
  _oneof_case_[0] = kTsdf2D;
}
inline void Grid2D::clear_tsdf_2d() {
  if (has_tsdf_2d()) {
    delete grid_.tsdf_2d_;
    clear_has_grid();
  }
}
inline  const ::cartographer::mapping::proto::TSDF2D& Grid2D::tsdf_2d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.tsdf_2d)
  return has_tsdf_2d()
      ? *grid_.tsdf_2d_
      : ::cartographer::mapping::proto::TSDF2D::default_instance();
}
inline ::cartographer::mapping::proto::TSDF2D* Grid2D::mutable_tsdf_2d() {
  if (!has_tsdf_2d()) {
    clear_grid();
    set_has_tsdf_2d();
    grid_.tsdf_2d_ = new ::cartographer::mapping::proto::TSDF2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Grid2D.tsdf_2d)
  return grid_.tsdf_2d_;
}
inline ::cartographer::mapping::proto::TSDF2D* Grid2D::release_tsdf_2d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Grid2D.tsdf_2d)
  if (has_tsdf_2d()) {
    clear_has_grid();
    ::cartographer::mapping::proto::TSDF2D* temp = grid_.tsdf_2d_;
    grid_.tsdf_2d_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Grid2D::set_allocated_tsdf_2d(::cartographer::mapping::proto::TSDF2D* tsdf_2d) {
  clear_grid();
  if (tsdf_2d) {
    set_has_tsdf_2d();
    grid_.tsdf_2d_ = tsdf_2d;
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Grid2D.tsdf_2d)
}

// optional float min_correspondence_cost = 6;
inline void Grid2D::clear_min_correspondence_cost() {
  min_correspondence_cost_ = 0;
}
inline float Grid2D::min_correspondence_cost() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.min_correspondence_cost)
  return min_correspondence_cost_;
}
inline void Grid2D::set_min_correspondence_cost(float value) {
  
  min_correspondence_cost_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.min_correspondence_cost)
}

// optional float max_correspondence_cost = 7;
inline void Grid2D::clear_max_correspondence_cost() {
  max_correspondence_cost_ = 0;
}
inline float Grid2D::max_correspondence_cost() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Grid2D.max_correspondence_cost)
  return max_correspondence_cost_;
}
inline void Grid2D::set_max_correspondence_cost(float value) {
  
  max_correspondence_cost_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Grid2D.max_correspondence_cost)
}

inline bool Grid2D::has_grid() const {
  return grid_case() != GRID_NOT_SET;
}
inline void Grid2D::clear_has_grid() {
  _oneof_case_[0] = GRID_NOT_SET;
}
inline Grid2D::GridCase Grid2D::grid_case() const {
  return Grid2D::GridCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto__INCLUDED
