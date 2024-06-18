/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TosaOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

mlir::tosa::AbsOp,
mlir::tosa::AddOp,
mlir::tosa::ApplyScaleOp,
mlir::tosa::ArgMaxOp,
mlir::tosa::ArithmeticRightShiftOp,
mlir::tosa::AvgPool2dOp,
mlir::tosa::BitwiseAndOp,
mlir::tosa::BitwiseNotOp,
mlir::tosa::BitwiseOrOp,
mlir::tosa::BitwiseXorOp,
mlir::tosa::CastOp,
mlir::tosa::CeilOp,
mlir::tosa::ClampOp,
mlir::tosa::ClzOp,
mlir::tosa::ConcatOp,
mlir::tosa::ConstOp,
mlir::tosa::Conv2DOp,
mlir::tosa::Conv3DOp,
mlir::tosa::CustomOp,
mlir::tosa::DepthwiseConv2DOp,
mlir::tosa::DivOp,
mlir::tosa::EqualOp,
mlir::tosa::ErfOp,
mlir::tosa::ExpOp,
mlir::tosa::FFT2dOp,
mlir::tosa::FloorOp,
mlir::tosa::FullyConnectedOp,
mlir::tosa::GatherOp,
mlir::tosa::GreaterEqualOp,
mlir::tosa::GreaterOp,
mlir::tosa::IdentityOp,
mlir::tosa::IfOp,
mlir::tosa::LogOp,
mlir::tosa::LogicalAndOp,
mlir::tosa::LogicalLeftShiftOp,
mlir::tosa::LogicalNotOp,
mlir::tosa::LogicalOrOp,
mlir::tosa::LogicalRightShiftOp,
mlir::tosa::LogicalXorOp,
mlir::tosa::MatMulOp,
mlir::tosa::MaxPool2dOp,
mlir::tosa::MaximumOp,
mlir::tosa::MinimumOp,
mlir::tosa::MulOp,
mlir::tosa::NegateOp,
mlir::tosa::PadOp,
mlir::tosa::PowOp,
mlir::tosa::RFFT2dOp,
mlir::tosa::ReciprocalOp,
mlir::tosa::ReduceAllOp,
mlir::tosa::ReduceAnyOp,
mlir::tosa::ReduceMaxOp,
mlir::tosa::ReduceMinOp,
mlir::tosa::ReduceProdOp,
mlir::tosa::ReduceSumOp,
mlir::tosa::RescaleOp,
mlir::tosa::ReshapeOp,
mlir::tosa::ResizeOp,
mlir::tosa::ReverseOp,
mlir::tosa::RsqrtOp,
mlir::tosa::ScatterOp,
mlir::tosa::SelectOp,
mlir::tosa::SigmoidOp,
mlir::tosa::SliceOp,
mlir::tosa::SubOp,
mlir::tosa::TableOp,
mlir::tosa::TanhOp,
mlir::tosa::TileOp,
mlir::tosa::TransposeConv2DOp,
mlir::tosa::TransposeOp,
mlir::tosa::VariableOp,
mlir::tosa::VariableReadOp,
mlir::tosa::VariableWriteOp,
mlir::tosa::WhileOp,
mlir::tosa::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace tosa {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isSignlessInteger(1))) || ((type.isUnsignedInteger(8))) || ((type.isUnsignedInteger(16))) || (((type.isSignlessInteger(8))) || ((type.isSignlessInteger(16))) || ((type.isSignlessInteger(32))) || ((type.isSignlessInteger(48))) || ((type.isSignlessInteger(64))))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64)))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64)))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(8))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-8-bit-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::UnrankedTensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 4)))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked tensor of number values or 4D tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of number_plus_f64 values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))) || ((elementType.isF64()))) || ((elementType.isSignlessInteger(4))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of number_plus_f64 or 4-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 4)))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 4D tensor of 4-bit signless integer or 8-bit signless integer or Quint8 type or Qint4 type or Qint8 type or Qint16 type or Qint32 type or 32-bit float or 16-bit float or bfloat16 type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::UnrankedTensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1)))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked tensor of number values or 1D tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::UnrankedTensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 5)))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked tensor of number values or 5D tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 5)))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 5D tensor of 4-bit signless integer or 8-bit signless integer or Quint8 type or Qint4 type or Qint8 type or Qint16 type or Qint32 type or 32-bit float or 16-bit float or bfloat16 type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of 32-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of 1-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::UnrankedTensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 3)))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked tensor of number values or 3D tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::UnrankedTensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 2)))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked tensor of number values or 2D tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps15(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 2)))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(4))) || ((elementType.isSignlessInteger(8))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 2D tensor of 4-bit signless integer or 8-bit signless integer or Quint8 type or Qint4 type or Qint8 type or Qint16 type or Qint32 type or 32-bit float or 16-bit float or bfloat16 type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps16(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 2)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 2D tensor of 32-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps17(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be ranked tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps18(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of 32-bit signless integer or 64-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps19(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 0)))) && ([](::mlir::Type elementType) { return (((elementType.isSignlessInteger(1))) || ((elementType.isUnsignedInteger(8))) || ((elementType.isUnsignedInteger(16))) || (((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(48))) || ((elementType.isSignlessInteger(64))))) || ((((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 4))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 8))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 16))) || (((::llvm::isa<mlir::quant::QuantizedType>(elementType))) && ((::llvm::cast<mlir::quant::QuantizedType>(elementType).getStorageTypeIntegralWidth() == 32)))) || (((elementType.isF32())) || ((elementType.isF16())) || ((elementType.isBF16()))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 0D tensor of number values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TosaOps20(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 2))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 4))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && (((::llvm::cast<::mlir::TypeAttr>(attr).getValue().isSignlessInteger(32))) || ((::llvm::cast<::mlir::TypeAttr>(attr).getValue().isSignedInteger(32))) || ((::llvm::cast<::mlir::TypeAttr>(attr).getValue().isF16())) || ((::llvm::cast<::mlir::TypeAttr>(attr).getValue().isF32())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: type attribute of 32-bit signless integer or 32-bit signed integer or 16-bit float or 32-bit float";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<mlir::tosa::UnaryOpQuantizationAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Attribute for UnaryOp quantization information.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::FloatAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: arbitrary float attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ElementsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: constant vector/tensor attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<mlir::tosa::ConvOpQuantizationAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Attribute for Conv type op quantization information.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 6))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with exactly 6 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 3))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<mlir::tosa::MatMulOpQuantizationAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Attribute for MatMulOp quantization information.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps14(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(8)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 8-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps14(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps14(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps15(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<mlir::tosa::PadOpQuantizationAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Attribute for PadOp quantization information.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps15(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps15(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps16(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI32ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i32 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps16(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps16(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps17(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI8ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i8 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps17(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps17(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps18(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps18(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps18(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps19(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::cast<StringAttr>(attr).getValue() == "BILINEAR"  || ::llvm::cast<StringAttr>(attr).getValue() == "NEAREST_NEIGHBOR")))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Supported resize/upsampling strategies";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps19(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps19(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps20(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() <= 4))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with at least 4 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps20(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps20(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps21(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any type attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps21(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps21(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps22(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((true)))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TosaOps22(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TosaOps22(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_TosaOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace tosa
} // namespace mlir
namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::AbsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AbsOpGenericAdaptorBase::AbsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.abs", odsAttrs.getContext());
}

AbsOpGenericAdaptorBase::AbsOpGenericAdaptorBase(AbsOp op) : AbsOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AbsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AbsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AbsOpAdaptor::AbsOpAdaptor(AbsOp op) : AbsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AbsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AbsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AbsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AbsOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AbsOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AbsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AbsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AbsOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AbsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AbsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AbsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AbsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void AbsOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::AbsOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::AddOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddOpGenericAdaptorBase::AddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.add", odsAttrs.getContext());
}

AddOpGenericAdaptorBase::AddOpGenericAdaptorBase(AddOp op) : AddOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AddOpAdaptor::AddOpAdaptor(AddOp op) : AddOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AddOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> AddOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AddOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AddOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AddOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AddOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void AddOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::AddOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ApplyScaleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyScaleOpGenericAdaptorBase::ApplyScaleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.apply_scale", odsAttrs.getContext());
}

ApplyScaleOpGenericAdaptorBase::ApplyScaleOpGenericAdaptorBase(ApplyScaleOp op) : ApplyScaleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyScaleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyScaleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr ApplyScaleOpGenericAdaptorBase::getDoubleRoundAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().double_round);
  return attr;
}

bool ApplyScaleOpGenericAdaptorBase::getDoubleRound() {
  auto attr = getDoubleRoundAttr();
  return attr.getValue();
}

} // namespace detail
ApplyScaleOpAdaptor::ApplyScaleOpAdaptor(ApplyScaleOp op) : ApplyScaleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyScaleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_double_round = getProperties().double_round; (void)tblgen_double_round;
  if (!tblgen_double_round) return emitError(loc, "'tosa.apply_scale' op ""requires attribute 'double_round'");

  if (tblgen_double_round && !((::llvm::isa<::mlir::BoolAttr>(tblgen_double_round))))
    return emitError(loc, "'tosa.apply_scale' op ""attribute 'double_round' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyScaleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyScaleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ApplyScaleOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ApplyScaleOp::getMultiplier() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value ApplyScaleOp::getShift() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ApplyScaleOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ApplyScaleOp::getMultiplierMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ApplyScaleOp::getShiftMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyScaleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyScaleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ApplyScaleOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ApplyScaleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.double_round;
       auto attr = dict.get("double_round");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for double_round in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `double_round` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyScaleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.double_round;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("double_round",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyScaleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.double_round.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyScaleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "double_round")
      return prop.double_round;
  return std::nullopt;
}

void ApplyScaleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "double_round") {
       prop.double_round = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.double_round)>>(value);
       return;
    }
}

void ApplyScaleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.double_round) attrs.append("double_round", prop.double_round);
}

::mlir::LogicalResult ApplyScaleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDoubleRoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "double_round", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyScaleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.double_round)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyScaleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.double_round);
}

::mlir::BoolAttr ApplyScaleOp::getDoubleRoundAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().double_round);
}

bool ApplyScaleOp::getDoubleRound() {
  auto attr = getDoubleRoundAttr();
  return attr.getValue();
}

void ApplyScaleOp::setDoubleRoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getDoubleRoundAttrName(), attr);
}

void ApplyScaleOp::setDoubleRound(bool attrValue) {
  (*this)->setAttr(getDoubleRoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void ApplyScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value value, ::mlir::Value multiplier, ::mlir::Value shift, ::mlir::BoolAttr double_round) {
  odsState.addOperands(value);
  odsState.addOperands(multiplier);
  odsState.addOperands(shift);
  odsState.getOrAddProperties<Properties>().double_round = double_round;
  odsState.addTypes(output);
}

void ApplyScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value multiplier, ::mlir::Value shift, ::mlir::BoolAttr double_round) {
  odsState.addOperands(value);
  odsState.addOperands(multiplier);
  odsState.addOperands(shift);
  odsState.getOrAddProperties<Properties>().double_round = double_round;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value value, ::mlir::Value multiplier, ::mlir::Value shift, bool double_round) {
  odsState.addOperands(value);
  odsState.addOperands(multiplier);
  odsState.addOperands(shift);
  odsState.getOrAddProperties<Properties>().double_round = odsBuilder.getBoolAttr(double_round);
  odsState.addTypes(output);
}

void ApplyScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value multiplier, ::mlir::Value shift, bool double_round) {
  odsState.addOperands(value);
  odsState.addOperands(multiplier);
  odsState.addOperands(shift);
  odsState.getOrAddProperties<Properties>().double_round = odsBuilder.getBoolAttr(double_round);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyScaleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyScaleOp::verifyInvariantsImpl() {
  auto tblgen_double_round = getProperties().double_round; (void)tblgen_double_round;
  if (!tblgen_double_round) return emitOpError("requires attribute 'double_round'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_double_round, "double_round")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyScaleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyScaleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyScaleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ApplyScaleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ApplyScaleOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ArgMaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ArgMaxOpGenericAdaptorBase::ArgMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.argmax", odsAttrs.getContext());
}

ArgMaxOpGenericAdaptorBase::ArgMaxOpGenericAdaptorBase(ArgMaxOp op) : ArgMaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ArgMaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ArgMaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ArgMaxOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ArgMaxOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ArgMaxOpAdaptor::ArgMaxOpAdaptor(ArgMaxOp op) : ArgMaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ArgMaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.argmax' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.argmax' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ArgMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ArgMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ArgMaxOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ArgMaxOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ArgMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ArgMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ArgMaxOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ArgMaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ArgMaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ArgMaxOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ArgMaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ArgMaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ArgMaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ArgMaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ArgMaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ArgMaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ArgMaxOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ArgMaxOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ArgMaxOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ArgMaxOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ArgMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ArgMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ArgMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ArgMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ArgMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ArgMaxOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ArgMaxOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ArgMaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ArgMaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ArgMaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ArgMaxOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ArgMaxOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ArgMaxOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ArgMaxOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ArithmeticRightShiftOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ArithmeticRightShiftOpGenericAdaptorBase::ArithmeticRightShiftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.arithmetic_right_shift", odsAttrs.getContext());
}

ArithmeticRightShiftOpGenericAdaptorBase::ArithmeticRightShiftOpGenericAdaptorBase(ArithmeticRightShiftOp op) : ArithmeticRightShiftOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ArithmeticRightShiftOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ArithmeticRightShiftOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr ArithmeticRightShiftOpGenericAdaptorBase::getRoundAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().round);
  return attr;
}

bool ArithmeticRightShiftOpGenericAdaptorBase::getRound() {
  auto attr = getRoundAttr();
  return attr.getValue();
}

} // namespace detail
ArithmeticRightShiftOpAdaptor::ArithmeticRightShiftOpAdaptor(ArithmeticRightShiftOp op) : ArithmeticRightShiftOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ArithmeticRightShiftOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_round = getProperties().round; (void)tblgen_round;
  if (!tblgen_round) return emitError(loc, "'tosa.arithmetic_right_shift' op ""requires attribute 'round'");

  if (tblgen_round && !((::llvm::isa<::mlir::BoolAttr>(tblgen_round))))
    return emitError(loc, "'tosa.arithmetic_right_shift' op ""attribute 'round' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ArithmeticRightShiftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ArithmeticRightShiftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ArithmeticRightShiftOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> ArithmeticRightShiftOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ArithmeticRightShiftOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ArithmeticRightShiftOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ArithmeticRightShiftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ArithmeticRightShiftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ArithmeticRightShiftOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ArithmeticRightShiftOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.round;
       auto attr = dict.get("round");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for round in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `round` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ArithmeticRightShiftOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.round;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("round",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ArithmeticRightShiftOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.round.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ArithmeticRightShiftOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "round")
      return prop.round;
  return std::nullopt;
}

void ArithmeticRightShiftOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "round") {
       prop.round = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.round)>>(value);
       return;
    }
}

void ArithmeticRightShiftOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.round) attrs.append("round", prop.round);
}

::mlir::LogicalResult ArithmeticRightShiftOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getRoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "round", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ArithmeticRightShiftOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.round)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ArithmeticRightShiftOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.round);
}

::mlir::BoolAttr ArithmeticRightShiftOp::getRoundAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().round);
}

bool ArithmeticRightShiftOp::getRound() {
  auto attr = getRoundAttr();
  return attr.getValue();
}

void ArithmeticRightShiftOp::setRoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getRoundAttrName(), attr);
}

void ArithmeticRightShiftOp::setRound(bool attrValue) {
  (*this)->setAttr(getRoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void ArithmeticRightShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2, ::mlir::BoolAttr round) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().round = round;
  odsState.addTypes(output);
}

void ArithmeticRightShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2, ::mlir::BoolAttr round) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().round = round;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ArithmeticRightShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2, bool round) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().round = odsBuilder.getBoolAttr(round);
  odsState.addTypes(output);
}

void ArithmeticRightShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2, bool round) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().round = odsBuilder.getBoolAttr(round);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ArithmeticRightShiftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ArithmeticRightShiftOp::verifyInvariantsImpl() {
  auto tblgen_round = getProperties().round; (void)tblgen_round;
  if (!tblgen_round) return emitOpError("requires attribute 'round'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_round, "round")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ArithmeticRightShiftOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ArithmeticRightShiftOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ArithmeticRightShiftOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ArithmeticRightShiftOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ArithmeticRightShiftOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::AvgPool2dOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AvgPool2dOpGenericAdaptorBase::AvgPool2dOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.avg_pool2d", odsAttrs.getContext());
}

AvgPool2dOpGenericAdaptorBase::AvgPool2dOpGenericAdaptorBase(AvgPool2dOp op) : AvgPool2dOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AvgPool2dOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AvgPool2dOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr AvgPool2dOpGenericAdaptorBase::getKernelAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().kernel);
  return attr;
}

::llvm::ArrayRef<int64_t> AvgPool2dOpGenericAdaptorBase::getKernel() {
  auto attr = getKernelAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr AvgPool2dOpGenericAdaptorBase::getStrideAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
  return attr;
}

::llvm::ArrayRef<int64_t> AvgPool2dOpGenericAdaptorBase::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr AvgPool2dOpGenericAdaptorBase::getPadAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
  return attr;
}

::llvm::ArrayRef<int64_t> AvgPool2dOpGenericAdaptorBase::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::TypeAttr AvgPool2dOpGenericAdaptorBase::getAccTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().acc_type);
  return attr;
}

::mlir::Type AvgPool2dOpGenericAdaptorBase::getAccType() {
  auto attr = getAccTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

mlir::tosa::UnaryOpQuantizationAttr AvgPool2dOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::UnaryOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::UnaryOpQuantizationAttr> AvgPool2dOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::UnaryOpQuantizationAttr>(::llvm::cast<mlir::tosa::UnaryOpQuantizationAttr>(attr)) : (::std::nullopt);
}

} // namespace detail
AvgPool2dOpAdaptor::AvgPool2dOpAdaptor(AvgPool2dOp op) : AvgPool2dOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AvgPool2dOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_acc_type = getProperties().acc_type; (void)tblgen_acc_type;
  if (!tblgen_acc_type) return emitError(loc, "'tosa.avg_pool2d' op ""requires attribute 'acc_type'");
  auto tblgen_kernel = getProperties().kernel; (void)tblgen_kernel;
  if (!tblgen_kernel) return emitError(loc, "'tosa.avg_pool2d' op ""requires attribute 'kernel'");
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitError(loc, "'tosa.avg_pool2d' op ""requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitError(loc, "'tosa.avg_pool2d' op ""requires attribute 'stride'");

  if (tblgen_kernel && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_kernel))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_kernel).size() == 2))))
    return emitError(loc, "'tosa.avg_pool2d' op ""attribute 'kernel' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_stride && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_stride))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_stride).size() == 2))))
    return emitError(loc, "'tosa.avg_pool2d' op ""attribute 'stride' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_pad && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_pad))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_pad).size() == 4))))
    return emitError(loc, "'tosa.avg_pool2d' op ""attribute 'pad' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements");

  if (tblgen_acc_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_acc_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_acc_type).getValue()))) && (((::llvm::cast<::mlir::TypeAttr>(tblgen_acc_type).getValue().isSignlessInteger(32))) || ((::llvm::cast<::mlir::TypeAttr>(tblgen_acc_type).getValue().isSignedInteger(32))) || ((::llvm::cast<::mlir::TypeAttr>(tblgen_acc_type).getValue().isF16())) || ((::llvm::cast<::mlir::TypeAttr>(tblgen_acc_type).getValue().isF32())))))
    return emitError(loc, "'tosa.avg_pool2d' op ""attribute 'acc_type' failed to satisfy constraint: type attribute of 32-bit signless integer or 32-bit signed integer or 16-bit float or 32-bit float");

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::UnaryOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.avg_pool2d' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for UnaryOp quantization information.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AvgPool2dOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AvgPool2dOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AvgPool2dOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AvgPool2dOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AvgPool2dOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AvgPool2dOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AvgPool2dOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AvgPool2dOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.acc_type;
       auto attr = dict.get("acc_type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for acc_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `acc_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.kernel;
       auto attr = dict.get("kernel");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for kernel in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kernel` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pad;
       auto attr = dict.get("pad");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pad in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pad` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stride;
       auto attr = dict.get("stride");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for stride in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AvgPool2dOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.acc_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("acc_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.kernel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kernel",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pad;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pad",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stride;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AvgPool2dOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.acc_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.kernel.getAsOpaquePointer()), 
    llvm::hash_value(prop.pad.getAsOpaquePointer()), 
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()), 
    llvm::hash_value(prop.stride.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AvgPool2dOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "acc_type")
      return prop.acc_type;

    if (name == "kernel")
      return prop.kernel;

    if (name == "pad")
      return prop.pad;

    if (name == "quantization_info")
      return prop.quantization_info;

    if (name == "stride")
      return prop.stride;
  return std::nullopt;
}

void AvgPool2dOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "acc_type") {
       prop.acc_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.acc_type)>>(value);
       return;
    }

    if (name == "kernel") {
       prop.kernel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kernel)>>(value);
       return;
    }

    if (name == "pad") {
       prop.pad = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pad)>>(value);
       return;
    }

    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }

    if (name == "stride") {
       prop.stride = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride)>>(value);
       return;
    }
}

void AvgPool2dOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.acc_type) attrs.append("acc_type", prop.acc_type);

    if (prop.kernel) attrs.append("kernel", prop.kernel);

    if (prop.pad) attrs.append("pad", prop.pad);

    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);

    if (prop.stride) attrs.append("stride", prop.stride);
}

::mlir::LogicalResult AvgPool2dOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAccTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps4(attr, "acc_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKernelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "kernel", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPadAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(attr, "pad", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps5(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStrideAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "stride", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AvgPool2dOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.acc_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.kernel)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.pad)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.stride)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AvgPool2dOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.acc_type);
  writer.writeAttribute(prop.kernel);
  writer.writeAttribute(prop.pad);

  writer.writeOptionalAttribute(prop.quantization_info);
  writer.writeAttribute(prop.stride);
}

::mlir::DenseI64ArrayAttr AvgPool2dOp::getKernelAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().kernel);
}

::llvm::ArrayRef<int64_t> AvgPool2dOp::getKernel() {
  auto attr = getKernelAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr AvgPool2dOp::getStrideAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
}

::llvm::ArrayRef<int64_t> AvgPool2dOp::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr AvgPool2dOp::getPadAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
}

::llvm::ArrayRef<int64_t> AvgPool2dOp::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::TypeAttr AvgPool2dOp::getAccTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().acc_type);
}

::mlir::Type AvgPool2dOp::getAccType() {
  auto attr = getAccTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

mlir::tosa::UnaryOpQuantizationAttr AvgPool2dOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::UnaryOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::UnaryOpQuantizationAttr> AvgPool2dOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::UnaryOpQuantizationAttr>(::llvm::cast<mlir::tosa::UnaryOpQuantizationAttr>(attr)) : (::std::nullopt);
}

void AvgPool2dOp::setKernelAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getKernelAttrName(), attr);
}

void AvgPool2dOp::setKernel(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getKernelAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void AvgPool2dOp::setStrideAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStrideAttrName(), attr);
}

void AvgPool2dOp::setStride(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStrideAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void AvgPool2dOp::setPadAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getPadAttrName(), attr);
}

void AvgPool2dOp::setPad(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getPadAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void AvgPool2dOp::setAccTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getAccTypeAttrName(), attr);
}

