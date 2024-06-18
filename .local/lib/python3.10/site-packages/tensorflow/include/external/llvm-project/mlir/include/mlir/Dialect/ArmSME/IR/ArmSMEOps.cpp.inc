/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSMEOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::arm_sme::FMopa2WayOp,
::mlir::arm_sme::FMops2WayOp,
::mlir::arm_sme::GetTileOp,
::mlir::arm_sme::LoadTileSliceOp,
::mlir::arm_sme::MaterializeSSATileOp,
::mlir::arm_sme::MoveTileSliceToVectorOp,
::mlir::arm_sme::MoveVectorToTileSliceOp,
::mlir::arm_sme::OuterProductOp,
::mlir::arm_sme::SMopa2WayOp,
::mlir::arm_sme::SMopa4WayOp,
::mlir::arm_sme::SMops2WayOp,
::mlir::arm_sme::SMops4WayOp,
::mlir::arm_sme::StoreTileSliceOp,
::mlir::arm_sme::StreamingVLOp,
::mlir::arm_sme::SuMopa4WayOp,
::mlir::arm_sme::SuMops4WayOp,
::mlir::arm_sme::TileLoadOp,
::mlir::arm_sme::TileStoreOp,
::mlir::arm_sme::UMopa2WayOp,
::mlir::arm_sme::UMopa4WayOp,
::mlir::arm_sme::UMops2WayOp,
::mlir::arm_sme::UMops4WayOp,
::mlir::arm_sme::UsMopa4WayOp,
::mlir::arm_sme::UsMops4WayOp,
::mlir::arm_sme::ZeroOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_sme {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isF16())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1scalable vector of 16-bit float or bfloat16 type values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector<[4]x[4]xf32> of 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({16, 16})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({1, 1})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(128)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isBF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector type that fits into a SME tile, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector type that matches the size of a SVE predicate, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))) || ((elementType.isSignlessInteger(128))) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector type that matches the size of a SVE vector, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector<[4]x[4]xi32> of 32-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Layout of a tile slice";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArmSMEOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arm_sme::CombiningKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Kind of combining function";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArmSMEOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arm_sme::TypeSizeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Size of a vector element type";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArmSMEOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::FMopa2WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FMopa2WayOpGenericAdaptorBase::FMopa2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.fmopa_2way", odsAttrs.getContext());
}

FMopa2WayOpGenericAdaptorBase::FMopa2WayOpGenericAdaptorBase(FMopa2WayOp op) : FMopa2WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FMopa2WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr FMopa2WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FMopa2WayOpAdaptor::FMopa2WayOpAdaptor(FMopa2WayOp op) : FMopa2WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FMopa2WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FMopa2WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range FMopa2WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMopa2WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> FMopa2WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> FMopa2WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> FMopa2WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> FMopa2WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &FMopa2WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FMopa2WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange FMopa2WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange FMopa2WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange FMopa2WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> FMopa2WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FMopa2WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMopa2WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult FMopa2WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute FMopa2WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FMopa2WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> FMopa2WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void FMopa2WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void FMopa2WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult FMopa2WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult FMopa2WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void FMopa2WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void FMopa2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void FMopa2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMopa2WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FMopa2WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 2))))
    return emitOpError("failed to verify that tile element size equals input element size * 2");
  return ::mlir::success();
}

::mlir::LogicalResult FMopa2WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FMopa2WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<FMopa2WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isF16())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 16-bit float or bfloat16 type values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xf32> of 32-bit float values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FMopa2WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::FMopa2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::FMops2WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FMops2WayOpGenericAdaptorBase::FMops2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.fmops_2way", odsAttrs.getContext());
}

FMops2WayOpGenericAdaptorBase::FMops2WayOpGenericAdaptorBase(FMops2WayOp op) : FMops2WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FMops2WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr FMops2WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FMops2WayOpAdaptor::FMops2WayOpAdaptor(FMops2WayOp op) : FMops2WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FMops2WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FMops2WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range FMops2WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMops2WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> FMops2WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> FMops2WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> FMops2WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> FMops2WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &FMops2WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FMops2WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange FMops2WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange FMops2WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange FMops2WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> FMops2WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FMops2WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMops2WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult FMops2WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute FMops2WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FMops2WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> FMops2WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void FMops2WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void FMops2WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult FMops2WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult FMops2WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void FMops2WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void FMops2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void FMops2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMops2WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FMops2WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 2))))
    return emitOpError("failed to verify that tile element size equals input element size * 2");
  return ::mlir::success();
}

::mlir::LogicalResult FMops2WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FMops2WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<FMops2WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isF16())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 16-bit float or bfloat16 type values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xf32> of 32-bit float values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FMops2WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::FMops2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::GetTileOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetTileOpGenericAdaptorBase::GetTileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.get_tile", odsAttrs.getContext());
}

GetTileOpGenericAdaptorBase::GetTileOpGenericAdaptorBase(GetTileOp op) : GetTileOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetTileOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetTileOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GetTileOpAdaptor::GetTileOpAdaptor(GetTileOp op) : GetTileOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetTileOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetTileOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetTileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GetTileOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetTileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetTileOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GetTileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile) {
  odsState.addTypes(tile);
}

void GetTileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetTileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetTileOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetTileOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetTileOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type tileRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tileTypes(tileRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tileRawTypes[0] = type;
  }
  result.addTypes(tileTypes);
  return ::mlir::success();
}

void GetTileOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTile().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::GetTileOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::LoadTileSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoadTileSliceOpGenericAdaptorBase::LoadTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.load_tile_slice", odsAttrs.getContext());
}

LoadTileSliceOpGenericAdaptorBase::LoadTileSliceOpGenericAdaptorBase(LoadTileSliceOp op) : LoadTileSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LoadTileSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr LoadTileSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr LoadTileSliceOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout LoadTileSliceOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
LoadTileSliceOpAdaptor::LoadTileSliceOpAdaptor(LoadTileSliceOp op) : LoadTileSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LoadTileSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.load_tile_slice' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoadTileSliceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range LoadTileSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> LoadTileSliceOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> LoadTileSliceOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::Value LoadTileSliceOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Operation::operand_range LoadTileSliceOp::getIndices() {
  return getODSOperands(3);
}

