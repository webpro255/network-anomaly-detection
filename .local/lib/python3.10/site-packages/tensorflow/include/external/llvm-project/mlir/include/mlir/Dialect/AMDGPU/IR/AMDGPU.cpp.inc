/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AMDGPU.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::amdgpu::ExtPackedFp8Op,
::mlir::amdgpu::LDSBarrierOp,
::mlir::amdgpu::MFMAOp,
::mlir::amdgpu::PackedStochRoundFp8Op,
::mlir::amdgpu::PackedTrunc2xFp8Op,
::mlir::amdgpu::RawBufferAtomicCmpswapOp,
::mlir::amdgpu::RawBufferAtomicFaddOp,
::mlir::amdgpu::RawBufferAtomicFmaxOp,
::mlir::amdgpu::RawBufferAtomicSmaxOp,
::mlir::amdgpu::RawBufferAtomicUminOp,
::mlir::amdgpu::RawBufferLoadOp,
::mlir::amdgpu::RawBufferStoreOp,
::mlir::amdgpu::WMMAOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace amdgpu {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isFloat8E5M2FNUZ())) || ((type.isFloat8E4M3FNUZ())) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isFloat8E4M3FNUZ())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 3)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4))))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be f8E5M2FNUZ type or f8E4M3FNUZ type or vector of f8E5M2FNUZ type or f8E4M3FNUZ type values of length 1/2/3/4, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isF32()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isF32())) || ((type.isF64())) || ((type.isSignlessInteger(32))) || ((type.isSignlessInteger(64))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isBF16()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isFloat8E4M3FNUZ())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit float or 64-bit float or 32-bit signless integer or 64-bit signless integer or vector of 32-bit float values of length 2 or vector of 16-bit float values of length 4 or vector of bfloat16 type values of length 2/4 or vector of 8-bit signless integer values of length 4/8 or vector of f8E5M2FNUZ type or f8E4M3FNUZ type values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isF64())) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 32))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 32))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 64-bit float or vector of 32-bit float values of length 4/16/32 or vector of 32-bit signless integer values of length 4/16/32 or vector of 64-bit float values of length 4, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                                  !::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E5M2FNUZ())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                                  !::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be fixed-length vector of f8E4M3FNUZ type or f8E5M2FNUZ type values of length 4, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(32))) || ((type.isSignlessInteger(64))) || ((type.isF32())) || ((type.isF64())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer or 64-bit signless integer or 32-bit float or 64-bit float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isF32())) || ((type.isF64())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit float or 64-bit float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isBF16())) || ((type.isF16())) || ((type.isF32())) || ((type.isSignlessInteger(32))) || ((type.isSignlessInteger(8))) || ((type.isFloat8E5M2FNUZ())) || ((type.isFloat8E4M3FNUZ())) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isSignlessInteger(32))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF16())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isFloat8E5M2FNUZ())) || ((elementType.isFloat8E4M3FNUZ())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be bfloat16 type or 16-bit float or 32-bit float or 32-bit signless integer or 8-bit signless integer or f8E5M2FNUZ type or f8E4M3FNUZ type or vector of 32-bit float or 32-bit signless integer values of length 2/4 or vector of 16-bit float or bfloat16 type values of length 2/4/8 or vector of 8-bit signless integer or f8E5M2FNUZ type or f8E4M3FNUZ type values of length 2/4/8/16, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignedInteger(8))) || ((elementType.isUnsignedInteger(8))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 16-bit float or bfloat16 type or 8-bit signless integer or 8-bit signed integer or 8-bit unsigned integer values of length 16, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMDGPU13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isSignlessInteger(32))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF16())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float or 32-bit signless integer values of length 4/8 or vector of 16-bit float or bfloat16 type values of length 8/16, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && ((!::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isNegative())) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() <= 3))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute whose value is non-negative whose maximum value is 3";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::amdgpu::MFMAPermBAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: The possible permutations of the lanes storing B available in an MFMA";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && ((!::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isNegative())) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() <= 1))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute whose value is non-negative whose maximum value is 1";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() >= 0)) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() <= 1))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute whose minimum value is 0 whose maximum value is 1";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMDGPU6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMDGPU6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::ExtPackedFp8Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtPackedFp8OpGenericAdaptorBase::ExtPackedFp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.ext_packed_fp8", odsAttrs.getContext());
}

ExtPackedFp8OpGenericAdaptorBase::ExtPackedFp8OpGenericAdaptorBase(ExtPackedFp8Op op) : ExtPackedFp8OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtPackedFp8OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExtPackedFp8OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ExtPackedFp8OpGenericAdaptorBase::getIndexAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().index);
  return attr;
}

uint32_t ExtPackedFp8OpGenericAdaptorBase::getIndex() {
  auto attr = getIndexAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ExtPackedFp8OpAdaptor::ExtPackedFp8OpAdaptor(ExtPackedFp8Op op) : ExtPackedFp8OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtPackedFp8OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_index = getProperties().index; (void)tblgen_index;
  if (!tblgen_index) return emitError(loc, "'amdgpu.ext_packed_fp8' op ""requires attribute 'index'");

  if (tblgen_index && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_index))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_index).getType().isSignlessInteger(32)))) && ((!::llvm::cast<::mlir::IntegerAttr>(tblgen_index).getValue().isNegative())) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_index).getInt() <= 3))))
    return emitError(loc, "'amdgpu.ext_packed_fp8' op ""attribute 'index' failed to satisfy constraint: 32-bit signless integer attribute whose value is non-negative whose maximum value is 3");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtPackedFp8Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtPackedFp8Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtPackedFp8Op::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExtPackedFp8Op::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExtPackedFp8Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtPackedFp8Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> ExtPackedFp8Op::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ExtPackedFp8Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.index;
       auto attr = dict.get("index");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for index in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `index` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ExtPackedFp8Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.index;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("index",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExtPackedFp8Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.index.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ExtPackedFp8Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "index")
      return prop.index;
  return std::nullopt;
}

void ExtPackedFp8Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "index") {
       prop.index = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.index)>>(value);
       return;
    }
}

void ExtPackedFp8Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.index) attrs.append("index", prop.index);
}

::mlir::LogicalResult ExtPackedFp8Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIndexAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU0(attr, "index", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExtPackedFp8Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.index)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtPackedFp8Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.index);
}

::mlir::IntegerAttr ExtPackedFp8Op::getIndexAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().index);
}

uint32_t ExtPackedFp8Op::getIndex() {
  auto attr = getIndexAttr();
  return attr.getValue().getZExtValue();
}

void ExtPackedFp8Op::setIndexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexAttrName(), attr);
}

void ExtPackedFp8Op::setIndex(uint32_t attrValue) {
  (*this)->setAttr(getIndexAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void ExtPackedFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::IntegerAttr index) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().index = index;
  odsState.addTypes(res);
}

void ExtPackedFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::IntegerAttr index) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().index = index;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtPackedFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, uint32_t index) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().index = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), index);
  odsState.addTypes(res);
}

void ExtPackedFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, uint32_t index) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().index = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtPackedFp8Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtPackedFp8Op::verifyInvariantsImpl() {
  auto tblgen_index = getProperties().index; (void)tblgen_index;
  if (!tblgen_index) return emitOpError("requires attribute 'index'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU0(*this, tblgen_index, "index")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExtPackedFp8Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ExtPackedFp8Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::IntegerAttr indexAttr;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(indexAttr, parser.getBuilder().getIntegerType(32))) {
    return ::mlir::failure();
  }
  if (indexAttr) result.getOrAddProperties<ExtPackedFp8Op::Properties>().index = indexAttr;
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::FloatType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtPackedFp8Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("index");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getIndexAttr());
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::FloatType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExtPackedFp8Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::ExtPackedFp8Op)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::LDSBarrierOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LDSBarrierOpGenericAdaptorBase::LDSBarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.lds_barrier", odsAttrs.getContext());
}

LDSBarrierOpGenericAdaptorBase::LDSBarrierOpGenericAdaptorBase(LDSBarrierOp op) : LDSBarrierOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LDSBarrierOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LDSBarrierOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LDSBarrierOpAdaptor::LDSBarrierOpAdaptor(LDSBarrierOp op) : LDSBarrierOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LDSBarrierOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LDSBarrierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LDSBarrierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> LDSBarrierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LDSBarrierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void LDSBarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void LDSBarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LDSBarrierOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LDSBarrierOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult LDSBarrierOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LDSBarrierOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void LDSBarrierOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::LDSBarrierOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::MFMAOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MFMAOpGenericAdaptorBase::MFMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.mfma", odsAttrs.getContext());
}

MFMAOpGenericAdaptorBase::MFMAOpGenericAdaptorBase(MFMAOp op) : MFMAOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MFMAOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MFMAOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MFMAOpGenericAdaptorBase::getMAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  return attr;
}

uint32_t MFMAOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOpGenericAdaptorBase::getNAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  return attr;
}

uint32_t MFMAOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOpGenericAdaptorBase::getKAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
  return attr;
}

uint32_t MFMAOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOpGenericAdaptorBase::getBlocksAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().blocks);
  return attr;
}

uint32_t MFMAOpGenericAdaptorBase::getBlocks() {
  auto attr = getBlocksAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOpGenericAdaptorBase::getCbszAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().cbsz);
  return attr;
}