void AvgPool2dOp::setAccType(::mlir::Type attrValue) {
  (*this)->setAttr(getAccTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void AvgPool2dOp::setQuantizationInfoAttr(mlir::tosa::UnaryOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

::mlir::Attribute AvgPool2dOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

void AvgPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputType, ::mlir::Value input, ::mlir::DenseI64ArrayAttr kernel, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr pad, ::mlir::TypeAttr acc_type) {
    buildAvgPool2dOpWithQuantInfo(odsBuilder, odsState, outputType,
                                  input, kernel, stride, pad, acc_type);
  
}

void AvgPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::DenseI64ArrayAttr kernel, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr pad, ::mlir::TypeAttr acc_type, /*optional*/mlir::tosa::UnaryOpQuantizationAttr quantization_info) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = kernel;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().acc_type = acc_type;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.addTypes(output);
}

void AvgPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr kernel, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr pad, ::mlir::TypeAttr acc_type, /*optional*/mlir::tosa::UnaryOpQuantizationAttr quantization_info) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = kernel;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().acc_type = acc_type;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AvgPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::llvm::ArrayRef<int64_t> kernel, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> pad, ::mlir::Type acc_type, /*optional*/mlir::tosa::UnaryOpQuantizationAttr quantization_info) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = odsBuilder.getDenseI64ArrayAttr(kernel);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().acc_type = ::mlir::TypeAttr::get(acc_type);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.addTypes(output);
}

void AvgPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> kernel, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> pad, ::mlir::Type acc_type, /*optional*/mlir::tosa::UnaryOpQuantizationAttr quantization_info) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = odsBuilder.getDenseI64ArrayAttr(kernel);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().acc_type = ::mlir::TypeAttr::get(acc_type);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AvgPool2dOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AvgPool2dOp::verifyInvariantsImpl() {
  auto tblgen_acc_type = getProperties().acc_type; (void)tblgen_acc_type;
  if (!tblgen_acc_type) return emitOpError("requires attribute 'acc_type'");
  auto tblgen_kernel = getProperties().kernel; (void)tblgen_kernel;
  if (!tblgen_kernel) return emitOpError("requires attribute 'kernel'");
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitOpError("requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitOpError("requires attribute 'stride'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_kernel, "kernel")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_stride, "stride")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(*this, tblgen_pad, "pad")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps4(*this, tblgen_acc_type, "acc_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps5(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AvgPool2dOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AvgPool2dOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AvgPool2dOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void AvgPool2dOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
AvgPool2dOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  AvgPool2dOp::Adaptor adaptor(operands, attributes, properties, regions);
  return AvgPool2dOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::AvgPool2dOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::BitwiseAndOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitwiseAndOpGenericAdaptorBase::BitwiseAndOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.bitwise_and", odsAttrs.getContext());
}

BitwiseAndOpGenericAdaptorBase::BitwiseAndOpGenericAdaptorBase(BitwiseAndOp op) : BitwiseAndOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitwiseAndOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitwiseAndOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitwiseAndOpAdaptor::BitwiseAndOpAdaptor(BitwiseAndOp op) : BitwiseAndOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitwiseAndOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitwiseAndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitwiseAndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseAndOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BitwiseAndOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BitwiseAndOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BitwiseAndOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitwiseAndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitwiseAndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseAndOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void BitwiseAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void BitwiseAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitwiseAndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitwiseAndOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitwiseAndOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BitwiseAndOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitwiseAndOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void BitwiseAndOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::BitwiseAndOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::BitwiseNotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitwiseNotOpGenericAdaptorBase::BitwiseNotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.bitwise_not", odsAttrs.getContext());
}

BitwiseNotOpGenericAdaptorBase::BitwiseNotOpGenericAdaptorBase(BitwiseNotOp op) : BitwiseNotOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitwiseNotOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitwiseNotOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitwiseNotOpAdaptor::BitwiseNotOpAdaptor(BitwiseNotOp op) : BitwiseNotOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitwiseNotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitwiseNotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitwiseNotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseNotOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BitwiseNotOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitwiseNotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitwiseNotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseNotOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void BitwiseNotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void BitwiseNotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitwiseNotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitwiseNotOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitwiseNotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BitwiseNotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitwiseNotOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void BitwiseNotOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::BitwiseNotOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::BitwiseOrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitwiseOrOpGenericAdaptorBase::BitwiseOrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.bitwise_or", odsAttrs.getContext());
}

BitwiseOrOpGenericAdaptorBase::BitwiseOrOpGenericAdaptorBase(BitwiseOrOp op) : BitwiseOrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitwiseOrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitwiseOrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitwiseOrOpAdaptor::BitwiseOrOpAdaptor(BitwiseOrOp op) : BitwiseOrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitwiseOrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitwiseOrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitwiseOrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseOrOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BitwiseOrOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BitwiseOrOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BitwiseOrOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitwiseOrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitwiseOrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseOrOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void BitwiseOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void BitwiseOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitwiseOrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitwiseOrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitwiseOrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BitwiseOrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitwiseOrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void BitwiseOrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::BitwiseOrOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::BitwiseXorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitwiseXorOpGenericAdaptorBase::BitwiseXorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.bitwise_xor", odsAttrs.getContext());
}

BitwiseXorOpGenericAdaptorBase::BitwiseXorOpGenericAdaptorBase(BitwiseXorOp op) : BitwiseXorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitwiseXorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitwiseXorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitwiseXorOpAdaptor::BitwiseXorOpAdaptor(BitwiseXorOp op) : BitwiseXorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitwiseXorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitwiseXorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitwiseXorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseXorOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> BitwiseXorOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BitwiseXorOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BitwiseXorOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitwiseXorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitwiseXorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> BitwiseXorOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void BitwiseXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void BitwiseXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitwiseXorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitwiseXorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitwiseXorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BitwiseXorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitwiseXorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void BitwiseXorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::BitwiseXorOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::CastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CastOpGenericAdaptorBase::CastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.cast", odsAttrs.getContext());
}

CastOpGenericAdaptorBase::CastOpGenericAdaptorBase(CastOp op) : CastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CastOpAdaptor::CastOpAdaptor(CastOp op) : CastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CastOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CastOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CastOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void CastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void CastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CastOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void CastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::CastOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::CeilOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CeilOpGenericAdaptorBase::CeilOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.ceil", odsAttrs.getContext());
}

CeilOpGenericAdaptorBase::CeilOpGenericAdaptorBase(CeilOp op) : CeilOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CeilOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CeilOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CeilOpAdaptor::CeilOpAdaptor(CeilOp op) : CeilOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CeilOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CeilOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CeilOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CeilOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CeilOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CeilOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CeilOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CeilOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CeilOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CeilOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CeilOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CeilOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void CeilOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::CeilOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ClampOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClampOpGenericAdaptorBase::ClampOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.clamp", odsAttrs.getContext());
}

ClampOpGenericAdaptorBase::ClampOpGenericAdaptorBase(ClampOp op) : ClampOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClampOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClampOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ClampOpGenericAdaptorBase::getMinIntAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().min_int);
  return attr;
}

uint64_t ClampOpGenericAdaptorBase::getMinInt() {
  auto attr = getMinIntAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr ClampOpGenericAdaptorBase::getMaxIntAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().max_int);
  return attr;
}

uint64_t ClampOpGenericAdaptorBase::getMaxInt() {
  auto attr = getMaxIntAttr();
  return attr.getValue().getZExtValue();
}

::mlir::FloatAttr ClampOpGenericAdaptorBase::getMinFpAttr() {
  auto attr = ::llvm::cast<::mlir::FloatAttr>(getProperties().min_fp);
  return attr;
}

::mlir::APFloat ClampOpGenericAdaptorBase::getMinFp() {
  auto attr = getMinFpAttr();
  return attr.getValue();
}

::mlir::FloatAttr ClampOpGenericAdaptorBase::getMaxFpAttr() {
  auto attr = ::llvm::cast<::mlir::FloatAttr>(getProperties().max_fp);
  return attr;
}

::mlir::APFloat ClampOpGenericAdaptorBase::getMaxFp() {
  auto attr = getMaxFpAttr();
  return attr.getValue();
}

} // namespace detail
ClampOpAdaptor::ClampOpAdaptor(ClampOp op) : ClampOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClampOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_max_fp = getProperties().max_fp; (void)tblgen_max_fp;
  if (!tblgen_max_fp) return emitError(loc, "'tosa.clamp' op ""requires attribute 'max_fp'");
  auto tblgen_max_int = getProperties().max_int; (void)tblgen_max_int;
  if (!tblgen_max_int) return emitError(loc, "'tosa.clamp' op ""requires attribute 'max_int'");
  auto tblgen_min_fp = getProperties().min_fp; (void)tblgen_min_fp;
  if (!tblgen_min_fp) return emitError(loc, "'tosa.clamp' op ""requires attribute 'min_fp'");
  auto tblgen_min_int = getProperties().min_int; (void)tblgen_min_int;
  if (!tblgen_min_int) return emitError(loc, "'tosa.clamp' op ""requires attribute 'min_int'");

  if (tblgen_min_int && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_min_int))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_min_int).getType().isSignlessInteger(64)))))
    return emitError(loc, "'tosa.clamp' op ""attribute 'min_int' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_max_int && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_max_int))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_max_int).getType().isSignlessInteger(64)))))
    return emitError(loc, "'tosa.clamp' op ""attribute 'max_int' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_min_fp && !((::llvm::isa<::mlir::FloatAttr>(tblgen_min_fp))))
    return emitError(loc, "'tosa.clamp' op ""attribute 'min_fp' failed to satisfy constraint: arbitrary float attribute");

  if (tblgen_max_fp && !((::llvm::isa<::mlir::FloatAttr>(tblgen_max_fp))))
    return emitError(loc, "'tosa.clamp' op ""attribute 'max_fp' failed to satisfy constraint: arbitrary float attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClampOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClampOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ClampOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ClampOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ClampOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClampOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ClampOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ClampOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.max_fp;
       auto attr = dict.get("max_fp");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for max_fp in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `max_fp` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.max_int;
       auto attr = dict.get("max_int");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for max_int in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `max_int` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.min_fp;
       auto attr = dict.get("min_fp");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for min_fp in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `min_fp` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.min_int;
       auto attr = dict.get("min_int");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for min_int in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `min_int` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ClampOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.max_fp;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("max_fp",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.max_int;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("max_int",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.min_fp;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("min_fp",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.min_int;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("min_int",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ClampOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.max_fp.getAsOpaquePointer()), 
    llvm::hash_value(prop.max_int.getAsOpaquePointer()), 
    llvm::hash_value(prop.min_fp.getAsOpaquePointer()), 
    llvm::hash_value(prop.min_int.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ClampOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "max_fp")
      return prop.max_fp;

    if (name == "max_int")
      return prop.max_int;

    if (name == "min_fp")
      return prop.min_fp;

    if (name == "min_int")
      return prop.min_int;
  return std::nullopt;
}

void ClampOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "max_fp") {
       prop.max_fp = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.max_fp)>>(value);
       return;
    }

    if (name == "max_int") {
       prop.max_int = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.max_int)>>(value);
       return;
    }

    if (name == "min_fp") {
       prop.min_fp = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.min_fp)>>(value);
       return;
    }

    if (name == "min_int") {
       prop.min_int = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.min_int)>>(value);
       return;
    }
}

void ClampOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.max_fp) attrs.append("max_fp", prop.max_fp);

    if (prop.max_int) attrs.append("max_int", prop.max_int);

    if (prop.min_fp) attrs.append("min_fp", prop.min_fp);

    if (prop.min_int) attrs.append("min_int", prop.min_int);
}

::mlir::LogicalResult ClampOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMaxFpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps7(attr, "max_fp", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMaxIntAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps6(attr, "max_int", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMinFpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps7(attr, "min_fp", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMinIntAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps6(attr, "min_int", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ClampOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.max_fp)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.max_int)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.min_fp)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.min_int)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ClampOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.max_fp);
  writer.writeAttribute(prop.max_int);
  writer.writeAttribute(prop.min_fp);
  writer.writeAttribute(prop.min_int);
}

::mlir::IntegerAttr ClampOp::getMinIntAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().min_int);
}

uint64_t ClampOp::getMinInt() {
  auto attr = getMinIntAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr ClampOp::getMaxIntAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().max_int);
}

uint64_t ClampOp::getMaxInt() {
  auto attr = getMaxIntAttr();
  return attr.getValue().getZExtValue();
}

::mlir::FloatAttr ClampOp::getMinFpAttr() {
  return ::llvm::cast<::mlir::FloatAttr>(getProperties().min_fp);
}

::mlir::APFloat ClampOp::getMinFp() {
  auto attr = getMinFpAttr();
  return attr.getValue();
}

::mlir::FloatAttr ClampOp::getMaxFpAttr() {
  return ::llvm::cast<::mlir::FloatAttr>(getProperties().max_fp);
}

::mlir::APFloat ClampOp::getMaxFp() {
  auto attr = getMaxFpAttr();
  return attr.getValue();
}

void ClampOp::setMinIntAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMinIntAttrName(), attr);
}

void ClampOp::setMinInt(uint64_t attrValue) {
  (*this)->setAttr(getMinIntAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ClampOp::setMaxIntAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMaxIntAttrName(), attr);
}

void ClampOp::setMaxInt(uint64_t attrValue) {
  (*this)->setAttr(getMaxIntAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ClampOp::setMinFpAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr(getMinFpAttrName(), attr);
}

void ClampOp::setMaxFpAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr(getMaxFpAttrName(), attr);
}

void ClampOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr min_int, ::mlir::IntegerAttr max_int, ::mlir::FloatAttr min_fp, ::mlir::FloatAttr max_fp) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().min_int = min_int;
  odsState.getOrAddProperties<Properties>().max_int = max_int;
  odsState.getOrAddProperties<Properties>().min_fp = min_fp;
  odsState.getOrAddProperties<Properties>().max_fp = max_fp;
  odsState.addTypes(output);
}

void ClampOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr min_int, ::mlir::IntegerAttr max_int, ::mlir::FloatAttr min_fp, ::mlir::FloatAttr max_fp) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().min_int = min_int;
  odsState.getOrAddProperties<Properties>().max_int = max_int;
  odsState.getOrAddProperties<Properties>().min_fp = min_fp;
  odsState.getOrAddProperties<Properties>().max_fp = max_fp;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClampOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint64_t min_int, uint64_t max_int, ::mlir::FloatAttr min_fp, ::mlir::FloatAttr max_fp) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().min_int = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), min_int);
  odsState.getOrAddProperties<Properties>().max_int = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_int);
  odsState.getOrAddProperties<Properties>().min_fp = min_fp;
  odsState.getOrAddProperties<Properties>().max_fp = max_fp;
  odsState.addTypes(output);
}

void ClampOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint64_t min_int, uint64_t max_int, ::mlir::FloatAttr min_fp, ::mlir::FloatAttr max_fp) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().min_int = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), min_int);
  odsState.getOrAddProperties<Properties>().max_int = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_int);
  odsState.getOrAddProperties<Properties>().min_fp = min_fp;
  odsState.getOrAddProperties<Properties>().max_fp = max_fp;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClampOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClampOp::verifyInvariantsImpl() {
  auto tblgen_max_fp = getProperties().max_fp; (void)tblgen_max_fp;
  if (!tblgen_max_fp) return emitOpError("requires attribute 'max_fp'");
  auto tblgen_max_int = getProperties().max_int; (void)tblgen_max_int;
  if (!tblgen_max_int) return emitOpError("requires attribute 'max_int'");
  auto tblgen_min_fp = getProperties().min_fp; (void)tblgen_min_fp;
  if (!tblgen_min_fp) return emitOpError("requires attribute 'min_fp'");
  auto tblgen_min_int = getProperties().min_int; (void)tblgen_min_int;
  if (!tblgen_min_int) return emitOpError("requires attribute 'min_int'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps6(*this, tblgen_min_int, "min_int")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps6(*this, tblgen_max_int, "max_int")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps7(*this, tblgen_min_fp, "min_fp")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps7(*this, tblgen_max_fp, "max_fp")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClampOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ClampOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ClampOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ClampOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ClampOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ClzOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClzOpGenericAdaptorBase::ClzOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.clz", odsAttrs.getContext());
}

ClzOpGenericAdaptorBase::ClzOpGenericAdaptorBase(ClzOp op) : ClzOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClzOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClzOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ClzOpAdaptor::ClzOpAdaptor(ClzOp op) : ClzOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClzOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClzOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClzOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ClzOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ClzOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ClzOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClzOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ClzOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ClzOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void ClzOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClzOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClzOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClzOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClzOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ClzOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ClzOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ClzOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ConcatOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConcatOpGenericAdaptorBase::ConcatOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.concat", odsAttrs.getContext());
}

ConcatOpGenericAdaptorBase::ConcatOpGenericAdaptorBase(ConcatOp op) : ConcatOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConcatOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ConcatOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ConcatOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ConcatOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ConcatOpAdaptor::ConcatOpAdaptor(ConcatOp op) : ConcatOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConcatOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.concat' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.concat' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConcatOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ConcatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ConcatOp::getInput1() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ConcatOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ConcatOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConcatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConcatOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ConcatOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ConcatOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ConcatOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ConcatOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ConcatOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ConcatOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ConcatOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ConcatOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConcatOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ConcatOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ConcatOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ConcatOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ConcatOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::ValueRange input1, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange input1, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange input1, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::ValueRange input1, uint32_t axis) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange input1, uint32_t axis) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange input1, uint32_t axis) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ConcatOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConcatOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConcatOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConcatOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ConcatOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ConcatOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ConcatOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ConcatOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ConcatOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ConcatOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ConcatOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ConstOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstOpGenericAdaptorBase::ConstOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.const", odsAttrs.getContext());
}

ConstOpGenericAdaptorBase::ConstOpGenericAdaptorBase(ConstOp op) : ConstOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ElementsAttr ConstOpGenericAdaptorBase::getValueAttr() {
  auto attr = ::llvm::cast<::mlir::ElementsAttr>(getProperties().value);
  return attr;
}

::mlir::ElementsAttr ConstOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ConstOpAdaptor::ConstOpAdaptor(ConstOp op) : ConstOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitError(loc, "'tosa.const' op ""requires attribute 'value'");

  if (tblgen_value && !((::llvm::isa<::mlir::ElementsAttr>(tblgen_value))))
    return emitError(loc, "'tosa.const' op ""attribute 'value' failed to satisfy constraint: constant vector/tensor attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConstOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConstOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ConstOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.value;
       auto attr = dict.get("value");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for value in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `value` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ConstOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.value;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("value",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ConstOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.value.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ConstOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "value")
      return prop.value;
  return std::nullopt;
}

void ConstOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "value") {
       prop.value = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.value)>>(value);
       return;
    }
}

void ConstOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.value) attrs.append("value", prop.value);
}

::mlir::LogicalResult ConstOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getValueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps8(attr, "value", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ConstOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.value)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConstOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.value);
}

::mlir::ElementsAttr ConstOp::getValueAttr() {
  return ::llvm::cast<::mlir::ElementsAttr>(getProperties().value);
}

::mlir::ElementsAttr ConstOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ConstOp::setValueAttr(::mlir::ElementsAttr attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::ElementsAttr value) {
  odsState.getOrAddProperties<Properties>().value = value;
  odsState.addTypes(output);
}

void ConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ElementsAttr value) {
  odsState.getOrAddProperties<Properties>().value = value;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  auto attrName = getValueAttrName(odsState.name);
  for (auto attr : attributes) {
    if (attr.getName() != attrName) continue;
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
    odsState.addTypes({::llvm::cast<::mlir::TypedAttr>(attr.getValue()).getType()});
  }
}

::mlir::LogicalResult ConstOp::verifyInvariantsImpl() {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitOpError("requires attribute 'value'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps8(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>(getValue().getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>(getValue().getType()).getShape()))))
    return emitOpError("failed to verify that all of {value, output} have same shape");
  return ::mlir::success();
}

::mlir::LogicalResult ConstOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void ConstOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ConstOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::Conv2DOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Conv2DOpGenericAdaptorBase::Conv2DOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.conv2d", odsAttrs.getContext());
}

Conv2DOpGenericAdaptorBase::Conv2DOpGenericAdaptorBase(Conv2DOp op) : Conv2DOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Conv2DOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Conv2DOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr Conv2DOpGenericAdaptorBase::getPadAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
  return attr;
}

::llvm::ArrayRef<int64_t> Conv2DOpGenericAdaptorBase::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv2DOpGenericAdaptorBase::getStrideAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
  return attr;
}

::llvm::ArrayRef<int64_t> Conv2DOpGenericAdaptorBase::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv2DOpGenericAdaptorBase::getDilationAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().dilation);
  return attr;
}

