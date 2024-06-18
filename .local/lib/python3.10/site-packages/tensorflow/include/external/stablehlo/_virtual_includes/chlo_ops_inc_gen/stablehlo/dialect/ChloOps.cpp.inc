/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ChloOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::chlo::AcosOp,
::mlir::chlo::AcoshOp,
::mlir::chlo::AsinOp,
::mlir::chlo::AsinhOp,
::mlir::chlo::AtanOp,
::mlir::chlo::AtanhOp,
::mlir::chlo::BesselI1eOp,
::mlir::chlo::BroadcastAddOp,
::mlir::chlo::BroadcastAndOp,
::mlir::chlo::BroadcastAtan2Op,
::mlir::chlo::BroadcastCompareOp,
::mlir::chlo::BroadcastComplexOp,
::mlir::chlo::BroadcastDivOp,
::mlir::chlo::BroadcastMaxOp,
::mlir::chlo::BroadcastMinOp,
::mlir::chlo::BroadcastMulOp,
::mlir::chlo::BroadcastNextAfterOp,
::mlir::chlo::BroadcastOrOp,
::mlir::chlo::BroadcastPolygammaOp,
::mlir::chlo::BroadcastPowOp,
::mlir::chlo::BroadcastRemOp,
::mlir::chlo::BroadcastSelectOp,
::mlir::chlo::BroadcastShiftLeftOp,
::mlir::chlo::BroadcastShiftRightArithmeticOp,
::mlir::chlo::BroadcastShiftRightLogicalOp,
::mlir::chlo::BroadcastSubOp,
::mlir::chlo::BroadcastXorOp,
::mlir::chlo::BroadcastZetaOp,
::mlir::chlo::ConjOp,
::mlir::chlo::ConstantLikeOp,
::mlir::chlo::ConstantOp,
::mlir::chlo::CoshOp,
::mlir::chlo::DigammaOp,
::mlir::chlo::DynamicReshapeOp,
::mlir::chlo::ErfInvOp,
::mlir::chlo::ErfOp,
::mlir::chlo::ErfcOp,
::mlir::chlo::IsInfOp,
::mlir::chlo::IsNegInfOp,
::mlir::chlo::IsPosInfOp,
::mlir::chlo::LgammaOp,
::mlir::chlo::MinimumBroadcastShapesOp,
::mlir::chlo::NextAfterOp,
::mlir::chlo::PolygammaOp,
::mlir::chlo::RankSpecializationClusterOp,
::mlir::chlo::RankSpecializationClusterYieldOp,
::mlir::chlo::SinhOp,
::mlir::chlo::TanOp,
::mlir::chlo::TopKOp,
::mlir::chlo::ZetaOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace chlo {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isF16())) || ((elementType.isF32())) || ((elementType.isF64())) || ((elementType.isBF16()))) || (((::llvm::isa<::mlir::ComplexType>(elementType))) && (((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF32())) || ((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF64())))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of f8E4M3B11FNUZ type or f8E4M3FN type or f8E4M3FNUZ type or f8E5M2 type or f8E5M2FNUZ type or 16-bit float or 32-bit float or 64-bit float or bfloat16 type or complex type with 32-bit float or 64-bit float elements values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isF16())) || ((elementType.isF32())) || ((elementType.isF64())) || ((elementType.isBF16()))) || ((elementType.isSignlessInteger(1))) || ((((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64)))) || (((elementType.isUnsignedInteger(4))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || ((elementType.isUnsignedInteger(32))) || ((elementType.isUnsignedInteger(64))))) || (((::llvm::isa<::mlir::ComplexType>(elementType))) && (((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF32())) || ((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF64())))) || ((((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 4)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 4)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 8)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 8)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 16)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 16)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 32)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 32)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned()))))) || (((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 4)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 4)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 8)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 8)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 16)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 16)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 32)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 32)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of f8E4M3B11FNUZ type or f8E4M3FN type or f8E4M3FNUZ type or f8E5M2 type or f8E5M2FNUZ type or 16-bit float or 32-bit float or 64-bit float or bfloat16 type or pred (AKA boolean or 1-bit integer) or 4/8/16/32/64-bit signless integer or 4/8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements or 4/8/16/32-bit uniform quantized signed integer or 4/8/16/32-bit uniform quantized unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(1))) || ((((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64)))) || (((elementType.isUnsignedInteger(4))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || ((elementType.isUnsignedInteger(32))) || ((elementType.isUnsignedInteger(64))))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of pred (AKA boolean or 1-bit integer) or 4/8/16/32/64-bit signless integer or 4/8/16/32/64-bit unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of pred (AKA boolean or 1-bit integer) values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isF16())) || ((elementType.isF32())) || ((elementType.isF64())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of f8E4M3B11FNUZ type or f8E4M3FN type or f8E4M3FNUZ type or f8E5M2 type or f8E5M2FNUZ type or 16-bit float or 32-bit float or 64-bit float or bfloat16 type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((::llvm::isa<::mlir::ComplexType>(elementType))) && (((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF32())) || ((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF64()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of complex type with 32-bit float or 64-bit float elements values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && ((::llvm::cast<::mlir::ShapedType>(type).hasStaticShape()))) && ([](::mlir::Type elementType) { return (((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isF16())) || ((elementType.isF32())) || ((elementType.isF64())) || ((elementType.isBF16()))) || ((elementType.isSignlessInteger(1))) || ((((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64)))) || (((elementType.isUnsignedInteger(4))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || ((elementType.isUnsignedInteger(32))) || ((elementType.isUnsignedInteger(64))))) || (((::llvm::isa<::mlir::ComplexType>(elementType))) && (((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF32())) || ((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF64())))) || ((((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 4)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 4)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 8)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 8)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 16)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 16)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 32)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 32)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned()))))) || (((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 4)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 4)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 8)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 8)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 16)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 16)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 32)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 32)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be statically shaped tensor of f8E4M3B11FNUZ type or f8E4M3FN type or f8E4M3FNUZ type or f8E5M2 type or f8E5M2FNUZ type or 16-bit float or 32-bit float or 64-bit float or bfloat16 type or pred (AKA boolean or 1-bit integer) or 4/8/16/32/64-bit signless integer or 4/8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements or 4/8/16/32-bit uniform quantized signed integer or 4/8/16/32-bit uniform quantized unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1)))) && ([](::mlir::Type elementType) { return ((::llvm::isa<::mlir::IndexType>(elementType))) || ((((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64)))) || (((elementType.isUnsignedInteger(4))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || ((elementType.isUnsignedInteger(32))) || ((elementType.isUnsignedInteger(64))))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1D tensor of index or 4/8/16/32/64-bit signless integer or 4/8/16/32/64-bit unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1)))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IndexType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of 1D tensor of index values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ChloOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isF16())) || ((elementType.isF32())) || ((elementType.isF64())) || ((elementType.isBF16()))) || ((elementType.isSignlessInteger(1))) || ((((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64)))) || (((elementType.isUnsignedInteger(4))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || ((elementType.isUnsignedInteger(32))) || ((elementType.isUnsignedInteger(64))))) || (((::llvm::isa<::mlir::ComplexType>(elementType))) && (((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF32())) || ((::llvm::cast<::mlir::ComplexType>(elementType).getElementType().isF64())))) || ((((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 4)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 4)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 8)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 8)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 16)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 16)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 32)) && ((elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 32)) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned()))))) || (((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 4)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 4)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 8)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 8)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 16)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 16)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))) || ((((elementType.isa<mlir::quant::UniformQuantizedType>())) && ((elementType.cast<mlir::quant::UniformQuantizedType>().getStorageTypeIntegralWidth() == 32)) && ((!elementType.cast<mlir::quant::UniformQuantizedType>().isSigned()))) || (((elementType.isa<mlir::quant::UniformQuantizedPerAxisType>())) && ((elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().getStorageTypeIntegralWidth() == 32)) && ((!elementType.cast<mlir::quant::UniformQuantizedPerAxisType>().isSigned())))))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of tensor of f8E4M3B11FNUZ type or f8E4M3FN type or f8E4M3FNUZ type or f8E5M2 type or f8E5M2FNUZ type or 16-bit float or 32-bit float or 64-bit float or bfloat16 type or pred (AKA boolean or 1-bit integer) or 4/8/16/32/64-bit signless integer or 4/8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements or 4/8/16/32-bit uniform quantized signed integer or 4/8/16/32-bit uniform quantized unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ChloOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::chlo::ComparisonDirectionAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Which comparison operation to perform.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ChloOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::chlo::ComparisonTypeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Which comparison type to use.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ChloOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::TypedAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: TypedAttr instance";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ChloOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ElementsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: constant vector/tensor attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ChloOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ChloOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ChloOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_ChloOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AcosOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AcosOpGenericAdaptorBase::AcosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.acos", odsAttrs.getContext());
}