::mlir::TypedValue<::mlir::IndexType> LoadTileSliceOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &LoadTileSliceOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LoadTileSliceOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LoadTileSliceOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange LoadTileSliceOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &LoadTileSliceOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LoadTileSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoadTileSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LoadTileSliceOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult LoadTileSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoadTileSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoadTileSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoadTileSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void LoadTileSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void LoadTileSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult LoadTileSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoadTileSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadTileSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr LoadTileSliceOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout LoadTileSliceOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void LoadTileSliceOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void LoadTileSliceOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(mask);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  odsState.addTypes(result);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(mask);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LoadTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(mask);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(mask);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(result);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(mask);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LoadTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(mask);
  odsState.addOperands(tile);
  odsState.addOperands(indices);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LoadTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LoadTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

void LoadTileSliceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal);
}

::mlir::LogicalResult LoadTileSliceOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that all of {tile, result} have same type");
  if (!((std::equal_to<>()(VectorType(VectorType::Builder(::llvm::cast<mlir::VectorType>((*this->getODSResults(0).begin()).getType())).dropDim(0).setElementType(IntegerType::get((*this->getODSResults(0).begin()).getType().getContext(), 1))), (*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that `mask` has i1 element type and the shape is a slice of `result`");
  return ::mlir::success();
}

::mlir::LogicalResult LoadTileSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult LoadTileSliceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult LoadTileSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<LoadTileSliceOp::Properties>().layout = layoutAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tileOperands, resultTypes[0], tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadTileSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTileSliceIndex();
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TileSliceLayout::Horizontal)) {
    _odsPrinter << ' ' << "layout";
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMask().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::LoadTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MaterializeSSATileOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaterializeSSATileOpGenericAdaptorBase::MaterializeSSATileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.materialize_ssa_tile", odsAttrs.getContext());
}

MaterializeSSATileOpGenericAdaptorBase::MaterializeSSATileOpGenericAdaptorBase(MaterializeSSATileOp op) : MaterializeSSATileOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaterializeSSATileOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaterializeSSATileOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaterializeSSATileOpAdaptor::MaterializeSSATileOpAdaptor(MaterializeSSATileOp op) : MaterializeSSATileOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaterializeSSATileOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaterializeSSATileOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaterializeSSATileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MaterializeSSATileOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaterializeSSATileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaterializeSSATileOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaterializeSSATileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile) {
  odsState.addTypes(tile);
}

void MaterializeSSATileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaterializeSSATileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaterializeSSATileOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaterializeSSATileOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MaterializeSSATileOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type tileRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tileTypes(tileRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tileRawTypes[0] = type;
  }
  result.addTypes(tileTypes);
  return ::mlir::success();
}

void MaterializeSSATileOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTile().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MaterializeSSATileOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MaterializeSSATileOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MoveTileSliceToVectorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MoveTileSliceToVectorOpGenericAdaptorBase::MoveTileSliceToVectorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.move_tile_slice_to_vector", odsAttrs.getContext());
}

MoveTileSliceToVectorOpGenericAdaptorBase::MoveTileSliceToVectorOpGenericAdaptorBase(MoveTileSliceToVectorOp op) : MoveTileSliceToVectorOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MoveTileSliceToVectorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MoveTileSliceToVectorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr MoveTileSliceToVectorOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout MoveTileSliceToVectorOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
MoveTileSliceToVectorOpAdaptor::MoveTileSliceToVectorOpAdaptor(MoveTileSliceToVectorOp op) : MoveTileSliceToVectorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MoveTileSliceToVectorOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.move_tile_slice_to_vector' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MoveTileSliceToVectorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MoveTileSliceToVectorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MoveTileSliceToVectorOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MoveTileSliceToVectorOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MoveTileSliceToVectorOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MoveTileSliceToVectorOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MoveTileSliceToVectorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MoveTileSliceToVectorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MoveTileSliceToVectorOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MoveTileSliceToVectorOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MoveTileSliceToVectorOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MoveTileSliceToVectorOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MoveTileSliceToVectorOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void MoveTileSliceToVectorOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void MoveTileSliceToVectorOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult MoveTileSliceToVectorOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MoveTileSliceToVectorOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MoveTileSliceToVectorOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr MoveTileSliceToVectorOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout MoveTileSliceToVectorOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void MoveTileSliceToVectorOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void MoveTileSliceToVectorOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  odsState.addTypes(result);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MoveTileSliceToVectorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(result);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MoveTileSliceToVectorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MoveTileSliceToVectorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MoveTileSliceToVectorOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

void MoveTileSliceToVectorOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal);
}

::mlir::LogicalResult MoveTileSliceToVectorOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(VectorType(VectorType::Builder(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType())).dropDim(0)), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that type of 'result' matches type of 'tile' slice");
  return ::mlir::success();
}

::mlir::LogicalResult MoveTileSliceToVectorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MoveTileSliceToVectorOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = VectorType(VectorType::Builder(::llvm::cast<mlir::VectorType>(operands[0].getType())).dropDim(0));
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MoveTileSliceToVectorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  ::mlir::Type tileRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tileTypes(tileRawTypes);

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<MoveTileSliceToVectorOp::Properties>().layout = layoutAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  if (parser.parseKeyword("from"))
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tileRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(tileOperands, tileTypes, tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MoveTileSliceToVectorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << "[";
  _odsPrinter << getTileSliceIndex();
  _odsPrinter << "]";
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TileSliceLayout::Horizontal)) {
    _odsPrinter << ' ' << "layout";
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "from";
  _odsPrinter << ' ';
  {
    auto type = getTile().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MoveTileSliceToVectorOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MoveVectorToTileSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MoveVectorToTileSliceOpGenericAdaptorBase::MoveVectorToTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.move_vector_to_tile_slice", odsAttrs.getContext());
}

MoveVectorToTileSliceOpGenericAdaptorBase::MoveVectorToTileSliceOpGenericAdaptorBase(MoveVectorToTileSliceOp op) : MoveVectorToTileSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MoveVectorToTileSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MoveVectorToTileSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr MoveVectorToTileSliceOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout MoveVectorToTileSliceOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
MoveVectorToTileSliceOpAdaptor::MoveVectorToTileSliceOpAdaptor(MoveVectorToTileSliceOp op) : MoveVectorToTileSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MoveVectorToTileSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.move_vector_to_tile_slice' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MoveVectorToTileSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MoveVectorToTileSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MoveVectorToTileSliceOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value MoveVectorToTileSliceOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MoveVectorToTileSliceOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MoveVectorToTileSliceOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MoveVectorToTileSliceOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MoveVectorToTileSliceOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MoveVectorToTileSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MoveVectorToTileSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MoveVectorToTileSliceOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MoveVectorToTileSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MoveVectorToTileSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MoveVectorToTileSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MoveVectorToTileSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void MoveVectorToTileSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void MoveVectorToTileSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult MoveVectorToTileSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MoveVectorToTileSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MoveVectorToTileSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr MoveVectorToTileSliceOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout MoveVectorToTileSliceOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void MoveVectorToTileSliceOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void MoveVectorToTileSliceOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  odsState.addTypes(result);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MoveVectorToTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(result);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MoveVectorToTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(vector);
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MoveVectorToTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MoveVectorToTileSliceOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

void MoveVectorToTileSliceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal);
}