::llvm::ArrayRef<int64_t> Conv2DOpGenericAdaptorBase::getDilation() {
  auto attr = getDilationAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr Conv2DOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> Conv2DOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr Conv2DOpGenericAdaptorBase::getLocalBoundAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool Conv2DOpGenericAdaptorBase::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
Conv2DOpAdaptor::Conv2DOpAdaptor(Conv2DOp op) : Conv2DOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Conv2DOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dilation = getProperties().dilation; (void)tblgen_dilation;
  if (!tblgen_dilation) return emitError(loc, "'tosa.conv2d' op ""requires attribute 'dilation'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitError(loc, "'tosa.conv2d' op ""requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitError(loc, "'tosa.conv2d' op ""requires attribute 'stride'");

  if (tblgen_pad && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_pad))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_pad).size() == 4))))
    return emitError(loc, "'tosa.conv2d' op ""attribute 'pad' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements");

  if (tblgen_stride && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_stride))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_stride).size() == 2))))
    return emitError(loc, "'tosa.conv2d' op ""attribute 'stride' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_dilation && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_dilation))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_dilation).size() == 2))))
    return emitError(loc, "'tosa.conv2d' op ""attribute 'dilation' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::ConvOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.conv2d' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for Conv type op quantization information.");

  if (tblgen_local_bound && !((::llvm::isa<::mlir::BoolAttr>(tblgen_local_bound))))
    return emitError(loc, "'tosa.conv2d' op ""attribute 'local_bound' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Conv2DOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Conv2DOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Conv2DOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> Conv2DOp::getWeight() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::Value Conv2DOp::getBias() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &Conv2DOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Conv2DOp::getWeightMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Conv2DOp::getBiasMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Conv2DOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Conv2DOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Conv2DOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Conv2DOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dilation;
       auto attr = dict.get("dilation");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dilation in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dilation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.local_bound;
       auto attr = dict.get("local_bound");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for local_bound in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `local_bound` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pad;
       auto attr = dict.get("pad");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pad in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pad` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stride;
       auto attr = dict.get("stride");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for stride in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute Conv2DOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dilation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dilation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.local_bound;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("local_bound",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pad;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pad",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stride;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Conv2DOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dilation.getAsOpaquePointer()), 
    llvm::hash_value(prop.local_bound.getAsOpaquePointer()), 
    llvm::hash_value(prop.pad.getAsOpaquePointer()), 
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()), 
    llvm::hash_value(prop.stride.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Conv2DOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dilation")
      return prop.dilation;

    if (name == "local_bound")
      return prop.local_bound;

    if (name == "pad")
      return prop.pad;

    if (name == "quantization_info")
      return prop.quantization_info;

    if (name == "stride")
      return prop.stride;
  return std::nullopt;
}

void Conv2DOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dilation") {
       prop.dilation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dilation)>>(value);
       return;
    }

    if (name == "local_bound") {
       prop.local_bound = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.local_bound)>>(value);
       return;
    }

    if (name == "pad") {
       prop.pad = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pad)>>(value);
       return;
    }

    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }

    if (name == "stride") {
       prop.stride = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride)>>(value);
       return;
    }
}

void Conv2DOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dilation) attrs.append("dilation", prop.dilation);

    if (prop.local_bound) attrs.append("local_bound", prop.local_bound);

    if (prop.pad) attrs.append("pad", prop.pad);

    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);

    if (prop.stride) attrs.append("stride", prop.stride);
}

::mlir::LogicalResult Conv2DOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDilationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "dilation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLocalBoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "local_bound", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPadAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(attr, "pad", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStrideAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "stride", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Conv2DOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dilation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.local_bound)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.pad)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.stride)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Conv2DOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dilation);

  writer.writeOptionalAttribute(prop.local_bound);
  writer.writeAttribute(prop.pad);

  writer.writeOptionalAttribute(prop.quantization_info);
  writer.writeAttribute(prop.stride);
}

::mlir::DenseI64ArrayAttr Conv2DOp::getPadAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
}

::llvm::ArrayRef<int64_t> Conv2DOp::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv2DOp::getStrideAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
}

::llvm::ArrayRef<int64_t> Conv2DOp::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv2DOp::getDilationAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().dilation);
}

::llvm::ArrayRef<int64_t> Conv2DOp::getDilation() {
  auto attr = getDilationAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr Conv2DOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> Conv2DOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr Conv2DOp::getLocalBoundAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
}

bool Conv2DOp::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void Conv2DOp::setPadAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getPadAttrName(), attr);
}

void Conv2DOp::setPad(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getPadAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void Conv2DOp::setStrideAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStrideAttrName(), attr);
}

void Conv2DOp::setStride(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStrideAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void Conv2DOp::setDilationAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getDilationAttrName(), attr);
}

void Conv2DOp::setDilation(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getDilationAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void Conv2DOp::setQuantizationInfoAttr(mlir::tosa::ConvOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

void Conv2DOp::setLocalBoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getLocalBoundAttrName(), attr);
}

void Conv2DOp::setLocalBound(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLocalBoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getLocalBoundAttrName());
}

::mlir::Attribute Conv2DOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

::mlir::Attribute Conv2DOp::removeLocalBoundAttr() {
    auto &attr = getProperties().local_bound;
    attr = {};
    return attr;
}

void Conv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputType, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation) {
    buildConvOpWithQuantInfo(odsBuilder, odsState, outputType,
                             input, weight, bias,
                             pad, stride, dilation);
  
}

void Conv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().dilation = dilation;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  odsState.addTypes(output);
}

void Conv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().dilation = dilation;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Conv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().dilation = odsBuilder.getDenseI64ArrayAttr(dilation);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  odsState.addTypes(output);
}

void Conv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().dilation = odsBuilder.getDenseI64ArrayAttr(dilation);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Conv2DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Conv2DOp::verifyInvariantsImpl() {
  auto tblgen_dilation = getProperties().dilation; (void)tblgen_dilation;
  if (!tblgen_dilation) return emitOpError("requires attribute 'dilation'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitOpError("requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitOpError("requires attribute 'stride'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(*this, tblgen_pad, "pad")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_stride, "stride")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_dilation, "dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_local_bound, "local_bound")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Conv2DOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult Conv2DOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Conv2DOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLocalBoundAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("local_bound");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void Conv2DOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
Conv2DOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  Conv2DOp::Adaptor adaptor(operands, attributes, properties, regions);
  return Conv2DOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::Conv2DOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::Conv3DOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Conv3DOpGenericAdaptorBase::Conv3DOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.conv3d", odsAttrs.getContext());
}

Conv3DOpGenericAdaptorBase::Conv3DOpGenericAdaptorBase(Conv3DOp op) : Conv3DOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Conv3DOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Conv3DOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr Conv3DOpGenericAdaptorBase::getPadAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
  return attr;
}

::llvm::ArrayRef<int64_t> Conv3DOpGenericAdaptorBase::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv3DOpGenericAdaptorBase::getStrideAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
  return attr;
}

::llvm::ArrayRef<int64_t> Conv3DOpGenericAdaptorBase::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv3DOpGenericAdaptorBase::getDilationAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().dilation);
  return attr;
}

::llvm::ArrayRef<int64_t> Conv3DOpGenericAdaptorBase::getDilation() {
  auto attr = getDilationAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr Conv3DOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> Conv3DOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr Conv3DOpGenericAdaptorBase::getLocalBoundAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool Conv3DOpGenericAdaptorBase::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
Conv3DOpAdaptor::Conv3DOpAdaptor(Conv3DOp op) : Conv3DOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Conv3DOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dilation = getProperties().dilation; (void)tblgen_dilation;
  if (!tblgen_dilation) return emitError(loc, "'tosa.conv3d' op ""requires attribute 'dilation'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitError(loc, "'tosa.conv3d' op ""requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitError(loc, "'tosa.conv3d' op ""requires attribute 'stride'");

  if (tblgen_pad && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_pad))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_pad).size() == 6))))
    return emitError(loc, "'tosa.conv3d' op ""attribute 'pad' failed to satisfy constraint: i64 dense array attribute with exactly 6 elements");

  if (tblgen_stride && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_stride))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_stride).size() == 3))))
    return emitError(loc, "'tosa.conv3d' op ""attribute 'stride' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements");

  if (tblgen_dilation && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_dilation))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_dilation).size() == 3))))
    return emitError(loc, "'tosa.conv3d' op ""attribute 'dilation' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements");

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::ConvOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.conv3d' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for Conv type op quantization information.");

  if (tblgen_local_bound && !((::llvm::isa<::mlir::BoolAttr>(tblgen_local_bound))))
    return emitError(loc, "'tosa.conv3d' op ""attribute 'local_bound' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Conv3DOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Conv3DOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Conv3DOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> Conv3DOp::getWeight() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::Value Conv3DOp::getBias() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &Conv3DOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Conv3DOp::getWeightMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Conv3DOp::getBiasMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Conv3DOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Conv3DOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Conv3DOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Conv3DOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dilation;
       auto attr = dict.get("dilation");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dilation in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dilation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.local_bound;
       auto attr = dict.get("local_bound");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for local_bound in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `local_bound` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pad;
       auto attr = dict.get("pad");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pad in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pad` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stride;
       auto attr = dict.get("stride");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for stride in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute Conv3DOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dilation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dilation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.local_bound;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("local_bound",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pad;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pad",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stride;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Conv3DOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dilation.getAsOpaquePointer()), 
    llvm::hash_value(prop.local_bound.getAsOpaquePointer()), 
    llvm::hash_value(prop.pad.getAsOpaquePointer()), 
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()), 
    llvm::hash_value(prop.stride.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Conv3DOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dilation")
      return prop.dilation;

    if (name == "local_bound")
      return prop.local_bound;

    if (name == "pad")
      return prop.pad;

    if (name == "quantization_info")
      return prop.quantization_info;

    if (name == "stride")
      return prop.stride;
  return std::nullopt;
}

void Conv3DOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dilation") {
       prop.dilation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dilation)>>(value);
       return;
    }

    if (name == "local_bound") {
       prop.local_bound = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.local_bound)>>(value);
       return;
    }

    if (name == "pad") {
       prop.pad = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pad)>>(value);
       return;
    }

    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }

    if (name == "stride") {
       prop.stride = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride)>>(value);
       return;
    }
}

void Conv3DOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dilation) attrs.append("dilation", prop.dilation);

    if (prop.local_bound) attrs.append("local_bound", prop.local_bound);

    if (prop.pad) attrs.append("pad", prop.pad);

    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);

    if (prop.stride) attrs.append("stride", prop.stride);
}

::mlir::LogicalResult Conv3DOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDilationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps11(attr, "dilation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLocalBoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "local_bound", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPadAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps10(attr, "pad", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStrideAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps11(attr, "stride", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Conv3DOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dilation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.local_bound)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.pad)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.stride)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Conv3DOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dilation);

  writer.writeOptionalAttribute(prop.local_bound);
  writer.writeAttribute(prop.pad);

  writer.writeOptionalAttribute(prop.quantization_info);
  writer.writeAttribute(prop.stride);
}

::mlir::DenseI64ArrayAttr Conv3DOp::getPadAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
}

::llvm::ArrayRef<int64_t> Conv3DOp::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv3DOp::getStrideAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
}

::llvm::ArrayRef<int64_t> Conv3DOp::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr Conv3DOp::getDilationAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().dilation);
}

::llvm::ArrayRef<int64_t> Conv3DOp::getDilation() {
  auto attr = getDilationAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr Conv3DOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> Conv3DOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr Conv3DOp::getLocalBoundAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
}

bool Conv3DOp::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void Conv3DOp::setPadAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getPadAttrName(), attr);
}

void Conv3DOp::setPad(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getPadAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void Conv3DOp::setStrideAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStrideAttrName(), attr);
}

void Conv3DOp::setStride(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStrideAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void Conv3DOp::setDilationAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getDilationAttrName(), attr);
}

void Conv3DOp::setDilation(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getDilationAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void Conv3DOp::setQuantizationInfoAttr(mlir::tosa::ConvOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

void Conv3DOp::setLocalBoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getLocalBoundAttrName(), attr);
}

void Conv3DOp::setLocalBound(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLocalBoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getLocalBoundAttrName());
}

::mlir::Attribute Conv3DOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

::mlir::Attribute Conv3DOp::removeLocalBoundAttr() {
    auto &attr = getProperties().local_bound;
    attr = {};
    return attr;
}

void Conv3DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputType, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation) {
    buildConvOpWithQuantInfo(odsBuilder, odsState, outputType,
                             input, weight, bias,
                             pad, stride, dilation);
  
}

void Conv3DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().dilation = dilation;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  odsState.addTypes(output);
}

void Conv3DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().dilation = dilation;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Conv3DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().dilation = odsBuilder.getDenseI64ArrayAttr(dilation);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  odsState.addTypes(output);
}

void Conv3DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().dilation = odsBuilder.getDenseI64ArrayAttr(dilation);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Conv3DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Conv3DOp::verifyInvariantsImpl() {
  auto tblgen_dilation = getProperties().dilation; (void)tblgen_dilation;
  if (!tblgen_dilation) return emitOpError("requires attribute 'dilation'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitOpError("requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitOpError("requires attribute 'stride'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps10(*this, tblgen_pad, "pad")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps11(*this, tblgen_stride, "stride")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps11(*this, tblgen_dilation, "dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_local_bound, "local_bound")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Conv3DOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult Conv3DOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Conv3DOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLocalBoundAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("local_bound");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void Conv3DOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
Conv3DOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  Conv3DOp::Adaptor adaptor(operands, attributes, properties, regions);
  return Conv3DOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::Conv3DOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::CustomOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CustomOpGenericAdaptorBase::CustomOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.custom", odsAttrs.getContext());
}

CustomOpGenericAdaptorBase::CustomOpGenericAdaptorBase(CustomOp op) : CustomOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CustomOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CustomOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr CustomOpGenericAdaptorBase::getOperatorNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().operator_name);
  return attr;
}

::llvm::StringRef CustomOpGenericAdaptorBase::getOperatorName() {
  auto attr = getOperatorNameAttr();
  return attr.getValue();
}

::mlir::StringAttr CustomOpGenericAdaptorBase::getDomainNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().domain_name);
  return attr;
}

::llvm::StringRef CustomOpGenericAdaptorBase::getDomainName() {
  auto attr = getDomainNameAttr();
  return attr.getValue();
}

::mlir::StringAttr CustomOpGenericAdaptorBase::getImplementationAttrsAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().implementation_attrs);
  return attr;
}

::llvm::StringRef CustomOpGenericAdaptorBase::getImplementationAttrs() {
  auto attr = getImplementationAttrsAttr();
  return attr.getValue();
}

} // namespace detail
CustomOpAdaptor::CustomOpAdaptor(CustomOp op) : CustomOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CustomOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_domain_name = getProperties().domain_name; (void)tblgen_domain_name;
  if (!tblgen_domain_name) return emitError(loc, "'tosa.custom' op ""requires attribute 'domain_name'");
  auto tblgen_implementation_attrs = getProperties().implementation_attrs; (void)tblgen_implementation_attrs;
  if (!tblgen_implementation_attrs) return emitError(loc, "'tosa.custom' op ""requires attribute 'implementation_attrs'");
  auto tblgen_operator_name = getProperties().operator_name; (void)tblgen_operator_name;
  if (!tblgen_operator_name) return emitError(loc, "'tosa.custom' op ""requires attribute 'operator_name'");

  if (tblgen_operator_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_operator_name))))
    return emitError(loc, "'tosa.custom' op ""attribute 'operator_name' failed to satisfy constraint: string attribute");

  if (tblgen_domain_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_domain_name))))
    return emitError(loc, "'tosa.custom' op ""attribute 'domain_name' failed to satisfy constraint: string attribute");

  if (tblgen_implementation_attrs && !((::llvm::isa<::mlir::StringAttr>(tblgen_implementation_attrs))))
    return emitError(loc, "'tosa.custom' op ""attribute 'implementation_attrs' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CustomOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CustomOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CustomOp::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CustomOp::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CustomOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CustomOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range CustomOp::getOutputs() {
  return getODSResults(0);
}

::mlir::LogicalResult CustomOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.domain_name;
       auto attr = dict.get("domain_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for domain_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `domain_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.implementation_attrs;
       auto attr = dict.get("implementation_attrs");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for implementation_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `implementation_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.operator_name;
       auto attr = dict.get("operator_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for operator_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `operator_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CustomOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.domain_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("domain_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.implementation_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("implementation_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operator_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("operator_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CustomOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.domain_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.implementation_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.operator_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CustomOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "domain_name")
      return prop.domain_name;

    if (name == "implementation_attrs")
      return prop.implementation_attrs;

    if (name == "operator_name")
      return prop.operator_name;
  return std::nullopt;
}

void CustomOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "domain_name") {
       prop.domain_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.domain_name)>>(value);
       return;
    }

    if (name == "implementation_attrs") {
       prop.implementation_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.implementation_attrs)>>(value);
       return;
    }

    if (name == "operator_name") {
       prop.operator_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.operator_name)>>(value);
       return;
    }
}

void CustomOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.domain_name) attrs.append("domain_name", prop.domain_name);

    if (prop.implementation_attrs) attrs.append("implementation_attrs", prop.implementation_attrs);

    if (prop.operator_name) attrs.append("operator_name", prop.operator_name);
}

::mlir::LogicalResult CustomOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDomainNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(attr, "domain_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getImplementationAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(attr, "implementation_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOperatorNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(attr, "operator_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CustomOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.domain_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.implementation_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.operator_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CustomOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.domain_name);
  writer.writeAttribute(prop.implementation_attrs);
  writer.writeAttribute(prop.operator_name);
}

::mlir::StringAttr CustomOp::getOperatorNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().operator_name);
}

::llvm::StringRef CustomOp::getOperatorName() {
  auto attr = getOperatorNameAttr();
  return attr.getValue();
}

::mlir::StringAttr CustomOp::getDomainNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().domain_name);
}

::llvm::StringRef CustomOp::getDomainName() {
  auto attr = getDomainNameAttr();
  return attr.getValue();
}

::mlir::StringAttr CustomOp::getImplementationAttrsAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().implementation_attrs);
}

::llvm::StringRef CustomOp::getImplementationAttrs() {
  auto attr = getImplementationAttrsAttr();
  return attr.getValue();
}

void CustomOp::setOperatorNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getOperatorNameAttrName(), attr);
}

void CustomOp::setOperatorName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getOperatorNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void CustomOp::setDomainNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getDomainNameAttrName(), attr);
}

void CustomOp::setDomainName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getDomainNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void CustomOp::setImplementationAttrsAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getImplementationAttrsAttrName(), attr);
}

void CustomOp::setImplementationAttrs(::llvm::StringRef attrValue) {
  (*this)->setAttr(getImplementationAttrsAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void CustomOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::StringAttr operator_name, ::mlir::StringAttr domain_name, ::mlir::StringAttr implementation_attrs, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.getOrAddProperties<Properties>().operator_name = operator_name;
  odsState.getOrAddProperties<Properties>().domain_name = domain_name;
  odsState.getOrAddProperties<Properties>().implementation_attrs = implementation_attrs;
  odsState.addTypes(outputs);
}

void CustomOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::llvm::StringRef operator_name, ::llvm::StringRef domain_name, ::llvm::StringRef implementation_attrs, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.getOrAddProperties<Properties>().operator_name = odsBuilder.getStringAttr(operator_name);
  odsState.getOrAddProperties<Properties>().domain_name = odsBuilder.getStringAttr(domain_name);
  odsState.getOrAddProperties<Properties>().implementation_attrs = odsBuilder.getStringAttr(implementation_attrs);
  odsState.addTypes(outputs);
}

void CustomOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CustomOp::verifyInvariantsImpl() {
  auto tblgen_domain_name = getProperties().domain_name; (void)tblgen_domain_name;
  if (!tblgen_domain_name) return emitOpError("requires attribute 'domain_name'");
  auto tblgen_implementation_attrs = getProperties().implementation_attrs; (void)tblgen_implementation_attrs;
  if (!tblgen_implementation_attrs) return emitOpError("requires attribute 'implementation_attrs'");
  auto tblgen_operator_name = getProperties().operator_name; (void)tblgen_operator_name;
  if (!tblgen_operator_name) return emitOpError("requires attribute 'operator_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(*this, tblgen_operator_name, "operator_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(*this, tblgen_domain_name, "domain_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(*this, tblgen_implementation_attrs, "implementation_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CustomOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CustomOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CustomOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::CustomOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::DepthwiseConv2DOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DepthwiseConv2DOpGenericAdaptorBase::DepthwiseConv2DOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.depthwise_conv2d", odsAttrs.getContext());
}

DepthwiseConv2DOpGenericAdaptorBase::DepthwiseConv2DOpGenericAdaptorBase(DepthwiseConv2DOp op) : DepthwiseConv2DOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DepthwiseConv2DOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DepthwiseConv2DOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr DepthwiseConv2DOpGenericAdaptorBase::getPadAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
  return attr;
}

::llvm::ArrayRef<int64_t> DepthwiseConv2DOpGenericAdaptorBase::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr DepthwiseConv2DOpGenericAdaptorBase::getStrideAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
  return attr;
}

::llvm::ArrayRef<int64_t> DepthwiseConv2DOpGenericAdaptorBase::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr DepthwiseConv2DOpGenericAdaptorBase::getDilationAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().dilation);
  return attr;
}