AcosOpGenericAdaptorBase::AcosOpGenericAdaptorBase(AcosOp op) : AcosOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AcosOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AcosOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AcosOpAdaptor::AcosOpAdaptor(AcosOp op) : AcosOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AcosOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AcosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AcosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AcosOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AcosOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AcosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AcosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AcosOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AcosOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AcosOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AcosOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AcosOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AcosOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AcosOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcosOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AcosOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::AcosOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AcoshOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AcoshOpGenericAdaptorBase::AcoshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.acosh", odsAttrs.getContext());
}

AcoshOpGenericAdaptorBase::AcoshOpGenericAdaptorBase(AcoshOp op) : AcoshOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AcoshOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AcoshOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AcoshOpAdaptor::AcoshOpAdaptor(AcoshOp op) : AcoshOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AcoshOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AcoshOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AcoshOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AcoshOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AcoshOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AcoshOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AcoshOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AcoshOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AcoshOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AcoshOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AcoshOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AcoshOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AcoshOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AcoshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcoshOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AcoshOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::AcoshOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AsinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsinOpGenericAdaptorBase::AsinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.asin", odsAttrs.getContext());
}

AsinOpGenericAdaptorBase::AsinOpGenericAdaptorBase(AsinOp op) : AsinOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsinOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsinOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AsinOpAdaptor::AsinOpAdaptor(AsinOp op) : AsinOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsinOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AsinOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AsinOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AsinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AsinOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AsinOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AsinOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AsinOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AsinOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AsinOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::AsinOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AsinhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsinhOpGenericAdaptorBase::AsinhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.asinh", odsAttrs.getContext());
}

AsinhOpGenericAdaptorBase::AsinhOpGenericAdaptorBase(AsinhOp op) : AsinhOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsinhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsinhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AsinhOpAdaptor::AsinhOpAdaptor(AsinhOp op) : AsinhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsinhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsinhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsinhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AsinhOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AsinhOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AsinhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsinhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AsinhOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AsinhOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsinhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AsinhOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AsinhOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AsinhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsinhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AsinhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::AsinhOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AtanOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtanOpGenericAdaptorBase::AtanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.atan", odsAttrs.getContext());
}

AtanOpGenericAdaptorBase::AtanOpGenericAdaptorBase(AtanOp op) : AtanOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtanOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtanOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AtanOpAdaptor::AtanOpAdaptor(AtanOp op) : AtanOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtanOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtanOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtanOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AtanOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AtanOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AtanOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtanOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AtanOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AtanOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtanOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AtanOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AtanOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtanOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AtanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AtanOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::AtanOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AtanhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtanhOpGenericAdaptorBase::AtanhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.atanh", odsAttrs.getContext());
}

AtanhOpGenericAdaptorBase::AtanhOpGenericAdaptorBase(AtanhOp op) : AtanhOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtanhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtanhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AtanhOpAdaptor::AtanhOpAdaptor(AtanhOp op) : AtanhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtanhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtanhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtanhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AtanhOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AtanhOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AtanhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtanhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AtanhOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AtanhOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtanhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AtanhOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AtanhOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtanhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AtanhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AtanhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::AtanhOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BesselI1eOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BesselI1eOpGenericAdaptorBase::BesselI1eOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.bessel_i1e", odsAttrs.getContext());
}

BesselI1eOpGenericAdaptorBase::BesselI1eOpGenericAdaptorBase(BesselI1eOp op) : BesselI1eOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BesselI1eOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BesselI1eOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BesselI1eOpAdaptor::BesselI1eOpAdaptor(BesselI1eOp op) : BesselI1eOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BesselI1eOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BesselI1eOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BesselI1eOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BesselI1eOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BesselI1eOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BesselI1eOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BesselI1eOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BesselI1eOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void BesselI1eOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void BesselI1eOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BesselI1eOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BesselI1eOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BesselI1eOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BesselI1eOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BesselI1eOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BesselI1eOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BesselI1eOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BesselI1eOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BesselI1eOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BesselI1eOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BesselI1eOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAddOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastAddOpGenericAdaptorBase::BroadcastAddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_add", odsAttrs.getContext());
}

BroadcastAddOpGenericAdaptorBase::BroadcastAddOpGenericAdaptorBase(BroadcastAddOp op) : BroadcastAddOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastAddOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastAddOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastAddOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastAddOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastAddOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastAddOpAdaptor::BroadcastAddOpAdaptor(BroadcastAddOp op) : BroadcastAddOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastAddOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastAddOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_add' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastAddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastAddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastAddOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastAddOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastAddOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastAddOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastAddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastAddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastAddOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastAddOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastAddOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastAddOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastAddOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastAddOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastAddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastAddOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastAddOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastAddOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastAddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastAddOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastAddOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastAddOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastAddOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastAddOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAndOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastAndOpGenericAdaptorBase::BroadcastAndOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_and", odsAttrs.getContext());
}

BroadcastAndOpGenericAdaptorBase::BroadcastAndOpGenericAdaptorBase(BroadcastAndOp op) : BroadcastAndOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastAndOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastAndOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastAndOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastAndOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastAndOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastAndOpAdaptor::BroadcastAndOpAdaptor(BroadcastAndOp op) : BroadcastAndOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastAndOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastAndOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_and' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastAndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastAndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastAndOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastAndOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastAndOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastAndOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastAndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastAndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastAndOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastAndOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastAndOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastAndOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastAndOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastAndOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastAndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastAndOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastAndOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastAndOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastAndOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastAndOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastAndOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastAndOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastAndOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastAndOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAtan2Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastAtan2OpGenericAdaptorBase::BroadcastAtan2OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_atan2", odsAttrs.getContext());
}

BroadcastAtan2OpGenericAdaptorBase::BroadcastAtan2OpGenericAdaptorBase(BroadcastAtan2Op op) : BroadcastAtan2OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastAtan2OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastAtan2OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastAtan2OpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastAtan2Op::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastAtan2OpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastAtan2OpAdaptor::BroadcastAtan2OpAdaptor(BroadcastAtan2Op op) : BroadcastAtan2OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastAtan2OpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastAtan2Op::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_atan2' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastAtan2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastAtan2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastAtan2Op::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastAtan2Op::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastAtan2Op::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastAtan2Op::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastAtan2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastAtan2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastAtan2Op::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastAtan2Op::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastAtan2Op::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastAtan2Op::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastAtan2Op::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastAtan2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastAtan2Op::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastAtan2Op::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastAtan2Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastAtan2Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastAtan2Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastAtan2Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastAtan2Op::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastAtan2Op::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastAtan2Op)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastCompareOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastCompareOpGenericAdaptorBase::BroadcastCompareOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_compare", odsAttrs.getContext());
}

BroadcastCompareOpGenericAdaptorBase::BroadcastCompareOpGenericAdaptorBase(BroadcastCompareOp op) : BroadcastCompareOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastCompareOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastCompareOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastCompareOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, BroadcastCompareOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastCompareOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