uint32_t MFMAOpGenericAdaptorBase::getCbsz() {
  auto attr = getCbszAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOpGenericAdaptorBase::getAbidAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().abid);
  return attr;
}

uint32_t MFMAOpGenericAdaptorBase::getAbid() {
  auto attr = getAbidAttr();
  return attr.getValue().getZExtValue();
}

::mlir::amdgpu::MFMAPermBAttr MFMAOpGenericAdaptorBase::getBlgpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::amdgpu::MFMAPermBAttr>(getProperties().blgp);
  return attr;
}

::mlir::amdgpu::MFMAPermB MFMAOpGenericAdaptorBase::getBlgp() {
  auto attr = getBlgpAttr();
  return attr.getValue();
}

::mlir::UnitAttr MFMAOpGenericAdaptorBase::getReducePrecisionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().reducePrecision);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MFMAOpGenericAdaptorBase::getReducePrecision() {
  auto attr = getReducePrecisionAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MFMAOpGenericAdaptorBase::getNegateAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().negateA);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MFMAOpGenericAdaptorBase::getNegateA() {
  auto attr = getNegateAAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MFMAOpGenericAdaptorBase::getNegateBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().negateB);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MFMAOpGenericAdaptorBase::getNegateB() {
  auto attr = getNegateBAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MFMAOpGenericAdaptorBase::getNegateCAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().negateC);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MFMAOpGenericAdaptorBase::getNegateC() {
  auto attr = getNegateCAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MFMAOpAdaptor::MFMAOpAdaptor(MFMAOp op) : MFMAOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MFMAOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_abid = getProperties().abid; (void)tblgen_abid;
  auto tblgen_blgp = getProperties().blgp; (void)tblgen_blgp;
  auto tblgen_blocks = getProperties().blocks; (void)tblgen_blocks;
  if (!tblgen_blocks) return emitError(loc, "'amdgpu.mfma' op ""requires attribute 'blocks'");
  auto tblgen_cbsz = getProperties().cbsz; (void)tblgen_cbsz;
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'amdgpu.mfma' op ""requires attribute 'k'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'amdgpu.mfma' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'amdgpu.mfma' op ""requires attribute 'n'");
  auto tblgen_negateA = getProperties().negateA; (void)tblgen_negateA;
  auto tblgen_negateB = getProperties().negateB; (void)tblgen_negateB;
  auto tblgen_negateC = getProperties().negateC; (void)tblgen_negateC;
  auto tblgen_reducePrecision = getProperties().reducePrecision; (void)tblgen_reducePrecision;

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'm' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'k' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_blocks && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_blocks))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_blocks).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'blocks' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_cbsz && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_cbsz))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_cbsz).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'cbsz' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_abid && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_abid))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_abid).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'abid' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_blgp && !((::llvm::isa<::mlir::amdgpu::MFMAPermBAttr>(tblgen_blgp))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'blgp' failed to satisfy constraint: The possible permutations of the lanes storing B available in an MFMA");

  if (tblgen_reducePrecision && !((::llvm::isa<::mlir::UnitAttr>(tblgen_reducePrecision))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'reducePrecision' failed to satisfy constraint: unit attribute");

  if (tblgen_negateA && !((::llvm::isa<::mlir::UnitAttr>(tblgen_negateA))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'negateA' failed to satisfy constraint: unit attribute");

  if (tblgen_negateB && !((::llvm::isa<::mlir::UnitAttr>(tblgen_negateB))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'negateB' failed to satisfy constraint: unit attribute");

  if (tblgen_negateC && !((::llvm::isa<::mlir::UnitAttr>(tblgen_negateC))))
    return emitError(loc, "'amdgpu.mfma' op ""attribute 'negateC' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MFMAOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MFMAOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MFMAOp::getSourceA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MFMAOp::getSourceB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value MFMAOp::getDestC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MFMAOp::getSourceAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MFMAOp::getSourceBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MFMAOp::getDestCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MFMAOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MFMAOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MFMAOp::getDestD() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MFMAOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.abid;
       auto attr = dict.get("abid");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for abid in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `abid` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.blgp;
       auto attr = dict.get("blgp");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for blgp in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `blgp` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.blocks;
       auto attr = dict.get("blocks");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for blocks in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `blocks` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.cbsz;
       auto attr = dict.get("cbsz");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for cbsz in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `cbsz` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for k in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for m in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for n in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.negateA;
       auto attr = dict.get("negateA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for negateA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `negateA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.negateB;
       auto attr = dict.get("negateB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for negateB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `negateB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.negateC;
       auto attr = dict.get("negateC");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for negateC in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `negateC` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reducePrecision;
       auto attr = dict.get("reducePrecision");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reducePrecision in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reducePrecision` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MFMAOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.abid;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("abid",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.blgp;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("blgp",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.blocks;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("blocks",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.cbsz;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("cbsz",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.negateA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("negateA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.negateB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("negateB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.negateC;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("negateC",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reducePrecision;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reducePrecision",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MFMAOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.abid.getAsOpaquePointer()), 
    llvm::hash_value(prop.blgp.getAsOpaquePointer()), 
    llvm::hash_value(prop.blocks.getAsOpaquePointer()), 
    llvm::hash_value(prop.cbsz.getAsOpaquePointer()), 
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()), 
    llvm::hash_value(prop.negateA.getAsOpaquePointer()), 
    llvm::hash_value(prop.negateB.getAsOpaquePointer()), 
    llvm::hash_value(prop.negateC.getAsOpaquePointer()), 
    llvm::hash_value(prop.reducePrecision.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MFMAOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "abid")
      return prop.abid;

    if (name == "blgp")
      return prop.blgp;

    if (name == "blocks")
      return prop.blocks;

    if (name == "cbsz")
      return prop.cbsz;

    if (name == "k")
      return prop.k;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;

    if (name == "negateA")
      return prop.negateA;

    if (name == "negateB")
      return prop.negateB;

    if (name == "negateC")
      return prop.negateC;

    if (name == "reducePrecision")
      return prop.reducePrecision;
  return std::nullopt;
}

void MFMAOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "abid") {
       prop.abid = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.abid)>>(value);
       return;
    }

    if (name == "blgp") {
       prop.blgp = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.blgp)>>(value);
       return;
    }

    if (name == "blocks") {
       prop.blocks = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.blocks)>>(value);
       return;
    }

    if (name == "cbsz") {
       prop.cbsz = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.cbsz)>>(value);
       return;
    }

    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }

    if (name == "negateA") {
       prop.negateA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.negateA)>>(value);
       return;
    }

    if (name == "negateB") {
       prop.negateB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.negateB)>>(value);
       return;
    }

    if (name == "negateC") {
       prop.negateC = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.negateC)>>(value);
       return;
    }

    if (name == "reducePrecision") {
       prop.reducePrecision = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reducePrecision)>>(value);
       return;
    }
}

void MFMAOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.abid) attrs.append("abid", prop.abid);

    if (prop.blgp) attrs.append("blgp", prop.blgp);

    if (prop.blocks) attrs.append("blocks", prop.blocks);

    if (prop.cbsz) attrs.append("cbsz", prop.cbsz);

    if (prop.k) attrs.append("k", prop.k);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);

    if (prop.negateA) attrs.append("negateA", prop.negateA);

    if (prop.negateB) attrs.append("negateB", prop.negateB);

    if (prop.negateC) attrs.append("negateC", prop.negateC);

    if (prop.reducePrecision) attrs.append("reducePrecision", prop.reducePrecision);
}

::mlir::LogicalResult MFMAOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAbidAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "abid", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBlgpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU2(attr, "blgp", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBlocksAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "blocks", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getCbszAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "cbsz", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "n", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNegateAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "negateA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNegateBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "negateB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNegateCAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "negateC", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReducePrecisionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "reducePrecision", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MFMAOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.abid)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.blgp)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.blocks)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.cbsz)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.negateA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.negateB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.negateC)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reducePrecision)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MFMAOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.abid);

  writer.writeOptionalAttribute(prop.blgp);
  writer.writeAttribute(prop.blocks);

  writer.writeOptionalAttribute(prop.cbsz);
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);

  writer.writeOptionalAttribute(prop.negateA);

  writer.writeOptionalAttribute(prop.negateB);

  writer.writeOptionalAttribute(prop.negateC);

  writer.writeOptionalAttribute(prop.reducePrecision);
}

::mlir::IntegerAttr MFMAOp::getMAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
}

uint32_t MFMAOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOp::getNAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
}

uint32_t MFMAOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOp::getKAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
}

uint32_t MFMAOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOp::getBlocksAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().blocks);
}

uint32_t MFMAOp::getBlocks() {
  auto attr = getBlocksAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOp::getCbszAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().cbsz);
}

uint32_t MFMAOp::getCbsz() {
  auto attr = getCbszAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MFMAOp::getAbidAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().abid);
}

uint32_t MFMAOp::getAbid() {
  auto attr = getAbidAttr();
  return attr.getValue().getZExtValue();
}

::mlir::amdgpu::MFMAPermBAttr MFMAOp::getBlgpAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::amdgpu::MFMAPermBAttr>(getProperties().blgp);
}

::mlir::amdgpu::MFMAPermB MFMAOp::getBlgp() {
  auto attr = getBlgpAttr();
  return attr.getValue();
}

::mlir::UnitAttr MFMAOp::getReducePrecisionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().reducePrecision);
}

bool MFMAOp::getReducePrecision() {
  auto attr = getReducePrecisionAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MFMAOp::getNegateAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().negateA);
}

bool MFMAOp::getNegateA() {
  auto attr = getNegateAAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MFMAOp::getNegateBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().negateB);
}

bool MFMAOp::getNegateB() {
  auto attr = getNegateBAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MFMAOp::getNegateCAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().negateC);
}

bool MFMAOp::getNegateC() {
  auto attr = getNegateCAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MFMAOp::setMAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMAttrName(), attr);
}

void MFMAOp::setM(uint32_t attrValue) {
  (*this)->setAttr(getMAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MFMAOp::setNAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNAttrName(), attr);
}

void MFMAOp::setN(uint32_t attrValue) {
  (*this)->setAttr(getNAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MFMAOp::setKAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getKAttrName(), attr);
}

void MFMAOp::setK(uint32_t attrValue) {
  (*this)->setAttr(getKAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MFMAOp::setBlocksAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getBlocksAttrName(), attr);
}

void MFMAOp::setBlocks(uint32_t attrValue) {
  (*this)->setAttr(getBlocksAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MFMAOp::setCbszAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getCbszAttrName(), attr);
}

void MFMAOp::setCbsz(uint32_t attrValue) {
  (*this)->setAttr(getCbszAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MFMAOp::setAbidAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAbidAttrName(), attr);
}

void MFMAOp::setAbid(uint32_t attrValue) {
  (*this)->setAttr(getAbidAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MFMAOp::setBlgpAttr(::mlir::amdgpu::MFMAPermBAttr attr) {
  (*this)->setAttr(getBlgpAttrName(), attr);
}

void MFMAOp::setBlgp(::mlir::amdgpu::MFMAPermB attrValue) {
  (*this)->setAttr(getBlgpAttrName(), ::mlir::amdgpu::MFMAPermBAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MFMAOp::setReducePrecisionAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getReducePrecisionAttrName(), attr);
}

void MFMAOp::setReducePrecision(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getReducePrecisionAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getReducePrecisionAttrName());
}

void MFMAOp::setNegateAAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNegateAAttrName(), attr);
}

void MFMAOp::setNegateA(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNegateAAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNegateAAttrName());
}

void MFMAOp::setNegateBAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNegateBAttrName(), attr);
}

void MFMAOp::setNegateB(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNegateBAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNegateBAttrName());
}

void MFMAOp::setNegateCAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNegateCAttrName(), attr);
}

void MFMAOp::setNegateC(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNegateCAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNegateCAttrName());
}

::mlir::Attribute MFMAOp::removeReducePrecisionAttr() {
    auto &attr = getProperties().reducePrecision;
    attr = {};
    return attr;
}

::mlir::Attribute MFMAOp::removeNegateAAttr() {
    auto &attr = getProperties().negateA;
    attr = {};
    return attr;
}

::mlir::Attribute MFMAOp::removeNegateBAttr() {
    auto &attr = getProperties().negateB;
    attr = {};
    return attr;
}

::mlir::Attribute MFMAOp::removeNegateCAttr() {
    auto &attr = getProperties().negateC;
    attr = {};
    return attr;
}

void MFMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::IntegerAttr blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr cbsz, ::mlir::IntegerAttr abid, ::mlir::amdgpu::MFMAPermBAttr blgp, /*optional*/::mlir::UnitAttr reducePrecision, /*optional*/::mlir::UnitAttr negateA, /*optional*/::mlir::UnitAttr negateB, /*optional*/::mlir::UnitAttr negateC) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().blocks = blocks;
  if (cbsz) {
    odsState.getOrAddProperties<Properties>().cbsz = cbsz;
  }
  if (abid) {
    odsState.getOrAddProperties<Properties>().abid = abid;
  }
  if (blgp) {
    odsState.getOrAddProperties<Properties>().blgp = blgp;
  }
  if (reducePrecision) {
    odsState.getOrAddProperties<Properties>().reducePrecision = reducePrecision;
  }
  if (negateA) {
    odsState.getOrAddProperties<Properties>().negateA = negateA;
  }
  if (negateB) {
    odsState.getOrAddProperties<Properties>().negateB = negateB;
  }
  if (negateC) {
    odsState.getOrAddProperties<Properties>().negateC = negateC;
  }
  odsState.addTypes(destD);
}

void MFMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::IntegerAttr blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr cbsz, ::mlir::IntegerAttr abid, ::mlir::amdgpu::MFMAPermBAttr blgp, /*optional*/::mlir::UnitAttr reducePrecision, /*optional*/::mlir::UnitAttr negateA, /*optional*/::mlir::UnitAttr negateB, /*optional*/::mlir::UnitAttr negateC) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().blocks = blocks;
  if (cbsz) {
    odsState.getOrAddProperties<Properties>().cbsz = cbsz;
  }
  if (abid) {
    odsState.getOrAddProperties<Properties>().abid = abid;
  }
  if (blgp) {
    odsState.getOrAddProperties<Properties>().blgp = blgp;
  }
  if (reducePrecision) {
    odsState.getOrAddProperties<Properties>().reducePrecision = reducePrecision;
  }
  if (negateA) {
    odsState.getOrAddProperties<Properties>().negateA = negateA;
  }
  if (negateB) {
    odsState.getOrAddProperties<Properties>().negateB = negateB;
  }
  if (negateC) {
    odsState.getOrAddProperties<Properties>().negateC = negateC;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MFMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, uint32_t m, uint32_t n, uint32_t k, uint32_t blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t cbsz, uint32_t abid, ::mlir::amdgpu::MFMAPermB blgp, /*optional*/bool reducePrecision, /*optional*/bool negateA, /*optional*/bool negateB, /*optional*/bool negateC) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().blocks = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), blocks);
  odsState.getOrAddProperties<Properties>().cbsz = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), cbsz);
  odsState.getOrAddProperties<Properties>().abid = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), abid);
  odsState.getOrAddProperties<Properties>().blgp = ::mlir::amdgpu::MFMAPermBAttr::get(odsBuilder.getContext(), blgp);
  if (reducePrecision) {
    odsState.getOrAddProperties<Properties>().reducePrecision = ((reducePrecision) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (negateA) {
    odsState.getOrAddProperties<Properties>().negateA = ((negateA) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (negateB) {
    odsState.getOrAddProperties<Properties>().negateB = ((negateB) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (negateC) {
    odsState.getOrAddProperties<Properties>().negateC = ((negateC) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(destD);
}

void MFMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t m, uint32_t n, uint32_t k, uint32_t blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t cbsz, uint32_t abid, ::mlir::amdgpu::MFMAPermB blgp, /*optional*/bool reducePrecision, /*optional*/bool negateA, /*optional*/bool negateB, /*optional*/bool negateC) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().blocks = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), blocks);
  odsState.getOrAddProperties<Properties>().cbsz = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), cbsz);
  odsState.getOrAddProperties<Properties>().abid = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), abid);
  odsState.getOrAddProperties<Properties>().blgp = ::mlir::amdgpu::MFMAPermBAttr::get(odsBuilder.getContext(), blgp);
  if (reducePrecision) {
    odsState.getOrAddProperties<Properties>().reducePrecision = ((reducePrecision) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (negateA) {
    odsState.getOrAddProperties<Properties>().negateA = ((negateA) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (negateB) {
    odsState.getOrAddProperties<Properties>().negateB = ((negateB) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (negateC) {
    odsState.getOrAddProperties<Properties>().negateC = ((negateC) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MFMAOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MFMAOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.cbsz)
    properties.cbsz = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0);
  if (!properties.abid)
    properties.abid = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0);
  if (!properties.blgp)
    properties.blgp = ::mlir::amdgpu::MFMAPermBAttr::get(odsBuilder.getContext(), ::mlir::amdgpu::MFMAPermB::none);
}

::mlir::LogicalResult MFMAOp::verifyInvariantsImpl() {
  auto tblgen_abid = getProperties().abid; (void)tblgen_abid;
  auto tblgen_blgp = getProperties().blgp; (void)tblgen_blgp;
  auto tblgen_blocks = getProperties().blocks; (void)tblgen_blocks;
  if (!tblgen_blocks) return emitOpError("requires attribute 'blocks'");
  auto tblgen_cbsz = getProperties().cbsz; (void)tblgen_cbsz;
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");
  auto tblgen_negateA = getProperties().negateA; (void)tblgen_negateA;
  auto tblgen_negateB = getProperties().negateB; (void)tblgen_negateB;
  auto tblgen_negateC = getProperties().negateC; (void)tblgen_negateC;
  auto tblgen_reducePrecision = getProperties().reducePrecision; (void)tblgen_reducePrecision;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_k, "k")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_blocks, "blocks")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_cbsz, "cbsz")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_abid, "abid")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU2(*this, tblgen_blgp, "blgp")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_reducePrecision, "reducePrecision")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_negateA, "negateA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_negateB, "negateB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_negateC, "negateC")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that all of {destC, destD} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MFMAOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MFMAOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceAOperands(sourceARawOperands);  ::llvm::SMLoc sourceAOperandsLoc;
  (void)sourceAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand sourceBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceBOperands(sourceBRawOperands);  ::llvm::SMLoc sourceBOperandsLoc;
  (void)sourceBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destCOperands(destCRawOperands);  ::llvm::SMLoc destCOperandsLoc;
  (void)destCOperandsLoc;
  ::mlir::amdgpu::MFMAPermBAttr blgpAttr;
  ::mlir::Type sourceARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceATypes(sourceARawTypes);
  ::mlir::Type sourceBRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceBTypes(sourceBRawTypes);
  ::mlir::Type destCRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destCTypes(destCRawTypes);

  sourceAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseStar())
    return ::mlir::failure();

  sourceBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parsePlus())
    return ::mlir::failure();

  destCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(destCRawOperands[0]))
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
  if (parser.parseKeyword("blgp"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(blgpAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (blgpAttr) result.getOrAddProperties<MFMAOp::Properties>().blgp = blgpAttr;
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceARawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceBRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destCRawTypes[0] = type;
  }
  result.addTypes(destCTypes[0]);
  if (parser.resolveOperands(sourceAOperands, sourceATypes, sourceAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sourceBOperands, sourceBTypes, sourceBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destCOperands, destCTypes, destCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MFMAOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSourceA();
  _odsPrinter << ' ' << "*";
  _odsPrinter << ' ';
  _odsPrinter << getSourceB();
  _odsPrinter << ' ' << "+";
  _odsPrinter << ' ';
  _odsPrinter << getDestC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("blgp");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getCbszAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0)))
       elidedAttrs.push_back("cbsz");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAbidAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0)))
       elidedAttrs.push_back("abid");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBlgpAttr();
     if(attr && (attr == ::mlir::amdgpu::MFMAPermBAttr::get(odsBuilder.getContext(), ::mlir::amdgpu::MFMAPermB::none)))
       elidedAttrs.push_back("blgp");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReducePrecisionAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("reducePrecision");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNegateAAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("negateA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNegateBAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("negateB");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNegateCAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("negateC");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "blgp";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getBlgpAttr());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSourceA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getSourceB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getDestC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MFMAOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::MFMAOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::PackedStochRoundFp8Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackedStochRoundFp8OpGenericAdaptorBase::PackedStochRoundFp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.packed_stoch_round_fp8", odsAttrs.getContext());
}

PackedStochRoundFp8OpGenericAdaptorBase::PackedStochRoundFp8OpGenericAdaptorBase(PackedStochRoundFp8Op op) : PackedStochRoundFp8OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PackedStochRoundFp8OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr PackedStochRoundFp8OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr PackedStochRoundFp8OpGenericAdaptorBase::getStoreIndexAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().storeIndex);
  return attr;
}

uint32_t PackedStochRoundFp8OpGenericAdaptorBase::getStoreIndex() {
  auto attr = getStoreIndexAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
PackedStochRoundFp8OpAdaptor::PackedStochRoundFp8OpAdaptor(PackedStochRoundFp8Op op) : PackedStochRoundFp8OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PackedStochRoundFp8OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_storeIndex = getProperties().storeIndex; (void)tblgen_storeIndex;
  if (!tblgen_storeIndex) return emitError(loc, "'amdgpu.packed_stoch_round_fp8' op ""requires attribute 'storeIndex'");

  if (tblgen_storeIndex && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_storeIndex))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_storeIndex).getType().isSignlessInteger(32)))) && ((!::llvm::cast<::mlir::IntegerAttr>(tblgen_storeIndex).getValue().isNegative())) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_storeIndex).getInt() <= 3))))
    return emitError(loc, "'amdgpu.packed_stoch_round_fp8' op ""attribute 'storeIndex' failed to satisfy constraint: 32-bit signless integer attribute whose value is non-negative whose maximum value is 3");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackedStochRoundFp8Op::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range PackedStochRoundFp8Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> PackedStochRoundFp8Op::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> PackedStochRoundFp8Op::getStochiasticParam() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> PackedStochRoundFp8Op::getExisting() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &PackedStochRoundFp8Op::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PackedStochRoundFp8Op::getStochiasticParamMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange PackedStochRoundFp8Op::getExistingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PackedStochRoundFp8Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackedStochRoundFp8Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> PackedStochRoundFp8Op::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PackedStochRoundFp8Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.storeIndex;
       auto attr = dict.get("storeIndex");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for storeIndex in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `storeIndex` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackedStochRoundFp8Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.storeIndex;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("storeIndex",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackedStochRoundFp8Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.storeIndex.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackedStochRoundFp8Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "storeIndex")
      return prop.storeIndex;
  return std::nullopt;
}

void PackedStochRoundFp8Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "storeIndex") {
       prop.storeIndex = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.storeIndex)>>(value);
       return;
    }
}

void PackedStochRoundFp8Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.storeIndex) attrs.append("storeIndex", prop.storeIndex);
}

::mlir::LogicalResult PackedStochRoundFp8Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getStoreIndexAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU0(attr, "storeIndex", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PackedStochRoundFp8Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.storeIndex)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackedStochRoundFp8Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.storeIndex);
}

::mlir::IntegerAttr PackedStochRoundFp8Op::getStoreIndexAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().storeIndex);
}

uint32_t PackedStochRoundFp8Op::getStoreIndex() {
  auto attr = getStoreIndexAttr();
  return attr.getValue().getZExtValue();
}

void PackedStochRoundFp8Op::setStoreIndexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getStoreIndexAttrName(), attr);
}

void PackedStochRoundFp8Op::setStoreIndex(uint32_t attrValue) {
  (*this)->setAttr(getStoreIndexAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void PackedStochRoundFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value stochiasticParam, ::mlir::IntegerAttr storeIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(source);
  odsState.addOperands(stochiasticParam);
  if (existing)
    odsState.addOperands(existing);
  odsState.getOrAddProperties<Properties>().storeIndex = storeIndex;
  odsState.addTypes(res);
}

void PackedStochRoundFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value stochiasticParam, ::mlir::IntegerAttr storeIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(source);
  odsState.addOperands(stochiasticParam);
  if (existing)
    odsState.addOperands(existing);
  odsState.getOrAddProperties<Properties>().storeIndex = storeIndex;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackedStochRoundFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value stochiasticParam, uint32_t storeIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(source);
  odsState.addOperands(stochiasticParam);
  if (existing)
    odsState.addOperands(existing);
  odsState.getOrAddProperties<Properties>().storeIndex = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), storeIndex);
  odsState.addTypes(res);
}

void PackedStochRoundFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value stochiasticParam, uint32_t storeIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(source);
  odsState.addOperands(stochiasticParam);
  if (existing)
    odsState.addOperands(existing);
  odsState.getOrAddProperties<Properties>().storeIndex = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), storeIndex);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackedStochRoundFp8Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PackedStochRoundFp8Op::verifyInvariantsImpl() {
  auto tblgen_storeIndex = getProperties().storeIndex; (void)tblgen_storeIndex;
  if (!tblgen_storeIndex) return emitOpError("requires attribute 'storeIndex'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU0(*this, tblgen_storeIndex, "storeIndex")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackedStochRoundFp8Op::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackedStochRoundFp8Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand stochiasticParamRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> stochiasticParamOperands(stochiasticParamRawOperands);  ::llvm::SMLoc stochiasticParamOperandsLoc;
  (void)stochiasticParamOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> existingOperands;
  ::llvm::SMLoc existingOperandsLoc;
  (void)existingOperandsLoc;
  ::mlir::IntegerAttr storeIndexAttr;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> existingTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parsePlus())
    return ::mlir::failure();

  stochiasticParamOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(stochiasticParamRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    existingOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      existingOperands.push_back(operand);
    }
  }
  if (!existingOperands.empty()) {
  } else {
  if (parser.parseKeyword("undef"))
    return ::mlir::failure();
  }
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(storeIndexAttr, parser.getBuilder().getIntegerType(32))) {
    return ::mlir::failure();
  }
  if (storeIndexAttr) result.getOrAddProperties<PackedStochRoundFp8Op::Properties>().storeIndex = storeIndexAttr;
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::FloatType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("into"))) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      existingTypes.push_back(optionalType);
    }
  }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(stochiasticParamOperands, odsBuildableType0, stochiasticParamOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(existingOperands, existingTypes, existingOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackedStochRoundFp8Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("storeIndex");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ' ' << "+";
  _odsPrinter << ' ';
  _odsPrinter << getStochiasticParam();
  _odsPrinter << ' ' << "into";
  if (getExisting()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getExisting())
      _odsPrinter << value;
  } else {
    _odsPrinter << ' ' << "undef";
  }
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getStoreIndexAttr());
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::FloatType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (getExisting()) {
    _odsPrinter << ' ' << "into";
    _odsPrinter << ' ';
    _odsPrinter << (getExisting() ? ::llvm::ArrayRef<::mlir::Type>(getExisting().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

void PackedStochRoundFp8Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::PackedStochRoundFp8Op)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::PackedTrunc2xFp8Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackedTrunc2xFp8OpGenericAdaptorBase::PackedTrunc2xFp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.packed_trunc_2xfp8", odsAttrs.getContext());
}

PackedTrunc2xFp8OpGenericAdaptorBase::PackedTrunc2xFp8OpGenericAdaptorBase(PackedTrunc2xFp8Op op) : PackedTrunc2xFp8OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PackedTrunc2xFp8OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr PackedTrunc2xFp8OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr PackedTrunc2xFp8OpGenericAdaptorBase::getWordIndexAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().wordIndex);
  return attr;
}

uint32_t PackedTrunc2xFp8OpGenericAdaptorBase::getWordIndex() {
  auto attr = getWordIndexAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
PackedTrunc2xFp8OpAdaptor::PackedTrunc2xFp8OpAdaptor(PackedTrunc2xFp8Op op) : PackedTrunc2xFp8OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PackedTrunc2xFp8OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_wordIndex = getProperties().wordIndex; (void)tblgen_wordIndex;
  if (!tblgen_wordIndex) return emitError(loc, "'amdgpu.packed_trunc_2xfp8' op ""requires attribute 'wordIndex'");

  if (tblgen_wordIndex && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_wordIndex))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_wordIndex).getType().isSignlessInteger(32)))) && ((!::llvm::cast<::mlir::IntegerAttr>(tblgen_wordIndex).getValue().isNegative())) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_wordIndex).getInt() <= 1))))
    return emitError(loc, "'amdgpu.packed_trunc_2xfp8' op ""attribute 'wordIndex' failed to satisfy constraint: 32-bit signless integer attribute whose value is non-negative whose maximum value is 1");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackedTrunc2xFp8Op::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range PackedTrunc2xFp8Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> PackedTrunc2xFp8Op::getSourceA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::FloatType> PackedTrunc2xFp8Op::getSourceB() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::FloatType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::VectorType> PackedTrunc2xFp8Op::getExisting() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &PackedTrunc2xFp8Op::getSourceAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange PackedTrunc2xFp8Op::getSourceBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange PackedTrunc2xFp8Op::getExistingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> PackedTrunc2xFp8Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackedTrunc2xFp8Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> PackedTrunc2xFp8Op::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PackedTrunc2xFp8Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.wordIndex;
       auto attr = dict.get("wordIndex");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for wordIndex in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `wordIndex` in property conversion: " << attr;
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

::mlir::Attribute PackedTrunc2xFp8Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.wordIndex;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("wordIndex",
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

llvm::hash_code PackedTrunc2xFp8Op::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.wordIndex.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> PackedTrunc2xFp8Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "wordIndex")
      return prop.wordIndex;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void PackedTrunc2xFp8Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "wordIndex") {
       prop.wordIndex = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.wordIndex)>>(value);
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

void PackedTrunc2xFp8Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.wordIndex) attrs.append("wordIndex", prop.wordIndex);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult PackedTrunc2xFp8Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getWordIndexAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU4(attr, "wordIndex", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PackedTrunc2xFp8Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

  if (::mlir::failed(reader.readAttribute(prop.wordIndex)))
    return ::mlir::failure();

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

void PackedTrunc2xFp8Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}
  writer.writeAttribute(prop.wordIndex);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::IntegerAttr PackedTrunc2xFp8Op::getWordIndexAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().wordIndex);
}

uint32_t PackedTrunc2xFp8Op::getWordIndex() {
  auto attr = getWordIndexAttr();
  return attr.getValue().getZExtValue();
}

void PackedTrunc2xFp8Op::setWordIndexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getWordIndexAttrName(), attr);
}

void PackedTrunc2xFp8Op::setWordIndex(uint32_t attrValue) {
  (*this)->setAttr(getWordIndexAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void PackedTrunc2xFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, ::mlir::IntegerAttr wordIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(sourceA);
  if (sourceB)
    odsState.addOperands(sourceB);
  if (existing)
    odsState.addOperands(existing);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (sourceB ? 1 : 0), (existing ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().wordIndex = wordIndex;
  odsState.addTypes(res);
}

void PackedTrunc2xFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, ::mlir::IntegerAttr wordIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(sourceA);
  if (sourceB)
    odsState.addOperands(sourceB);
  if (existing)
    odsState.addOperands(existing);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (sourceB ? 1 : 0), (existing ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().wordIndex = wordIndex;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackedTrunc2xFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, uint32_t wordIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(sourceA);
  if (sourceB)
    odsState.addOperands(sourceB);
  if (existing)
    odsState.addOperands(existing);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (sourceB ? 1 : 0), (existing ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().wordIndex = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), wordIndex);
  odsState.addTypes(res);
}

void PackedTrunc2xFp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, uint32_t wordIndex, /*optional*/::mlir::Value existing) {
  odsState.addOperands(sourceA);
  if (sourceB)
    odsState.addOperands(sourceB);
  if (existing)
    odsState.addOperands(existing);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (sourceB ? 1 : 0), (existing ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().wordIndex = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), wordIndex);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackedTrunc2xFp8Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PackedTrunc2xFp8Op::verifyInvariantsImpl() {
  auto tblgen_wordIndex = getProperties().wordIndex; (void)tblgen_wordIndex;
  if (!tblgen_wordIndex) return emitOpError("requires attribute 'wordIndex'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU4(*this, tblgen_wordIndex, "wordIndex")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackedTrunc2xFp8Op::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackedTrunc2xFp8Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceAOperands(sourceARawOperands);  ::llvm::SMLoc sourceAOperandsLoc;
  (void)sourceAOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sourceBOperands;
  ::llvm::SMLoc sourceBOperandsLoc;
  (void)sourceBOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> existingOperands;
  ::llvm::SMLoc existingOperandsLoc;
  (void)existingOperandsLoc;
  ::mlir::IntegerAttr wordIndexAttr;
  ::mlir::Type sourceARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceATypes(sourceARawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> existingTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  sourceAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  {
    sourceBOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sourceBOperands.push_back(operand);
    }
  }
  if (!sourceBOperands.empty()) {
  } else {
  if (parser.parseKeyword("undef"))
    return ::mlir::failure();
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    existingOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      existingOperands.push_back(operand);
    }
  }
  if (!existingOperands.empty()) {
  } else {
  if (parser.parseKeyword("undef"))
    return ::mlir::failure();
  }
  if (parser.parseLSquare())
    return ::mlir::failure();
  if (parser.parseKeyword("word"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(wordIndexAttr, parser.getBuilder().getIntegerType(32))) {
    return ::mlir::failure();
  }
  if (wordIndexAttr) result.getOrAddProperties<PackedTrunc2xFp8Op::Properties>().wordIndex = wordIndexAttr;
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::FloatType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceARawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("into"))) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      existingTypes.push_back(optionalType);
    }
  }
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(sourceBOperands.size()), static_cast<int32_t>(existingOperands.size())}), result.getOrAddProperties<PackedTrunc2xFp8Op::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getF32Type();
  result.addTypes(resTypes);
  if (parser.resolveOperands(sourceAOperands, sourceATypes, sourceAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sourceBOperands, odsBuildableType0, sourceBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(existingOperands, existingTypes, existingOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackedTrunc2xFp8Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("wordIndex");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSourceA();
  _odsPrinter << ",";
  if (getSourceB()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getSourceB())
      _odsPrinter << value;
  } else {
    _odsPrinter << ' ' << "undef";
  }
  _odsPrinter << ' ' << "into";
  if (getExisting()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getExisting())
      _odsPrinter << value;
  } else {
    _odsPrinter << ' ' << "undef";
  }
  _odsPrinter << "[";
  _odsPrinter << "word";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getWordIndexAttr());
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSourceA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::FloatType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (getExisting()) {
    _odsPrinter << ' ' << "into";
    _odsPrinter << ' ';
    _odsPrinter << (getExisting() ? ::llvm::ArrayRef<::mlir::Type>(getExisting().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

void PackedTrunc2xFp8Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::PackedTrunc2xFp8Op)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicCmpswapOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicCmpswapOpGenericAdaptorBase::RawBufferAtomicCmpswapOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_atomic_cmpswap", odsAttrs.getContext());
}

RawBufferAtomicCmpswapOpGenericAdaptorBase::RawBufferAtomicCmpswapOpGenericAdaptorBase(RawBufferAtomicCmpswapOp op) : RawBufferAtomicCmpswapOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicCmpswapOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferAtomicCmpswapOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferAtomicCmpswapOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferAtomicCmpswapOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicCmpswapOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferAtomicCmpswapOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferAtomicCmpswapOpAdaptor::RawBufferAtomicCmpswapOpAdaptor(RawBufferAtomicCmpswapOp op) : RawBufferAtomicCmpswapOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicCmpswapOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_cmpswap' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_cmpswap' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicCmpswapOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferAtomicCmpswapOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicCmpswapOp::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferAtomicCmpswapOp::getCmp() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferAtomicCmpswapOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(2).begin());
}

::mlir::Operation::operand_range RawBufferAtomicCmpswapOp::getIndices() {
  return getODSOperands(3);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicCmpswapOp::getSgprOffset() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferAtomicCmpswapOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpswapOp::getCmpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpswapOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferAtomicCmpswapOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferAtomicCmpswapOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferAtomicCmpswapOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicCmpswapOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicCmpswapOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RawBufferAtomicCmpswapOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferAtomicCmpswapOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferAtomicCmpswapOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferAtomicCmpswapOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferAtomicCmpswapOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferAtomicCmpswapOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferAtomicCmpswapOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicCmpswapOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferAtomicCmpswapOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferAtomicCmpswapOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferAtomicCmpswapOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicCmpswapOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferAtomicCmpswapOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferAtomicCmpswapOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferAtomicCmpswapOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferAtomicCmpswapOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferAtomicCmpswapOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferAtomicCmpswapOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferAtomicCmpswapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  odsState.addTypes(value);
}

void RawBufferAtomicCmpswapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicCmpswapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  odsState.addTypes(value);
}

void RawBufferAtomicCmpswapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicCmpswapOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicCmpswapOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferAtomicCmpswapOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, cmp, value} have same type");
  if (!(((getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(2).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(2).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))))))
    return emitOpError("failed to verify that all of {value, memref} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicCmpswapOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferAtomicCmpswapOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand cmpRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> cmpOperands(cmpRawOperands);  ::llvm::SMLoc cmpOperandsLoc;
  (void)cmpOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  cmpOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(cmpRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferAtomicCmpswapOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(valueTypes);
  if (parser.resolveOperands(srcOperands, valueTypes[0], srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(cmpOperands, valueTypes[0], cmpOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferAtomicCmpswapOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCmp();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndices().getTypes();
}

void RawBufferAtomicCmpswapOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicCmpswapOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicFaddOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicFaddOpGenericAdaptorBase::RawBufferAtomicFaddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_atomic_fadd", odsAttrs.getContext());
}

RawBufferAtomicFaddOpGenericAdaptorBase::RawBufferAtomicFaddOpGenericAdaptorBase(RawBufferAtomicFaddOp op) : RawBufferAtomicFaddOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicFaddOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferAtomicFaddOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferAtomicFaddOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferAtomicFaddOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicFaddOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferAtomicFaddOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferAtomicFaddOpAdaptor::RawBufferAtomicFaddOpAdaptor(RawBufferAtomicFaddOp op) : RawBufferAtomicFaddOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicFaddOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_fadd' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_fadd' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicFaddOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferAtomicFaddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> RawBufferAtomicFaddOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferAtomicFaddOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range RawBufferAtomicFaddOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicFaddOp::getSgprOffset() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferAtomicFaddOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFaddOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferAtomicFaddOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferAtomicFaddOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferAtomicFaddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicFaddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawBufferAtomicFaddOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferAtomicFaddOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferAtomicFaddOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferAtomicFaddOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferAtomicFaddOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferAtomicFaddOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferAtomicFaddOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicFaddOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferAtomicFaddOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferAtomicFaddOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferAtomicFaddOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicFaddOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferAtomicFaddOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferAtomicFaddOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferAtomicFaddOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferAtomicFaddOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferAtomicFaddOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferAtomicFaddOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferAtomicFaddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicFaddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFaddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicFaddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFaddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFaddOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferAtomicFaddOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {value, memref} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicFaddOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferAtomicFaddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::FloatType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferAtomicFaddOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferAtomicFaddOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::FloatType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndices().getTypes();
}

void RawBufferAtomicFaddOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicFaddOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicFmaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicFmaxOpGenericAdaptorBase::RawBufferAtomicFmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_atomic_fmax", odsAttrs.getContext());
}

RawBufferAtomicFmaxOpGenericAdaptorBase::RawBufferAtomicFmaxOpGenericAdaptorBase(RawBufferAtomicFmaxOp op) : RawBufferAtomicFmaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicFmaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferAtomicFmaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferAtomicFmaxOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferAtomicFmaxOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicFmaxOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferAtomicFmaxOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferAtomicFmaxOpAdaptor::RawBufferAtomicFmaxOpAdaptor(RawBufferAtomicFmaxOp op) : RawBufferAtomicFmaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicFmaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_fmax' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_fmax' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicFmaxOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferAtomicFmaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicFmaxOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferAtomicFmaxOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range RawBufferAtomicFmaxOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicFmaxOp::getSgprOffset() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferAtomicFmaxOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFmaxOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferAtomicFmaxOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferAtomicFmaxOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferAtomicFmaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicFmaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawBufferAtomicFmaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferAtomicFmaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferAtomicFmaxOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferAtomicFmaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferAtomicFmaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferAtomicFmaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferAtomicFmaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicFmaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferAtomicFmaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferAtomicFmaxOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferAtomicFmaxOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicFmaxOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferAtomicFmaxOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferAtomicFmaxOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferAtomicFmaxOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferAtomicFmaxOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferAtomicFmaxOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferAtomicFmaxOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferAtomicFmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicFmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicFmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFmaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFmaxOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferAtomicFmaxOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {value, memref} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicFmaxOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferAtomicFmaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferAtomicFmaxOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferAtomicFmaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndices().getTypes();
}

void RawBufferAtomicFmaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicFmaxOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicSmaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicSmaxOpGenericAdaptorBase::RawBufferAtomicSmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_atomic_smax", odsAttrs.getContext());
}

RawBufferAtomicSmaxOpGenericAdaptorBase::RawBufferAtomicSmaxOpGenericAdaptorBase(RawBufferAtomicSmaxOp op) : RawBufferAtomicSmaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicSmaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferAtomicSmaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferAtomicSmaxOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferAtomicSmaxOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicSmaxOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferAtomicSmaxOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferAtomicSmaxOpAdaptor::RawBufferAtomicSmaxOpAdaptor(RawBufferAtomicSmaxOp op) : RawBufferAtomicSmaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicSmaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_smax' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_smax' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicSmaxOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferAtomicSmaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicSmaxOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferAtomicSmaxOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range RawBufferAtomicSmaxOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicSmaxOp::getSgprOffset() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferAtomicSmaxOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicSmaxOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferAtomicSmaxOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferAtomicSmaxOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferAtomicSmaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicSmaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawBufferAtomicSmaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferAtomicSmaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferAtomicSmaxOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferAtomicSmaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferAtomicSmaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferAtomicSmaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferAtomicSmaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicSmaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferAtomicSmaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferAtomicSmaxOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferAtomicSmaxOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicSmaxOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferAtomicSmaxOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferAtomicSmaxOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferAtomicSmaxOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferAtomicSmaxOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferAtomicSmaxOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferAtomicSmaxOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferAtomicSmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicSmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicSmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicSmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicSmaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicSmaxOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferAtomicSmaxOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicSmaxOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferAtomicSmaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferAtomicSmaxOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferAtomicSmaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndices().getTypes();
}

void RawBufferAtomicSmaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicSmaxOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicUminOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicUminOpGenericAdaptorBase::RawBufferAtomicUminOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_atomic_umin", odsAttrs.getContext());
}

RawBufferAtomicUminOpGenericAdaptorBase::RawBufferAtomicUminOpGenericAdaptorBase(RawBufferAtomicUminOp op) : RawBufferAtomicUminOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicUminOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferAtomicUminOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferAtomicUminOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferAtomicUminOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicUminOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferAtomicUminOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferAtomicUminOpAdaptor::RawBufferAtomicUminOpAdaptor(RawBufferAtomicUminOp op) : RawBufferAtomicUminOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicUminOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_umin' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_atomic_umin' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicUminOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferAtomicUminOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicUminOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferAtomicUminOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range RawBufferAtomicUminOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicUminOp::getSgprOffset() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferAtomicUminOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicUminOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferAtomicUminOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferAtomicUminOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferAtomicUminOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicUminOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawBufferAtomicUminOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferAtomicUminOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferAtomicUminOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferAtomicUminOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferAtomicUminOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferAtomicUminOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferAtomicUminOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicUminOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferAtomicUminOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferAtomicUminOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferAtomicUminOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferAtomicUminOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferAtomicUminOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferAtomicUminOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferAtomicUminOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferAtomicUminOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferAtomicUminOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferAtomicUminOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferAtomicUminOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicUminOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicUminOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferAtomicUminOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicUminOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicUminOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferAtomicUminOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicUminOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferAtomicUminOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferAtomicUminOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferAtomicUminOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndices().getTypes();
}

void RawBufferAtomicUminOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicUminOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferLoadOpGenericAdaptorBase::RawBufferLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_load", odsAttrs.getContext());
}

RawBufferLoadOpGenericAdaptorBase::RawBufferLoadOpGenericAdaptorBase(RawBufferLoadOp op) : RawBufferLoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferLoadOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferLoadOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferLoadOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferLoadOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferLoadOpAdaptor::RawBufferLoadOpAdaptor(RawBufferLoadOp op) : RawBufferLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferLoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_load' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_load' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferLoadOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferLoadOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range RawBufferLoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferLoadOp::getSgprOffset() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferLoadOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferLoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferLoadOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferLoadOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RawBufferLoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferLoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferLoadOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferLoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferLoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferLoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferLoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferLoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferLoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferLoadOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferLoadOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferLoadOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferLoadOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferLoadOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferLoadOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferLoadOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferLoadOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferLoadOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  odsState.addTypes(value);
}

void RawBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  odsState.addTypes(value);
}

void RawBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferLoadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferLoadOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))))))
    return emitOpError("failed to verify that all of {value, memref} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferLoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferLoadOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(valueTypes);
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (!getIndices().empty()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << getIndices().getTypes();
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawBufferLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferLoadOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferStoreOpGenericAdaptorBase::RawBufferStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.raw_buffer_store", odsAttrs.getContext());
}

RawBufferStoreOpGenericAdaptorBase::RawBufferStoreOpGenericAdaptorBase(RawBufferStoreOp op) : RawBufferStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr RawBufferStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr RawBufferStoreOpGenericAdaptorBase::getBoundsCheckAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
  return attr;
}

bool RawBufferStoreOpGenericAdaptorBase::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferStoreOpGenericAdaptorBase::getIndexOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
  return attr;
}

::std::optional<uint32_t> RawBufferStoreOpGenericAdaptorBase::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
RawBufferStoreOpAdaptor::RawBufferStoreOpAdaptor(RawBufferStoreOp op) : RawBufferStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferStoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (tblgen_boundsCheck && !((::llvm::isa<::mlir::BoolAttr>(tblgen_boundsCheck))))
    return emitError(loc, "'amdgpu.raw_buffer_store' op ""attribute 'boundsCheck' failed to satisfy constraint: bool attribute");

  if (tblgen_indexOffset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_indexOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_indexOffset).getType().isSignlessInteger(32)))))
    return emitError(loc, "'amdgpu.raw_buffer_store' op ""attribute 'indexOffset' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferStoreOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range RawBufferStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferStoreOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> RawBufferStoreOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range RawBufferStoreOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferStoreOp::getSgprOffset() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &RawBufferStoreOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferStoreOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RawBufferStoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange RawBufferStoreOp::getSgprOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> RawBufferStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawBufferStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.boundsCheck;
       auto attr = dict.get("boundsCheck");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for boundsCheck in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `boundsCheck` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.indexOffset;
       auto attr = dict.get("indexOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for indexOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexOffset` in property conversion: " << attr;
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

::mlir::Attribute RawBufferStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.boundsCheck;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("boundsCheck",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.indexOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexOffset",
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

llvm::hash_code RawBufferStoreOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.boundsCheck.getAsOpaquePointer()), 
    llvm::hash_value(prop.indexOffset.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> RawBufferStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "boundsCheck")
      return prop.boundsCheck;

    if (name == "indexOffset")
      return prop.indexOffset;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void RawBufferStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "boundsCheck") {
       prop.boundsCheck = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.boundsCheck)>>(value);
       return;
    }

    if (name == "indexOffset") {
       prop.indexOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexOffset)>>(value);
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

void RawBufferStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.boundsCheck) attrs.append("boundsCheck", prop.boundsCheck);

    if (prop.indexOffset) attrs.append("indexOffset", prop.indexOffset);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult RawBufferStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBoundsCheckAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(attr, "boundsCheck", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(attr, "indexOffset", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawBufferStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.boundsCheck)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.indexOffset)))
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

void RawBufferStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.boundsCheck);

  writer.writeOptionalAttribute(prop.indexOffset);

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

::mlir::BoolAttr RawBufferStoreOp::getBoundsCheckAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().boundsCheck);
}

bool RawBufferStoreOp::getBoundsCheck() {
  auto attr = getBoundsCheckAttr();
  return attr.getValue();
}

::mlir::IntegerAttr RawBufferStoreOp::getIndexOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().indexOffset);
}