::llvm::ArrayRef<int64_t> DepthwiseConv2DOpGenericAdaptorBase::getDilation() {
  auto attr = getDilationAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr DepthwiseConv2DOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> DepthwiseConv2DOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr DepthwiseConv2DOpGenericAdaptorBase::getLocalBoundAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool DepthwiseConv2DOpGenericAdaptorBase::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
DepthwiseConv2DOpAdaptor::DepthwiseConv2DOpAdaptor(DepthwiseConv2DOp op) : DepthwiseConv2DOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DepthwiseConv2DOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dilation = getProperties().dilation; (void)tblgen_dilation;
  if (!tblgen_dilation) return emitError(loc, "'tosa.depthwise_conv2d' op ""requires attribute 'dilation'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitError(loc, "'tosa.depthwise_conv2d' op ""requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitError(loc, "'tosa.depthwise_conv2d' op ""requires attribute 'stride'");

  if (tblgen_pad && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_pad))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_pad).size() == 4))))
    return emitError(loc, "'tosa.depthwise_conv2d' op ""attribute 'pad' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements");

  if (tblgen_stride && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_stride))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_stride).size() == 2))))
    return emitError(loc, "'tosa.depthwise_conv2d' op ""attribute 'stride' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_dilation && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_dilation))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_dilation).size() == 2))))
    return emitError(loc, "'tosa.depthwise_conv2d' op ""attribute 'dilation' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::ConvOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.depthwise_conv2d' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for Conv type op quantization information.");

  if (tblgen_local_bound && !((::llvm::isa<::mlir::BoolAttr>(tblgen_local_bound))))
    return emitError(loc, "'tosa.depthwise_conv2d' op ""attribute 'local_bound' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DepthwiseConv2DOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DepthwiseConv2DOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DepthwiseConv2DOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> DepthwiseConv2DOp::getWeight() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::Value DepthwiseConv2DOp::getBias() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &DepthwiseConv2DOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DepthwiseConv2DOp::getWeightMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DepthwiseConv2DOp::getBiasMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DepthwiseConv2DOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DepthwiseConv2DOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DepthwiseConv2DOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult DepthwiseConv2DOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dilation;
       auto attr = dict.get("dilation");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dilation in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dilation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.local_bound;
       auto attr = dict.get("local_bound");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for local_bound in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `local_bound` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pad;
       auto attr = dict.get("pad");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pad in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pad` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stride;
       auto attr = dict.get("stride");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for stride in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute DepthwiseConv2DOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dilation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dilation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.local_bound;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("local_bound",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pad;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pad",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stride;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DepthwiseConv2DOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dilation.getAsOpaquePointer()), 
    llvm::hash_value(prop.local_bound.getAsOpaquePointer()), 
    llvm::hash_value(prop.pad.getAsOpaquePointer()), 
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()), 
    llvm::hash_value(prop.stride.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> DepthwiseConv2DOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dilation")
      return prop.dilation;

    if (name == "local_bound")
      return prop.local_bound;

    if (name == "pad")
      return prop.pad;

    if (name == "quantization_info")
      return prop.quantization_info;

    if (name == "stride")
      return prop.stride;
  return std::nullopt;
}

void DepthwiseConv2DOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dilation") {
       prop.dilation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dilation)>>(value);
       return;
    }

    if (name == "local_bound") {
       prop.local_bound = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.local_bound)>>(value);
       return;
    }

    if (name == "pad") {
       prop.pad = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pad)>>(value);
       return;
    }

    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }

    if (name == "stride") {
       prop.stride = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride)>>(value);
       return;
    }
}

void DepthwiseConv2DOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dilation) attrs.append("dilation", prop.dilation);

    if (prop.local_bound) attrs.append("local_bound", prop.local_bound);

    if (prop.pad) attrs.append("pad", prop.pad);

    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);

    if (prop.stride) attrs.append("stride", prop.stride);
}

::mlir::LogicalResult DepthwiseConv2DOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDilationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "dilation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLocalBoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "local_bound", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPadAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(attr, "pad", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStrideAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "stride", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DepthwiseConv2DOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dilation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.local_bound)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.pad)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.stride)))
    return ::mlir::failure();
  return ::mlir::success();
}

void DepthwiseConv2DOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dilation);

  writer.writeOptionalAttribute(prop.local_bound);
  writer.writeAttribute(prop.pad);

  writer.writeOptionalAttribute(prop.quantization_info);
  writer.writeAttribute(prop.stride);
}

::mlir::DenseI64ArrayAttr DepthwiseConv2DOp::getPadAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
}

::llvm::ArrayRef<int64_t> DepthwiseConv2DOp::getPad() {
  auto attr = getPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr DepthwiseConv2DOp::getStrideAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
}

::llvm::ArrayRef<int64_t> DepthwiseConv2DOp::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr DepthwiseConv2DOp::getDilationAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().dilation);
}

::llvm::ArrayRef<int64_t> DepthwiseConv2DOp::getDilation() {
  auto attr = getDilationAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr DepthwiseConv2DOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> DepthwiseConv2DOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr DepthwiseConv2DOp::getLocalBoundAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
}

bool DepthwiseConv2DOp::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void DepthwiseConv2DOp::setPadAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getPadAttrName(), attr);
}

void DepthwiseConv2DOp::setPad(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getPadAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void DepthwiseConv2DOp::setStrideAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStrideAttrName(), attr);
}

void DepthwiseConv2DOp::setStride(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStrideAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void DepthwiseConv2DOp::setDilationAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getDilationAttrName(), attr);
}

void DepthwiseConv2DOp::setDilation(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getDilationAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void DepthwiseConv2DOp::setQuantizationInfoAttr(mlir::tosa::ConvOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

void DepthwiseConv2DOp::setLocalBoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getLocalBoundAttrName(), attr);
}

void DepthwiseConv2DOp::setLocalBound(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLocalBoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getLocalBoundAttrName());
}

::mlir::Attribute DepthwiseConv2DOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

::mlir::Attribute DepthwiseConv2DOp::removeLocalBoundAttr() {
    auto &attr = getProperties().local_bound;
    attr = {};
    return attr;
}

void DepthwiseConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputType, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation) {
    buildConvOpWithQuantInfo(odsBuilder, odsState, outputType,
                             input, weight, bias,
                             pad, stride, dilation);
  
}

void DepthwiseConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().dilation = dilation;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  odsState.addTypes(output);
}

void DepthwiseConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().dilation = dilation;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DepthwiseConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().dilation = odsBuilder.getDenseI64ArrayAttr(dilation);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  odsState.addTypes(output);
}

void DepthwiseConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> dilation, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().dilation = odsBuilder.getDenseI64ArrayAttr(dilation);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DepthwiseConv2DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DepthwiseConv2DOp::verifyInvariantsImpl() {
  auto tblgen_dilation = getProperties().dilation; (void)tblgen_dilation;
  if (!tblgen_dilation) return emitOpError("requires attribute 'dilation'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitOpError("requires attribute 'pad'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitOpError("requires attribute 'stride'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(*this, tblgen_pad, "pad")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_stride, "stride")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_dilation, "dilation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_local_bound, "local_bound")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DepthwiseConv2DOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DepthwiseConv2DOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DepthwiseConv2DOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLocalBoundAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("local_bound");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void DepthwiseConv2DOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
DepthwiseConv2DOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  DepthwiseConv2DOp::Adaptor adaptor(operands, attributes, properties, regions);
  return DepthwiseConv2DOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::DepthwiseConv2DOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::DivOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DivOpGenericAdaptorBase::DivOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.div", odsAttrs.getContext());
}

DivOpGenericAdaptorBase::DivOpGenericAdaptorBase(DivOp op) : DivOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DivOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DivOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DivOpAdaptor::DivOpAdaptor(DivOp op) : DivOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DivOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DivOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> DivOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DivOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DivOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DivOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DivOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DivOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DivOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DivOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void DivOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::DivOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::EqualOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EqualOpGenericAdaptorBase::EqualOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.equal", odsAttrs.getContext());
}

EqualOpGenericAdaptorBase::EqualOpGenericAdaptorBase(EqualOp op) : EqualOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> EqualOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EqualOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
EqualOpAdaptor::EqualOpAdaptor(EqualOp op) : EqualOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult EqualOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EqualOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EqualOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> EqualOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> EqualOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &EqualOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &EqualOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> EqualOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EqualOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> EqualOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(EqualOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EqualOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(EqualOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult EqualOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EqualOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EqualOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void EqualOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void EqualOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
EqualOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ::llvm::SmallVector<::mlir::ShapedTypeComponents, 2> retComponents;
  if (failed(EqualOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::EqualOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ErfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ErfOpGenericAdaptorBase::ErfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.erf", odsAttrs.getContext());
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

::mlir::TypedValue<::mlir::TensorType> ErfOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ErfOp::getInputMutable() {
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

::mlir::TypedValue<::mlir::TensorType> ErfOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
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

::mlir::LogicalResult ErfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ErfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ErfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ErfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ErfOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ExpOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpOpGenericAdaptorBase::ExpOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.exp", odsAttrs.getContext());
}

ExpOpGenericAdaptorBase::ExpOpGenericAdaptorBase(ExpOp op) : ExpOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExpOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExpOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExpOpAdaptor::ExpOpAdaptor(ExpOp op) : ExpOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExpOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ExpOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExpOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExpOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExpOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ExpOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExpOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExpOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ExpOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ExpOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ExpOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::FFT2dOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FFT2dOpGenericAdaptorBase::FFT2dOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.fft2d", odsAttrs.getContext());
}

FFT2dOpGenericAdaptorBase::FFT2dOpGenericAdaptorBase(FFT2dOp op) : FFT2dOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FFT2dOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FFT2dOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr FFT2dOpGenericAdaptorBase::getInverseAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().inverse);
  return attr;
}

bool FFT2dOpGenericAdaptorBase::getInverse() {
  auto attr = getInverseAttr();
  return attr.getValue();
}

::mlir::BoolAttr FFT2dOpGenericAdaptorBase::getLocalBoundAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool FFT2dOpGenericAdaptorBase::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
FFT2dOpAdaptor::FFT2dOpAdaptor(FFT2dOp op) : FFT2dOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FFT2dOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inverse = getProperties().inverse; (void)tblgen_inverse;
  if (!tblgen_inverse) return emitError(loc, "'tosa.fft2d' op ""requires attribute 'inverse'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;

  if (tblgen_inverse && !((::llvm::isa<::mlir::BoolAttr>(tblgen_inverse))))
    return emitError(loc, "'tosa.fft2d' op ""attribute 'inverse' failed to satisfy constraint: bool attribute");

  if (tblgen_local_bound && !((::llvm::isa<::mlir::BoolAttr>(tblgen_local_bound))))
    return emitError(loc, "'tosa.fft2d' op ""attribute 'local_bound' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

void FFT2dOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "output_real");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "output_imag");
}

std::pair<unsigned, unsigned> FFT2dOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FFT2dOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FFT2dOp::getInputReal() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value FFT2dOp::getInputImag() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &FFT2dOp::getInputRealMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FFT2dOp::getInputImagMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FFT2dOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FFT2dOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FFT2dOp::getOutputReal() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value FFT2dOp::getOutputImag() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

::mlir::LogicalResult FFT2dOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inverse;
       auto attr = dict.get("inverse");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for inverse in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inverse` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.local_bound;
       auto attr = dict.get("local_bound");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for local_bound in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `local_bound` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FFT2dOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inverse;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inverse",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.local_bound;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("local_bound",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FFT2dOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inverse.getAsOpaquePointer()), 
    llvm::hash_value(prop.local_bound.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FFT2dOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inverse")
      return prop.inverse;

    if (name == "local_bound")
      return prop.local_bound;
  return std::nullopt;
}

void FFT2dOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inverse") {
       prop.inverse = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inverse)>>(value);
       return;
    }

    if (name == "local_bound") {
       prop.local_bound = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.local_bound)>>(value);
       return;
    }
}

void FFT2dOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inverse) attrs.append("inverse", prop.inverse);

    if (prop.local_bound) attrs.append("local_bound", prop.local_bound);
}

::mlir::LogicalResult FFT2dOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInverseAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "inverse", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLocalBoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "local_bound", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FFT2dOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.inverse)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.local_bound)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FFT2dOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.inverse);

  writer.writeOptionalAttribute(prop.local_bound);
}

::mlir::BoolAttr FFT2dOp::getInverseAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().inverse);
}

bool FFT2dOp::getInverse() {
  auto attr = getInverseAttr();
  return attr.getValue();
}

::mlir::BoolAttr FFT2dOp::getLocalBoundAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
}

bool FFT2dOp::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void FFT2dOp::setInverseAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getInverseAttrName(), attr);
}

void FFT2dOp::setInverse(bool attrValue) {
  (*this)->setAttr(getInverseAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void FFT2dOp::setLocalBoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getLocalBoundAttrName(), attr);
}

void FFT2dOp::setLocalBound(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLocalBoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getLocalBoundAttrName());
}

::mlir::Attribute FFT2dOp::removeLocalBoundAttr() {
    auto &attr = getProperties().local_bound;
    attr = {};
    return attr;
}

void FFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output_real, ::mlir::Type output_imag, ::mlir::Value input_real, ::mlir::Value input_imag, ::mlir::BoolAttr inverse, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input_real);
  odsState.addOperands(input_imag);
  odsState.getOrAddProperties<Properties>().inverse = inverse;
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  odsState.addTypes(output_real);
  odsState.addTypes(output_imag);
}

void FFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input_real, ::mlir::Value input_imag, ::mlir::BoolAttr inverse, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input_real);
  odsState.addOperands(input_imag);
  odsState.getOrAddProperties<Properties>().inverse = inverse;
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output_real, ::mlir::Type output_imag, ::mlir::Value input_real, ::mlir::Value input_imag, bool inverse, /*optional*/bool local_bound) {
  odsState.addOperands(input_real);
  odsState.addOperands(input_imag);
  odsState.getOrAddProperties<Properties>().inverse = odsBuilder.getBoolAttr(inverse);
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  odsState.addTypes(output_real);
  odsState.addTypes(output_imag);
}

void FFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input_real, ::mlir::Value input_imag, bool inverse, /*optional*/bool local_bound) {
  odsState.addOperands(input_real);
  odsState.addOperands(input_imag);
  odsState.getOrAddProperties<Properties>().inverse = odsBuilder.getBoolAttr(inverse);
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FFT2dOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FFT2dOp::verifyInvariantsImpl() {
  auto tblgen_inverse = getProperties().inverse; (void)tblgen_inverse;
  if (!tblgen_inverse) return emitOpError("requires attribute 'inverse'");
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_inverse, "inverse")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_local_bound, "local_bound")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FFT2dOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FFT2dOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand input_realRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> input_realOperands(input_realRawOperands);  ::llvm::SMLoc input_realOperandsLoc;
  (void)input_realOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand input_imagRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> input_imagOperands(input_imagRawOperands);  ::llvm::SMLoc input_imagOperandsLoc;
  (void)input_imagOperandsLoc;
  ::mlir::Type input_realRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> input_realTypes(input_realRawTypes);
  ::mlir::Type input_imagRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> input_imagTypes(input_imagRawTypes);
  ::mlir::Type output_realRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> output_realTypes(output_realRawTypes);
  ::mlir::Type output_imagRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> output_imagTypes(output_imagRawTypes);

  input_realOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(input_realRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  input_imagOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(input_imagRawOperands[0]))
    return ::mlir::failure();
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
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    input_realRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    input_imagRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    output_realRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    output_imagRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  result.addTypes(output_realTypes);
  result.addTypes(output_imagTypes);
  if (parser.resolveOperands(input_realOperands, input_realTypes, input_realOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(input_imagOperands, input_imagTypes, input_imagOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FFT2dOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInputReal();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getInputImag();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLocalBoundAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("local_bound");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getInputReal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getInputImag().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ' << "(";
  {
    auto type = getOutputReal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOutputImag().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
}

void FFT2dOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
FFT2dOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  FFT2dOp::Adaptor adaptor(operands, attributes, properties, regions);
  return FFT2dOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::FFT2dOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::FloorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FloorOpGenericAdaptorBase::FloorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.floor", odsAttrs.getContext());
}

FloorOpGenericAdaptorBase::FloorOpGenericAdaptorBase(FloorOp op) : FloorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FloorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FloorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FloorOpAdaptor::FloorOpAdaptor(FloorOp op) : FloorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FloorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FloorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FloorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> FloorOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FloorOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FloorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FloorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> FloorOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FloorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FloorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FloorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FloorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FloorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void FloorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::FloorOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::FullyConnectedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FullyConnectedOpGenericAdaptorBase::FullyConnectedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.fully_connected", odsAttrs.getContext());
}

FullyConnectedOpGenericAdaptorBase::FullyConnectedOpGenericAdaptorBase(FullyConnectedOp op) : FullyConnectedOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FullyConnectedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FullyConnectedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

mlir::tosa::ConvOpQuantizationAttr FullyConnectedOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> FullyConnectedOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

} // namespace detail
FullyConnectedOpAdaptor::FullyConnectedOpAdaptor(FullyConnectedOp op) : FullyConnectedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FullyConnectedOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::ConvOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.fully_connected' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for Conv type op quantization information.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FullyConnectedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FullyConnectedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FullyConnectedOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> FullyConnectedOp::getWeight() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::Value FullyConnectedOp::getBias() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &FullyConnectedOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FullyConnectedOp::getWeightMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FullyConnectedOp::getBiasMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FullyConnectedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FullyConnectedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FullyConnectedOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult FullyConnectedOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FullyConnectedOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FullyConnectedOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FullyConnectedOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "quantization_info")
      return prop.quantization_info;
  return std::nullopt;
}

void FullyConnectedOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }
}

void FullyConnectedOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);
}

::mlir::LogicalResult FullyConnectedOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FullyConnectedOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FullyConnectedOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.quantization_info);
}

mlir::tosa::ConvOpQuantizationAttr FullyConnectedOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> FullyConnectedOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

void FullyConnectedOp::setQuantizationInfoAttr(mlir::tosa::ConvOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

::mlir::Attribute FullyConnectedOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

void FullyConnectedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type outputType, Value input, Value weight, Value bias) {
    buildFCOpWithQuantInfo(odsBuilder, odsState, outputType,
                           input, weight, bias);
  
}

void FullyConnectedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.addTypes(output);
}

void FullyConnectedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value weight, ::mlir::Value bias, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info) {
  odsState.addOperands(input);
  odsState.addOperands(weight);
  odsState.addOperands(bias);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FullyConnectedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FullyConnectedOp::verifyInvariantsImpl() {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps14(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FullyConnectedOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult FullyConnectedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FullyConnectedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void FullyConnectedOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
FullyConnectedOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  FullyConnectedOp::Adaptor adaptor(operands, attributes, properties, regions);
  return FullyConnectedOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::FullyConnectedOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::GatherOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.gather", odsAttrs.getContext());
}

GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(GatherOp op) : GatherOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GatherOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GatherOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GatherOpAdaptor::GatherOpAdaptor(GatherOp op) : GatherOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GatherOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GatherOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOp::getValues() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> GatherOp::getIndices() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &GatherOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &GatherOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GatherOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GatherOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value values, ::mlir::Value indices) {
  odsState.addOperands(values);
  odsState.addOperands(indices);
  odsState.addTypes(output);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value values, ::mlir::Value indices) {
  odsState.addOperands(values);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GatherOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps16(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GatherOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GatherOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GatherOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GatherOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
GatherOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  GatherOp::Adaptor adaptor(operands, attributes, properties, regions);
  return GatherOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::GatherOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::GreaterEqualOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GreaterEqualOpGenericAdaptorBase::GreaterEqualOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.greater_equal", odsAttrs.getContext());
}

GreaterEqualOpGenericAdaptorBase::GreaterEqualOpGenericAdaptorBase(GreaterEqualOp op) : GreaterEqualOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GreaterEqualOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GreaterEqualOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GreaterEqualOpAdaptor::GreaterEqualOpAdaptor(GreaterEqualOp op) : GreaterEqualOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GreaterEqualOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GreaterEqualOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GreaterEqualOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> GreaterEqualOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> GreaterEqualOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &GreaterEqualOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &GreaterEqualOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GreaterEqualOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GreaterEqualOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> GreaterEqualOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void GreaterEqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void GreaterEqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GreaterEqualOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GreaterEqualOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GreaterEqualOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GreaterEqualOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GreaterEqualOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GreaterEqualOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::GreaterEqualOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::GreaterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GreaterOpGenericAdaptorBase::GreaterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.greater", odsAttrs.getContext());
}

GreaterOpGenericAdaptorBase::GreaterOpGenericAdaptorBase(GreaterOp op) : GreaterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GreaterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GreaterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GreaterOpAdaptor::GreaterOpAdaptor(GreaterOp op) : GreaterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GreaterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GreaterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GreaterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> GreaterOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> GreaterOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &GreaterOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &GreaterOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GreaterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GreaterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> GreaterOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void GreaterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void GreaterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GreaterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GreaterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GreaterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GreaterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GreaterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GreaterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::GreaterOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::IdentityOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IdentityOpGenericAdaptorBase::IdentityOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.identity", odsAttrs.getContext());
}

IdentityOpGenericAdaptorBase::IdentityOpGenericAdaptorBase(IdentityOp op) : IdentityOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IdentityOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IdentityOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IdentityOpAdaptor::IdentityOpAdaptor(IdentityOp op) : IdentityOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IdentityOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IdentityOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IdentityOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IdentityOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IdentityOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IdentityOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IdentityOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IdentityOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void IdentityOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void IdentityOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IdentityOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IdentityOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IdentityOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IdentityOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IdentityOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void IdentityOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::IdentityOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::IfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IfOpGenericAdaptorBase::IfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.cond_if", odsAttrs.getContext());
}

IfOpGenericAdaptorBase::IfOpGenericAdaptorBase(IfOp op) : IfOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr IfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &IfOpGenericAdaptorBase::getThenBranch() {
  return *odsRegions[0];
}

::mlir::Region &IfOpGenericAdaptorBase::getElseBranch() {
  return *odsRegions[1];
}

::mlir::RegionRange IfOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
IfOpAdaptor::IfOpAdaptor(IfOp op) : IfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IfOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range IfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> IfOp::getCond() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range IfOp::getInputs() {
  return getODSOperands(1);
}

::mlir::OpOperand &IfOp::getCondMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange IfOp::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> IfOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range IfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range IfOp::getOutput() {
  return getODSResults(0);
}

::mlir::Region &IfOp::getThenBranch() {
  return (*this)->getRegion(0);
}

::mlir::Region &IfOp::getElseBranch() {
  return (*this)->getRegion(1);
}

void IfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange output, ::mlir::Value cond, ::mlir::ValueRange inputs) {
  odsState.addOperands(cond);
  odsState.addOperands(inputs);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  odsState.addTypes(output);
}

void IfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TosaOps0(*this, region, "then_branch", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TosaOps0(*this, region, "else_branch", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult IfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult
IfOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  IfOp::Adaptor adaptor(operands, attributes, properties, regions);
  return IfOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::IfOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogOpGenericAdaptorBase::LogOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.log", odsAttrs.getContext());
}

LogOpGenericAdaptorBase::LogOpGenericAdaptorBase(LogOp op) : LogOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogOpAdaptor::LogOpAdaptor(LogOp op) : LogOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LogOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogicalAndOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogicalAndOpGenericAdaptorBase::LogicalAndOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.logical_and", odsAttrs.getContext());
}

LogicalAndOpGenericAdaptorBase::LogicalAndOpGenericAdaptorBase(LogicalAndOp op) : LogicalAndOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogicalAndOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogicalAndOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogicalAndOpAdaptor::LogicalAndOpAdaptor(LogicalAndOp op) : LogicalAndOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogicalAndOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogicalAndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogicalAndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalAndOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> LogicalAndOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &LogicalAndOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LogicalAndOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogicalAndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogicalAndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalAndOp::getZ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogicalAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type z, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(z);
}

void LogicalAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogicalAndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogicalAndOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogicalAndOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogicalAndOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogicalAndOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogicalAndOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogicalAndOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogicalLeftShiftOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogicalLeftShiftOpGenericAdaptorBase::LogicalLeftShiftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.logical_left_shift", odsAttrs.getContext());
}

LogicalLeftShiftOpGenericAdaptorBase::LogicalLeftShiftOpGenericAdaptorBase(LogicalLeftShiftOp op) : LogicalLeftShiftOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogicalLeftShiftOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogicalLeftShiftOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogicalLeftShiftOpAdaptor::LogicalLeftShiftOpAdaptor(LogicalLeftShiftOp op) : LogicalLeftShiftOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogicalLeftShiftOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogicalLeftShiftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogicalLeftShiftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalLeftShiftOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> LogicalLeftShiftOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &LogicalLeftShiftOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LogicalLeftShiftOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogicalLeftShiftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogicalLeftShiftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalLeftShiftOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogicalLeftShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void LogicalLeftShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogicalLeftShiftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogicalLeftShiftOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogicalLeftShiftOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogicalLeftShiftOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogicalLeftShiftOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogicalLeftShiftOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogicalLeftShiftOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogicalNotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogicalNotOpGenericAdaptorBase::LogicalNotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.logical_not", odsAttrs.getContext());
}

LogicalNotOpGenericAdaptorBase::LogicalNotOpGenericAdaptorBase(LogicalNotOp op) : LogicalNotOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogicalNotOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogicalNotOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogicalNotOpAdaptor::LogicalNotOpAdaptor(LogicalNotOp op) : LogicalNotOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogicalNotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogicalNotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogicalNotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalNotOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LogicalNotOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogicalNotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogicalNotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalNotOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogicalNotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void LogicalNotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogicalNotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogicalNotOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogicalNotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogicalNotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogicalNotOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogicalNotOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogicalNotOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogicalOrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogicalOrOpGenericAdaptorBase::LogicalOrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.logical_or", odsAttrs.getContext());
}

LogicalOrOpGenericAdaptorBase::LogicalOrOpGenericAdaptorBase(LogicalOrOp op) : LogicalOrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogicalOrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogicalOrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogicalOrOpAdaptor::LogicalOrOpAdaptor(LogicalOrOp op) : LogicalOrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogicalOrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogicalOrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogicalOrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalOrOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> LogicalOrOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &LogicalOrOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LogicalOrOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogicalOrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogicalOrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalOrOp::getZ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogicalOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type z, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(z);
}

void LogicalOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogicalOrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogicalOrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogicalOrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogicalOrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogicalOrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogicalOrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogicalOrOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogicalRightShiftOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogicalRightShiftOpGenericAdaptorBase::LogicalRightShiftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.logical_right_shift", odsAttrs.getContext());
}

LogicalRightShiftOpGenericAdaptorBase::LogicalRightShiftOpGenericAdaptorBase(LogicalRightShiftOp op) : LogicalRightShiftOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogicalRightShiftOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogicalRightShiftOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogicalRightShiftOpAdaptor::LogicalRightShiftOpAdaptor(LogicalRightShiftOp op) : LogicalRightShiftOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogicalRightShiftOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogicalRightShiftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogicalRightShiftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalRightShiftOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> LogicalRightShiftOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &LogicalRightShiftOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LogicalRightShiftOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogicalRightShiftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogicalRightShiftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalRightShiftOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogicalRightShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void LogicalRightShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogicalRightShiftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogicalRightShiftOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogicalRightShiftOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogicalRightShiftOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogicalRightShiftOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogicalRightShiftOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogicalRightShiftOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::LogicalXorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogicalXorOpGenericAdaptorBase::LogicalXorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.logical_xor", odsAttrs.getContext());
}

LogicalXorOpGenericAdaptorBase::LogicalXorOpGenericAdaptorBase(LogicalXorOp op) : LogicalXorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogicalXorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogicalXorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LogicalXorOpAdaptor::LogicalXorOpAdaptor(LogicalXorOp op) : LogicalXorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogicalXorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LogicalXorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogicalXorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalXorOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> LogicalXorOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &LogicalXorOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LogicalXorOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LogicalXorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogicalXorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LogicalXorOp::getZ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void LogicalXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type z, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(z);
}

void LogicalXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogicalXorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogicalXorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogicalXorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LogicalXorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogicalXorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LogicalXorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::LogicalXorOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::MatMulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatMulOpGenericAdaptorBase::MatMulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.matmul", odsAttrs.getContext());
}

MatMulOpGenericAdaptorBase::MatMulOpGenericAdaptorBase(MatMulOp op) : MatMulOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MatMulOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatMulOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

mlir::tosa::MatMulOpQuantizationAttr MatMulOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::MatMulOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::MatMulOpQuantizationAttr> MatMulOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::MatMulOpQuantizationAttr>(::llvm::cast<mlir::tosa::MatMulOpQuantizationAttr>(attr)) : (::std::nullopt);
}

} // namespace detail
MatMulOpAdaptor::MatMulOpAdaptor(MatMulOp op) : MatMulOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MatMulOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::MatMulOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.matmul' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for MatMulOp quantization information.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatMulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatMulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatMulOp::getA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MatMulOp::getB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MatMulOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MatMulOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MatMulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatMulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatMulOp::getC() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MatMulOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatMulOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatMulOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatMulOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "quantization_info")
      return prop.quantization_info;
  return std::nullopt;
}

void MatMulOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }
}

void MatMulOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);
}

::mlir::LogicalResult MatMulOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps13(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MatMulOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatMulOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.quantization_info);
}

mlir::tosa::MatMulOpQuantizationAttr MatMulOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::MatMulOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::MatMulOpQuantizationAttr> MatMulOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::MatMulOpQuantizationAttr>(::llvm::cast<mlir::tosa::MatMulOpQuantizationAttr>(attr)) : (::std::nullopt);
}

void MatMulOp::setQuantizationInfoAttr(mlir::tosa::MatMulOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

::mlir::Attribute MatMulOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

void MatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type outputType, Value a, Value b) {
    buildMatMulOpWithQuantInfo(odsBuilder, odsState, outputType,
                               a, b);
  
}

void MatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type c, ::mlir::Value a, ::mlir::Value b, /*optional*/mlir::tosa::MatMulOpQuantizationAttr quantization_info) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.addTypes(c);
}

void MatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, /*optional*/mlir::tosa::MatMulOpQuantizationAttr quantization_info) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatMulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatMulOp::verifyInvariantsImpl() {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps13(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatMulOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatMulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatMulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void MatMulOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
MatMulOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  MatMulOp::Adaptor adaptor(operands, attributes, properties, regions);
  return MatMulOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::MatMulOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::MaxPool2dOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaxPool2dOpGenericAdaptorBase::MaxPool2dOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.max_pool2d", odsAttrs.getContext());
}

MaxPool2dOpGenericAdaptorBase::MaxPool2dOpGenericAdaptorBase(MaxPool2dOp op) : MaxPool2dOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaxPool2dOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaxPool2dOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr MaxPool2dOpGenericAdaptorBase::getKernelAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().kernel);
  return attr;
}

::llvm::ArrayRef<int64_t> MaxPool2dOpGenericAdaptorBase::getKernel() {
  auto attr = getKernelAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr MaxPool2dOpGenericAdaptorBase::getStrideAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
  return attr;
}

::llvm::ArrayRef<int64_t> MaxPool2dOpGenericAdaptorBase::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr MaxPool2dOpGenericAdaptorBase::getPadAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
  return attr;
}

::llvm::ArrayRef<int64_t> MaxPool2dOpGenericAdaptorBase::getPad() {
  auto attr = getPadAttr();
  return attr;
}

} // namespace detail
MaxPool2dOpAdaptor::MaxPool2dOpAdaptor(MaxPool2dOp op) : MaxPool2dOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaxPool2dOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kernel = getProperties().kernel; (void)tblgen_kernel;
  if (!tblgen_kernel) return emitError(loc, "'tosa.max_pool2d' op ""requires attribute 'kernel'");
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitError(loc, "'tosa.max_pool2d' op ""requires attribute 'pad'");
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitError(loc, "'tosa.max_pool2d' op ""requires attribute 'stride'");

  if (tblgen_kernel && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_kernel))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_kernel).size() == 2))))
    return emitError(loc, "'tosa.max_pool2d' op ""attribute 'kernel' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_stride && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_stride))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_stride).size() == 2))))
    return emitError(loc, "'tosa.max_pool2d' op ""attribute 'stride' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_pad && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_pad))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_pad).size() == 4))))
    return emitError(loc, "'tosa.max_pool2d' op ""attribute 'pad' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaxPool2dOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaxPool2dOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxPool2dOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MaxPool2dOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaxPool2dOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaxPool2dOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxPool2dOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MaxPool2dOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.kernel;
       auto attr = dict.get("kernel");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for kernel in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kernel` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pad;
       auto attr = dict.get("pad");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pad in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pad` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stride;
       auto attr = dict.get("stride");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for stride in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MaxPool2dOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.kernel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kernel",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pad;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pad",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stride;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MaxPool2dOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.kernel.getAsOpaquePointer()), 
    llvm::hash_value(prop.pad.getAsOpaquePointer()), 
    llvm::hash_value(prop.stride.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MaxPool2dOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kernel")
      return prop.kernel;

    if (name == "pad")
      return prop.pad;

    if (name == "stride")
      return prop.stride;
  return std::nullopt;
}

void MaxPool2dOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kernel") {
       prop.kernel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kernel)>>(value);
       return;
    }

    if (name == "pad") {
       prop.pad = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pad)>>(value);
       return;
    }

    if (name == "stride") {
       prop.stride = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride)>>(value);
       return;
    }
}

void MaxPool2dOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kernel) attrs.append("kernel", prop.kernel);

    if (prop.pad) attrs.append("pad", prop.pad);

    if (prop.stride) attrs.append("stride", prop.stride);
}

::mlir::LogicalResult MaxPool2dOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKernelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "kernel", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPadAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(attr, "pad", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStrideAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "stride", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MaxPool2dOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.kernel)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.pad)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.stride)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaxPool2dOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.kernel);
  writer.writeAttribute(prop.pad);
  writer.writeAttribute(prop.stride);
}

::mlir::DenseI64ArrayAttr MaxPool2dOp::getKernelAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().kernel);
}

::llvm::ArrayRef<int64_t> MaxPool2dOp::getKernel() {
  auto attr = getKernelAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr MaxPool2dOp::getStrideAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
}

::llvm::ArrayRef<int64_t> MaxPool2dOp::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr MaxPool2dOp::getPadAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().pad);
}

::llvm::ArrayRef<int64_t> MaxPool2dOp::getPad() {
  auto attr = getPadAttr();
  return attr;
}

void MaxPool2dOp::setKernelAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getKernelAttrName(), attr);
}

void MaxPool2dOp::setKernel(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getKernelAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void MaxPool2dOp::setStrideAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStrideAttrName(), attr);
}

void MaxPool2dOp::setStride(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStrideAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void MaxPool2dOp::setPadAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getPadAttrName(), attr);
}

void MaxPool2dOp::setPad(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getPadAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void MaxPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::DenseI64ArrayAttr kernel, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr pad) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = kernel;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().pad = pad;
  odsState.addTypes(output);
}

void MaxPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr kernel, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr pad) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = kernel;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().pad = pad;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::llvm::ArrayRef<int64_t> kernel, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> pad) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = odsBuilder.getDenseI64ArrayAttr(kernel);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  odsState.addTypes(output);
}

void MaxPool2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> kernel, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> pad) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().kernel = odsBuilder.getDenseI64ArrayAttr(kernel);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().pad = odsBuilder.getDenseI64ArrayAttr(pad);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxPool2dOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaxPool2dOp::verifyInvariantsImpl() {
  auto tblgen_kernel = getProperties().kernel; (void)tblgen_kernel;
  if (!tblgen_kernel) return emitOpError("requires attribute 'kernel'");
  auto tblgen_pad = getProperties().pad; (void)tblgen_pad;
  if (!tblgen_pad) return emitOpError("requires attribute 'pad'");
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitOpError("requires attribute 'stride'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_kernel, "kernel")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_stride, "stride")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(*this, tblgen_pad, "pad")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaxPool2dOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MaxPool2dOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaxPool2dOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void MaxPool2dOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
MaxPool2dOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  MaxPool2dOp::Adaptor adaptor(operands, attributes, properties, regions);
  return MaxPool2dOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::MaxPool2dOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::MaximumOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaximumOpGenericAdaptorBase::MaximumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.maximum", odsAttrs.getContext());
}

MaximumOpGenericAdaptorBase::MaximumOpGenericAdaptorBase(MaximumOp op) : MaximumOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaximumOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaximumOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaximumOpAdaptor::MaximumOpAdaptor(MaximumOp op) : MaximumOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaximumOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaximumOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaximumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> MaximumOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> MaximumOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MaximumOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaximumOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaximumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaximumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> MaximumOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void MaximumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void MaximumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaximumOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaximumOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaximumOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MaximumOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaximumOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void MaximumOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::MaximumOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::MinimumOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinimumOpGenericAdaptorBase::MinimumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.minimum", odsAttrs.getContext());
}

MinimumOpGenericAdaptorBase::MinimumOpGenericAdaptorBase(MinimumOp op) : MinimumOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinimumOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MinimumOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MinimumOpAdaptor::MinimumOpAdaptor(MinimumOp op) : MinimumOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinimumOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinimumOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinimumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> MinimumOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> MinimumOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MinimumOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MinimumOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MinimumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinimumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> MinimumOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void MinimumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void MinimumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinimumOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MinimumOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinimumOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MinimumOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MinimumOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void MinimumOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::MinimumOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::MulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulOpGenericAdaptorBase::MulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.mul", odsAttrs.getContext());
}

MulOpGenericAdaptorBase::MulOpGenericAdaptorBase(MulOp op) : MulOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MulOpGenericAdaptorBase::getShiftAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().shift);
  return attr;
}