::mlir::chlo::ComparisonDirectionAttr BroadcastCompareOpGenericAdaptorBase::getComparisonDirectionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::chlo::ComparisonDirectionAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastCompareOp::getComparisonDirectionAttrName(*odsOpName)));
  return attr;
}

::mlir::chlo::ComparisonDirection BroadcastCompareOpGenericAdaptorBase::getComparisonDirection() {
  auto attr = getComparisonDirectionAttr();
  return attr.getValue();
}

::mlir::chlo::ComparisonTypeAttr BroadcastCompareOpGenericAdaptorBase::getCompareTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::chlo::ComparisonTypeAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, BroadcastCompareOp::getCompareTypeAttrName(*odsOpName)));
  return attr;
}

::std::optional<::mlir::chlo::ComparisonType> BroadcastCompareOpGenericAdaptorBase::getCompareType() {
  auto attr = getCompareTypeAttr();
  return attr ? ::std::optional<::mlir::chlo::ComparisonType>(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
BroadcastCompareOpAdaptor::BroadcastCompareOpAdaptor(BroadcastCompareOp op) : BroadcastCompareOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastCompareOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_comparison_direction;
  ::mlir::Attribute tblgen_broadcast_dimensions;
  ::mlir::Attribute tblgen_compare_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'chlo.broadcast_compare' op ""requires attribute 'comparison_direction'");
    if (namedAttrIt->getName() == BroadcastCompareOp::getComparisonDirectionAttrName(*odsOpName)) {
      tblgen_comparison_direction = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == BroadcastCompareOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == BroadcastCompareOp::getCompareTypeAttrName(*odsOpName)) {
      tblgen_compare_type = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_compare' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_comparison_direction && !((::llvm::isa<::mlir::chlo::ComparisonDirectionAttr>(tblgen_comparison_direction))))
    return emitError(loc, "'chlo.broadcast_compare' op ""attribute 'comparison_direction' failed to satisfy constraint: Which comparison operation to perform.");

  if (tblgen_compare_type && !((::llvm::isa<::mlir::chlo::ComparisonTypeAttr>(tblgen_compare_type))))
    return emitError(loc, "'chlo.broadcast_compare' op ""attribute 'compare_type' failed to satisfy constraint: Which comparison type to use.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastCompareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastCompareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastCompareOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastCompareOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastCompareOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastCompareOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastCompareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastCompareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastCompareOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastCompareOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

::mlir::chlo::ComparisonDirectionAttr BroadcastCompareOp::getComparisonDirectionAttr() {
  return ::llvm::cast<::mlir::chlo::ComparisonDirectionAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getComparisonDirectionAttrName()));
}

::mlir::chlo::ComparisonDirection BroadcastCompareOp::getComparisonDirection() {
  auto attr = getComparisonDirectionAttr();
  return attr.getValue();
}

::mlir::chlo::ComparisonTypeAttr BroadcastCompareOp::getCompareTypeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::chlo::ComparisonTypeAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getCompareTypeAttrName()));
}

::std::optional<::mlir::chlo::ComparisonType> BroadcastCompareOp::getCompareType() {
  auto attr = getCompareTypeAttr();
  return attr ? ::std::optional<::mlir::chlo::ComparisonType>(attr.getValue()) : (::std::nullopt);
}

void BroadcastCompareOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastCompareOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastCompareOp::setComparisonDirectionAttr(::mlir::chlo::ComparisonDirectionAttr attr) {
  (*this)->setAttr(getComparisonDirectionAttrName(), attr);
}

void BroadcastCompareOp::setComparisonDirection(::mlir::chlo::ComparisonDirection attrValue) {
  (*this)->setAttr(getComparisonDirectionAttrName(), ::mlir::chlo::ComparisonDirectionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void BroadcastCompareOp::setCompareTypeAttr(::mlir::chlo::ComparisonTypeAttr attr) {
  (*this)->setAttr(getCompareTypeAttrName(), attr);
}

void BroadcastCompareOp::setCompareType(::std::optional<::mlir::chlo::ComparisonType> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getCompareTypeAttrName(), ::mlir::chlo::ComparisonTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getCompareTypeAttrName());
}

::mlir::Attribute BroadcastCompareOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastCompareOp::removeCompareTypeAttr() {
return (*this)->removeAttr(getCompareTypeAttrName());
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirectionAttr comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), comparison_direction);
  if (compare_type) {
    odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  }
  odsState.addTypes(resultType0);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirectionAttr comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), comparison_direction);
  if (compare_type) {
    odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastCompareOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirectionAttr comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), comparison_direction);
  if (compare_type) {
    odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), ::mlir::chlo::ComparisonDirectionAttr::get(odsBuilder.getContext(), comparison_direction));
  if (compare_type) {
    odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  }
  odsState.addTypes(resultType0);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), ::mlir::chlo::ComparisonDirectionAttr::get(odsBuilder.getContext(), comparison_direction));
  if (compare_type) {
    odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastCompareOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addAttribute(getComparisonDirectionAttrName(odsState.name), ::mlir::chlo::ComparisonDirectionAttr::get(odsBuilder.getContext(), comparison_direction));
  if (compare_type) {
    odsState.addAttribute(getCompareTypeAttrName(odsState.name), compare_type);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastCompareOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastCompareOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_comparison_direction;
  ::mlir::Attribute tblgen_broadcast_dimensions;
  ::mlir::Attribute tblgen_compare_type;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'comparison_direction'");
    if (namedAttrIt->getName() == getComparisonDirectionAttrName()) {
      tblgen_comparison_direction = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getCompareTypeAttrName()) {
      tblgen_compare_type = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps1(*this, tblgen_comparison_direction, "comparison_direction")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps2(*this, tblgen_compare_type, "compare_type")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastCompareOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastCompareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastCompareOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastCompareOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastCompareOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastCompareOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastCompareOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastComplexOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastComplexOpGenericAdaptorBase::BroadcastComplexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_complex", odsAttrs.getContext());
}

BroadcastComplexOpGenericAdaptorBase::BroadcastComplexOpGenericAdaptorBase(BroadcastComplexOp op) : BroadcastComplexOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastComplexOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastComplexOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastComplexOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastComplexOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastComplexOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastComplexOpAdaptor::BroadcastComplexOpAdaptor(BroadcastComplexOp op) : BroadcastComplexOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastComplexOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastComplexOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_complex' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastComplexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastComplexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastComplexOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastComplexOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastComplexOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastComplexOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastComplexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastComplexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastComplexOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastComplexOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastComplexOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastComplexOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastComplexOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastComplexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastComplexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastComplexOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastComplexOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastComplexOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastComplexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastComplexOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastComplexOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastComplexOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastComplexOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastComplexOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastDivOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastDivOpGenericAdaptorBase::BroadcastDivOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_divide", odsAttrs.getContext());
}

BroadcastDivOpGenericAdaptorBase::BroadcastDivOpGenericAdaptorBase(BroadcastDivOp op) : BroadcastDivOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastDivOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastDivOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastDivOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastDivOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastDivOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastDivOpAdaptor::BroadcastDivOpAdaptor(BroadcastDivOp op) : BroadcastDivOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastDivOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastDivOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_divide' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastDivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastDivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastDivOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastDivOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastDivOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastDivOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastDivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastDivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastDivOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastDivOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastDivOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastDivOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastDivOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastDivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastDivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastDivOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastDivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastDivOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastDivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastDivOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastDivOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastDivOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastDivOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastDivOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastDivOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastDivOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastDivOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastDivOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastMaxOpGenericAdaptorBase::BroadcastMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_maximum", odsAttrs.getContext());
}

BroadcastMaxOpGenericAdaptorBase::BroadcastMaxOpGenericAdaptorBase(BroadcastMaxOp op) : BroadcastMaxOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastMaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastMaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastMaxOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastMaxOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastMaxOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastMaxOpAdaptor::BroadcastMaxOpAdaptor(BroadcastMaxOp op) : BroadcastMaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastMaxOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastMaxOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_maximum' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastMaxOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastMaxOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastMaxOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastMaxOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastMaxOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastMaxOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastMaxOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastMaxOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastMaxOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastMaxOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastMaxOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastMaxOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastMaxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastMaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastMaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastMaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastMaxOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastMaxOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastMaxOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastMinOpGenericAdaptorBase::BroadcastMinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_minimum", odsAttrs.getContext());
}