::mlir::LogicalResult MoveVectorToTileSliceOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {tile, result} have same type");
  if (!((std::equal_to<>()(VectorType::get(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).getShape().drop_front(),::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).getElementType(),/*scalableDims=*/{true}), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that type of 'vector' matches type of 'tile' slice");
  return ::mlir::success();
}

::mlir::LogicalResult MoveVectorToTileSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MoveVectorToTileSliceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MoveVectorToTileSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<MoveVectorToTileSliceOp::Properties>().layout = layoutAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    vectorRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tileOperands, resultTypes[0], tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MoveVectorToTileSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTileSliceIndex();
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TileSliceLayout::Horizontal)) {
    _odsPrinter << ' ' << "layout";
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVector().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MoveVectorToTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::OuterProductOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OuterProductOpGenericAdaptorBase::OuterProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.outerproduct", odsAttrs.getContext());
}

OuterProductOpGenericAdaptorBase::OuterProductOpGenericAdaptorBase(OuterProductOp op) : OuterProductOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OuterProductOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr OuterProductOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::CombiningKindAttr OuterProductOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::CombiningKindAttr>(getProperties().kind);
  return attr;
}

::mlir::arm_sme::CombiningKind OuterProductOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

} // namespace detail
OuterProductOpAdaptor::OuterProductOpAdaptor(OuterProductOp op) : OuterProductOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OuterProductOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;

  if (tblgen_kind && !((::llvm::isa<::mlir::arm_sme::CombiningKindAttr>(tblgen_kind))))
    return emitError(loc, "'arm_sme.outerproduct' op ""attribute 'kind' failed to satisfy constraint: Kind of combining function");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OuterProductOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range OuterProductOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> OuterProductOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> OuterProductOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> OuterProductOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> OuterProductOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::Value OuterProductOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &OuterProductOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &OuterProductOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange OuterProductOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange OuterProductOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange OuterProductOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> OuterProductOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OuterProductOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OuterProductOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult OuterProductOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for kind in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kind` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute OuterProductOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code OuterProductOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.kind.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> OuterProductOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kind")
      return prop.kind;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void OuterProductOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void OuterProductOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kind) attrs.append("kind", prop.kind);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult OuterProductOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps1(attr, "kind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult OuterProductOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.kind)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void OuterProductOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.kind);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::arm_sme::CombiningKindAttr OuterProductOp::getKindAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::CombiningKindAttr>(getProperties().kind);
}

::mlir::arm_sme::CombiningKind OuterProductOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

void OuterProductOp::setKindAttr(::mlir::arm_sme::CombiningKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void OuterProductOp::setKind(::mlir::arm_sme::CombiningKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::arm_sme::CombiningKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }
  odsState.addTypes(result);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(OuterProductOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().kind = ::mlir::arm_sme::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.addTypes(result);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().kind = ::mlir::arm_sme::CombiningKindAttr::get(odsBuilder.getContext(), kind);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(OuterProductOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().kind = ::mlir::arm_sme::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OuterProductOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(OuterProductOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

void OuterProductOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.kind)
    properties.kind = ::mlir::arm_sme::CombiningKindAttr::get(odsBuilder.getContext(), CombiningKind::Add);
}

::mlir::LogicalResult OuterProductOp::verifyInvariantsImpl() {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps1(*this, tblgen_kind, "kind")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getLhs() || !getResult() || std::equal_to<>()([&]{  auto vectorType = ::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType());  int64_t size = vectorType.getDimSize(0);  return VectorType::get(    { size, size }, vectorType.getElementType(), { true, true });}(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that resulttype is derived from `lhs` and `rhs`");
  if (!((!getLhs() || !getAcc() || std::equal_to<>()([&]{  auto vectorType = ::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType());  int64_t size = vectorType.getDimSize(0);  return VectorType::get(    { size, size }, vectorType.getElementType(), { true, true });}(), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that acctype is derived from `lhs` and `rhs`");
  return ::mlir::success();
}

::mlir::LogicalResult OuterProductOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult OuterProductOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = [&]{  auto vectorType = ::llvm::cast<mlir::VectorType>(operands[0].getType());  int64_t size = vectorType.getDimSize(0);  return VectorType::get(    { size, size }, vectorType.getElementType(), { true, true });}();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult OuterProductOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arm_sme::CombiningKindAttr kindAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool kindClause = false;
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("kind"))) {

  if (kindClause) {
    return parser.emitError(parser.getNameLoc())
          << "`kind` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  kindClause = true;

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<OuterProductOp::Properties>().kind = kindAttr;
    } else if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<OuterProductOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))) || ((elementType.isSignlessInteger(128))) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be a vector type that matches the size of a SVE vector, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))) || ((elementType.isSignlessInteger(128))) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)))))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be a vector type that matches the size of a SVE vector, but got " << type;
    }
  }
  result.addTypes([&]{  auto vectorType = ::llvm::cast<mlir::VectorType>(lhsTypes[0]);  int64_t size = vectorType.getDimSize(0);  return VectorType::get(    { size, size }, vectorType.getElementType(), { true, true });}());
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, [&]{  auto vectorType = ::llvm::cast<mlir::VectorType>(lhsTypes[0]);  int64_t size = vectorType.getDimSize(0);  return VectorType::get(    { size, size }, vectorType.getElementType(), { true, true });}(), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OuterProductOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || (getKindAttr() && getKindAttr() != ::mlir::arm_sme::CombiningKindAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), CombiningKind::Add))) {
  _odsPrinter << ' ' << "kind";
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  }
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("kind");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getKindAttr();
     if(attr && (attr == ::mlir::arm_sme::CombiningKindAttr::get(odsBuilder.getContext(), CombiningKind::Add)))
       elidedAttrs.push_back("kind");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::OuterProductOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMopa2WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SMopa2WayOpGenericAdaptorBase::SMopa2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.smopa_2way", odsAttrs.getContext());
}

SMopa2WayOpGenericAdaptorBase::SMopa2WayOpGenericAdaptorBase(SMopa2WayOp op) : SMopa2WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SMopa2WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SMopa2WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SMopa2WayOpAdaptor::SMopa2WayOpAdaptor(SMopa2WayOp op) : SMopa2WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SMopa2WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SMopa2WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SMopa2WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMopa2WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa2WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa2WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa2WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa2WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &SMopa2WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SMopa2WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SMopa2WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMopa2WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMopa2WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SMopa2WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SMopa2WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMopa2WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SMopa2WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SMopa2WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SMopa2WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SMopa2WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SMopa2WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SMopa2WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SMopa2WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult SMopa2WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SMopa2WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void SMopa2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void SMopa2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SMopa2WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SMopa2WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 2))))
    return emitOpError("failed to verify that tile element size equals input element size * 2");
  return ::mlir::success();
}

::mlir::LogicalResult SMopa2WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SMopa2WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<SMopa2WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SMopa2WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMopa2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMopa4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SMopa4WayOpGenericAdaptorBase::SMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.smopa_4way", odsAttrs.getContext());
}

SMopa4WayOpGenericAdaptorBase::SMopa4WayOpGenericAdaptorBase(SMopa4WayOp op) : SMopa4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SMopa4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SMopa4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SMopa4WayOpAdaptor::SMopa4WayOpAdaptor(SMopa4WayOp op) : SMopa4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SMopa4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SMopa4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SMopa4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMopa4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMopa4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &SMopa4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SMopa4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SMopa4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMopa4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMopa4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SMopa4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SMopa4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMopa4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SMopa4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SMopa4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SMopa4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SMopa4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SMopa4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SMopa4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SMopa4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult SMopa4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SMopa4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void SMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void SMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SMopa4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SMopa4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult SMopa4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SMopa4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<SMopa4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SMopa4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMops2WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SMops2WayOpGenericAdaptorBase::SMops2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.smops_2way", odsAttrs.getContext());
}

SMops2WayOpGenericAdaptorBase::SMops2WayOpGenericAdaptorBase(SMops2WayOp op) : SMops2WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SMops2WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SMops2WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SMops2WayOpAdaptor::SMops2WayOpAdaptor(SMops2WayOp op) : SMops2WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SMops2WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SMops2WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SMops2WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMops2WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops2WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops2WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops2WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops2WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &SMops2WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SMops2WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SMops2WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMops2WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMops2WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SMops2WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SMops2WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMops2WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SMops2WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SMops2WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SMops2WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SMops2WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SMops2WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SMops2WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SMops2WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult SMops2WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SMops2WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void SMops2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void SMops2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SMops2WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SMops2WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 2))))
    return emitOpError("failed to verify that tile element size equals input element size * 2");
  return ::mlir::success();
}

::mlir::LogicalResult SMops2WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SMops2WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<SMops2WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SMops2WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMops2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMops4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SMops4WayOpGenericAdaptorBase::SMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.smops_4way", odsAttrs.getContext());
}

SMops4WayOpGenericAdaptorBase::SMops4WayOpGenericAdaptorBase(SMops4WayOp op) : SMops4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SMops4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SMops4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SMops4WayOpAdaptor::SMops4WayOpAdaptor(SMops4WayOp op) : SMops4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SMops4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SMops4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SMops4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMops4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SMops4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &SMops4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SMops4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SMops4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMops4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SMops4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SMops4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SMops4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SMops4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SMops4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SMops4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SMops4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SMops4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SMops4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SMops4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SMops4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult SMops4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SMops4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void SMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void SMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SMops4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SMops4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult SMops4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SMops4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<SMops4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SMops4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::StoreTileSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
StoreTileSliceOpGenericAdaptorBase::StoreTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.store_tile_slice", odsAttrs.getContext());
}

StoreTileSliceOpGenericAdaptorBase::StoreTileSliceOpGenericAdaptorBase(StoreTileSliceOp op) : StoreTileSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> StoreTileSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr StoreTileSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr StoreTileSliceOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout StoreTileSliceOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
StoreTileSliceOpAdaptor::StoreTileSliceOpAdaptor(StoreTileSliceOp op) : StoreTileSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StoreTileSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.store_tile_slice' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StoreTileSliceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range StoreTileSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value StoreTileSliceOp::getTile() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> StoreTileSliceOp::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> StoreTileSliceOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::MemRefType> StoreTileSliceOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(3).begin());
}

::mlir::Operation::operand_range StoreTileSliceOp::getIndices() {
  return getODSOperands(4);
}

::mlir::OpOperand &StoreTileSliceOp::getTileMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &StoreTileSliceOp::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &StoreTileSliceOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &StoreTileSliceOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange StoreTileSliceOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> StoreTileSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range StoreTileSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult StoreTileSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute StoreTileSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code StoreTileSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> StoreTileSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
  return std::nullopt;
}

void StoreTileSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
}

void StoreTileSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
}

::mlir::LogicalResult StoreTileSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult StoreTileSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreTileSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);
}

::mlir::arm_sme::TileSliceLayoutAttr StoreTileSliceOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout StoreTileSliceOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void StoreTileSliceOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void StoreTileSliceOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(mask);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(mask);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(mask);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
}

void StoreTileSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(tile);
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(mask);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreTileSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void StoreTileSliceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal);
}

::mlir::LogicalResult StoreTileSliceOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(VectorType(VectorType::Builder(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType())).dropDim(0).setElementType(IntegerType::get((*this->getODSOperands(0).begin()).getType().getContext(), 1))), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that `mask` has i1 element type and the shape is a slice of `tile`");
  return ::mlir::success();
}

::mlir::LogicalResult StoreTileSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult StoreTileSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tileRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tileOperands(tileRawOperands);  ::llvm::SMLoc tileOperandsLoc;
  (void)tileOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tile_slice_indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tile_slice_indexOperands(tile_slice_indexRawOperands);  ::llvm::SMLoc tile_slice_indexOperandsLoc;
  (void)tile_slice_indexOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type tileRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tileTypes(tileRawTypes);

  tileOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tileRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tile_slice_indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tile_slice_indexRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<StoreTileSliceOp::Properties>().layout = layoutAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tileRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(tileOperands, tileTypes, tileOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_slice_indexOperands, odsBuildableType0, tile_slice_indexOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreTileSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTile();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTileSliceIndex();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TileSliceLayout::Horizontal)) {
    _odsPrinter << ' ' << "layout";
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMask().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getTile().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void StoreTileSliceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::StoreTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::StreamingVLOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
StreamingVLOpGenericAdaptorBase::StreamingVLOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.streaming_vl", odsAttrs.getContext());
}

StreamingVLOpGenericAdaptorBase::StreamingVLOpGenericAdaptorBase(StreamingVLOp op) : StreamingVLOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> StreamingVLOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr StreamingVLOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TypeSizeAttr StreamingVLOpGenericAdaptorBase::getTypeSizeAttr() {
  auto attr = ::llvm::cast<::mlir::arm_sme::TypeSizeAttr>(getProperties().type_size);
  return attr;
}

::mlir::arm_sme::TypeSize StreamingVLOpGenericAdaptorBase::getTypeSize() {
  auto attr = getTypeSizeAttr();
  return attr.getValue();
}

} // namespace detail
StreamingVLOpAdaptor::StreamingVLOpAdaptor(StreamingVLOp op) : StreamingVLOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StreamingVLOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_type_size = getProperties().type_size; (void)tblgen_type_size;
  if (!tblgen_type_size) return emitError(loc, "'arm_sme.streaming_vl' op ""requires attribute 'type_size'");

  if (tblgen_type_size && !((::llvm::isa<::mlir::arm_sme::TypeSizeAttr>(tblgen_type_size))))
    return emitError(loc, "'arm_sme.streaming_vl' op ""attribute 'type_size' failed to satisfy constraint: Size of a vector element type");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StreamingVLOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range StreamingVLOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> StreamingVLOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range StreamingVLOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult StreamingVLOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.type_size;
       auto attr = dict.get("type_size");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for type_size in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `type_size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute StreamingVLOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.type_size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("type_size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code StreamingVLOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.type_size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> StreamingVLOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "type_size")
      return prop.type_size;
  return std::nullopt;
}

void StreamingVLOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "type_size") {
       prop.type_size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.type_size)>>(value);
       return;
    }
}

void StreamingVLOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.type_size) attrs.append("type_size", prop.type_size);
}

::mlir::LogicalResult StreamingVLOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTypeSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps2(attr, "type_size", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult StreamingVLOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.type_size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void StreamingVLOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.type_size);
}

::mlir::arm_sme::TypeSizeAttr StreamingVLOp::getTypeSizeAttr() {
  return ::llvm::cast<::mlir::arm_sme::TypeSizeAttr>(getProperties().type_size);
}

::mlir::arm_sme::TypeSize StreamingVLOp::getTypeSize() {
  auto attr = getTypeSizeAttr();
  return attr.getValue();
}

void StreamingVLOp::setTypeSizeAttr(::mlir::arm_sme::TypeSizeAttr attr) {
  (*this)->setAttr(getTypeSizeAttrName(), attr);
}

void StreamingVLOp::setTypeSize(::mlir::arm_sme::TypeSize attrValue) {
  (*this)->setAttr(getTypeSizeAttrName(), ::mlir::arm_sme::TypeSizeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::arm_sme::TypeSizeAttr type_size) {
  odsState.getOrAddProperties<Properties>().type_size = type_size;
  odsState.addTypes(resultType0);
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arm_sme::TypeSizeAttr type_size) {
  odsState.getOrAddProperties<Properties>().type_size = type_size;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(StreamingVLOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arm_sme::TypeSizeAttr type_size) {
  odsState.getOrAddProperties<Properties>().type_size = type_size;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::arm_sme::TypeSize type_size) {
  odsState.getOrAddProperties<Properties>().type_size = ::mlir::arm_sme::TypeSizeAttr::get(odsBuilder.getContext(), type_size);
  odsState.addTypes(resultType0);
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arm_sme::TypeSize type_size) {
  odsState.getOrAddProperties<Properties>().type_size = ::mlir::arm_sme::TypeSizeAttr::get(odsBuilder.getContext(), type_size);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(StreamingVLOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arm_sme::TypeSize type_size) {
  odsState.getOrAddProperties<Properties>().type_size = ::mlir::arm_sme::TypeSizeAttr::get(odsBuilder.getContext(), type_size);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StreamingVLOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void StreamingVLOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(StreamingVLOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult StreamingVLOp::verifyInvariantsImpl() {
  auto tblgen_type_size = getProperties().type_size; (void)tblgen_type_size;
  if (!tblgen_type_size) return emitOpError("requires attribute 'type_size'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps2(*this, tblgen_type_size, "type_size")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult StreamingVLOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult StreamingVLOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult StreamingVLOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::arm_sme::TypeSizeAttr type_sizeAttr;

  if (parser.parseCustomAttributeWithFallback(type_sizeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (type_sizeAttr) result.getOrAddProperties<StreamingVLOp::Properties>().type_size = type_sizeAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void StreamingVLOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getTypeSizeAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("type_size");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void StreamingVLOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::StreamingVLOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SuMopa4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SuMopa4WayOpGenericAdaptorBase::SuMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.sumopa_4way", odsAttrs.getContext());
}

SuMopa4WayOpGenericAdaptorBase::SuMopa4WayOpGenericAdaptorBase(SuMopa4WayOp op) : SuMopa4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SuMopa4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SuMopa4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SuMopa4WayOpAdaptor::SuMopa4WayOpAdaptor(SuMopa4WayOp op) : SuMopa4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SuMopa4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SuMopa4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SuMopa4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SuMopa4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMopa4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMopa4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMopa4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMopa4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &SuMopa4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SuMopa4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SuMopa4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SuMopa4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SuMopa4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SuMopa4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SuMopa4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SuMopa4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SuMopa4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SuMopa4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SuMopa4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SuMopa4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SuMopa4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SuMopa4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SuMopa4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult SuMopa4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SuMopa4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void SuMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void SuMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SuMopa4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SuMopa4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult SuMopa4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SuMopa4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<SuMopa4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SuMopa4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SuMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SuMops4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SuMops4WayOpGenericAdaptorBase::SuMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.sumops_4way", odsAttrs.getContext());
}

SuMops4WayOpGenericAdaptorBase::SuMops4WayOpGenericAdaptorBase(SuMops4WayOp op) : SuMops4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SuMops4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SuMops4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SuMops4WayOpAdaptor::SuMops4WayOpAdaptor(SuMops4WayOp op) : SuMops4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SuMops4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SuMops4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SuMops4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SuMops4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMops4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMops4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMops4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> SuMops4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &SuMops4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SuMops4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SuMops4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SuMops4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SuMops4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SuMops4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SuMops4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SuMops4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SuMops4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SuMops4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SuMops4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SuMops4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SuMops4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SuMops4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SuMops4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult SuMops4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SuMops4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void SuMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void SuMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SuMops4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SuMops4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult SuMops4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SuMops4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<SuMops4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SuMops4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SuMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::TileLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileLoadOpGenericAdaptorBase::TileLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.tile_load", odsAttrs.getContext());
}

TileLoadOpGenericAdaptorBase::TileLoadOpGenericAdaptorBase(TileLoadOp op) : TileLoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TileLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr TileLoadOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout TileLoadOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
TileLoadOpAdaptor::TileLoadOpAdaptor(TileLoadOp op) : TileLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileLoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.tile_load' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileLoadOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TileLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TileLoadOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileLoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::Value TileLoadOp::getPadding() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> TileLoadOp::getMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &TileLoadOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TileLoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileLoadOp::getPaddingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileLoadOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TileLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TileLoadOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult TileLoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TileLoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileLoadOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TileLoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TileLoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TileLoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TileLoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileLoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TileLoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::arm_sme::TileSliceLayoutAttr TileLoadOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout TileLoadOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void TileLoadOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void TileLoadOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, VectorType resultType, Value base, ValueRange indices, TileSliceLayout layout) {
      build(odsBuilder, odsState, resultType, base, indices, {}, {}, layout);
    
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, VectorType resultType, Value base, ValueRange indices) {
      build(odsBuilder, odsState, resultType, base, indices, {}, {}, {});
    
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (padding)
    odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (padding ? 1 : 0), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  odsState.addTypes(result);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (padding)
    odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (padding ? 1 : 0), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (padding)
    odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (padding ? 1 : 0), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  odsState.addTypes(result);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (padding)
    odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (padding ? 1 : 0), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal);
}

::mlir::LogicalResult TileLoadOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((!getResult() || !getPadding() || std::equal_to<>()(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getElementType(), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that padding type matches element type of result");
  if (!((!getResult() || !getMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSResults(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as result");
  if (!((bool(getPadding()) == bool(getMask()))))
    return emitOpError("failed to verify that both `padding` and `mask` should be provided or neither");
  return ::mlir::success();
}

::mlir::LogicalResult TileLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> paddingOperands;
  ::llvm::SMLoc paddingOperandsLoc;
  (void)paddingOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> maskOperands;
  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    paddingOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      paddingOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    maskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      maskOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<TileLoadOp::Properties>().layout = layoutAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(paddingOperands.size()), static_cast<int32_t>(maskOperands.size())}), result.getOrAddProperties<TileLoadOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({16, 16})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({1, 1})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(128)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isBF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be a vector type that fits into a SME tile, but got " << type;
    }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(paddingOperands, ::llvm::cast<VectorType>(resultTypes[0]).getElementType(), paddingOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, ::llvm::cast<mlir::VectorType>(resultTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), maskOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getMask()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getPadding())
      _odsPrinter << value;
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getMask())
      _odsPrinter << value;
  }
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TileSliceLayout::Horizontal)) {
    _odsPrinter << ' ' << "layout";
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileLoadOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::TileStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileStoreOpGenericAdaptorBase::TileStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.tile_store", odsAttrs.getContext());
}

TileStoreOpGenericAdaptorBase::TileStoreOpGenericAdaptorBase(TileStoreOp op) : TileStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TileStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arm_sme::TileSliceLayoutAttr TileStoreOpGenericAdaptorBase::getLayoutAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
  return attr;
}

::mlir::arm_sme::TileSliceLayout TileStoreOpGenericAdaptorBase::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

} // namespace detail
TileStoreOpAdaptor::TileStoreOpAdaptor(TileStoreOp op) : TileStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileStoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (tblgen_layout && !((::llvm::isa<::mlir::arm_sme::TileSliceLayoutAttr>(tblgen_layout))))
    return emitError(loc, "'arm_sme.tile_store' op ""attribute 'layout' failed to satisfy constraint: Layout of a tile slice");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileStoreOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TileStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TileStoreOp::getValueToStore() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> TileStoreOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range TileStoreOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::VectorType> TileStoreOp::getMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &TileStoreOp::getValueToStoreMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TileStoreOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TileStoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileStoreOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TileStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult TileStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.layout;
       auto attr = dict.get("layout");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for layout in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TileStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layout",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileStoreOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.layout.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TileStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "layout")
      return prop.layout;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TileStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "layout") {
       prop.layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layout)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TileStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.layout) attrs.append("layout", prop.layout);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TileStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(attr, "layout", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.layout)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TileStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.layout);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::arm_sme::TileSliceLayoutAttr TileStoreOp::getLayoutAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(getProperties().layout);
}