uint8_t MulOpGenericAdaptorBase::getShift() {
  auto attr = getShiftAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MulOpAdaptor::MulOpAdaptor(MulOp op) : MulOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_shift = getProperties().shift; (void)tblgen_shift;
  if (!tblgen_shift) return emitError(loc, "'tosa.mul' op ""requires attribute 'shift'");

  if (tblgen_shift && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_shift))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_shift).getType().isSignlessInteger(8)))))
    return emitError(loc, "'tosa.mul' op ""attribute 'shift' failed to satisfy constraint: 8-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> MulOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> MulOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> MulOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MulOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.shift;
       auto attr = dict.get("shift");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shift in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shift` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MulOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.shift;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shift",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MulOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.shift.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MulOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "shift")
      return prop.shift;
  return std::nullopt;
}

void MulOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "shift") {
       prop.shift = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shift)>>(value);
       return;
    }
}

void MulOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.shift) attrs.append("shift", prop.shift);
}

::mlir::LogicalResult MulOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getShiftAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps14(attr, "shift", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MulOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.shift)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.shift);
}

::mlir::IntegerAttr MulOp::getShiftAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().shift);
}

uint8_t MulOp::getShift() {
  auto attr = getShiftAttr();
  return attr.getValue().getZExtValue();
}

void MulOp::setShiftAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getShiftAttrName(), attr);
}

void MulOp::setShift(uint8_t attrValue) {
  (*this)->setAttr(getShiftAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(8), attrValue));
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2, ::mlir::IntegerAttr shift) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().shift = shift;
  odsState.addTypes(output);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2, ::mlir::IntegerAttr shift) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().shift = shift;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2, uint8_t shift) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().shift = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(8), shift);
  odsState.addTypes(output);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2, uint8_t shift) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.getOrAddProperties<Properties>().shift = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(8), shift);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MulOp::verifyInvariantsImpl() {
  auto tblgen_shift = getProperties().shift; (void)tblgen_shift;
  if (!tblgen_shift) return emitOpError("requires attribute 'shift'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps14(*this, tblgen_shift, "shift")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MulOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void MulOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::MulOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::NegateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NegateOpGenericAdaptorBase::NegateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.negate", odsAttrs.getContext());
}

NegateOpGenericAdaptorBase::NegateOpGenericAdaptorBase(NegateOp op) : NegateOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NegateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NegateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

mlir::tosa::UnaryOpQuantizationAttr NegateOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::UnaryOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::UnaryOpQuantizationAttr> NegateOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::UnaryOpQuantizationAttr>(::llvm::cast<mlir::tosa::UnaryOpQuantizationAttr>(attr)) : (::std::nullopt);
}

} // namespace detail
NegateOpAdaptor::NegateOpAdaptor(NegateOp op) : NegateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NegateOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::UnaryOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.negate' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for UnaryOp quantization information.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NegateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NegateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> NegateOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NegateOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NegateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NegateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> NegateOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult NegateOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute NegateOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code NegateOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> NegateOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "quantization_info")
      return prop.quantization_info;
  return std::nullopt;
}

void NegateOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }
}

void NegateOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);
}

::mlir::LogicalResult NegateOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps5(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult NegateOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();
  return ::mlir::success();
}

void NegateOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.quantization_info);
}

mlir::tosa::UnaryOpQuantizationAttr NegateOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::UnaryOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::UnaryOpQuantizationAttr> NegateOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::UnaryOpQuantizationAttr>(::llvm::cast<mlir::tosa::UnaryOpQuantizationAttr>(attr)) : (::std::nullopt);
}

void NegateOp::setQuantizationInfoAttr(mlir::tosa::UnaryOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

::mlir::Attribute NegateOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

void NegateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type outputType, Value input) {
    buildUnaryOpWithQuantInfo(odsBuilder, odsState, outputType, input);
  
}

void NegateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, /*optional*/mlir::tosa::UnaryOpQuantizationAttr quantization_info) {
  odsState.addOperands(input1);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.addTypes(output);
}

void NegateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, /*optional*/mlir::tosa::UnaryOpQuantizationAttr quantization_info) {
  odsState.addOperands(input1);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NegateOp::verifyInvariantsImpl() {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps5(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NegateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult NegateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NegateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void NegateOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::NegateOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::PadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PadOpGenericAdaptorBase::PadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.pad", odsAttrs.getContext());
}

PadOpGenericAdaptorBase::PadOpGenericAdaptorBase(PadOp op) : PadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr PadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

mlir::tosa::PadOpQuantizationAttr PadOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::PadOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::PadOpQuantizationAttr> PadOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::PadOpQuantizationAttr>(::llvm::cast<mlir::tosa::PadOpQuantizationAttr>(attr)) : (::std::nullopt);
}

} // namespace detail
PadOpAdaptor::PadOpAdaptor(PadOp op) : PadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::PadOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.pad' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for PadOp quantization information.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PadOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range PadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> PadOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> PadOp::getPadding() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> PadOp::getPadConst() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::RankedTensorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*operands.begin());
}

::mlir::OpOperand &PadOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PadOp::getPaddingMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange PadOp::getPadConstMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> PadOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "quantization_info")
      return prop.quantization_info;
  return std::nullopt;
}

void PadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }
}

void PadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);
}

::mlir::LogicalResult PadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps15(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.quantization_info);
}

mlir::tosa::PadOpQuantizationAttr PadOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::PadOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::PadOpQuantizationAttr> PadOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::PadOpQuantizationAttr>(::llvm::cast<mlir::tosa::PadOpQuantizationAttr>(attr)) : (::std::nullopt);
}

void PadOp::setQuantizationInfoAttr(mlir::tosa::PadOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

::mlir::Attribute PadOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type outputType, Value input, Value paddings) {
    buildPadOpWithQuantInfo(odsBuilder, odsState, outputType,
                            input, paddings);
  
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type outputType, Value input, Value paddings, Value pad_value) {
    buildExplicitValuePadOpWithQuantInfo(odsBuilder, odsState, outputType,
                                         input, paddings, pad_value);
  
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value padding, /*optional*/::mlir::Value pad_const, /*optional*/mlir::tosa::PadOpQuantizationAttr quantization_info) {
  odsState.addOperands(input1);
  odsState.addOperands(padding);
  if (pad_const)
    odsState.addOperands(pad_const);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.addTypes(output);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value padding, /*optional*/::mlir::Value pad_const, /*optional*/mlir::tosa::PadOpQuantizationAttr quantization_info) {
  odsState.addOperands(input1);
  odsState.addOperands(padding);
  if (pad_const)
    odsState.addOperands(pad_const);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PadOp::verifyInvariantsImpl() {
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps15(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps19(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps17(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void PadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
PadOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  PadOp::Adaptor adaptor(operands, attributes, properties, regions);
  return PadOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::PadOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::PowOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PowOpGenericAdaptorBase::PowOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.pow", odsAttrs.getContext());
}

PowOpGenericAdaptorBase::PowOpGenericAdaptorBase(PowOp op) : PowOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PowOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PowOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
PowOpAdaptor::PowOpAdaptor(PowOp op) : PowOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PowOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PowOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PowOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> PowOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> PowOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &PowOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PowOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> PowOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PowOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> PowOp::getZ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type z, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(z);
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PowOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PowOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PowOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PowOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void PowOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::PowOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::RFFT2dOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RFFT2dOpGenericAdaptorBase::RFFT2dOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.rfft2d", odsAttrs.getContext());
}

RFFT2dOpGenericAdaptorBase::RFFT2dOpGenericAdaptorBase(RFFT2dOp op) : RFFT2dOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RFFT2dOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RFFT2dOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RFFT2dOpGenericAdaptorBase::getLocalBoundAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool RFFT2dOpGenericAdaptorBase::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
RFFT2dOpAdaptor::RFFT2dOpAdaptor(RFFT2dOp op) : RFFT2dOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RFFT2dOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;

  if (tblgen_local_bound && !((::llvm::isa<::mlir::BoolAttr>(tblgen_local_bound))))
    return emitError(loc, "'tosa.rfft2d' op ""attribute 'local_bound' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

void RFFT2dOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "output_real");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "output_imag");
}

std::pair<unsigned, unsigned> RFFT2dOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RFFT2dOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RFFT2dOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RFFT2dOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RFFT2dOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RFFT2dOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RFFT2dOp::getOutputReal() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value RFFT2dOp::getOutputImag() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

::mlir::LogicalResult RFFT2dOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.local_bound;
       auto attr = dict.get("local_bound");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for local_bound in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `local_bound` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RFFT2dOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.local_bound;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("local_bound",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RFFT2dOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.local_bound.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RFFT2dOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "local_bound")
      return prop.local_bound;
  return std::nullopt;
}

void RFFT2dOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "local_bound") {
       prop.local_bound = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.local_bound)>>(value);
       return;
    }
}

void RFFT2dOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.local_bound) attrs.append("local_bound", prop.local_bound);
}

::mlir::LogicalResult RFFT2dOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLocalBoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "local_bound", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RFFT2dOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.local_bound)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RFFT2dOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.local_bound);
}

::mlir::BoolAttr RFFT2dOp::getLocalBoundAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
}

bool RFFT2dOp::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void RFFT2dOp::setLocalBoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getLocalBoundAttrName(), attr);
}

void RFFT2dOp::setLocalBound(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLocalBoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getLocalBoundAttrName());
}

::mlir::Attribute RFFT2dOp::removeLocalBoundAttr() {
    auto &attr = getProperties().local_bound;
    attr = {};
    return attr;
}

void RFFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output_real, ::mlir::Type output_imag, ::mlir::Value input, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  odsState.addTypes(output_real);
  odsState.addTypes(output_imag);
}

void RFFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RFFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output_real, ::mlir::Type output_imag, ::mlir::Value input, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  odsState.addTypes(output_real);
  odsState.addTypes(output_imag);
}

void RFFT2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RFFT2dOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RFFT2dOp::verifyInvariantsImpl() {
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_local_bound, "local_bound")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RFFT2dOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RFFT2dOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type output_realRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> output_realTypes(output_realRawTypes);
  ::mlir::Type output_imagRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> output_imagTypes(output_imagRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
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
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    output_realRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    output_imagRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  result.addTypes(output_realTypes);
  result.addTypes(output_imagTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RFFT2dOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLocalBoundAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("local_bound");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ' << "(";
  {
    auto type = getOutputReal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOutputImag().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
}

void RFFT2dOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
RFFT2dOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  RFFT2dOp::Adaptor adaptor(operands, attributes, properties, regions);
  return RFFT2dOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::RFFT2dOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReciprocalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReciprocalOpGenericAdaptorBase::ReciprocalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reciprocal", odsAttrs.getContext());
}

ReciprocalOpGenericAdaptorBase::ReciprocalOpGenericAdaptorBase(ReciprocalOp op) : ReciprocalOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReciprocalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReciprocalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReciprocalOpAdaptor::ReciprocalOpAdaptor(ReciprocalOp op) : ReciprocalOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReciprocalOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReciprocalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReciprocalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReciprocalOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReciprocalOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReciprocalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReciprocalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReciprocalOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ReciprocalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void ReciprocalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReciprocalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReciprocalOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReciprocalOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ReciprocalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReciprocalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReciprocalOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReciprocalOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReduceAllOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceAllOpGenericAdaptorBase::ReduceAllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reduce_all", odsAttrs.getContext());
}

ReduceAllOpGenericAdaptorBase::ReduceAllOpGenericAdaptorBase(ReduceAllOp op) : ReduceAllOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceAllOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceAllOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReduceAllOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReduceAllOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReduceAllOpAdaptor::ReduceAllOpAdaptor(ReduceAllOp op) : ReduceAllOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceAllOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reduce_all' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reduce_all' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceAllOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceAllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceAllOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceAllOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceAllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceAllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceAllOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceAllOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceAllOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceAllOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceAllOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReduceAllOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReduceAllOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReduceAllOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceAllOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceAllOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReduceAllOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReduceAllOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReduceAllOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReduceAllOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceAllOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceAllOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceAllOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceAllOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceAllOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceAllOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReduceAllOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceAllOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceAllOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReduceAllOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReduceAllOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReduceAllOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReduceAllOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReduceAllOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReduceAllOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReduceAnyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceAnyOpGenericAdaptorBase::ReduceAnyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reduce_any", odsAttrs.getContext());
}

ReduceAnyOpGenericAdaptorBase::ReduceAnyOpGenericAdaptorBase(ReduceAnyOp op) : ReduceAnyOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceAnyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceAnyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReduceAnyOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReduceAnyOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReduceAnyOpAdaptor::ReduceAnyOpAdaptor(ReduceAnyOp op) : ReduceAnyOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceAnyOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reduce_any' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reduce_any' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceAnyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceAnyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceAnyOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceAnyOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceAnyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceAnyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceAnyOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceAnyOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceAnyOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceAnyOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceAnyOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReduceAnyOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReduceAnyOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReduceAnyOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceAnyOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceAnyOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReduceAnyOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReduceAnyOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReduceAnyOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReduceAnyOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceAnyOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceAnyOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceAnyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceAnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceAnyOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceAnyOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceAnyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReduceAnyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceAnyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceAnyOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReduceAnyOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReduceAnyOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReduceAnyOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReduceAnyOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReduceAnyOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReduceAnyOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReduceMaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceMaxOpGenericAdaptorBase::ReduceMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reduce_max", odsAttrs.getContext());
}

ReduceMaxOpGenericAdaptorBase::ReduceMaxOpGenericAdaptorBase(ReduceMaxOp op) : ReduceMaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceMaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceMaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReduceMaxOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReduceMaxOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReduceMaxOpAdaptor::ReduceMaxOpAdaptor(ReduceMaxOp op) : ReduceMaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceMaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reduce_max' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reduce_max' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceMaxOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceMaxOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceMaxOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceMaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceMaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceMaxOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceMaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReduceMaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReduceMaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReduceMaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceMaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceMaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReduceMaxOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReduceMaxOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReduceMaxOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReduceMaxOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceMaxOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceMaxOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceMaxOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceMaxOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceMaxOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReduceMaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceMaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceMaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReduceMaxOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReduceMaxOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReduceMaxOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReduceMaxOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReduceMaxOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReduceMaxOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReduceMinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceMinOpGenericAdaptorBase::ReduceMinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reduce_min", odsAttrs.getContext());
}

ReduceMinOpGenericAdaptorBase::ReduceMinOpGenericAdaptorBase(ReduceMinOp op) : ReduceMinOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceMinOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceMinOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReduceMinOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReduceMinOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReduceMinOpAdaptor::ReduceMinOpAdaptor(ReduceMinOp op) : ReduceMinOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceMinOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reduce_min' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reduce_min' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceMinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceMinOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceMinOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceMinOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceMinOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceMinOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceMinOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceMinOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReduceMinOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReduceMinOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReduceMinOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceMinOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceMinOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReduceMinOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReduceMinOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReduceMinOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReduceMinOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceMinOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceMinOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceMinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceMinOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceMinOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceMinOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReduceMinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceMinOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceMinOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReduceMinOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReduceMinOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReduceMinOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReduceMinOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReduceMinOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReduceMinOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReduceProdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceProdOpGenericAdaptorBase::ReduceProdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reduce_prod", odsAttrs.getContext());
}

ReduceProdOpGenericAdaptorBase::ReduceProdOpGenericAdaptorBase(ReduceProdOp op) : ReduceProdOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceProdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceProdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReduceProdOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReduceProdOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReduceProdOpAdaptor::ReduceProdOpAdaptor(ReduceProdOp op) : ReduceProdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceProdOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reduce_prod' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reduce_prod' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceProdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceProdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceProdOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceProdOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceProdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceProdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceProdOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceProdOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceProdOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceProdOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceProdOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReduceProdOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReduceProdOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReduceProdOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceProdOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceProdOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReduceProdOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReduceProdOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReduceProdOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReduceProdOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceProdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceProdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceProdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceProdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceProdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceProdOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceProdOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReduceProdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceProdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceProdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReduceProdOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReduceProdOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReduceProdOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReduceProdOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReduceProdOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReduceProdOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReduceSumOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceSumOpGenericAdaptorBase::ReduceSumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reduce_sum", odsAttrs.getContext());
}

ReduceSumOpGenericAdaptorBase::ReduceSumOpGenericAdaptorBase(ReduceSumOp op) : ReduceSumOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceSumOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceSumOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReduceSumOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReduceSumOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReduceSumOpAdaptor::ReduceSumOpAdaptor(ReduceSumOp op) : ReduceSumOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceSumOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reduce_sum' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reduce_sum' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceSumOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceSumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceSumOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceSumOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceSumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceSumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceSumOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceSumOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceSumOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceSumOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceSumOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReduceSumOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReduceSumOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReduceSumOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceSumOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceSumOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReduceSumOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReduceSumOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReduceSumOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReduceSumOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceSumOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceSumOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceSumOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceSumOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceSumOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceSumOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReduceSumOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceSumOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceSumOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReduceSumOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReduceSumOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReduceSumOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReduceSumOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReduceSumOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReduceSumOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::RescaleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RescaleOpGenericAdaptorBase::RescaleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.rescale", odsAttrs.getContext());
}

RescaleOpGenericAdaptorBase::RescaleOpGenericAdaptorBase(RescaleOp op) : RescaleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RescaleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RescaleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr RescaleOpGenericAdaptorBase::getInputZpAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().input_zp);
  return attr;
}

uint32_t RescaleOpGenericAdaptorBase::getInputZp() {
  auto attr = getInputZpAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr RescaleOpGenericAdaptorBase::getOutputZpAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().output_zp);
  return attr;
}

uint32_t RescaleOpGenericAdaptorBase::getOutputZp() {
  auto attr = getOutputZpAttr();
  return attr.getValue().getZExtValue();
}

::mlir::DenseI32ArrayAttr RescaleOpGenericAdaptorBase::getMultiplierAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(getProperties().multiplier);
  return attr;
}

::llvm::ArrayRef<int32_t> RescaleOpGenericAdaptorBase::getMultiplier() {
  auto attr = getMultiplierAttr();
  return attr;
}

::mlir::DenseI8ArrayAttr RescaleOpGenericAdaptorBase::getShiftAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI8ArrayAttr>(getProperties().shift);
  return attr;
}

::llvm::ArrayRef<int8_t> RescaleOpGenericAdaptorBase::getShift() {
  auto attr = getShiftAttr();
  return attr;
}

::mlir::BoolAttr RescaleOpGenericAdaptorBase::getScale32Attr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().scale32);
  return attr;
}

bool RescaleOpGenericAdaptorBase::getScale32() {
  auto attr = getScale32Attr();
  return attr.getValue();
}

::mlir::BoolAttr RescaleOpGenericAdaptorBase::getDoubleRoundAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().double_round);
  return attr;
}

bool RescaleOpGenericAdaptorBase::getDoubleRound() {
  auto attr = getDoubleRoundAttr();
  return attr.getValue();
}

::mlir::BoolAttr RescaleOpGenericAdaptorBase::getPerChannelAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().per_channel);
  return attr;
}

bool RescaleOpGenericAdaptorBase::getPerChannel() {
  auto attr = getPerChannelAttr();
  return attr.getValue();
}

} // namespace detail
RescaleOpAdaptor::RescaleOpAdaptor(RescaleOp op) : RescaleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RescaleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_double_round = getProperties().double_round; (void)tblgen_double_round;
  if (!tblgen_double_round) return emitError(loc, "'tosa.rescale' op ""requires attribute 'double_round'");
  auto tblgen_input_zp = getProperties().input_zp; (void)tblgen_input_zp;
  if (!tblgen_input_zp) return emitError(loc, "'tosa.rescale' op ""requires attribute 'input_zp'");
  auto tblgen_multiplier = getProperties().multiplier; (void)tblgen_multiplier;
  if (!tblgen_multiplier) return emitError(loc, "'tosa.rescale' op ""requires attribute 'multiplier'");
  auto tblgen_output_zp = getProperties().output_zp; (void)tblgen_output_zp;
  if (!tblgen_output_zp) return emitError(loc, "'tosa.rescale' op ""requires attribute 'output_zp'");
  auto tblgen_per_channel = getProperties().per_channel; (void)tblgen_per_channel;
  if (!tblgen_per_channel) return emitError(loc, "'tosa.rescale' op ""requires attribute 'per_channel'");
  auto tblgen_scale32 = getProperties().scale32; (void)tblgen_scale32;
  if (!tblgen_scale32) return emitError(loc, "'tosa.rescale' op ""requires attribute 'scale32'");
  auto tblgen_shift = getProperties().shift; (void)tblgen_shift;
  if (!tblgen_shift) return emitError(loc, "'tosa.rescale' op ""requires attribute 'shift'");

  if (tblgen_input_zp && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_input_zp))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_input_zp).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'input_zp' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_output_zp && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_output_zp))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_output_zp).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'output_zp' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_multiplier && !((::llvm::isa<::mlir::DenseI32ArrayAttr>(tblgen_multiplier))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'multiplier' failed to satisfy constraint: i32 dense array attribute");

  if (tblgen_shift && !((::llvm::isa<::mlir::DenseI8ArrayAttr>(tblgen_shift))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'shift' failed to satisfy constraint: i8 dense array attribute");

  if (tblgen_scale32 && !((::llvm::isa<::mlir::BoolAttr>(tblgen_scale32))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'scale32' failed to satisfy constraint: bool attribute");

  if (tblgen_double_round && !((::llvm::isa<::mlir::BoolAttr>(tblgen_double_round))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'double_round' failed to satisfy constraint: bool attribute");

  if (tblgen_per_channel && !((::llvm::isa<::mlir::BoolAttr>(tblgen_per_channel))))
    return emitError(loc, "'tosa.rescale' op ""attribute 'per_channel' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RescaleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RescaleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> RescaleOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RescaleOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RescaleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RescaleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> RescaleOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult RescaleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.double_round;
       auto attr = dict.get("double_round");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for double_round in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `double_round` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.input_zp;
       auto attr = dict.get("input_zp");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for input_zp in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `input_zp` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.multiplier;
       auto attr = dict.get("multiplier");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for multiplier in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `multiplier` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.output_zp;
       auto attr = dict.get("output_zp");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for output_zp in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `output_zp` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.per_channel;
       auto attr = dict.get("per_channel");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for per_channel in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `per_channel` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scale32;
       auto attr = dict.get("scale32");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scale32 in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scale32` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.shift;
       auto attr = dict.get("shift");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shift in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shift` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RescaleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.double_round;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("double_round",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.input_zp;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("input_zp",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.multiplier;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("multiplier",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.output_zp;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("output_zp",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.per_channel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("per_channel",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scale32;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scale32",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.shift;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shift",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RescaleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.double_round.getAsOpaquePointer()), 
    llvm::hash_value(prop.input_zp.getAsOpaquePointer()), 
    llvm::hash_value(prop.multiplier.getAsOpaquePointer()), 
    llvm::hash_value(prop.output_zp.getAsOpaquePointer()), 
    llvm::hash_value(prop.per_channel.getAsOpaquePointer()), 
    llvm::hash_value(prop.scale32.getAsOpaquePointer()), 
    llvm::hash_value(prop.shift.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RescaleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "double_round")
      return prop.double_round;

    if (name == "input_zp")
      return prop.input_zp;

    if (name == "multiplier")
      return prop.multiplier;

    if (name == "output_zp")
      return prop.output_zp;

    if (name == "per_channel")
      return prop.per_channel;

    if (name == "scale32")
      return prop.scale32;

    if (name == "shift")
      return prop.shift;
  return std::nullopt;
}

void RescaleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "double_round") {
       prop.double_round = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.double_round)>>(value);
       return;
    }

    if (name == "input_zp") {
       prop.input_zp = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.input_zp)>>(value);
       return;
    }

    if (name == "multiplier") {
       prop.multiplier = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.multiplier)>>(value);
       return;
    }

    if (name == "output_zp") {
       prop.output_zp = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.output_zp)>>(value);
       return;
    }

    if (name == "per_channel") {
       prop.per_channel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.per_channel)>>(value);
       return;
    }

    if (name == "scale32") {
       prop.scale32 = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scale32)>>(value);
       return;
    }

    if (name == "shift") {
       prop.shift = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shift)>>(value);
       return;
    }
}

void RescaleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.double_round) attrs.append("double_round", prop.double_round);

    if (prop.input_zp) attrs.append("input_zp", prop.input_zp);

    if (prop.multiplier) attrs.append("multiplier", prop.multiplier);

    if (prop.output_zp) attrs.append("output_zp", prop.output_zp);

    if (prop.per_channel) attrs.append("per_channel", prop.per_channel);

    if (prop.scale32) attrs.append("scale32", prop.scale32);

    if (prop.shift) attrs.append("shift", prop.shift);
}

::mlir::LogicalResult RescaleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDoubleRoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "double_round", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInputZpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "input_zp", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMultiplierAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps16(attr, "multiplier", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOutputZpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "output_zp", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPerChannelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "per_channel", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScale32AttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "scale32", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getShiftAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps17(attr, "shift", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RescaleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.double_round)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.input_zp)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.multiplier)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.output_zp)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.per_channel)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scale32)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.shift)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RescaleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.double_round);
  writer.writeAttribute(prop.input_zp);
  writer.writeAttribute(prop.multiplier);
  writer.writeAttribute(prop.output_zp);
  writer.writeAttribute(prop.per_channel);
  writer.writeAttribute(prop.scale32);
  writer.writeAttribute(prop.shift);
}

::mlir::IntegerAttr RescaleOp::getInputZpAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().input_zp);
}

uint32_t RescaleOp::getInputZp() {
  auto attr = getInputZpAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr RescaleOp::getOutputZpAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().output_zp);
}

uint32_t RescaleOp::getOutputZp() {
  auto attr = getOutputZpAttr();
  return attr.getValue().getZExtValue();
}

::mlir::DenseI32ArrayAttr RescaleOp::getMultiplierAttr() {
  return ::llvm::cast<::mlir::DenseI32ArrayAttr>(getProperties().multiplier);
}

::llvm::ArrayRef<int32_t> RescaleOp::getMultiplier() {
  auto attr = getMultiplierAttr();
  return attr;
}

::mlir::DenseI8ArrayAttr RescaleOp::getShiftAttr() {
  return ::llvm::cast<::mlir::DenseI8ArrayAttr>(getProperties().shift);
}

::llvm::ArrayRef<int8_t> RescaleOp::getShift() {
  auto attr = getShiftAttr();
  return attr;
}

::mlir::BoolAttr RescaleOp::getScale32Attr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().scale32);
}

bool RescaleOp::getScale32() {
  auto attr = getScale32Attr();
  return attr.getValue();
}

::mlir::BoolAttr RescaleOp::getDoubleRoundAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().double_round);
}

bool RescaleOp::getDoubleRound() {
  auto attr = getDoubleRoundAttr();
  return attr.getValue();
}

::mlir::BoolAttr RescaleOp::getPerChannelAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().per_channel);
}

bool RescaleOp::getPerChannel() {
  auto attr = getPerChannelAttr();
  return attr.getValue();
}

void RescaleOp::setInputZpAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getInputZpAttrName(), attr);
}

void RescaleOp::setInputZp(uint32_t attrValue) {
  (*this)->setAttr(getInputZpAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void RescaleOp::setOutputZpAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getOutputZpAttrName(), attr);
}

void RescaleOp::setOutputZp(uint32_t attrValue) {
  (*this)->setAttr(getOutputZpAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void RescaleOp::setMultiplierAttr(::mlir::DenseI32ArrayAttr attr) {
  (*this)->setAttr(getMultiplierAttrName(), attr);
}

void RescaleOp::setMultiplier(::llvm::ArrayRef<int32_t> attrValue) {
  (*this)->setAttr(getMultiplierAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI32ArrayAttr(attrValue));
}

void RescaleOp::setShiftAttr(::mlir::DenseI8ArrayAttr attr) {
  (*this)->setAttr(getShiftAttrName(), attr);
}

void RescaleOp::setShift(::llvm::ArrayRef<int8_t> attrValue) {
  (*this)->setAttr(getShiftAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI8ArrayAttr(attrValue));
}

void RescaleOp::setScale32Attr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getScale32AttrName(), attr);
}

void RescaleOp::setScale32(bool attrValue) {
  (*this)->setAttr(getScale32AttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RescaleOp::setDoubleRoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getDoubleRoundAttrName(), attr);
}

void RescaleOp::setDoubleRound(bool attrValue) {
  (*this)->setAttr(getDoubleRoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RescaleOp::setPerChannelAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getPerChannelAttrName(), attr);
}

void RescaleOp::setPerChannel(bool attrValue) {
  (*this)->setAttr(getPerChannelAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RescaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr input_zp, ::mlir::IntegerAttr output_zp, ::mlir::DenseI32ArrayAttr multiplier, ::mlir::DenseI8ArrayAttr shift, ::mlir::BoolAttr scale32, ::mlir::BoolAttr double_round, ::mlir::BoolAttr per_channel) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().input_zp = input_zp;
  odsState.getOrAddProperties<Properties>().output_zp = output_zp;
  odsState.getOrAddProperties<Properties>().multiplier = multiplier;
  odsState.getOrAddProperties<Properties>().shift = shift;
  odsState.getOrAddProperties<Properties>().scale32 = scale32;
  odsState.getOrAddProperties<Properties>().double_round = double_round;
  odsState.getOrAddProperties<Properties>().per_channel = per_channel;
  odsState.addTypes(output);
}

void RescaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr input_zp, ::mlir::IntegerAttr output_zp, ::mlir::DenseI32ArrayAttr multiplier, ::mlir::DenseI8ArrayAttr shift, ::mlir::BoolAttr scale32, ::mlir::BoolAttr double_round, ::mlir::BoolAttr per_channel) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().input_zp = input_zp;
  odsState.getOrAddProperties<Properties>().output_zp = output_zp;
  odsState.getOrAddProperties<Properties>().multiplier = multiplier;
  odsState.getOrAddProperties<Properties>().shift = shift;
  odsState.getOrAddProperties<Properties>().scale32 = scale32;
  odsState.getOrAddProperties<Properties>().double_round = double_round;
  odsState.getOrAddProperties<Properties>().per_channel = per_channel;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RescaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t input_zp, uint32_t output_zp, ::llvm::ArrayRef<int32_t> multiplier, ::llvm::ArrayRef<int8_t> shift, bool scale32, bool double_round, bool per_channel) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().input_zp = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), input_zp);
  odsState.getOrAddProperties<Properties>().output_zp = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), output_zp);
  odsState.getOrAddProperties<Properties>().multiplier = odsBuilder.getDenseI32ArrayAttr(multiplier);
  odsState.getOrAddProperties<Properties>().shift = odsBuilder.getDenseI8ArrayAttr(shift);
  odsState.getOrAddProperties<Properties>().scale32 = odsBuilder.getBoolAttr(scale32);
  odsState.getOrAddProperties<Properties>().double_round = odsBuilder.getBoolAttr(double_round);
  odsState.getOrAddProperties<Properties>().per_channel = odsBuilder.getBoolAttr(per_channel);
  odsState.addTypes(output);
}

void RescaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t input_zp, uint32_t output_zp, ::llvm::ArrayRef<int32_t> multiplier, ::llvm::ArrayRef<int8_t> shift, bool scale32, bool double_round, bool per_channel) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().input_zp = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), input_zp);
  odsState.getOrAddProperties<Properties>().output_zp = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), output_zp);
  odsState.getOrAddProperties<Properties>().multiplier = odsBuilder.getDenseI32ArrayAttr(multiplier);
  odsState.getOrAddProperties<Properties>().shift = odsBuilder.getDenseI8ArrayAttr(shift);
  odsState.getOrAddProperties<Properties>().scale32 = odsBuilder.getBoolAttr(scale32);
  odsState.getOrAddProperties<Properties>().double_round = odsBuilder.getBoolAttr(double_round);
  odsState.getOrAddProperties<Properties>().per_channel = odsBuilder.getBoolAttr(per_channel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RescaleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RescaleOp::verifyInvariantsImpl() {
  auto tblgen_double_round = getProperties().double_round; (void)tblgen_double_round;
  if (!tblgen_double_round) return emitOpError("requires attribute 'double_round'");
  auto tblgen_input_zp = getProperties().input_zp; (void)tblgen_input_zp;
  if (!tblgen_input_zp) return emitOpError("requires attribute 'input_zp'");
  auto tblgen_multiplier = getProperties().multiplier; (void)tblgen_multiplier;
  if (!tblgen_multiplier) return emitOpError("requires attribute 'multiplier'");
  auto tblgen_output_zp = getProperties().output_zp; (void)tblgen_output_zp;
  if (!tblgen_output_zp) return emitOpError("requires attribute 'output_zp'");
  auto tblgen_per_channel = getProperties().per_channel; (void)tblgen_per_channel;
  if (!tblgen_per_channel) return emitOpError("requires attribute 'per_channel'");
  auto tblgen_scale32 = getProperties().scale32; (void)tblgen_scale32;
  if (!tblgen_scale32) return emitOpError("requires attribute 'scale32'");
  auto tblgen_shift = getProperties().shift; (void)tblgen_shift;
  if (!tblgen_shift) return emitOpError("requires attribute 'shift'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_input_zp, "input_zp")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_output_zp, "output_zp")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps16(*this, tblgen_multiplier, "multiplier")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps17(*this, tblgen_shift, "shift")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_scale32, "scale32")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_double_round, "double_round")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_per_channel, "per_channel")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RescaleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RescaleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RescaleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void RescaleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::RescaleOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReshapeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReshapeOpGenericAdaptorBase::ReshapeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reshape", odsAttrs.getContext());
}

ReshapeOpGenericAdaptorBase::ReshapeOpGenericAdaptorBase(ReshapeOp op) : ReshapeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReshapeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReshapeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr ReshapeOpGenericAdaptorBase::getNewShapeAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().new_shape);
  return attr;
}

::llvm::ArrayRef<int64_t> ReshapeOpGenericAdaptorBase::getNewShape() {
  auto attr = getNewShapeAttr();
  return attr;
}

} // namespace detail
ReshapeOpAdaptor::ReshapeOpAdaptor(ReshapeOp op) : ReshapeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReshapeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_new_shape = getProperties().new_shape; (void)tblgen_new_shape;
  if (!tblgen_new_shape) return emitError(loc, "'tosa.reshape' op ""requires attribute 'new_shape'");

  if (tblgen_new_shape && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_new_shape))))
    return emitError(loc, "'tosa.reshape' op ""attribute 'new_shape' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReshapeOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReshapeOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ReshapeOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReshapeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.new_shape;
       auto attr = dict.get("new_shape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for new_shape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `new_shape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReshapeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.new_shape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("new_shape",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReshapeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.new_shape.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReshapeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "new_shape")
      return prop.new_shape;
  return std::nullopt;
}

void ReshapeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "new_shape") {
       prop.new_shape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.new_shape)>>(value);
       return;
    }
}

void ReshapeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.new_shape) attrs.append("new_shape", prop.new_shape);
}

::mlir::LogicalResult ReshapeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNewShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(attr, "new_shape", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReshapeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.new_shape)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReshapeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.new_shape);
}

::mlir::DenseI64ArrayAttr ReshapeOp::getNewShapeAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().new_shape);
}

::llvm::ArrayRef<int64_t> ReshapeOp::getNewShape() {
  auto attr = getNewShapeAttr();
  return attr;
}

void ReshapeOp::setNewShapeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getNewShapeAttrName(), attr);
}

void ReshapeOp::setNewShape(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getNewShapeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::DenseI64ArrayAttr new_shape) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().new_shape = new_shape;
  odsState.addTypes(output);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input1, ::mlir::DenseI64ArrayAttr new_shape) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().new_shape = new_shape;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReshapeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::DenseI64ArrayAttr new_shape) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().new_shape = new_shape;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::llvm::ArrayRef<int64_t> new_shape) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().new_shape = odsBuilder.getDenseI64ArrayAttr(new_shape);
  odsState.addTypes(output);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input1, ::llvm::ArrayRef<int64_t> new_shape) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().new_shape = odsBuilder.getDenseI64ArrayAttr(new_shape);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReshapeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::llvm::ArrayRef<int64_t> new_shape) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().new_shape = odsBuilder.getDenseI64ArrayAttr(new_shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReshapeOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReshapeOp::verifyInvariantsImpl() {
  auto tblgen_new_shape = getProperties().new_shape; (void)tblgen_new_shape;
  if (!tblgen_new_shape) return emitOpError("requires attribute 'new_shape'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(*this, tblgen_new_shape, "new_shape")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps17(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReshapeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReshapeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReshapeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReshapeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ReshapeOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ReshapeOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ReshapeOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}


LogicalResult
ReshapeOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  SmallVector<ShapedTypeComponents, 2> retComponents;
  if (failed(ReshapeOp::inferReturnTypeComponents(context, location,
                            operands, attributes, properties, regions,
                            retComponents)))
    return failure();
  return ::mlir::detail::inferReturnTensorTypes(retComponents,
                            inferredReturnTypes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReshapeOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ResizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ResizeOpGenericAdaptorBase::ResizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.resize", odsAttrs.getContext());
}

ResizeOpGenericAdaptorBase::ResizeOpGenericAdaptorBase(ResizeOp op) : ResizeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ResizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ResizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr ResizeOpGenericAdaptorBase::getScaleAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().scale);
  return attr;
}

::llvm::ArrayRef<int64_t> ResizeOpGenericAdaptorBase::getScale() {
  auto attr = getScaleAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ResizeOpGenericAdaptorBase::getOffsetAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().offset);
  return attr;
}

::llvm::ArrayRef<int64_t> ResizeOpGenericAdaptorBase::getOffset() {
  auto attr = getOffsetAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ResizeOpGenericAdaptorBase::getBorderAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().border);
  return attr;
}