BroadcastMinOpGenericAdaptorBase::BroadcastMinOpGenericAdaptorBase(BroadcastMinOp op) : BroadcastMinOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastMinOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastMinOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastMinOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastMinOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastMinOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastMinOpAdaptor::BroadcastMinOpAdaptor(BroadcastMinOp op) : BroadcastMinOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastMinOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastMinOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_minimum' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastMinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastMinOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastMinOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastMinOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastMinOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastMinOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastMinOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastMinOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastMinOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastMinOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastMinOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastMinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastMinOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastMinOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastMinOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastMinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastMinOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastMinOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastMinOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastMinOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastMinOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastMulOpGenericAdaptorBase::BroadcastMulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_multiply", odsAttrs.getContext());
}

BroadcastMulOpGenericAdaptorBase::BroadcastMulOpGenericAdaptorBase(BroadcastMulOp op) : BroadcastMulOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastMulOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastMulOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastMulOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastMulOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastMulOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastMulOpAdaptor::BroadcastMulOpAdaptor(BroadcastMulOp op) : BroadcastMulOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastMulOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastMulOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_multiply' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastMulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastMulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastMulOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastMulOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastMulOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastMulOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastMulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastMulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastMulOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastMulOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastMulOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastMulOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastMulOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastMulOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastMulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastMulOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastMulOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastMulOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastMulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastMulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastMulOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastMulOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastMulOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastMulOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastNextAfterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastNextAfterOpGenericAdaptorBase::BroadcastNextAfterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_next_after", odsAttrs.getContext());
}

BroadcastNextAfterOpGenericAdaptorBase::BroadcastNextAfterOpGenericAdaptorBase(BroadcastNextAfterOp op) : BroadcastNextAfterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastNextAfterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastNextAfterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastNextAfterOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastNextAfterOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastNextAfterOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastNextAfterOpAdaptor::BroadcastNextAfterOpAdaptor(BroadcastNextAfterOp op) : BroadcastNextAfterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastNextAfterOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastNextAfterOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_next_after' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastNextAfterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastNextAfterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastNextAfterOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastNextAfterOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastNextAfterOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastNextAfterOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastNextAfterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastNextAfterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastNextAfterOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastNextAfterOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastNextAfterOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastNextAfterOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastNextAfterOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastNextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastNextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastNextAfterOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastNextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastNextAfterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastNextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastNextAfterOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastNextAfterOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastNextAfterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastNextAfterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastNextAfterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastNextAfterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastNextAfterOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastNextAfterOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastNextAfterOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastOrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastOrOpGenericAdaptorBase::BroadcastOrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_or", odsAttrs.getContext());
}

BroadcastOrOpGenericAdaptorBase::BroadcastOrOpGenericAdaptorBase(BroadcastOrOp op) : BroadcastOrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastOrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastOrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastOrOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastOrOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastOrOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastOrOpAdaptor::BroadcastOrOpAdaptor(BroadcastOrOp op) : BroadcastOrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastOrOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastOrOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_or' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastOrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastOrOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastOrOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastOrOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastOrOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastOrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastOrOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastOrOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastOrOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastOrOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastOrOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastOrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastOrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastOrOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastOrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastOrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastOrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastOrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastOrOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastOrOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastOrOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastPolygammaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastPolygammaOpGenericAdaptorBase::BroadcastPolygammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_polygamma", odsAttrs.getContext());
}

BroadcastPolygammaOpGenericAdaptorBase::BroadcastPolygammaOpGenericAdaptorBase(BroadcastPolygammaOp op) : BroadcastPolygammaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastPolygammaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastPolygammaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastPolygammaOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastPolygammaOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastPolygammaOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastPolygammaOpAdaptor::BroadcastPolygammaOpAdaptor(BroadcastPolygammaOp op) : BroadcastPolygammaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastPolygammaOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastPolygammaOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_polygamma' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastPolygammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastPolygammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastPolygammaOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastPolygammaOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastPolygammaOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastPolygammaOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastPolygammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastPolygammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastPolygammaOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastPolygammaOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastPolygammaOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastPolygammaOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastPolygammaOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastPolygammaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastPolygammaOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastPolygammaOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastPolygammaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastPolygammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastPolygammaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastPolygammaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastPolygammaOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastPolygammaOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastPolygammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastPowOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastPowOpGenericAdaptorBase::BroadcastPowOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_power", odsAttrs.getContext());
}

BroadcastPowOpGenericAdaptorBase::BroadcastPowOpGenericAdaptorBase(BroadcastPowOp op) : BroadcastPowOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastPowOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastPowOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastPowOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastPowOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastPowOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastPowOpAdaptor::BroadcastPowOpAdaptor(BroadcastPowOp op) : BroadcastPowOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastPowOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastPowOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_power' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastPowOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastPowOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastPowOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastPowOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastPowOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastPowOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastPowOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastPowOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastPowOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastPowOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastPowOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastPowOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastPowOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastPowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastPowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastPowOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastPowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastPowOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastPowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastPowOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastPowOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastPowOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastPowOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastPowOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastPowOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastPowOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastPowOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastPowOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastRemOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastRemOpGenericAdaptorBase::BroadcastRemOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_remainder", odsAttrs.getContext());
}

BroadcastRemOpGenericAdaptorBase::BroadcastRemOpGenericAdaptorBase(BroadcastRemOp op) : BroadcastRemOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastRemOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastRemOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastRemOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastRemOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastRemOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastRemOpAdaptor::BroadcastRemOpAdaptor(BroadcastRemOp op) : BroadcastRemOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastRemOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastRemOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_remainder' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastRemOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastRemOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastRemOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastRemOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastRemOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastRemOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastRemOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastRemOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastRemOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastRemOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastRemOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastRemOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastRemOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastRemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastRemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastRemOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastRemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastRemOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastRemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastRemOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastRemOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastRemOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastRemOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastRemOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastRemOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastRemOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastRemOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastRemOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastSelectOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastSelectOpGenericAdaptorBase::BroadcastSelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_select", odsAttrs.getContext());
}

BroadcastSelectOpGenericAdaptorBase::BroadcastSelectOpGenericAdaptorBase(BroadcastSelectOp op) : BroadcastSelectOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastSelectOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastSelectOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BroadcastSelectOpAdaptor::BroadcastSelectOpAdaptor(BroadcastSelectOp op) : BroadcastSelectOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastSelectOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastSelectOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastSelectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastSelectOp::getPred() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastSelectOp::getOnTrue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastSelectOp::getOnFalse() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &BroadcastSelectOp::getPredMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastSelectOp::getOnTrueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastSelectOp::getOnFalseMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastSelectOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastSelectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BroadcastSelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  odsState.addTypes(resultType0);
}

void BroadcastSelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastSelectOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastSelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastSelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastSelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastSelectOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastSelectOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastSelectOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastSelectOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand predRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> predOperands(predRawOperands);  ::llvm::SMLoc predOperandsLoc;
  (void)predOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand on_trueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> on_trueOperands(on_trueRawOperands);  ::llvm::SMLoc on_trueOperandsLoc;
  (void)on_trueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand on_falseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> on_falseOperands(on_falseRawOperands);  ::llvm::SMLoc on_falseOperandsLoc;
  (void)on_falseOperandsLoc;
  ::mlir::Type predRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> predTypes(predRawTypes);
  ::mlir::Type on_trueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> on_trueTypes(on_trueRawTypes);
  ::mlir::Type on_falseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> on_falseTypes(on_falseRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  predOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(predRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  on_trueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(on_trueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  on_falseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(on_falseRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    predRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    on_trueRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    on_falseRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(predOperands, predTypes, predOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(on_trueOperands, on_trueTypes, on_trueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(on_falseOperands, on_falseTypes, on_falseOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastSelectOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getPred();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOnTrue();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOnFalse();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getPred().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOnTrue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOnFalse().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastSelectOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastSelectOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastSelectOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastSelectOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftLeftOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastShiftLeftOpGenericAdaptorBase::BroadcastShiftLeftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_shift_left", odsAttrs.getContext());
}

BroadcastShiftLeftOpGenericAdaptorBase::BroadcastShiftLeftOpGenericAdaptorBase(BroadcastShiftLeftOp op) : BroadcastShiftLeftOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastShiftLeftOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastShiftLeftOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastShiftLeftOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastShiftLeftOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastShiftLeftOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastShiftLeftOpAdaptor::BroadcastShiftLeftOpAdaptor(BroadcastShiftLeftOp op) : BroadcastShiftLeftOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastShiftLeftOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastShiftLeftOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_shift_left' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastShiftLeftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastShiftLeftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastShiftLeftOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastShiftLeftOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastShiftLeftOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastShiftLeftOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastShiftLeftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastShiftLeftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastShiftLeftOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastShiftLeftOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastShiftLeftOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastShiftLeftOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastShiftLeftOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastShiftLeftOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastShiftLeftOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastShiftLeftOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastShiftLeftOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastShiftLeftOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastShiftLeftOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastShiftLeftOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastShiftLeftOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastShiftLeftOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastShiftLeftOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftRightArithmeticOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastShiftRightArithmeticOpGenericAdaptorBase::BroadcastShiftRightArithmeticOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_shift_right_arithmetic", odsAttrs.getContext());
}

BroadcastShiftRightArithmeticOpGenericAdaptorBase::BroadcastShiftRightArithmeticOpGenericAdaptorBase(BroadcastShiftRightArithmeticOp op) : BroadcastShiftRightArithmeticOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastShiftRightArithmeticOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastShiftRightArithmeticOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastShiftRightArithmeticOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastShiftRightArithmeticOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastShiftRightArithmeticOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastShiftRightArithmeticOpAdaptor::BroadcastShiftRightArithmeticOpAdaptor(BroadcastShiftRightArithmeticOp op) : BroadcastShiftRightArithmeticOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastShiftRightArithmeticOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastShiftRightArithmeticOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_shift_right_arithmetic' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastShiftRightArithmeticOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastShiftRightArithmeticOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastShiftRightArithmeticOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastShiftRightArithmeticOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastShiftRightArithmeticOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastShiftRightArithmeticOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastShiftRightArithmeticOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastShiftRightArithmeticOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastShiftRightArithmeticOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastShiftRightArithmeticOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastShiftRightArithmeticOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastShiftRightArithmeticOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastShiftRightArithmeticOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastShiftRightArithmeticOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastShiftRightArithmeticOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastShiftRightArithmeticOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastShiftRightArithmeticOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastShiftRightArithmeticOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastShiftRightArithmeticOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastShiftRightArithmeticOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastShiftRightArithmeticOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastShiftRightArithmeticOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastShiftRightArithmeticOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftRightLogicalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastShiftRightLogicalOpGenericAdaptorBase::BroadcastShiftRightLogicalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_shift_right_logical", odsAttrs.getContext());
}

BroadcastShiftRightLogicalOpGenericAdaptorBase::BroadcastShiftRightLogicalOpGenericAdaptorBase(BroadcastShiftRightLogicalOp op) : BroadcastShiftRightLogicalOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastShiftRightLogicalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastShiftRightLogicalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastShiftRightLogicalOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastShiftRightLogicalOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastShiftRightLogicalOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastShiftRightLogicalOpAdaptor::BroadcastShiftRightLogicalOpAdaptor(BroadcastShiftRightLogicalOp op) : BroadcastShiftRightLogicalOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastShiftRightLogicalOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastShiftRightLogicalOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_shift_right_logical' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastShiftRightLogicalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastShiftRightLogicalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastShiftRightLogicalOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastShiftRightLogicalOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastShiftRightLogicalOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastShiftRightLogicalOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastShiftRightLogicalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastShiftRightLogicalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastShiftRightLogicalOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastShiftRightLogicalOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastShiftRightLogicalOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastShiftRightLogicalOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastShiftRightLogicalOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastShiftRightLogicalOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastShiftRightLogicalOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastShiftRightLogicalOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastShiftRightLogicalOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastShiftRightLogicalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastShiftRightLogicalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastShiftRightLogicalOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastShiftRightLogicalOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastShiftRightLogicalOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastShiftRightLogicalOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastSubOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastSubOpGenericAdaptorBase::BroadcastSubOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_subtract", odsAttrs.getContext());
}

BroadcastSubOpGenericAdaptorBase::BroadcastSubOpGenericAdaptorBase(BroadcastSubOp op) : BroadcastSubOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastSubOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastSubOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastSubOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastSubOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastSubOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastSubOpAdaptor::BroadcastSubOpAdaptor(BroadcastSubOp op) : BroadcastSubOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastSubOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastSubOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_subtract' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastSubOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastSubOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastSubOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastSubOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastSubOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastSubOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastSubOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastSubOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastSubOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastSubOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastSubOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastSubOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastSubOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastSubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastSubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastSubOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastSubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastSubOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastSubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastSubOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastSubOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastSubOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastSubOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastSubOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastSubOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastSubOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastSubOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastSubOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastXorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastXorOpGenericAdaptorBase::BroadcastXorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_xor", odsAttrs.getContext());
}

BroadcastXorOpGenericAdaptorBase::BroadcastXorOpGenericAdaptorBase(BroadcastXorOp op) : BroadcastXorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastXorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastXorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastXorOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastXorOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastXorOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastXorOpAdaptor::BroadcastXorOpAdaptor(BroadcastXorOp op) : BroadcastXorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastXorOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastXorOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_xor' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastXorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastXorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastXorOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastXorOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastXorOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastXorOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastXorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastXorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastXorOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastXorOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastXorOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastXorOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastXorOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastXorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastXorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastXorOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastXorOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastXorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastXorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastXorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastXorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastXorOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastXorOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastXorOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastZetaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastZetaOpGenericAdaptorBase::BroadcastZetaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.broadcast_zeta", odsAttrs.getContext());
}

BroadcastZetaOpGenericAdaptorBase::BroadcastZetaOpGenericAdaptorBase(BroadcastZetaOp op) : BroadcastZetaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastZetaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastZetaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr BroadcastZetaOpGenericAdaptorBase::getBroadcastDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, BroadcastZetaOp::getBroadcastDimensionsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastZetaOpGenericAdaptorBase::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
BroadcastZetaOpAdaptor::BroadcastZetaOpAdaptor(BroadcastZetaOp op) : BroadcastZetaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastZetaOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == BroadcastZetaOp::getBroadcastDimensionsAttrName(*odsOpName)) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_broadcast_dimensions && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_broadcast_dimensions))))
    return emitError(loc, "'chlo.broadcast_zeta' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastZetaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastZetaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BroadcastZetaOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BroadcastZetaOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BroadcastZetaOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BroadcastZetaOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastZetaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastZetaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr BroadcastZetaOp::getBroadcastDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getBroadcastDimensionsAttrName()));
}

::std::optional<::llvm::ArrayRef<int64_t>> BroadcastZetaOp::getBroadcastDimensions() {
  auto attr = getBroadcastDimensionsAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void BroadcastZetaOp::setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBroadcastDimensionsAttrName(), attr);
}

void BroadcastZetaOp::setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBroadcastDimensionsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

::mlir::Attribute BroadcastZetaOp::removeBroadcastDimensionsAttr() {
return (*this)->removeAttr(getBroadcastDimensionsAttrName());
}

void BroadcastZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BroadcastZetaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
    odsState.addAttribute(getBroadcastDimensionsAttrName(odsState.name), broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastZetaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BroadcastZetaOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BroadcastZetaOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_broadcast_dimensions;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getBroadcastDimensionsAttrName()) {
      tblgen_broadcast_dimensions = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps0(*this, tblgen_broadcast_dimensions, "broadcast_dimensions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastZetaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastZetaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastZetaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void BroadcastZetaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
BroadcastZetaOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(BroadcastZetaOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastZetaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConjOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConjOpGenericAdaptorBase::ConjOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.conj", odsAttrs.getContext());
}

ConjOpGenericAdaptorBase::ConjOpGenericAdaptorBase(ConjOp op) : ConjOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConjOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConjOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConjOpAdaptor::ConjOpAdaptor(ConjOp op) : ConjOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConjOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConjOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConjOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConjOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConjOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConjOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConjOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConjOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ConjOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConjOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ConjOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ConjOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConjOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConjOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConjOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ConjOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ConjOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConstantLikeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstantLikeOpGenericAdaptorBase::ConstantLikeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.constant_like", odsAttrs.getContext());
}

ConstantLikeOpGenericAdaptorBase::ConstantLikeOpGenericAdaptorBase(ConstantLikeOp op) : ConstantLikeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstantLikeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstantLikeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::TypedAttr ConstantLikeOpGenericAdaptorBase::getValueAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::TypedAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ConstantLikeOp::getValueAttrName(*odsOpName)));
  return attr;
}

::mlir::TypedAttr ConstantLikeOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ConstantLikeOpAdaptor::ConstantLikeOpAdaptor(ConstantLikeOp op) : ConstantLikeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstantLikeOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'chlo.constant_like' op ""requires attribute 'value'");
    if (namedAttrIt->getName() == ConstantLikeOp::getValueAttrName(*odsOpName)) {
      tblgen_value = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_value && !((::llvm::isa<::mlir::TypedAttr>(tblgen_value))))
    return emitError(loc, "'chlo.constant_like' op ""attribute 'value' failed to satisfy constraint: TypedAttr instance");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConstantLikeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstantLikeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConstantLikeOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConstantLikeOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConstantLikeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstantLikeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedAttr ConstantLikeOp::getValueAttr() {
  return ::llvm::cast<::mlir::TypedAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getValueAttrName()));
}

::mlir::TypedAttr ConstantLikeOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ConstantLikeOp::setValueAttr(::mlir::TypedAttr attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::TypedAttr value, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addAttribute(getValueAttrName(odsState.name), value);
  odsState.addTypes(resultType0);
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypedAttr value, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addAttribute(getValueAttrName(odsState.name), value);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ConstantLikeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::TypedAttr value, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addAttribute(getValueAttrName(odsState.name), value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantLikeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ConstantLikeOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ConstantLikeOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'value'");
    if (namedAttrIt->getName() == getValueAttrName()) {
      tblgen_value = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps3(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConstantLikeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

void ConstantLikeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ConstantLikeOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(ConstantLikeOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ConstantLikeOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConstantOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstantOpGenericAdaptorBase::ConstantOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.constant", odsAttrs.getContext());
}

ConstantOpGenericAdaptorBase::ConstantOpGenericAdaptorBase(ConstantOp op) : ConstantOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstantOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstantOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ElementsAttr ConstantOpGenericAdaptorBase::getValueAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::ElementsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ConstantOp::getValueAttrName(*odsOpName)));
  return attr;
}

::mlir::ElementsAttr ConstantOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ConstantOpAdaptor::ConstantOpAdaptor(ConstantOp op) : ConstantOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstantOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'chlo.constant' op ""requires attribute 'value'");
    if (namedAttrIt->getName() == ConstantOp::getValueAttrName(*odsOpName)) {
      tblgen_value = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_value && !((::llvm::isa<::mlir::ElementsAttr>(tblgen_value))))
    return emitError(loc, "'chlo.constant' op ""attribute 'value' failed to satisfy constraint: constant vector/tensor attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConstantOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstantOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstantOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstantOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ConstantOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::ElementsAttr ConstantOp::getValueAttr() {
  return ::llvm::cast<::mlir::ElementsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getValueAttrName()));
}

::mlir::ElementsAttr ConstantOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ConstantOp::setValueAttr(::mlir::ElementsAttr attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::ElementsAttr value) {
  odsState.addAttribute(getValueAttrName(odsState.name), value);
  odsState.addTypes(output);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ElementsAttr value) {
  odsState.addAttribute(getValueAttrName(odsState.name), value);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ConstantOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ElementsAttr value) {
  odsState.addAttribute(getValueAttrName(odsState.name), value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ConstantOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ConstantOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'value'");
    if (namedAttrIt->getName() == getValueAttrName()) {
      tblgen_value = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps4(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConstantOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConstantOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ElementsAttr valueAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  if (parser.parseCustomAttributeWithFallback(valueAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (valueAttr) result.attributes.append("value", valueAttr);

  ::llvm::SmallVector<::mlir::Type> inferredReturnTypes;
  if (::mlir::failed(ConstantOp::inferReturnTypes(parser.getContext(),
      result.location, result.operands,
      result.attributes.getDictionary(parser.getContext()),
      result.getRawProperties(),
      result.regions, inferredReturnTypes)))
    return ::mlir::failure();
  result.addTypes(inferredReturnTypes);
  return ::mlir::success();
}

void ConstantOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("value");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getValueAttr());
}

void ConstantOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ConstantOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::CoshOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoshOpGenericAdaptorBase::CoshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.cosh", odsAttrs.getContext());
}

CoshOpGenericAdaptorBase::CoshOpGenericAdaptorBase(CoshOp op) : CoshOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoshOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoshOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoshOpAdaptor::CoshOpAdaptor(CoshOp op) : CoshOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoshOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoshOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoshOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CoshOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CoshOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CoshOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoshOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CoshOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CoshOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoshOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CoshOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CoshOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoshOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CoshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoshOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CoshOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::CoshOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::DigammaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DigammaOpGenericAdaptorBase::DigammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.digamma", odsAttrs.getContext());
}

DigammaOpGenericAdaptorBase::DigammaOpGenericAdaptorBase(DigammaOp op) : DigammaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DigammaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DigammaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DigammaOpAdaptor::DigammaOpAdaptor(DigammaOp op) : DigammaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DigammaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DigammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DigammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DigammaOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &DigammaOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DigammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DigammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DigammaOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DigammaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DigammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DigammaOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult DigammaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DigammaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DigammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DigammaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void DigammaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::DigammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::DynamicReshapeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicReshapeOpGenericAdaptorBase::DynamicReshapeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.dynamic_reshape", odsAttrs.getContext());
}

DynamicReshapeOpGenericAdaptorBase::DynamicReshapeOpGenericAdaptorBase(DynamicReshapeOp op) : DynamicReshapeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicReshapeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicReshapeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DynamicReshapeOpAdaptor::DynamicReshapeOpAdaptor(DynamicReshapeOp op) : DynamicReshapeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicReshapeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DynamicReshapeOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> DynamicReshapeOp::getOutputShape() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DynamicReshapeOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DynamicReshapeOp::getOutputShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DynamicReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DynamicReshapeOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void DynamicReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value output_shape) {
  odsState.addOperands(operand);
  odsState.addOperands(output_shape);
  odsState.addTypes(result);
}

void DynamicReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output_shape) {
  odsState.addOperands(operand);
  odsState.addOperands(output_shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicReshapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicReshapeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicReshapeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void DynamicReshapeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::DynamicReshapeOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfInvOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ErfInvOpGenericAdaptorBase::ErfInvOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.erf_inv", odsAttrs.getContext());
}

ErfInvOpGenericAdaptorBase::ErfInvOpGenericAdaptorBase(ErfInvOp op) : ErfInvOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ErfInvOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ErfInvOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ErfInvOpAdaptor::ErfInvOpAdaptor(ErfInvOp op) : ErfInvOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ErfInvOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ErfInvOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ErfInvOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ErfInvOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ErfInvOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ErfInvOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ErfInvOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ErfInvOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ErfInvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ErfInvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ErfInvOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ErfInvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ErfInvOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ErfInvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ErfInvOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ErfInvOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ErfInvOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ErfInvOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfInvOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ErfInvOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ErfInvOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ErfOpGenericAdaptorBase::ErfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.erf", odsAttrs.getContext());
}