::mlir::arm_sme::TileSliceLayout TileStoreOp::getLayout() {
  auto attr = getLayoutAttr();
  return attr.getValue();
}

void TileStoreOp::setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr) {
  (*this)->setAttr(getLayoutAttrName(), attr);
}

void TileStoreOp::setLayout(::mlir::arm_sme::TileSliceLayout attrValue) {
  (*this)->setAttr(getLayoutAttrName(), ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value valueToStore, Value base, ValueRange indices) {
      build(odsBuilder, odsState, valueToStore, base, indices, {});
    
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (layout) {
    odsState.getOrAddProperties<Properties>().layout = layout;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), layout);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.layout)
    properties.layout = ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal);
}

::mlir::LogicalResult TileStoreOp::verifyInvariantsImpl() {
  auto tblgen_layout = getProperties().layout; (void)tblgen_layout;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEOps0(*this, tblgen_layout, "layout")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((!getValueToStore() || !getMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as valueToStore");
  return ::mlir::success();
}

::mlir::LogicalResult TileStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueToStoreRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueToStoreOperands(valueToStoreRawOperands);  ::llvm::SMLoc valueToStoreOperandsLoc;
  (void)valueToStoreOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> maskOperands;
  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::arm_sme::TileSliceLayoutAttr layoutAttr;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type valueToStoreRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueToStoreTypes(valueToStoreRawTypes);

  valueToStoreOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueToStoreRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    maskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      maskOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {

  if (parser.parseCustomAttributeWithFallback(layoutAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (layoutAttr) result.getOrAddProperties<TileStoreOp::Properties>().layout = layoutAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueToStoreRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(maskOperands.size())}), result.getOrAddProperties<TileStoreOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : valueToStoreTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({16, 16})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({1, 1})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(128)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({8, 8})))) && ([](::mlir::Type elementType) { return (elementType.isBF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'valueToStore' must be a vector type that fits into a SME tile, but got " << type;
    }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(valueToStoreOperands, valueToStoreTypes, valueToStoreOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, ::llvm::cast<mlir::VectorType>(valueToStoreTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), maskOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValueToStore();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getMask()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getMask())
      _odsPrinter << value;
  }
  if (getLayoutAttr() && getLayoutAttr() != ::mlir::arm_sme::TileSliceLayoutAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TileSliceLayout::Horizontal)) {
    _odsPrinter << ' ' << "layout";
  _odsPrinter.printStrippedAttrOrType(getLayoutAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("layout");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLayoutAttr();
     if(attr && (attr == ::mlir::arm_sme::TileSliceLayoutAttr::get(odsBuilder.getContext(), TileSliceLayout::Horizontal)))
       elidedAttrs.push_back("layout");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValueToStore().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileStoreOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMopa2WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UMopa2WayOpGenericAdaptorBase::UMopa2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.umopa_2way", odsAttrs.getContext());
}

UMopa2WayOpGenericAdaptorBase::UMopa2WayOpGenericAdaptorBase(UMopa2WayOp op) : UMopa2WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UMopa2WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UMopa2WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UMopa2WayOpAdaptor::UMopa2WayOpAdaptor(UMopa2WayOp op) : UMopa2WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UMopa2WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UMopa2WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UMopa2WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMopa2WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa2WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa2WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa2WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa2WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &UMopa2WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UMopa2WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange UMopa2WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMopa2WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMopa2WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UMopa2WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UMopa2WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMopa2WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult UMopa2WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UMopa2WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UMopa2WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UMopa2WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UMopa2WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UMopa2WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UMopa2WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult UMopa2WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UMopa2WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void UMopa2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void UMopa2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UMopa2WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UMopa2WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 2))))
    return emitOpError("failed to verify that tile element size equals input element size * 2");
  return ::mlir::success();
}