::llvm::ArrayRef<int64_t> ResizeOpGenericAdaptorBase::getBorder() {
  auto attr = getBorderAttr();
  return attr;
}

::mlir::StringAttr ResizeOpGenericAdaptorBase::getModeAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().mode);
  return attr;
}

::llvm::StringRef ResizeOpGenericAdaptorBase::getMode() {
  auto attr = getModeAttr();
  return attr.getValue();
}

} // namespace detail
ResizeOpAdaptor::ResizeOpAdaptor(ResizeOp op) : ResizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ResizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_border = getProperties().border; (void)tblgen_border;
  if (!tblgen_border) return emitError(loc, "'tosa.resize' op ""requires attribute 'border'");
  auto tblgen_mode = getProperties().mode; (void)tblgen_mode;
  if (!tblgen_mode) return emitError(loc, "'tosa.resize' op ""requires attribute 'mode'");
  auto tblgen_offset = getProperties().offset; (void)tblgen_offset;
  if (!tblgen_offset) return emitError(loc, "'tosa.resize' op ""requires attribute 'offset'");
  auto tblgen_scale = getProperties().scale; (void)tblgen_scale;
  if (!tblgen_scale) return emitError(loc, "'tosa.resize' op ""requires attribute 'scale'");

  if (tblgen_scale && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_scale))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_scale).size() == 4))))
    return emitError(loc, "'tosa.resize' op ""attribute 'scale' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements");

  if (tblgen_offset && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_offset))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_offset).size() == 2))))
    return emitError(loc, "'tosa.resize' op ""attribute 'offset' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_border && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_border))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_border).size() == 2))))
    return emitError(loc, "'tosa.resize' op ""attribute 'border' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_mode && !((::llvm::cast<StringAttr>(tblgen_mode).getValue() == "BILINEAR"  || ::llvm::cast<StringAttr>(tblgen_mode).getValue() == "NEAREST_NEIGHBOR")))
    return emitError(loc, "'tosa.resize' op ""attribute 'mode' failed to satisfy constraint: Supported resize/upsampling strategies");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ResizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ResizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ResizeOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ResizeOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ResizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ResizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ResizeOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ResizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.border;
       auto attr = dict.get("border");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for border in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `border` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mode;
       auto attr = dict.get("mode");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mode in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mode` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.offset;
       auto attr = dict.get("offset");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for offset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `offset` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scale;
       auto attr = dict.get("scale");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scale in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scale` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ResizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.border;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("border",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mode;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mode",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.offset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("offset",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scale;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scale",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ResizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.border.getAsOpaquePointer()), 
    llvm::hash_value(prop.mode.getAsOpaquePointer()), 
    llvm::hash_value(prop.offset.getAsOpaquePointer()), 
    llvm::hash_value(prop.scale.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ResizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "border")
      return prop.border;

    if (name == "mode")
      return prop.mode;

    if (name == "offset")
      return prop.offset;

    if (name == "scale")
      return prop.scale;
  return std::nullopt;
}

void ResizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "border") {
       prop.border = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.border)>>(value);
       return;
    }

    if (name == "mode") {
       prop.mode = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mode)>>(value);
       return;
    }

    if (name == "offset") {
       prop.offset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.offset)>>(value);
       return;
    }

    if (name == "scale") {
       prop.scale = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scale)>>(value);
       return;
    }
}

void ResizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.border) attrs.append("border", prop.border);

    if (prop.mode) attrs.append("mode", prop.mode);

    if (prop.offset) attrs.append("offset", prop.offset);

    if (prop.scale) attrs.append("scale", prop.scale);
}

::mlir::LogicalResult ResizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBorderAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "border", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps19(attr, "mode", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "offset", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScaleAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(attr, "scale", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ResizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.border)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mode)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.offset)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scale)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ResizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.border);
  writer.writeAttribute(prop.mode);
  writer.writeAttribute(prop.offset);
  writer.writeAttribute(prop.scale);
}

::mlir::DenseI64ArrayAttr ResizeOp::getScaleAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().scale);
}

::llvm::ArrayRef<int64_t> ResizeOp::getScale() {
  auto attr = getScaleAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ResizeOp::getOffsetAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().offset);
}

::llvm::ArrayRef<int64_t> ResizeOp::getOffset() {
  auto attr = getOffsetAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ResizeOp::getBorderAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().border);
}

::llvm::ArrayRef<int64_t> ResizeOp::getBorder() {
  auto attr = getBorderAttr();
  return attr;
}

::mlir::StringAttr ResizeOp::getModeAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().mode);
}

::llvm::StringRef ResizeOp::getMode() {
  auto attr = getModeAttr();
  return attr.getValue();
}

void ResizeOp::setScaleAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getScaleAttrName(), attr);
}

void ResizeOp::setScale(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getScaleAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ResizeOp::setOffsetAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getOffsetAttrName(), attr);
}

void ResizeOp::setOffset(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ResizeOp::setBorderAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBorderAttrName(), attr);
}

void ResizeOp::setBorder(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getBorderAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ResizeOp::setModeAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getModeAttrName(), attr);
}

void ResizeOp::setMode(::llvm::StringRef attrValue) {
  (*this)->setAttr(getModeAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void ResizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::DenseI64ArrayAttr scale, ::mlir::DenseI64ArrayAttr offset, ::mlir::DenseI64ArrayAttr border, ::mlir::StringAttr mode) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().scale = scale;
  odsState.getOrAddProperties<Properties>().offset = offset;
  odsState.getOrAddProperties<Properties>().border = border;
  odsState.getOrAddProperties<Properties>().mode = mode;
  odsState.addTypes(output);
}

void ResizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr scale, ::mlir::DenseI64ArrayAttr offset, ::mlir::DenseI64ArrayAttr border, ::mlir::StringAttr mode) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().scale = scale;
  odsState.getOrAddProperties<Properties>().offset = offset;
  odsState.getOrAddProperties<Properties>().border = border;
  odsState.getOrAddProperties<Properties>().mode = mode;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ResizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::llvm::ArrayRef<int64_t> scale, ::llvm::ArrayRef<int64_t> offset, ::llvm::ArrayRef<int64_t> border, ::llvm::StringRef mode) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().scale = odsBuilder.getDenseI64ArrayAttr(scale);
  odsState.getOrAddProperties<Properties>().offset = odsBuilder.getDenseI64ArrayAttr(offset);
  odsState.getOrAddProperties<Properties>().border = odsBuilder.getDenseI64ArrayAttr(border);
  odsState.getOrAddProperties<Properties>().mode = odsBuilder.getStringAttr(mode);
  odsState.addTypes(output);
}

void ResizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> scale, ::llvm::ArrayRef<int64_t> offset, ::llvm::ArrayRef<int64_t> border, ::llvm::StringRef mode) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().scale = odsBuilder.getDenseI64ArrayAttr(scale);
  odsState.getOrAddProperties<Properties>().offset = odsBuilder.getDenseI64ArrayAttr(offset);
  odsState.getOrAddProperties<Properties>().border = odsBuilder.getDenseI64ArrayAttr(border);
  odsState.getOrAddProperties<Properties>().mode = odsBuilder.getStringAttr(mode);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ResizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ResizeOp::verifyInvariantsImpl() {
  auto tblgen_border = getProperties().border; (void)tblgen_border;
  if (!tblgen_border) return emitOpError("requires attribute 'border'");
  auto tblgen_mode = getProperties().mode; (void)tblgen_mode;
  if (!tblgen_mode) return emitOpError("requires attribute 'mode'");
  auto tblgen_offset = getProperties().offset; (void)tblgen_offset;
  if (!tblgen_offset) return emitOpError("requires attribute 'offset'");
  auto tblgen_scale = getProperties().scale; (void)tblgen_scale;
  if (!tblgen_scale) return emitOpError("requires attribute 'scale'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(*this, tblgen_scale, "scale")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_offset, "offset")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_border, "border")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps19(*this, tblgen_mode, "mode")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ResizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ResizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ResizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ResizeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ResizeOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ResizeOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ResizeOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ResizeOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ReverseOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReverseOpGenericAdaptorBase::ReverseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.reverse", odsAttrs.getContext());
}

ReverseOpGenericAdaptorBase::ReverseOpGenericAdaptorBase(ReverseOp op) : ReverseOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReverseOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReverseOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReverseOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t ReverseOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ReverseOpAdaptor::ReverseOpAdaptor(ReverseOp op) : ReverseOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReverseOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'tosa.reverse' op ""requires attribute 'axis'");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'tosa.reverse' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReverseOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReverseOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReverseOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReverseOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReverseOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReverseOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReverseOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReverseOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReverseOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReverseOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReverseOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;
  return std::nullopt;
}

void ReverseOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }
}

void ReverseOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);
}

::mlir::LogicalResult ReverseOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(attr, "axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReverseOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReverseOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
}

::mlir::IntegerAttr ReverseOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t ReverseOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void ReverseOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void ReverseOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ReverseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(output);
}

void ReverseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReverseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(output);
}

void ReverseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReverseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReverseOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps1(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReverseOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReverseOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReverseOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReverseOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ReverseOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::RsqrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RsqrtOpGenericAdaptorBase::RsqrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.rsqrt", odsAttrs.getContext());
}

RsqrtOpGenericAdaptorBase::RsqrtOpGenericAdaptorBase(RsqrtOp op) : RsqrtOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RsqrtOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RsqrtOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RsqrtOpAdaptor::RsqrtOpAdaptor(RsqrtOp op) : RsqrtOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RsqrtOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RsqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RsqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> RsqrtOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RsqrtOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RsqrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RsqrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> RsqrtOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1) {
  odsState.addOperands(input1);
  odsState.addTypes(output);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1) {
  odsState.addOperands(input1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RsqrtOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RsqrtOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RsqrtOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RsqrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void RsqrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::RsqrtOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::ScatterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScatterOpGenericAdaptorBase::ScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.scatter", odsAttrs.getContext());
}

ScatterOpGenericAdaptorBase::ScatterOpGenericAdaptorBase(ScatterOp op) : ScatterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScatterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScatterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScatterOpAdaptor::ScatterOpAdaptor(ScatterOp op) : ScatterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScatterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScatterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScatterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScatterOp::getValuesIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> ScatterOp::getIndices() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::Value ScatterOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScatterOp::getValuesInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScatterOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScatterOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScatterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScatterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScatterOp::getValuesOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values_out, ::mlir::Value values_in, ::mlir::Value indices, ::mlir::Value input) {
  odsState.addOperands(values_in);
  odsState.addOperands(indices);
  odsState.addOperands(input);
  odsState.addTypes(values_out);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value values_in, ::mlir::Value indices, ::mlir::Value input) {
  odsState.addOperands(values_in);
  odsState.addOperands(indices);
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScatterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScatterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps16(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScatterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScatterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScatterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ScatterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ScatterOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  ScatterOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ScatterOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::ScatterOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::SelectOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.select", odsAttrs.getContext());
}

SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(SelectOp op) : SelectOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SelectOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SelectOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SelectOpAdaptor::SelectOpAdaptor(SelectOp op) : SelectOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SelectOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SelectOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SelectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SelectOp::getPred() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> SelectOp::getOnTrue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::TensorType> SelectOp::getOnFalse() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SelectOp::getPredMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectOp::getOnTrueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectOp::getOnFalseMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SelectOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SelectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SelectOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  odsState.addTypes(output);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SelectOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SelectOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void SelectOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::ParseResult SelectOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type predRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> predTypes(predRawTypes);
  ::mlir::Type on_trueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> on_trueTypes(on_trueRawTypes);
  ::mlir::Type on_falseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> on_falseTypes(on_falseRawTypes);
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outputRawTypes[0] = type;
  }
  result.addTypes(outputTypes);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(predTypes), ::llvm::ArrayRef<::mlir::Type>(on_trueTypes), ::llvm::ArrayRef<::mlir::Type>(on_falseTypes)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SelectOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
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
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SelectOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::SelectOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::SigmoidOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SigmoidOpGenericAdaptorBase::SigmoidOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.sigmoid", odsAttrs.getContext());
}

SigmoidOpGenericAdaptorBase::SigmoidOpGenericAdaptorBase(SigmoidOp op) : SigmoidOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SigmoidOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SigmoidOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SigmoidOpAdaptor::SigmoidOpAdaptor(SigmoidOp op) : SigmoidOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SigmoidOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SigmoidOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SigmoidOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SigmoidOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SigmoidOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SigmoidOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SigmoidOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SigmoidOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void SigmoidOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void SigmoidOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SigmoidOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SigmoidOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SigmoidOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SigmoidOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SigmoidOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void SigmoidOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::SigmoidOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::SliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SliceOpGenericAdaptorBase::SliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.slice", odsAttrs.getContext());
}

SliceOpGenericAdaptorBase::SliceOpGenericAdaptorBase(SliceOp op) : SliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr SliceOpGenericAdaptorBase::getStartAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().start);
  return attr;
}

::llvm::ArrayRef<int64_t> SliceOpGenericAdaptorBase::getStart() {
  auto attr = getStartAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr SliceOpGenericAdaptorBase::getSizeAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().size);
  return attr;
}

::llvm::ArrayRef<int64_t> SliceOpGenericAdaptorBase::getSize() {
  auto attr = getSizeAttr();
  return attr;
}

} // namespace detail
SliceOpAdaptor::SliceOpAdaptor(SliceOp op) : SliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_size = getProperties().size; (void)tblgen_size;
  if (!tblgen_size) return emitError(loc, "'tosa.slice' op ""requires attribute 'size'");
  auto tblgen_start = getProperties().start; (void)tblgen_start;
  if (!tblgen_start) return emitError(loc, "'tosa.slice' op ""requires attribute 'start'");

  if (tblgen_start && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_start))))
    return emitError(loc, "'tosa.slice' op ""attribute 'start' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_size && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_size))))
    return emitError(loc, "'tosa.slice' op ""attribute 'size' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SliceOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SliceOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SliceOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult SliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.size;
       auto attr = dict.get("size");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for size in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.start;
       auto attr = dict.get("start");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for start in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `start` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("size",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.start;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("start",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.size.getAsOpaquePointer()), 
    llvm::hash_value(prop.start.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "size")
      return prop.size;

    if (name == "start")
      return prop.start;
  return std::nullopt;
}

void SliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "size") {
       prop.size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.size)>>(value);
       return;
    }

    if (name == "start") {
       prop.start = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.start)>>(value);
       return;
    }
}

void SliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.size) attrs.append("size", prop.size);

    if (prop.start) attrs.append("start", prop.start);
}

::mlir::LogicalResult SliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(attr, "size", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStartAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(attr, "start", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.size)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.start)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.size);
  writer.writeAttribute(prop.start);
}

::mlir::DenseI64ArrayAttr SliceOp::getStartAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().start);
}

::llvm::ArrayRef<int64_t> SliceOp::getStart() {
  auto attr = getStartAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr SliceOp::getSizeAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().size);
}

::llvm::ArrayRef<int64_t> SliceOp::getSize() {
  auto attr = getSizeAttr();
  return attr;
}

void SliceOp::setStartAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStartAttrName(), attr);
}

void SliceOp::setStart(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStartAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void SliceOp::setSizeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getSizeAttrName(), attr);
}

void SliceOp::setSize(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getSizeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void SliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::DenseI64ArrayAttr start, ::mlir::DenseI64ArrayAttr size) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().start = start;
  odsState.getOrAddProperties<Properties>().size = size;
  odsState.addTypes(output);
}

void SliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr start, ::mlir::DenseI64ArrayAttr size) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().start = start;
  odsState.getOrAddProperties<Properties>().size = size;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::llvm::ArrayRef<int64_t> start, ::llvm::ArrayRef<int64_t> size) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().start = odsBuilder.getDenseI64ArrayAttr(start);
  odsState.getOrAddProperties<Properties>().size = odsBuilder.getDenseI64ArrayAttr(size);
  odsState.addTypes(output);
}

void SliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> start, ::llvm::ArrayRef<int64_t> size) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().start = odsBuilder.getDenseI64ArrayAttr(start);
  odsState.getOrAddProperties<Properties>().size = odsBuilder.getDenseI64ArrayAttr(size);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SliceOp::verifyInvariantsImpl() {
  auto tblgen_size = getProperties().size; (void)tblgen_size;
  if (!tblgen_size) return emitOpError("requires attribute 'size'");
  auto tblgen_start = getProperties().start; (void)tblgen_start;
  if (!tblgen_start) return emitOpError("requires attribute 'start'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(*this, tblgen_start, "start")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(*this, tblgen_size, "size")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SliceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void SliceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
SliceOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  SliceOp::Adaptor adaptor(operands, attributes, properties, regions);
  return SliceOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::SliceOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::SubOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubOpGenericAdaptorBase::SubOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.sub", odsAttrs.getContext());
}

SubOpGenericAdaptorBase::SubOpGenericAdaptorBase(SubOp op) : SubOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SubOpAdaptor::SubOpAdaptor(SubOp op) : SubOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SubOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> SubOp::getInput2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SubOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubOp::getInput2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SubOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  odsState.addTypes(output);
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value input2) {
  odsState.addOperands(input1);
  odsState.addOperands(input2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SubOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void SubOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::SubOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::TableOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TableOpGenericAdaptorBase::TableOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.table", odsAttrs.getContext());
}

TableOpGenericAdaptorBase::TableOpGenericAdaptorBase(TableOp op) : TableOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TableOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TableOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TableOpAdaptor::TableOpAdaptor(TableOp op) : TableOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TableOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TableOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TableOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TableOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Value TableOp::getTable() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &TableOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TableOp::getTableMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TableOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TableOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TableOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void TableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value table) {
  odsState.addOperands(input);
  odsState.addOperands(table);
  odsState.addTypes(output);
}

void TableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value table) {
  odsState.addOperands(input);
  odsState.addOperands(table);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TableOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TableOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TableOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TableOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tableRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tableOperands(tableRawOperands);  ::llvm::SMLoc tableOperandsLoc;
  (void)tableOperandsLoc;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type tableRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tableTypes(tableRawTypes);
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tableOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tableRawOperands[0]))
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
    inputRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tableRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outputRawTypes[0] = type;
  }
  result.addTypes(outputTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tableOperands, tableTypes, tableOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TableOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTable();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getTable().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TableOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
TableOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  TableOp::Adaptor adaptor(operands, attributes, properties, regions);
  return TableOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::TableOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::TanhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanhOpGenericAdaptorBase::TanhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.tanh", odsAttrs.getContext());
}

TanhOpGenericAdaptorBase::TanhOpGenericAdaptorBase(TanhOp op) : TanhOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TanhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TanhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TanhOpAdaptor::TanhOpAdaptor(TanhOp op) : TanhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TanhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TanhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TanhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TanhOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TanhOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TanhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TanhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TanhOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TanhOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TanhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TanhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void TanhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::TanhOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::TileOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileOpGenericAdaptorBase::TileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.tile", odsAttrs.getContext());
}

TileOpGenericAdaptorBase::TileOpGenericAdaptorBase(TileOp op) : TileOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileOpGenericAdaptorBase::getMultiplesAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().multiples);
  return attr;
}

::llvm::ArrayRef<int64_t> TileOpGenericAdaptorBase::getMultiples() {
  auto attr = getMultiplesAttr();
  return attr;
}

} // namespace detail
TileOpAdaptor::TileOpAdaptor(TileOp op) : TileOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_multiples = getProperties().multiples; (void)tblgen_multiples;
  if (!tblgen_multiples) return emitError(loc, "'tosa.tile' op ""requires attribute 'multiples'");

  if (tblgen_multiples && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_multiples))))
    return emitError(loc, "'tosa.tile' op ""attribute 'multiples' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TileOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TileOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TileOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TileOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult TileOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.multiples;
       auto attr = dict.get("multiples");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for multiples in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `multiples` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.multiples;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("multiples",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.multiples.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "multiples")
      return prop.multiples;
  return std::nullopt;
}

void TileOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "multiples") {
       prop.multiples = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.multiples)>>(value);
       return;
    }
}

void TileOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.multiples) attrs.append("multiples", prop.multiples);
}

::mlir::LogicalResult TileOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMultiplesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(attr, "multiples", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.multiples)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.multiples);
}

::mlir::DenseI64ArrayAttr TileOp::getMultiplesAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().multiples);
}

::llvm::ArrayRef<int64_t> TileOp::getMultiples() {
  auto attr = getMultiplesAttr();
  return attr;
}

void TileOp::setMultiplesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getMultiplesAttrName(), attr);
}

void TileOp::setMultiples(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getMultiplesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::DenseI64ArrayAttr multiples) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().multiples = multiples;
  odsState.addTypes(output);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::DenseI64ArrayAttr multiples) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().multiples = multiples;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::llvm::ArrayRef<int64_t> multiples) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().multiples = odsBuilder.getDenseI64ArrayAttr(multiples);
  odsState.addTypes(output);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::llvm::ArrayRef<int64_t> multiples) {
  odsState.addOperands(input1);
  odsState.getOrAddProperties<Properties>().multiples = odsBuilder.getDenseI64ArrayAttr(multiples);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileOp::verifyInvariantsImpl() {
  auto tblgen_multiples = getProperties().multiples; (void)tblgen_multiples;
  if (!tblgen_multiples) return emitOpError("requires attribute 'multiples'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps18(*this, tblgen_multiples, "multiples")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void TileOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
TileOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  TileOp::Adaptor adaptor(operands, attributes, properties, regions);
  return TileOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::TileOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::TransposeConv2DOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransposeConv2DOpGenericAdaptorBase::TransposeConv2DOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.transpose_conv2d", odsAttrs.getContext());
}

TransposeConv2DOpGenericAdaptorBase::TransposeConv2DOpGenericAdaptorBase(TransposeConv2DOp op) : TransposeConv2DOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TransposeConv2DOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TransposeConv2DOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TransposeConv2DOpGenericAdaptorBase::getOutPadAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().out_pad);
  return attr;
}

::llvm::ArrayRef<int64_t> TransposeConv2DOpGenericAdaptorBase::getOutPad() {
  auto attr = getOutPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TransposeConv2DOpGenericAdaptorBase::getStrideAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
  return attr;
}

::llvm::ArrayRef<int64_t> TransposeConv2DOpGenericAdaptorBase::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TransposeConv2DOpGenericAdaptorBase::getOutShapeAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().out_shape);
  return attr;
}