::std::optional<uint32_t> RawBufferStoreOp::getIndexOffset() {
  auto attr = getIndexOffsetAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void RawBufferStoreOp::setBoundsCheckAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBoundsCheckAttrName(), attr);
}

void RawBufferStoreOp::setBoundsCheck(bool attrValue) {
  (*this)->setAttr(getBoundsCheckAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void RawBufferStoreOp::setIndexOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIndexOffsetAttrName(), attr);
}

void RawBufferStoreOp::setIndexOffset(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIndexOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getIndexOffsetAttrName());
}

::mlir::Attribute RawBufferStoreOp::removeIndexOffsetAttr() {
    auto &attr = getProperties().indexOffset;
    attr = {};
    return attr;
}

void RawBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (boundsCheck) {
    odsState.getOrAddProperties<Properties>().boundsCheck = boundsCheck;
  }
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
}

void RawBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  if (sgprOffset)
    odsState.addOperands(sgprOffset);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (sgprOffset ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().boundsCheck = odsBuilder.getBoolAttr(boundsCheck);
  if (indexOffset) {
    odsState.getOrAddProperties<Properties>().indexOffset = indexOffset;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RawBufferStoreOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.boundsCheck)
    properties.boundsCheck = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult RawBufferStoreOp::verifyInvariantsImpl() {
  auto tblgen_boundsCheck = getProperties().boundsCheck; (void)tblgen_boundsCheck;
  auto tblgen_indexOffset = getProperties().indexOffset; (void)tblgen_indexOffset;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU5(*this, tblgen_boundsCheck, "boundsCheck")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU1(*this, tblgen_indexOffset, "indexOffset")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {value, memref} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult RawBufferStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sgprOffsetOperands;
  ::llvm::SMLoc sgprOffsetOperandsLoc;
  (void)sgprOffsetOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> indicesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("sgprOffset"))) {

  {
    sgprOffsetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sgprOffsetOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseTypeList(indicesTypes))
    return ::mlir::failure();
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(sgprOffsetOperands.size())}), result.getOrAddProperties<RawBufferStoreOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, indicesTypes, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sgprOffsetOperands, odsBuildableType0, sgprOffsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBoundsCheckAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("boundsCheck");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  if (getSgprOffset()) {
    _odsPrinter << ' ' << "sgprOffset";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSgprOffset())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (!getIndices().empty()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << getIndices().getTypes();
  }
}

void RawBufferStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferStoreOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::WMMAOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WMMAOpGenericAdaptorBase::WMMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amdgpu.wmma", odsAttrs.getContext());
}

WMMAOpGenericAdaptorBase::WMMAOpGenericAdaptorBase(WMMAOp op) : WMMAOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WMMAOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WMMAOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WMMAOpGenericAdaptorBase::getSubwordOffsetAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().subwordOffset);
  return attr;
}

uint32_t WMMAOpGenericAdaptorBase::getSubwordOffset() {
  auto attr = getSubwordOffsetAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr WMMAOpGenericAdaptorBase::getUnsignedAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().unsignedA);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool WMMAOpGenericAdaptorBase::getUnsignedA() {
  auto attr = getUnsignedAAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr WMMAOpGenericAdaptorBase::getUnsignedBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().unsignedB);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool WMMAOpGenericAdaptorBase::getUnsignedB() {
  auto attr = getUnsignedBAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr WMMAOpGenericAdaptorBase::getClampAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().clamp);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool WMMAOpGenericAdaptorBase::getClamp() {
  auto attr = getClampAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
WMMAOpAdaptor::WMMAOpAdaptor(WMMAOp op) : WMMAOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WMMAOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_clamp = getProperties().clamp; (void)tblgen_clamp;
  auto tblgen_subwordOffset = getProperties().subwordOffset; (void)tblgen_subwordOffset;
  auto tblgen_unsignedA = getProperties().unsignedA; (void)tblgen_unsignedA;
  auto tblgen_unsignedB = getProperties().unsignedB; (void)tblgen_unsignedB;

  if (tblgen_subwordOffset && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_subwordOffset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_subwordOffset).getType().isSignlessInteger(32)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_subwordOffset).getInt() >= 0)) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_subwordOffset).getInt() <= 1))))
    return emitError(loc, "'amdgpu.wmma' op ""attribute 'subwordOffset' failed to satisfy constraint: 32-bit signless integer attribute whose minimum value is 0 whose maximum value is 1");

  if (tblgen_unsignedA && !((::llvm::isa<::mlir::UnitAttr>(tblgen_unsignedA))))
    return emitError(loc, "'amdgpu.wmma' op ""attribute 'unsignedA' failed to satisfy constraint: unit attribute");

  if (tblgen_unsignedB && !((::llvm::isa<::mlir::UnitAttr>(tblgen_unsignedB))))
    return emitError(loc, "'amdgpu.wmma' op ""attribute 'unsignedB' failed to satisfy constraint: unit attribute");

  if (tblgen_clamp && !((::llvm::isa<::mlir::UnitAttr>(tblgen_clamp))))
    return emitError(loc, "'amdgpu.wmma' op ""attribute 'clamp' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WMMAOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WMMAOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WMMAOp::getSourceA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value WMMAOp::getSourceB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value WMMAOp::getDestC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &WMMAOp::getSourceAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WMMAOp::getSourceBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WMMAOp::getDestCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WMMAOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WMMAOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WMMAOp::getDestD() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult WMMAOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.clamp;
       auto attr = dict.get("clamp");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for clamp in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `clamp` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.subwordOffset;
       auto attr = dict.get("subwordOffset");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for subwordOffset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `subwordOffset` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.unsignedA;
       auto attr = dict.get("unsignedA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for unsignedA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `unsignedA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.unsignedB;
       auto attr = dict.get("unsignedB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for unsignedB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `unsignedB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WMMAOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.clamp;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("clamp",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.subwordOffset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("subwordOffset",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.unsignedA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("unsignedA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.unsignedB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("unsignedB",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WMMAOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.clamp.getAsOpaquePointer()), 
    llvm::hash_value(prop.subwordOffset.getAsOpaquePointer()), 
    llvm::hash_value(prop.unsignedA.getAsOpaquePointer()), 
    llvm::hash_value(prop.unsignedB.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WMMAOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "clamp")
      return prop.clamp;

    if (name == "subwordOffset")
      return prop.subwordOffset;

    if (name == "unsignedA")
      return prop.unsignedA;

    if (name == "unsignedB")
      return prop.unsignedB;
  return std::nullopt;
}

void WMMAOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "clamp") {
       prop.clamp = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.clamp)>>(value);
       return;
    }

    if (name == "subwordOffset") {
       prop.subwordOffset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.subwordOffset)>>(value);
       return;
    }

    if (name == "unsignedA") {
       prop.unsignedA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.unsignedA)>>(value);
       return;
    }

    if (name == "unsignedB") {
       prop.unsignedB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.unsignedB)>>(value);
       return;
    }
}

void WMMAOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.clamp) attrs.append("clamp", prop.clamp);

    if (prop.subwordOffset) attrs.append("subwordOffset", prop.subwordOffset);

    if (prop.unsignedA) attrs.append("unsignedA", prop.unsignedA);

    if (prop.unsignedB) attrs.append("unsignedB", prop.unsignedB);
}

::mlir::LogicalResult WMMAOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getClampAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "clamp", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSubwordOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU6(attr, "subwordOffset", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUnsignedAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "unsignedA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUnsignedBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(attr, "unsignedB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WMMAOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.clamp)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.subwordOffset)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.unsignedA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.unsignedB)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMAOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.clamp);

  writer.writeOptionalAttribute(prop.subwordOffset);

  writer.writeOptionalAttribute(prop.unsignedA);

  writer.writeOptionalAttribute(prop.unsignedB);
}

::mlir::IntegerAttr WMMAOp::getSubwordOffsetAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().subwordOffset);
}

uint32_t WMMAOp::getSubwordOffset() {
  auto attr = getSubwordOffsetAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr WMMAOp::getUnsignedAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().unsignedA);
}

bool WMMAOp::getUnsignedA() {
  auto attr = getUnsignedAAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr WMMAOp::getUnsignedBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().unsignedB);
}

bool WMMAOp::getUnsignedB() {
  auto attr = getUnsignedBAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr WMMAOp::getClampAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().clamp);
}