::mlir::LogicalResult UMopa2WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UMopa2WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<UMopa2WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UMopa2WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMopa2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMopa4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UMopa4WayOpGenericAdaptorBase::UMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.umopa_4way", odsAttrs.getContext());
}

UMopa4WayOpGenericAdaptorBase::UMopa4WayOpGenericAdaptorBase(UMopa4WayOp op) : UMopa4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UMopa4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UMopa4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UMopa4WayOpAdaptor::UMopa4WayOpAdaptor(UMopa4WayOp op) : UMopa4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UMopa4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UMopa4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UMopa4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMopa4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMopa4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &UMopa4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UMopa4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange UMopa4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMopa4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMopa4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UMopa4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UMopa4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMopa4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult UMopa4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UMopa4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UMopa4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UMopa4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UMopa4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UMopa4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UMopa4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult UMopa4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UMopa4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void UMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void UMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UMopa4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UMopa4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult UMopa4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UMopa4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<UMopa4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UMopa4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMops2WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UMops2WayOpGenericAdaptorBase::UMops2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.umops_2way", odsAttrs.getContext());
}

UMops2WayOpGenericAdaptorBase::UMops2WayOpGenericAdaptorBase(UMops2WayOp op) : UMops2WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UMops2WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UMops2WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UMops2WayOpAdaptor::UMops2WayOpAdaptor(UMops2WayOp op) : UMops2WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UMops2WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UMops2WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UMops2WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMops2WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops2WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops2WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops2WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops2WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &UMops2WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UMops2WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange UMops2WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMops2WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMops2WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UMops2WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UMops2WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMops2WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult UMops2WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UMops2WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UMops2WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UMops2WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UMops2WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UMops2WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UMops2WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult UMops2WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UMops2WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void UMops2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void UMops2WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UMops2WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UMops2WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 2))))
    return emitOpError("failed to verify that tile element size equals input element size * 2");
  return ::mlir::success();
}