::llvm::ArrayRef<int64_t> TransposeConv2DOpGenericAdaptorBase::getOutShape() {
  auto attr = getOutShapeAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr TransposeConv2DOpGenericAdaptorBase::getQuantizationInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
  return attr;
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> TransposeConv2DOpGenericAdaptorBase::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr TransposeConv2DOpGenericAdaptorBase::getLocalBoundAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool TransposeConv2DOpGenericAdaptorBase::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
TransposeConv2DOpAdaptor::TransposeConv2DOpAdaptor(TransposeConv2DOp op) : TransposeConv2DOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TransposeConv2DOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_out_pad = getProperties().out_pad; (void)tblgen_out_pad;
  if (!tblgen_out_pad) return emitError(loc, "'tosa.transpose_conv2d' op ""requires attribute 'out_pad'");
  auto tblgen_out_shape = getProperties().out_shape; (void)tblgen_out_shape;
  if (!tblgen_out_shape) return emitError(loc, "'tosa.transpose_conv2d' op ""requires attribute 'out_shape'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitError(loc, "'tosa.transpose_conv2d' op ""requires attribute 'stride'");

  if (tblgen_out_pad && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_out_pad))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_out_pad).size() == 4))))
    return emitError(loc, "'tosa.transpose_conv2d' op ""attribute 'out_pad' failed to satisfy constraint: i64 dense array attribute with exactly 4 elements");

  if (tblgen_stride && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_stride))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_stride).size() == 2))))
    return emitError(loc, "'tosa.transpose_conv2d' op ""attribute 'stride' failed to satisfy constraint: i64 dense array attribute with exactly 2 elements");

  if (tblgen_out_shape && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_out_shape))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_out_shape).size() <= 4))))
    return emitError(loc, "'tosa.transpose_conv2d' op ""attribute 'out_shape' failed to satisfy constraint: i64 dense array attribute with at least 4 elements");

  if (tblgen_quantization_info && !((::llvm::isa<mlir::tosa::ConvOpQuantizationAttr>(tblgen_quantization_info))))
    return emitError(loc, "'tosa.transpose_conv2d' op ""attribute 'quantization_info' failed to satisfy constraint: Attribute for Conv type op quantization information.");

  if (tblgen_local_bound && !((::llvm::isa<::mlir::BoolAttr>(tblgen_local_bound))))
    return emitError(loc, "'tosa.transpose_conv2d' op ""attribute 'local_bound' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TransposeConv2DOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TransposeConv2DOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeConv2DOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::RankedTensorType> TransposeConv2DOp::getFilter() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(1).begin());
}

::mlir::Value TransposeConv2DOp::getBias() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &TransposeConv2DOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TransposeConv2DOp::getFilterMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TransposeConv2DOp::getBiasMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TransposeConv2DOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransposeConv2DOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeConv2DOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult TransposeConv2DOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.local_bound;
       auto attr = dict.get("local_bound");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for local_bound in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `local_bound` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.out_pad;
       auto attr = dict.get("out_pad");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for out_pad in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `out_pad` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.out_shape;
       auto attr = dict.get("out_shape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for out_shape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `out_shape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.quantization_info;
       auto attr = dict.get("quantization_info");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for quantization_info in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `quantization_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stride;
       auto attr = dict.get("stride");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for stride in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TransposeConv2DOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.local_bound;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("local_bound",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.out_pad;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("out_pad",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.out_shape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("out_shape",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.quantization_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("quantization_info",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stride;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TransposeConv2DOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.local_bound.getAsOpaquePointer()), 
    llvm::hash_value(prop.out_pad.getAsOpaquePointer()), 
    llvm::hash_value(prop.out_shape.getAsOpaquePointer()), 
    llvm::hash_value(prop.quantization_info.getAsOpaquePointer()), 
    llvm::hash_value(prop.stride.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TransposeConv2DOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "local_bound")
      return prop.local_bound;

    if (name == "out_pad")
      return prop.out_pad;

    if (name == "out_shape")
      return prop.out_shape;

    if (name == "quantization_info")
      return prop.quantization_info;

    if (name == "stride")
      return prop.stride;
  return std::nullopt;
}

void TransposeConv2DOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "local_bound") {
       prop.local_bound = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.local_bound)>>(value);
       return;
    }

    if (name == "out_pad") {
       prop.out_pad = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.out_pad)>>(value);
       return;
    }

    if (name == "out_shape") {
       prop.out_shape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.out_shape)>>(value);
       return;
    }

    if (name == "quantization_info") {
       prop.quantization_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.quantization_info)>>(value);
       return;
    }

    if (name == "stride") {
       prop.stride = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride)>>(value);
       return;
    }
}

void TransposeConv2DOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.local_bound) attrs.append("local_bound", prop.local_bound);

    if (prop.out_pad) attrs.append("out_pad", prop.out_pad);

    if (prop.out_shape) attrs.append("out_shape", prop.out_shape);

    if (prop.quantization_info) attrs.append("quantization_info", prop.quantization_info);

    if (prop.stride) attrs.append("stride", prop.stride);
}

::mlir::LogicalResult TransposeConv2DOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLocalBoundAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(attr, "local_bound", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOutPadAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(attr, "out_pad", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOutShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps20(attr, "out_shape", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getQuantizationInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(attr, "quantization_info", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStrideAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(attr, "stride", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TransposeConv2DOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.local_bound)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.out_pad)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.out_shape)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.quantization_info)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.stride)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeConv2DOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.local_bound);
  writer.writeAttribute(prop.out_pad);
  writer.writeAttribute(prop.out_shape);

  writer.writeOptionalAttribute(prop.quantization_info);
  writer.writeAttribute(prop.stride);
}

::mlir::DenseI64ArrayAttr TransposeConv2DOp::getOutPadAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().out_pad);
}

::llvm::ArrayRef<int64_t> TransposeConv2DOp::getOutPad() {
  auto attr = getOutPadAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TransposeConv2DOp::getStrideAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().stride);
}

::llvm::ArrayRef<int64_t> TransposeConv2DOp::getStride() {
  auto attr = getStrideAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TransposeConv2DOp::getOutShapeAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().out_shape);
}

::llvm::ArrayRef<int64_t> TransposeConv2DOp::getOutShape() {
  auto attr = getOutShapeAttr();
  return attr;
}

mlir::tosa::ConvOpQuantizationAttr TransposeConv2DOp::getQuantizationInfoAttr() {
  return ::llvm::dyn_cast_or_null<mlir::tosa::ConvOpQuantizationAttr>(getProperties().quantization_info);
}

::std::optional<mlir::tosa::ConvOpQuantizationAttr> TransposeConv2DOp::getQuantizationInfo() {
  auto attr = getQuantizationInfoAttr();
  return attr ? ::std::optional<mlir::tosa::ConvOpQuantizationAttr>(::llvm::cast<mlir::tosa::ConvOpQuantizationAttr>(attr)) : (::std::nullopt);
}

::mlir::BoolAttr TransposeConv2DOp::getLocalBoundAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().local_bound);
}

bool TransposeConv2DOp::getLocalBound() {
  auto attr = getLocalBoundAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void TransposeConv2DOp::setOutPadAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getOutPadAttrName(), attr);
}

void TransposeConv2DOp::setOutPad(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getOutPadAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TransposeConv2DOp::setStrideAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStrideAttrName(), attr);
}

void TransposeConv2DOp::setStride(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStrideAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TransposeConv2DOp::setOutShapeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getOutShapeAttrName(), attr);
}

void TransposeConv2DOp::setOutShape(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getOutShapeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TransposeConv2DOp::setQuantizationInfoAttr(mlir::tosa::ConvOpQuantizationAttr attr) {
  (*this)->setAttr(getQuantizationInfoAttrName(), attr);
}

void TransposeConv2DOp::setLocalBoundAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getLocalBoundAttrName(), attr);
}

void TransposeConv2DOp::setLocalBound(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLocalBoundAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getLocalBoundAttrName());
}

::mlir::Attribute TransposeConv2DOp::removeQuantizationInfoAttr() {
    auto &attr = getProperties().quantization_info;
    attr = {};
    return attr;
}

::mlir::Attribute TransposeConv2DOp::removeLocalBoundAttr() {
    auto &attr = getProperties().local_bound;
    attr = {};
    return attr;
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputType, ::mlir::Value input, ::mlir::Value weight, mlir::Value bias, ::mlir::DenseI64ArrayAttr outpad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr outputShape) {
    buildTransConvOpWithQuantInfo(odsBuilder, odsState, outputType,
                                  input, weight, bias,
                                  outpad, stride,
                                  outputShape);
  
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr out_pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr out_shape, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().out_pad = out_pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().out_shape = out_shape;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  odsState.addTypes(output);
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::DenseI64ArrayAttr out_pad, ::mlir::DenseI64ArrayAttr stride, ::mlir::DenseI64ArrayAttr out_shape, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/::mlir::BoolAttr local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().out_pad = out_pad;
  odsState.getOrAddProperties<Properties>().stride = stride;
  odsState.getOrAddProperties<Properties>().out_shape = out_shape;
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  if (local_bound) {
    odsState.getOrAddProperties<Properties>().local_bound = local_bound;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> out_pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> out_shape, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().out_pad = odsBuilder.getDenseI64ArrayAttr(out_pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().out_shape = odsBuilder.getDenseI64ArrayAttr(out_shape);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  odsState.addTypes(output);
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::llvm::ArrayRef<int64_t> out_pad, ::llvm::ArrayRef<int64_t> stride, ::llvm::ArrayRef<int64_t> out_shape, /*optional*/mlir::tosa::ConvOpQuantizationAttr quantization_info, /*optional*/bool local_bound) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(bias);
  odsState.getOrAddProperties<Properties>().out_pad = odsBuilder.getDenseI64ArrayAttr(out_pad);
  odsState.getOrAddProperties<Properties>().stride = odsBuilder.getDenseI64ArrayAttr(stride);
  odsState.getOrAddProperties<Properties>().out_shape = odsBuilder.getDenseI64ArrayAttr(out_shape);
  if (quantization_info) {
    odsState.getOrAddProperties<Properties>().quantization_info = quantization_info;
  }
  odsState.getOrAddProperties<Properties>().local_bound = odsBuilder.getBoolAttr(local_bound);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeConv2DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeConv2DOp::verifyInvariantsImpl() {
  auto tblgen_local_bound = getProperties().local_bound; (void)tblgen_local_bound;
  auto tblgen_out_pad = getProperties().out_pad; (void)tblgen_out_pad;
  if (!tblgen_out_pad) return emitOpError("requires attribute 'out_pad'");
  auto tblgen_out_shape = getProperties().out_shape; (void)tblgen_out_shape;
  if (!tblgen_out_shape) return emitOpError("requires attribute 'out_shape'");
  auto tblgen_quantization_info = getProperties().quantization_info; (void)tblgen_quantization_info;
  auto tblgen_stride = getProperties().stride; (void)tblgen_stride;
  if (!tblgen_stride) return emitOpError("requires attribute 'stride'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps3(*this, tblgen_out_pad, "out_pad")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps2(*this, tblgen_stride, "stride")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps20(*this, tblgen_out_shape, "out_shape")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps9(*this, tblgen_quantization_info, "quantization_info")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps0(*this, tblgen_local_bound, "local_bound")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TransposeConv2DOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TransposeConv2DOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeConv2DOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLocalBoundAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("local_bound");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void TransposeConv2DOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
TransposeConv2DOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  TransposeConv2DOp::Adaptor adaptor(operands, attributes, properties, regions);
  return TransposeConv2DOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::TransposeConv2DOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::TransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransposeOpGenericAdaptorBase::TransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.transpose", odsAttrs.getContext());
}

TransposeOpGenericAdaptorBase::TransposeOpGenericAdaptorBase(TransposeOp op) : TransposeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TransposeOpAdaptor::TransposeOpAdaptor(TransposeOp op) : TransposeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TransposeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TransposeOp::getInput1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> TransposeOp::getPerms() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &TransposeOp::getInput1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TransposeOp::getPermsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> TransposeOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input1, ::mlir::Value perms) {
  odsState.addOperands(input1);
  odsState.addOperands(perms);
  odsState.addTypes(output);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input1, ::mlir::Value perms) {
  odsState.addOperands(input1);
  odsState.addOperands(perms);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void TransposeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
TransposeOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  TransposeOp::Adaptor adaptor(operands, attributes, properties, regions);
  return TransposeOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::TransposeOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::VariableOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VariableOpGenericAdaptorBase::VariableOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.variable", odsAttrs.getContext());
}

VariableOpGenericAdaptorBase::VariableOpGenericAdaptorBase(VariableOp op) : VariableOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> VariableOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VariableOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr VariableOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().name);
  return attr;
}

::llvm::StringRef VariableOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr VariableOpGenericAdaptorBase::getTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().type);
  return attr;
}

::mlir::Type VariableOpGenericAdaptorBase::getType() {
  auto attr = getTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::Attribute VariableOpGenericAdaptorBase::getInitialValueAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().initial_value);
  return attr;
}

::std::optional<::mlir::Attribute> VariableOpGenericAdaptorBase::getInitialValue() {
  auto attr = getInitialValueAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

} // namespace detail
VariableOpAdaptor::VariableOpAdaptor(VariableOp op) : VariableOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult VariableOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_initial_value = getProperties().initial_value; (void)tblgen_initial_value;
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitError(loc, "'tosa.variable' op ""requires attribute 'name'");
  auto tblgen_type = getProperties().type; (void)tblgen_type;
  if (!tblgen_type) return emitError(loc, "'tosa.variable' op ""requires attribute 'type'");

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'tosa.variable' op ""attribute 'name' failed to satisfy constraint: string attribute");

  if (tblgen_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_type).getValue()))) && ((true))))
    return emitError(loc, "'tosa.variable' op ""attribute 'type' failed to satisfy constraint: any type attribute");

  if (tblgen_initial_value && !((true)))
    return emitError(loc, "'tosa.variable' op ""attribute 'initial_value' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VariableOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VariableOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> VariableOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VariableOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult VariableOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.initial_value;
       auto attr = dict.get("initial_value");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for initial_value in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `initial_value` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.type;
       auto attr = dict.get("type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute VariableOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.initial_value;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("initial_value",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("type",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code VariableOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.initial_value.getAsOpaquePointer()), 
    llvm::hash_value(prop.name.getAsOpaquePointer()), 
    llvm::hash_value(prop.type.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> VariableOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "initial_value")
      return prop.initial_value;

    if (name == "name")
      return prop.name;

    if (name == "type")
      return prop.type;
  return std::nullopt;
}

void VariableOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "initial_value") {
       prop.initial_value = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.initial_value)>>(value);
       return;
    }

    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }

    if (name == "type") {
       prop.type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.type)>>(value);
       return;
    }
}

void VariableOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.initial_value) attrs.append("initial_value", prop.initial_value);

    if (prop.name) attrs.append("name", prop.name);

    if (prop.type) attrs.append("type", prop.type);
}

::mlir::LogicalResult VariableOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInitialValueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps22(attr, "initial_value", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(attr, "name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps21(attr, "type", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult VariableOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.initial_value)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.type)))
    return ::mlir::failure();
  return ::mlir::success();
}

void VariableOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.initial_value);
  writer.writeAttribute(prop.name);
  writer.writeAttribute(prop.type);
}

::mlir::StringAttr VariableOp::getNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().name);
}

::llvm::StringRef VariableOp::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr VariableOp::getTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().type);
}

::mlir::Type VariableOp::getType() {
  auto attr = getTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::Attribute VariableOp::getInitialValueAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().initial_value);
}

::std::optional<::mlir::Attribute> VariableOp::getInitialValue() {
  auto attr = getInitialValueAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

void VariableOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void VariableOp::setName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void VariableOp::setTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getTypeAttrName(), attr);
}

void VariableOp::setType(::mlir::Type attrValue) {
  (*this)->setAttr(getTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void VariableOp::setInitialValueAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getInitialValueAttrName(), attr);
}

::mlir::Attribute VariableOp::removeInitialValueAttr() {
    auto &attr = getProperties().initial_value;
    attr = {};
    return attr;
}

void VariableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr name, ::mlir::TypeAttr type, /*optional*/::mlir::Attribute initial_value) {
  odsState.getOrAddProperties<Properties>().name = name;
  odsState.getOrAddProperties<Properties>().type = type;
  if (initial_value) {
    odsState.getOrAddProperties<Properties>().initial_value = initial_value;
  }
}

void VariableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr name, ::mlir::TypeAttr type, /*optional*/::mlir::Attribute initial_value) {
  odsState.getOrAddProperties<Properties>().name = name;
  odsState.getOrAddProperties<Properties>().type = type;
  if (initial_value) {
    odsState.getOrAddProperties<Properties>().initial_value = initial_value;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VariableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef name, ::mlir::Type type, /*optional*/::mlir::Attribute initial_value) {
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
  odsState.getOrAddProperties<Properties>().type = ::mlir::TypeAttr::get(type);
  if (initial_value) {
    odsState.getOrAddProperties<Properties>().initial_value = initial_value;
  }
}

void VariableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef name, ::mlir::Type type, /*optional*/::mlir::Attribute initial_value) {
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
  odsState.getOrAddProperties<Properties>().type = ::mlir::TypeAttr::get(type);
  if (initial_value) {
    odsState.getOrAddProperties<Properties>().initial_value = initial_value;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VariableOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VariableOp::verifyInvariantsImpl() {
  auto tblgen_initial_value = getProperties().initial_value; (void)tblgen_initial_value;
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitOpError("requires attribute 'name'");
  auto tblgen_type = getProperties().type; (void)tblgen_type;
  if (!tblgen_type) return emitOpError("requires attribute 'type'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(*this, tblgen_name, "name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps21(*this, tblgen_type, "type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps22(*this, tblgen_initial_value, "initial_value")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult VariableOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VariableOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr nameAttr;
  ::mlir::TypeAttr typeAttr;
  ::mlir::Attribute initial_valueAttr;

  if (parser.parseSymbolName(nameAttr))
    return ::mlir::failure();
  if (nameAttr) result.getOrAddProperties<VariableOp::Properties>().name = nameAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  {
    auto odsResult = parseTypeOrAttr(parser, typeAttr, initial_valueAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<VariableOp::Properties>().type = typeAttr;
    if (initial_valueAttr)
      result.getOrAddProperties<VariableOp::Properties>().initial_value = initial_valueAttr;
  }
  return ::mlir::success();
}

void VariableOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getNameAttr().getValue());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("name");
  elidedAttrs.push_back("type");
  elidedAttrs.push_back("initial_value");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  printTypeOrAttr(_odsPrinter, *this, getTypeAttr(), getInitialValueAttr());
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::VariableOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::VariableReadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VariableReadOpGenericAdaptorBase::VariableReadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.variable.read", odsAttrs.getContext());
}

VariableReadOpGenericAdaptorBase::VariableReadOpGenericAdaptorBase(VariableReadOp op) : VariableReadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> VariableReadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VariableReadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr VariableReadOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().name);
  return attr;
}

::llvm::StringRef VariableReadOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

} // namespace detail
VariableReadOpAdaptor::VariableReadOpAdaptor(VariableReadOp op) : VariableReadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult VariableReadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitError(loc, "'tosa.variable.read' op ""requires attribute 'name'");

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'tosa.variable.read' op ""attribute 'name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VariableReadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VariableReadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> VariableReadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VariableReadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value VariableReadOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult VariableReadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute VariableReadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code VariableReadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> VariableReadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "name")
      return prop.name;
  return std::nullopt;
}

void VariableReadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }
}

void VariableReadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.name) attrs.append("name", prop.name);
}

::mlir::LogicalResult VariableReadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(attr, "name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult VariableReadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void VariableReadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.name);
}

::mlir::StringAttr VariableReadOp::getNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().name);
}

::llvm::StringRef VariableReadOp::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

void VariableReadOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void VariableReadOp::setName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void VariableReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::StringAttr name) {
  odsState.getOrAddProperties<Properties>().name = name;
  odsState.addTypes(value);
}

void VariableReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr name) {
  odsState.getOrAddProperties<Properties>().name = name;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VariableReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::llvm::StringRef name) {
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
  odsState.addTypes(value);
}

void VariableReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef name) {
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VariableReadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VariableReadOp::verifyInvariantsImpl() {
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitOpError("requires attribute 'name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps20(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VariableReadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VariableReadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr nameAttr;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  if (parser.parseSymbolName(nameAttr))
    return ::mlir::failure();
  if (nameAttr) result.getOrAddProperties<VariableReadOp::Properties>().name = nameAttr;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  result.addTypes(valueTypes);
  return ::mlir::success();
}

void VariableReadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getNameAttr().getValue());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::VariableReadOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::VariableWriteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VariableWriteOpGenericAdaptorBase::VariableWriteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.variable.write", odsAttrs.getContext());
}

VariableWriteOpGenericAdaptorBase::VariableWriteOpGenericAdaptorBase(VariableWriteOp op) : VariableWriteOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> VariableWriteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VariableWriteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr VariableWriteOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().name);
  return attr;
}

::llvm::StringRef VariableWriteOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

} // namespace detail
VariableWriteOpAdaptor::VariableWriteOpAdaptor(VariableWriteOp op) : VariableWriteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult VariableWriteOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitError(loc, "'tosa.variable.write' op ""requires attribute 'name'");

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'tosa.variable.write' op ""attribute 'name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VariableWriteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VariableWriteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value VariableWriteOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &VariableWriteOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> VariableWriteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VariableWriteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult VariableWriteOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute VariableWriteOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code VariableWriteOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> VariableWriteOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "name")
      return prop.name;
  return std::nullopt;
}

void VariableWriteOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }
}

void VariableWriteOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.name) attrs.append("name", prop.name);
}

::mlir::LogicalResult VariableWriteOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(attr, "name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult VariableWriteOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void VariableWriteOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.name);
}

::mlir::StringAttr VariableWriteOp::getNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().name);
}

::llvm::StringRef VariableWriteOp::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

void VariableWriteOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void VariableWriteOp::setName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void VariableWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr name, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().name = name;
}

void VariableWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr name, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().name = name;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VariableWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef name, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
}

void VariableWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef name, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VariableWriteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VariableWriteOp::verifyInvariantsImpl() {
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitOpError("requires attribute 'name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TosaOps12(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps20(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VariableWriteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VariableWriteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr nameAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  if (parser.parseSymbolName(nameAttr))
    return ::mlir::failure();
  if (nameAttr) result.getOrAddProperties<VariableWriteOp::Properties>().name = nameAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void VariableWriteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getNameAttr().getValue());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::VariableWriteOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::WhileOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WhileOpGenericAdaptorBase::WhileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.while_loop", odsAttrs.getContext());
}

WhileOpGenericAdaptorBase::WhileOpGenericAdaptorBase(WhileOp op) : WhileOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WhileOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr WhileOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &WhileOpGenericAdaptorBase::getCond() {
  return *odsRegions[0];
}

::mlir::Region &WhileOpGenericAdaptorBase::getBody() {
  return *odsRegions[1];
}

::mlir::RegionRange WhileOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
WhileOpAdaptor::WhileOpAdaptor(WhileOp op) : WhileOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WhileOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WhileOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range WhileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WhileOp::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange WhileOp::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> WhileOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range WhileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range WhileOp::getOutput() {
  return getODSResults(0);
}

::mlir::Region &WhileOp::getCond() {
  return (*this)->getRegion(0);
}

::mlir::Region &WhileOp::getBody() {
  return (*this)->getRegion(1);
}

void WhileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WhileOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TosaOps0(*this, region, "cond", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TosaOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult WhileOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult
WhileOp::inferReturnTypeComponents(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents> &inferredReturnShapes) {
  WhileOp::Adaptor adaptor(operands, attributes, properties, regions);
  return WhileOp::inferReturnTypeComponents(context,
    location, adaptor, inferredReturnShapes);
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::WhileOp)

namespace mlir {
namespace tosa {

//===----------------------------------------------------------------------===//
// mlir::tosa::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("tosa.yield", odsAttrs.getContext());
}

YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(YieldOp op) : YieldOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> YieldOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr YieldOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
YieldOpAdaptor::YieldOpAdaptor(YieldOp op) : YieldOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult YieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> YieldOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range YieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range YieldOp::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> YieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range YieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
}

void YieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult YieldOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TosaOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> inputsOperands;
  ::llvm::SMLoc inputsOperandsLoc;
  (void)inputsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> inputsTypes;

  inputsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(inputsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(inputsTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(inputsOperands, inputsTypes, inputsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInputs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getInputs().getTypes();
}

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace tosa
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(mlir::tosa::YieldOp)


#endif  // GET_OP_CLASSES