bool WMMAOp::getClamp() {
  auto attr = getClampAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void WMMAOp::setSubwordOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSubwordOffsetAttrName(), attr);
}

void WMMAOp::setSubwordOffset(uint32_t attrValue) {
  (*this)->setAttr(getSubwordOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void WMMAOp::setUnsignedAAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUnsignedAAttrName(), attr);
}

void WMMAOp::setUnsignedA(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUnsignedAAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUnsignedAAttrName());
}

void WMMAOp::setUnsignedBAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUnsignedBAttrName(), attr);
}

void WMMAOp::setUnsignedB(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUnsignedBAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUnsignedBAttrName());
}

void WMMAOp::setClampAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getClampAttrName(), attr);
}

void WMMAOp::setClamp(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getClampAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getClampAttrName());
}

::mlir::Attribute WMMAOp::removeUnsignedAAttr() {
    auto &attr = getProperties().unsignedA;
    attr = {};
    return attr;
}

::mlir::Attribute WMMAOp::removeUnsignedBAttr() {
    auto &attr = getProperties().unsignedB;
    attr = {};
    return attr;
}

::mlir::Attribute WMMAOp::removeClampAttr() {
    auto &attr = getProperties().clamp;
    attr = {};
    return attr;
}

void WMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr subwordOffset, /*optional*/::mlir::UnitAttr unsignedA, /*optional*/::mlir::UnitAttr unsignedB, /*optional*/::mlir::UnitAttr clamp) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  if (subwordOffset) {
    odsState.getOrAddProperties<Properties>().subwordOffset = subwordOffset;
  }
  if (unsignedA) {
    odsState.getOrAddProperties<Properties>().unsignedA = unsignedA;
  }
  if (unsignedB) {
    odsState.getOrAddProperties<Properties>().unsignedB = unsignedB;
  }
  if (clamp) {
    odsState.getOrAddProperties<Properties>().clamp = clamp;
  }
  odsState.addTypes(destD);
}

void WMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr subwordOffset, /*optional*/::mlir::UnitAttr unsignedA, /*optional*/::mlir::UnitAttr unsignedB, /*optional*/::mlir::UnitAttr clamp) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  if (subwordOffset) {
    odsState.getOrAddProperties<Properties>().subwordOffset = subwordOffset;
  }
  if (unsignedA) {
    odsState.getOrAddProperties<Properties>().unsignedA = unsignedA;
  }
  if (unsignedB) {
    odsState.getOrAddProperties<Properties>().unsignedB = unsignedB;
  }
  if (clamp) {
    odsState.getOrAddProperties<Properties>().clamp = clamp;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t subwordOffset, /*optional*/bool unsignedA, /*optional*/bool unsignedB, /*optional*/bool clamp) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  odsState.getOrAddProperties<Properties>().subwordOffset = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), subwordOffset);
  if (unsignedA) {
    odsState.getOrAddProperties<Properties>().unsignedA = ((unsignedA) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (unsignedB) {
    odsState.getOrAddProperties<Properties>().unsignedB = ((unsignedB) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (clamp) {
    odsState.getOrAddProperties<Properties>().clamp = ((clamp) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(destD);
}

void WMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t subwordOffset, /*optional*/bool unsignedA, /*optional*/bool unsignedB, /*optional*/bool clamp) {
  odsState.addOperands(sourceA);
  odsState.addOperands(sourceB);
  odsState.addOperands(destC);
  odsState.getOrAddProperties<Properties>().subwordOffset = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), subwordOffset);
  if (unsignedA) {
    odsState.getOrAddProperties<Properties>().unsignedA = ((unsignedA) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (unsignedB) {
    odsState.getOrAddProperties<Properties>().unsignedB = ((unsignedB) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (clamp) {
    odsState.getOrAddProperties<Properties>().clamp = ((clamp) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WMMAOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void WMMAOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.subwordOffset)
    properties.subwordOffset = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0);
}

::mlir::LogicalResult WMMAOp::verifyInvariantsImpl() {
  auto tblgen_clamp = getProperties().clamp; (void)tblgen_clamp;
  auto tblgen_subwordOffset = getProperties().subwordOffset; (void)tblgen_subwordOffset;
  auto tblgen_unsignedA = getProperties().unsignedA; (void)tblgen_unsignedA;
  auto tblgen_unsignedB = getProperties().unsignedB; (void)tblgen_unsignedB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU6(*this, tblgen_subwordOffset, "subwordOffset")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_unsignedA, "unsignedA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_unsignedB, "unsignedB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMDGPU3(*this, tblgen_clamp, "clamp")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMDGPU13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that all of {destC, destD} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {sourceA, sourceB} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult WMMAOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WMMAOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceAOperands(sourceARawOperands);  ::llvm::SMLoc sourceAOperandsLoc;
  (void)sourceAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand sourceBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceBOperands(sourceBRawOperands);  ::llvm::SMLoc sourceBOperandsLoc;
  (void)sourceBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destCOperands(destCRawOperands);  ::llvm::SMLoc destCOperandsLoc;
  (void)destCOperandsLoc;
  ::mlir::Type sourceARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceATypes(sourceARawTypes);
  ::mlir::Type sourceBRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceBTypes(sourceBRawTypes);
  ::mlir::Type destCRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destCTypes(destCRawTypes);

  sourceAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseStar())
    return ::mlir::failure();

  sourceBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parsePlus())
    return ::mlir::failure();

  destCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(destCRawOperands[0]))
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

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceARawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceBRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destCRawTypes[0] = type;
  }
  result.addTypes(destCTypes[0]);
  if (parser.resolveOperands(sourceAOperands, sourceATypes, sourceAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sourceBOperands, sourceBTypes, sourceBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destCOperands, destCTypes, destCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WMMAOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSourceA();
  _odsPrinter << ' ' << "*";
  _odsPrinter << ' ';
  _odsPrinter << getSourceB();
  _odsPrinter << ' ' << "+";
  _odsPrinter << ' ';
  _odsPrinter << getDestC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSubwordOffsetAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0)))
       elidedAttrs.push_back("subwordOffset");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUnsignedAAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("unsignedA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUnsignedBAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("unsignedB");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getClampAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("clamp");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSourceA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getSourceB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getDestC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void WMMAOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amdgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::WMMAOp)


#endif  // GET_OP_CLASSES