::mlir::LogicalResult UMops2WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UMops2WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<UMops2WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UMops2WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMops2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMops4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UMops4WayOpGenericAdaptorBase::UMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.umops_4way", odsAttrs.getContext());
}

UMops4WayOpGenericAdaptorBase::UMops4WayOpGenericAdaptorBase(UMops4WayOp op) : UMops4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UMops4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UMops4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UMops4WayOpAdaptor::UMops4WayOpAdaptor(UMops4WayOp op) : UMops4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UMops4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UMops4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UMops4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMops4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UMops4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &UMops4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UMops4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange UMops4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMops4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UMops4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UMops4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UMops4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UMops4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult UMops4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UMops4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UMops4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UMops4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UMops4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UMops4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UMops4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult UMops4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UMops4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void UMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void UMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UMops4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UMops4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult UMops4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UMops4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<UMops4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UMops4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UsMopa4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UsMopa4WayOpGenericAdaptorBase::UsMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.usmopa_4way", odsAttrs.getContext());
}

UsMopa4WayOpGenericAdaptorBase::UsMopa4WayOpGenericAdaptorBase(UsMopa4WayOp op) : UsMopa4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UsMopa4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UsMopa4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UsMopa4WayOpAdaptor::UsMopa4WayOpAdaptor(UsMopa4WayOp op) : UsMopa4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UsMopa4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UsMopa4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UsMopa4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UsMopa4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMopa4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMopa4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMopa4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMopa4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &UsMopa4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UsMopa4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange UsMopa4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UsMopa4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UsMopa4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UsMopa4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UsMopa4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UsMopa4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult UsMopa4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UsMopa4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UsMopa4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UsMopa4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UsMopa4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UsMopa4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UsMopa4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult UsMopa4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UsMopa4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void UsMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void UsMopa4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UsMopa4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UsMopa4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult UsMopa4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UsMopa4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<UsMopa4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UsMopa4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UsMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UsMops4WayOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UsMops4WayOpGenericAdaptorBase::UsMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.usmops_4way", odsAttrs.getContext());
}