ErfOpGenericAdaptorBase::ErfOpGenericAdaptorBase(ErfOp op) : ErfOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ErfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ErfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ErfOpAdaptor::ErfOpAdaptor(ErfOp op) : ErfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ErfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ErfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ErfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ErfOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ErfOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ErfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ErfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ErfOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ErfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ErfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ErfOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ErfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ErfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ErfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ErfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ErfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfcOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ErfcOpGenericAdaptorBase::ErfcOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.erfc", odsAttrs.getContext());
}

ErfcOpGenericAdaptorBase::ErfcOpGenericAdaptorBase(ErfcOp op) : ErfcOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ErfcOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ErfcOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ErfcOpAdaptor::ErfcOpAdaptor(ErfcOp op) : ErfcOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ErfcOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ErfcOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ErfcOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ErfcOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ErfcOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ErfcOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ErfcOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ErfcOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ErfcOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ErfcOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ErfcOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ErfcOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ErfcOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ErfcOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfcOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ErfcOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ErfcOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsInfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IsInfOpGenericAdaptorBase::IsInfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.is_inf", odsAttrs.getContext());
}

IsInfOpGenericAdaptorBase::IsInfOpGenericAdaptorBase(IsInfOp op) : IsInfOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IsInfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IsInfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IsInfOpAdaptor::IsInfOpAdaptor(IsInfOp op) : IsInfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IsInfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IsInfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsInfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IsInfOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IsInfOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IsInfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsInfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IsInfOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(IsInfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsInfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(IsInfOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult IsInfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IsInfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IsInfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IsInfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void IsInfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::IsInfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsNegInfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IsNegInfOpGenericAdaptorBase::IsNegInfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.is_neg_inf", odsAttrs.getContext());
}

IsNegInfOpGenericAdaptorBase::IsNegInfOpGenericAdaptorBase(IsNegInfOp op) : IsNegInfOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IsNegInfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IsNegInfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IsNegInfOpAdaptor::IsNegInfOpAdaptor(IsNegInfOp op) : IsNegInfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IsNegInfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IsNegInfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsNegInfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IsNegInfOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IsNegInfOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IsNegInfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsNegInfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IsNegInfOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(IsNegInfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsNegInfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(IsNegInfOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult IsNegInfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IsNegInfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IsNegInfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IsNegInfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void IsNegInfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::IsNegInfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsPosInfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IsPosInfOpGenericAdaptorBase::IsPosInfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.is_pos_inf", odsAttrs.getContext());
}

IsPosInfOpGenericAdaptorBase::IsPosInfOpGenericAdaptorBase(IsPosInfOp op) : IsPosInfOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IsPosInfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IsPosInfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IsPosInfOpAdaptor::IsPosInfOpAdaptor(IsPosInfOp op) : IsPosInfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IsPosInfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IsPosInfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsPosInfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IsPosInfOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IsPosInfOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IsPosInfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsPosInfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IsPosInfOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(IsPosInfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsPosInfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(IsPosInfOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult IsPosInfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IsPosInfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IsPosInfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IsPosInfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void IsPosInfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::IsPosInfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::LgammaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LgammaOpGenericAdaptorBase::LgammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.lgamma", odsAttrs.getContext());
}

LgammaOpGenericAdaptorBase::LgammaOpGenericAdaptorBase(LgammaOp op) : LgammaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LgammaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LgammaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LgammaOpAdaptor::LgammaOpAdaptor(LgammaOp op) : LgammaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LgammaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LgammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LgammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LgammaOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LgammaOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LgammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LgammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LgammaOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LgammaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LgammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LgammaOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult LgammaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LgammaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LgammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LgammaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LgammaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::LgammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::MinimumBroadcastShapesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinimumBroadcastShapesOpGenericAdaptorBase::MinimumBroadcastShapesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.minimum_broadcast_shapes", odsAttrs.getContext());
}

MinimumBroadcastShapesOpGenericAdaptorBase::MinimumBroadcastShapesOpGenericAdaptorBase(MinimumBroadcastShapesOp op) : MinimumBroadcastShapesOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinimumBroadcastShapesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MinimumBroadcastShapesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MinimumBroadcastShapesOpAdaptor::MinimumBroadcastShapesOpAdaptor(MinimumBroadcastShapesOp op) : MinimumBroadcastShapesOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinimumBroadcastShapesOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinimumBroadcastShapesOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MinimumBroadcastShapesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MinimumBroadcastShapesOp::getShapes() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MinimumBroadcastShapesOp::getShapesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MinimumBroadcastShapesOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range MinimumBroadcastShapesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range MinimumBroadcastShapesOp::getResults() {
  return getODSResults(0);
}

void MinimumBroadcastShapesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MinimumBroadcastShapesOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinimumBroadcastShapesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MinimumBroadcastShapesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapesOperands;
  ::llvm::SMLoc shapesOperandsLoc;
  (void)shapesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> shapesTypes;
  ::llvm::SmallVector<::mlir::Type, 1> resultsTypes;

  shapesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shapesOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(shapesTypes))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(shapesOperands, shapesTypes, shapesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MinimumBroadcastShapesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getShapes();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getShapes().getTypes();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getResults().getTypes();
}

void MinimumBroadcastShapesOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::MinimumBroadcastShapesOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::NextAfterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NextAfterOpGenericAdaptorBase::NextAfterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.next_after", odsAttrs.getContext());
}

NextAfterOpGenericAdaptorBase::NextAfterOpGenericAdaptorBase(NextAfterOp op) : NextAfterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NextAfterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NextAfterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NextAfterOpAdaptor::NextAfterOpAdaptor(NextAfterOp op) : NextAfterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NextAfterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NextAfterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NextAfterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> NextAfterOp::getX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> NextAfterOp::getY() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &NextAfterOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &NextAfterOp::getYMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NextAfterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NextAfterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> NextAfterOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void NextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value x, ::mlir::Value y) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  odsState.addTypes(result);
}

void NextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value y) {
  odsState.addOperands(x);
  odsState.addOperands(y);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NextAfterOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NextAfterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NextAfterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NextAfterOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult NextAfterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NextAfterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult NextAfterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand yRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> yOperands(yRawOperands);  ::llvm::SMLoc yOperandsLoc;
  (void)yOperandsLoc;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::Type yRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> yTypes(yRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  yOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(yRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    yRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(yOperands, yTypes, yOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NextAfterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getY();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getY().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void NextAfterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::NextAfterOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::PolygammaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PolygammaOpGenericAdaptorBase::PolygammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.polygamma", odsAttrs.getContext());
}

PolygammaOpGenericAdaptorBase::PolygammaOpGenericAdaptorBase(PolygammaOp op) : PolygammaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PolygammaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PolygammaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
PolygammaOpAdaptor::PolygammaOpAdaptor(PolygammaOp op) : PolygammaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PolygammaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PolygammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PolygammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> PolygammaOp::getN() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> PolygammaOp::getX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &PolygammaOp::getNMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PolygammaOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> PolygammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PolygammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> PolygammaOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value n, ::mlir::Value x) {
  odsState.addOperands(n);
  odsState.addOperands(x);
  odsState.addTypes(result);
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value x) {
  odsState.addOperands(n);
  odsState.addOperands(x);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PolygammaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value x) {
  odsState.addOperands(n);
  odsState.addOperands(x);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PolygammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(PolygammaOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult PolygammaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PolygammaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PolygammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand nRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> nOperands(nRawOperands);  ::llvm::SMLoc nOperandsLoc;
  (void)nOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::Type nRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> nTypes(nRawTypes);
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  nOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    nRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(nOperands, nTypes, nOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PolygammaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getN();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getX();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getN().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void PolygammaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::PolygammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::RankSpecializationClusterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RankSpecializationClusterOpGenericAdaptorBase::RankSpecializationClusterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.rank_specialization_cluster", odsAttrs.getContext());
}

RankSpecializationClusterOpGenericAdaptorBase::RankSpecializationClusterOpGenericAdaptorBase(RankSpecializationClusterOp op) : RankSpecializationClusterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RankSpecializationClusterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr RankSpecializationClusterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &RankSpecializationClusterOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange RankSpecializationClusterOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
RankSpecializationClusterOpAdaptor::RankSpecializationClusterOpAdaptor(RankSpecializationClusterOp op) : RankSpecializationClusterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RankSpecializationClusterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RankSpecializationClusterOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range RankSpecializationClusterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> RankSpecializationClusterOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range RankSpecializationClusterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &RankSpecializationClusterOp::getBody() {
  return (*this)->getRegion(0);
}

void RankSpecializationClusterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RankSpecializationClusterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_ChloOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult RankSpecializationClusterOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::RankSpecializationClusterOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::RankSpecializationClusterYieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RankSpecializationClusterYieldOpGenericAdaptorBase::RankSpecializationClusterYieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.rank_specialization_cluster_yield", odsAttrs.getContext());
}

RankSpecializationClusterYieldOpGenericAdaptorBase::RankSpecializationClusterYieldOpGenericAdaptorBase(RankSpecializationClusterYieldOp op) : RankSpecializationClusterYieldOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RankSpecializationClusterYieldOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr RankSpecializationClusterYieldOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RankSpecializationClusterYieldOpAdaptor::RankSpecializationClusterYieldOpAdaptor(RankSpecializationClusterYieldOp op) : RankSpecializationClusterYieldOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RankSpecializationClusterYieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RankSpecializationClusterYieldOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range RankSpecializationClusterYieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range RankSpecializationClusterYieldOp::getResults() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange RankSpecializationClusterYieldOp::getResultsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> RankSpecializationClusterYieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RankSpecializationClusterYieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RankSpecializationClusterYieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange results) {
  odsState.addOperands(results);
}

void RankSpecializationClusterYieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RankSpecializationClusterYieldOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RankSpecializationClusterYieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void RankSpecializationClusterYieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange RankSpecializationClusterYieldOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::RankSpecializationClusterYieldOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::SinhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SinhOpGenericAdaptorBase::SinhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.sinh", odsAttrs.getContext());
}

SinhOpGenericAdaptorBase::SinhOpGenericAdaptorBase(SinhOp op) : SinhOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SinhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SinhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SinhOpAdaptor::SinhOpAdaptor(SinhOp op) : SinhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SinhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SinhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SinhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SinhOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SinhOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SinhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SinhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SinhOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SinhOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SinhOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SinhOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SinhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SinhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SinhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::SinhOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::TanOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanOpGenericAdaptorBase::TanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.tan", odsAttrs.getContext());
}

TanOpGenericAdaptorBase::TanOpGenericAdaptorBase(TanOp op) : TanOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TanOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TanOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TanOpAdaptor::TanOpAdaptor(TanOp op) : TanOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TanOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TanOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TanOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TanOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TanOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TanOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TanOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TanOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TanOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(TanOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult TanOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TanOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TanOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::TanOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::TopKOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TopKOpGenericAdaptorBase::TopKOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.top_k", odsAttrs.getContext());
}

TopKOpGenericAdaptorBase::TopKOpGenericAdaptorBase(TopKOp op) : TopKOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TopKOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TopKOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr TopKOpGenericAdaptorBase::getKAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TopKOp::getKAttrName(*odsOpName)));
  return attr;
}

uint64_t TopKOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
TopKOpAdaptor::TopKOpAdaptor(TopKOp op) : TopKOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TopKOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_k;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'chlo.top_k' op ""requires attribute 'k'");
    if (namedAttrIt->getName() == TopKOp::getKAttrName(*odsOpName)) {
      tblgen_k = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(64)))))
    return emitError(loc, "'chlo.top_k' op ""attribute 'k' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void TopKOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "values");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "indices");
}

std::pair<unsigned, unsigned> TopKOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TopKOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TopKOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TopKOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TopKOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TopKOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TopKOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> TopKOp::getIndices() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(1).begin());
}

::mlir::IntegerAttr TopKOp::getKAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getKAttrName()));
}

uint64_t TopKOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

void TopKOp::setKAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getKAttrName(), attr);
}

void TopKOp::setK(uint64_t attrValue) {
  (*this)->setAttr(getKAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values, ::mlir::Type indices, ::mlir::Value operand, ::mlir::IntegerAttr k) {
  odsState.addOperands(operand);
  odsState.addAttribute(getKAttrName(odsState.name), k);
  odsState.addTypes(values);
  odsState.addTypes(indices);
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::IntegerAttr k) {
  odsState.addOperands(operand);
  odsState.addAttribute(getKAttrName(odsState.name), k);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TopKOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::IntegerAttr k) {
  odsState.addOperands(operand);
  odsState.addAttribute(getKAttrName(odsState.name), k);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values, ::mlir::Type indices, ::mlir::Value operand, uint64_t k) {
  odsState.addOperands(operand);
  odsState.addAttribute(getKAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), k));
  odsState.addTypes(values);
  odsState.addTypes(indices);
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, uint64_t k) {
  odsState.addOperands(operand);
  odsState.addAttribute(getKAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), k));

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TopKOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, uint64_t k) {
  odsState.addOperands(operand);
  odsState.addAttribute(getKAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), k));
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TopKOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TopKOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(TopKOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 2u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult TopKOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_k;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'k'");
    if (namedAttrIt->getName() == getKAttrName()) {
      tblgen_k = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ChloOps5(*this, tblgen_k, "k")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TopKOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TopKOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::IntegerAttr kAttr;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  ::mlir::Type indicesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> indicesTypes(indicesRawTypes);
  if (parser.parseLParen())
    return ::mlir::failure();

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseKeyword("k"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(kAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (kAttr) result.attributes.append("k", kAttr);
  if (parser.parseRParen())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    indicesRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  result.addTypes(valuesTypes);
  result.addTypes(indicesTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TopKOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << "(";
  _odsPrinter << getOperand();
  _odsPrinter << ",";
  _odsPrinter << ' ' << "k";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getKAttr());
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("k");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ' << "(";
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getIndices().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
}

void TopKOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
TopKOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(TopKOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::TopKOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ZetaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ZetaOpGenericAdaptorBase::ZetaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("chlo.zeta", odsAttrs.getContext());
}

ZetaOpGenericAdaptorBase::ZetaOpGenericAdaptorBase(ZetaOp op) : ZetaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ZetaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ZetaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ZetaOpAdaptor::ZetaOpAdaptor(ZetaOp op) : ZetaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ZetaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ZetaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ZetaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ZetaOp::getX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> ZetaOp::getQ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ZetaOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ZetaOp::getQMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ZetaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ZetaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ZetaOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value x, ::mlir::Value q) {
  odsState.addOperands(x);
  odsState.addOperands(q);
  odsState.addTypes(result);
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value q) {
  odsState.addOperands(x);
  odsState.addOperands(q);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ZetaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value q) {
  odsState.addOperands(x);
  odsState.addOperands(q);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ZetaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ZetaOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ZetaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ChloOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ZetaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ZetaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand qRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> qOperands(qRawOperands);  ::llvm::SMLoc qOperandsLoc;
  (void)qOperandsLoc;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::Type qRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> qTypes(qRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  qOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(qRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    qRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(qOperands, qTypes, qOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ZetaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getQ();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getQ().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void ZetaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace chlo
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::chlo::ZetaOp)


#endif  // GET_OP_CLASSES