UsMops4WayOpGenericAdaptorBase::UsMops4WayOpGenericAdaptorBase(UsMops4WayOp op) : UsMops4WayOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UsMops4WayOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UsMops4WayOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UsMops4WayOpAdaptor::UsMops4WayOpAdaptor(UsMops4WayOp op) : UsMops4WayOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UsMops4WayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UsMops4WayOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UsMops4WayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UsMops4WayOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMops4WayOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMops4WayOp::getLhsMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMops4WayOp::getRhsMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> UsMops4WayOp::getAcc() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &UsMops4WayOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UsMops4WayOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange UsMops4WayOp::getLhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UsMops4WayOp::getRhsMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UsMops4WayOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UsMops4WayOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UsMops4WayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UsMops4WayOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult UsMops4WayOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UsMops4WayOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UsMops4WayOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UsMops4WayOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UsMops4WayOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UsMops4WayOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UsMops4WayOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult UsMops4WayOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UsMops4WayOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void UsMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(result);
}

void UsMops4WayOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (lhsMask)
    odsState.addOperands(lhsMask);
  if (rhsMask)
    odsState.addOperands(rhsMask);
  if (acc)
    odsState.addOperands(acc);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, (lhsMask ? 1 : 0), (rhsMask ? 1 : 0), (acc ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UsMops4WayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UsMops4WayOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  if (!((!getLhs() || !getLhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(0).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that lhsMask has i1 element type and same shape as lhs");
  if (!((!getRhs() || !getRhsMask() || std::equal_to<>()(::llvm::cast<mlir::VectorType>((*this->getODSOperands(1).begin()).getType()).cloneWith({}, IntegerType::get(this->getOperation()->getContext(), 1)), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that rhsMask has i1 element type and same shape as rhs");
  if (!((bool(getLhsMask()) == bool(getRhsMask()))))
    return emitOpError("failed to verify that both `lhsMask` and `rhsMask` should be provided or neither");
  if (!((!getResult() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that `result` and `acc` have the same type");
  if (!((getTileType().getElementTypeBitWidth() == (getLhsType().getElementTypeBitWidth() * 4))))
    return emitOpError("failed to verify that tile element size equals input element size * 4");
  return ::mlir::success();
}

::mlir::LogicalResult UsMops4WayOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UsMops4WayOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lhsMaskOperands;
  ::llvm::SMLoc lhsMaskOperandsLoc;
  (void)lhsMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rhsMaskOperands;
  ::llvm::SMLoc rhsMaskOperandsLoc;
  (void)rhsMaskOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  bool accClause = false;
  bool masksClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("acc"))) {

  if (accClause) {
    return parser.emitError(parser.getNameLoc())
          << "`acc` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  accClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    accOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      accOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("masks"))) {

  if (masksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`masks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  masksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    rhsMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rhsMaskOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(lhsMaskOperands.size()), static_cast<int32_t>(rhsMaskOperands.size()), static_cast<int32_t>(accOperands.size())}), result.getOrAddProperties<UsMops4WayOp::Properties>().operandSegmentSizes.begin());
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)))) || ((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be  of ranks 1scalable vector of 8-bit signless integer values of length 16 or  of ranks 1scalable vector of 16-bit signless integer values of length 8, but got " << type;
    }
  }
  for (::mlir::Type type : rhsTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'rhs' must be vector of any type values, but got " << type;
    }
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4, 4})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).allDimsScalable()))) && ((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({2, 2})))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector<[4]x[4]xi32> of 32-bit signless integer values or vector<[2]x[2]xi64> of 64-bit signless integer values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lhsMaskOperands, ::llvm::cast<mlir::VectorType>(lhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), lhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsMaskOperands, ::llvm::cast<mlir::VectorType>(rhsTypes[0]).cloneWith({}, IntegerType::get(parser.getContext(), 1)), rhsMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(resultTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UsMops4WayOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (false || getAcc()) {
  _odsPrinter << ' ' << "acc";
  _odsPrinter << "(";
  if (::mlir::Value value = getAcc())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getLhsMask() || getRhsMask()) {
  _odsPrinter << ' ' << "masks";
  _odsPrinter << "(";
  if (::mlir::Value value = getLhsMask())
    _odsPrinter << value;
  _odsPrinter << ",";
  _odsPrinter << ' ';
  if (::mlir::Value value = getRhsMask())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UsMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::ZeroOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ZeroOpGenericAdaptorBase::ZeroOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.zero", odsAttrs.getContext());
}

ZeroOpGenericAdaptorBase::ZeroOpGenericAdaptorBase(ZeroOp op) : ZeroOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ZeroOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ZeroOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ZeroOpAdaptor::ZeroOpAdaptor(ZeroOp op) : ZeroOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ZeroOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ZeroOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ZeroOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ZeroOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ZeroOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ZeroOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ZeroOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ZeroOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ZeroOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ZeroOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ZeroOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ZeroOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ZeroOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::ZeroOp)


#endif  // GET_OP_CLASSES

