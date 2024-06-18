/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: VectorOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::vector::VectorScaleOp,
::mlir::vector::BitCastOp,
::mlir::vector::BroadcastOp,
::mlir::vector::CompressStoreOp,
::mlir::vector::ConstantMaskOp,
::mlir::vector::ContractionOp,
::mlir::vector::CreateMaskOp,
::mlir::vector::ExpandLoadOp,
::mlir::vector::ExtractElementOp,
::mlir::vector::ExtractOp,
::mlir::vector::ExtractStridedSliceOp,
::mlir::vector::FMAOp,
::mlir::vector::FlatTransposeOp,
::mlir::vector::GatherOp,
::mlir::vector::InsertElementOp,
::mlir::vector::InsertOp,
::mlir::vector::InsertStridedSliceOp,
::mlir::vector::LoadOp,
::mlir::vector::MaskOp,
::mlir::vector::MaskedLoadOp,
::mlir::vector::MaskedStoreOp,
::mlir::vector::MatmulOp,
::mlir::vector::MultiDimReductionOp,
::mlir::vector::OuterProductOp,
::mlir::vector::PrintOp,
::mlir::vector::ReductionOp,
::mlir::vector::ReshapeOp,
::mlir::vector::ScalableExtractOp,
::mlir::vector::ScalableInsertOp,
::mlir::vector::ScanOp,
::mlir::vector::ScatterOp,
::mlir::vector::ShapeCastOp,
::mlir::vector::ShuffleOp,
::mlir::vector::SplatOp,
::mlir::vector::StoreOp,
::mlir::vector::TransferReadOp,
::mlir::vector::TransferWriteOp,
::mlir::vector::TransposeOp,
::mlir::vector::TypeCastOp,
::mlir::vector::WarpExecuteOnLane0Op,
::mlir::vector::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace vector {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 1-bit signless integer values of ranks 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 1-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessIntOrIndex()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless integer or index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of floating-point values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger())) || ((elementType.isSignedInteger())) || ((::llvm::isa<::mlir::IndexType>(elementType))) || ((::llvm::isa<::mlir::FloatType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of signless integer or signed integer or index or floating-point values of ranks 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::ShapedType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be shaped of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((::llvm::isa<::mlir::IntegerType>(elementType))) || ((::llvm::isa<::mlir::IndexType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of integer or index values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 1-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps15(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps16(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((::llvm::isa<::mlir::IntegerType>(type))) || ((::llvm::isa<::mlir::IndexType>(type))) || ((::llvm::isa<::mlir::FloatType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps17(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps18(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((::llvm::isa<::mlir::IntegerType>(elementType))) || ((::llvm::isa<::mlir::IndexType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of integer or index values of ranks 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps19(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger())) || ((::llvm::isa<::mlir::IndexType>(type))) || ((::llvm::isa<::mlir::FloatType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be integer/index/float type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps20(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be ranked tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorOps21(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((::llvm::cast<::mlir::ShapedType>(type).hasStaticShape())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be statically shaped memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit integer array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::vector::IteratorTypeAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Iterator type should be an enum.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::vector::CombiningKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Kind of combining function for contractions and reductions";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::vector::PrintPunctuationAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Punctuation for separating vectors or vector elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: An Attribute containing a string";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Floating point fast math flags";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::AffineMapAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: AffineMap attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 1-bit boolean array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_VectorOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace vector
} // namespace mlir
namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::VectorScaleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VectorScaleOpGenericAdaptorBase::VectorScaleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.vscale", odsAttrs.getContext());
}

VectorScaleOpGenericAdaptorBase::VectorScaleOpGenericAdaptorBase(VectorScaleOp op) : VectorScaleOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> VectorScaleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VectorScaleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
VectorScaleOpAdaptor::VectorScaleOpAdaptor(VectorScaleOp op) : VectorScaleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult VectorScaleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VectorScaleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VectorScaleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> VectorScaleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VectorScaleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> VectorScaleOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void VectorScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void VectorScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(VectorScaleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void VectorScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorScaleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void VectorScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(VectorScaleOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult VectorScaleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VectorScaleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult VectorScaleOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult VectorScaleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void VectorScaleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void VectorScaleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::VectorScaleOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::BitCastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitCastOpGenericAdaptorBase::BitCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.bitcast", odsAttrs.getContext());
}

BitCastOpGenericAdaptorBase::BitCastOpGenericAdaptorBase(BitCastOp op) : BitCastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitCastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitCastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitCastOpAdaptor::BitCastOpAdaptor(BitCastOp op) : BitCastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitCastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> BitCastOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BitCastOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> BitCastOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void BitCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void BitCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitCastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitCastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getRank()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getRank()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getRank()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getRank()))))
    return emitOpError("failed to verify that all of {source, result} have same rank");
  return ::mlir::success();
}

::mlir::LogicalResult BitCastOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult BitCastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
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
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitCastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BitCastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::BitCastOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::BroadcastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastOpGenericAdaptorBase::BroadcastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.broadcast", odsAttrs.getContext());
}

BroadcastOpGenericAdaptorBase::BroadcastOpGenericAdaptorBase(BroadcastOp op) : BroadcastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BroadcastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BroadcastOpAdaptor::BroadcastOpAdaptor(BroadcastOp op) : BroadcastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOp::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BroadcastOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BroadcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> BroadcastOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(vector);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult BroadcastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
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
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    vectorRawTypes[0] = type;
  }
  result.addTypes(vectorTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
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
    auto type = getVector().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BroadcastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::BroadcastOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::CompressStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CompressStoreOpGenericAdaptorBase::CompressStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.compressstore", odsAttrs.getContext());
}

CompressStoreOpGenericAdaptorBase::CompressStoreOpGenericAdaptorBase(CompressStoreOp op) : CompressStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CompressStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CompressStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CompressStoreOpAdaptor::CompressStoreOpAdaptor(CompressStoreOp op) : CompressStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CompressStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CompressStoreOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CompressStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> CompressStoreOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range CompressStoreOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> CompressStoreOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> CompressStoreOp::getValueToStore() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &CompressStoreOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange CompressStoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &CompressStoreOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CompressStoreOp::getValueToStoreMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CompressStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CompressStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CompressStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value valueToStore) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(valueToStore);
}

void CompressStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value valueToStore) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(valueToStore);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CompressStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CompressStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CompressStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CompressStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valueToStoreRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueToStoreOperands(valueToStoreRawOperands);  ::llvm::SMLoc valueToStoreOperandsLoc;
  (void)valueToStoreOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type valueToStoreRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueToStoreTypes(valueToStoreRawTypes);

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

  valueToStoreOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueToStoreRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueToStoreRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valueToStoreOperands, valueToStoreTypes, valueToStoreOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CompressStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
  _odsPrinter << getValueToStore();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getValueToStore().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CompressStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::CompressStoreOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ConstantMaskOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstantMaskOpGenericAdaptorBase::ConstantMaskOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.constant_mask", odsAttrs.getContext());
}

ConstantMaskOpGenericAdaptorBase::ConstantMaskOpGenericAdaptorBase(ConstantMaskOp op) : ConstantMaskOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstantMaskOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstantMaskOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ConstantMaskOpGenericAdaptorBase::getMaskDimSizesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().mask_dim_sizes);
  return attr;
}

::mlir::ArrayAttr ConstantMaskOpGenericAdaptorBase::getMaskDimSizes() {
  auto attr = getMaskDimSizesAttr();
  return attr;
}

} // namespace detail
ConstantMaskOpAdaptor::ConstantMaskOpAdaptor(ConstantMaskOp op) : ConstantMaskOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstantMaskOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mask_dim_sizes = getProperties().mask_dim_sizes; (void)tblgen_mask_dim_sizes;
  if (!tblgen_mask_dim_sizes) return emitError(loc, "'vector.constant_mask' op ""requires attribute 'mask_dim_sizes'");

  if (tblgen_mask_dim_sizes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mask_dim_sizes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mask_dim_sizes), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.constant_mask' op ""attribute 'mask_dim_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConstantMaskOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstantMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstantMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstantMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ConstantMaskOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mask_dim_sizes;
       auto attr = dict.get("mask_dim_sizes");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mask_dim_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mask_dim_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ConstantMaskOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mask_dim_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mask_dim_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ConstantMaskOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mask_dim_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ConstantMaskOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mask_dim_sizes")
      return prop.mask_dim_sizes;
  return std::nullopt;
}

void ConstantMaskOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mask_dim_sizes") {
       prop.mask_dim_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mask_dim_sizes)>>(value);
       return;
    }
}

void ConstantMaskOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mask_dim_sizes) attrs.append("mask_dim_sizes", prop.mask_dim_sizes);
}

::mlir::LogicalResult ConstantMaskOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMaskDimSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "mask_dim_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ConstantMaskOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mask_dim_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConstantMaskOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mask_dim_sizes);
}

::mlir::ArrayAttr ConstantMaskOp::getMaskDimSizesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().mask_dim_sizes);
}

::mlir::ArrayAttr ConstantMaskOp::getMaskDimSizes() {
  auto attr = getMaskDimSizesAttr();
  return attr;
}

void ConstantMaskOp::setMaskDimSizesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMaskDimSizesAttrName(), attr);
}

void ConstantMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ArrayAttr mask_dim_sizes) {
  odsState.getOrAddProperties<Properties>().mask_dim_sizes = mask_dim_sizes;
  odsState.addTypes(resultType0);
}

void ConstantMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ArrayAttr mask_dim_sizes) {
  odsState.getOrAddProperties<Properties>().mask_dim_sizes = mask_dim_sizes;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantMaskOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConstantMaskOp::verifyInvariantsImpl() {
  auto tblgen_mask_dim_sizes = getProperties().mask_dim_sizes; (void)tblgen_mask_dim_sizes;
  if (!tblgen_mask_dim_sizes) return emitOpError("requires attribute 'mask_dim_sizes'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_mask_dim_sizes, "mask_dim_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConstantMaskOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ConstantMaskOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ArrayAttr mask_dim_sizesAttr;
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  if (parser.parseCustomAttributeWithFallback(mask_dim_sizesAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (mask_dim_sizesAttr) result.getOrAddProperties<ConstantMaskOp::Properties>().mask_dim_sizes = mask_dim_sizesAttr;
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

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  return ::mlir::success();
}

void ConstantMaskOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMaskDimSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mask_dim_sizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void ConstantMaskOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ConstantMaskOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ContractionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ContractionOpGenericAdaptorBase::ContractionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.contract", odsAttrs.getContext());
}

ContractionOpGenericAdaptorBase::ContractionOpGenericAdaptorBase(ContractionOp op) : ContractionOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ContractionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ContractionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ContractionOpGenericAdaptorBase::getIndexingMapsAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().indexing_maps);
  return attr;
}

::mlir::ArrayAttr ContractionOpGenericAdaptorBase::getIndexingMaps() {
  auto attr = getIndexingMapsAttr();
  return attr;
}

::mlir::ArrayAttr ContractionOpGenericAdaptorBase::getIteratorTypesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().iterator_types);
  return attr;
}

::mlir::ArrayAttr ContractionOpGenericAdaptorBase::getIteratorTypes() {
  auto attr = getIteratorTypesAttr();
  return attr;
}

::mlir::vector::CombiningKindAttr ContractionOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::CombiningKindAttr>(getProperties().kind);
  return attr;
}

::mlir::vector::CombiningKind ContractionOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

} // namespace detail
ContractionOpAdaptor::ContractionOpAdaptor(ContractionOp op) : ContractionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ContractionOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_indexing_maps = getProperties().indexing_maps; (void)tblgen_indexing_maps;
  if (!tblgen_indexing_maps) return emitError(loc, "'vector.contract' op ""requires attribute 'indexing_maps'");
  auto tblgen_iterator_types = getProperties().iterator_types; (void)tblgen_iterator_types;
  if (!tblgen_iterator_types) return emitError(loc, "'vector.contract' op ""requires attribute 'iterator_types'");
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;

  if (tblgen_indexing_maps && !((::llvm::isa<::mlir::ArrayAttr>(tblgen_indexing_maps))))
    return emitError(loc, "'vector.contract' op ""attribute 'indexing_maps' failed to satisfy constraint: array attribute");

  if (tblgen_iterator_types && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_iterator_types))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_iterator_types), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::vector::IteratorTypeAttr>(attr))); }))))
    return emitError(loc, "'vector.contract' op ""attribute 'iterator_types' failed to satisfy constraint: Iterator type should be an enum.");

  if (tblgen_kind && !((::llvm::isa<::mlir::vector::CombiningKindAttr>(tblgen_kind))))
    return emitError(loc, "'vector.contract' op ""attribute 'kind' failed to satisfy constraint: Kind of combining function for contractions and reductions");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ContractionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ContractionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ContractionOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ContractionOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::Value ContractionOp::getAcc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ContractionOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ContractionOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ContractionOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ContractionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ContractionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ContractionOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.indexing_maps;
       auto attr = dict.get("indexing_maps");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for indexing_maps in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `indexing_maps` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.iterator_types;
       auto attr = dict.get("iterator_types");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for iterator_types in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `iterator_types` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
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
  return ::mlir::success();
}

::mlir::Attribute ContractionOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.indexing_maps;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("indexing_maps",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.iterator_types;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("iterator_types",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ContractionOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.indexing_maps.getAsOpaquePointer()), 
    llvm::hash_value(prop.iterator_types.getAsOpaquePointer()), 
    llvm::hash_value(prop.kind.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ContractionOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "indexing_maps")
      return prop.indexing_maps;

    if (name == "iterator_types")
      return prop.iterator_types;

    if (name == "kind")
      return prop.kind;
  return std::nullopt;
}

void ContractionOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "indexing_maps") {
       prop.indexing_maps = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.indexing_maps)>>(value);
       return;
    }

    if (name == "iterator_types") {
       prop.iterator_types = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.iterator_types)>>(value);
       return;
    }

    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }
}

void ContractionOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.indexing_maps) attrs.append("indexing_maps", prop.indexing_maps);

    if (prop.iterator_types) attrs.append("iterator_types", prop.iterator_types);

    if (prop.kind) attrs.append("kind", prop.kind);
}

::mlir::LogicalResult ContractionOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIndexingMapsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps1(attr, "indexing_maps", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIteratorTypesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps2(attr, "iterator_types", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(attr, "kind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ContractionOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.indexing_maps)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.iterator_types)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.kind)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ContractionOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.indexing_maps);
  writer.writeAttribute(prop.iterator_types);

  writer.writeOptionalAttribute(prop.kind);
}

::mlir::ArrayAttr ContractionOp::getIndexingMapsAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().indexing_maps);
}

::mlir::ArrayAttr ContractionOp::getIndexingMaps() {
  auto attr = getIndexingMapsAttr();
  return attr;
}

::mlir::ArrayAttr ContractionOp::getIteratorTypesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().iterator_types);
}

::mlir::ArrayAttr ContractionOp::getIteratorTypes() {
  auto attr = getIteratorTypesAttr();
  return attr;
}

::mlir::vector::CombiningKindAttr ContractionOp::getKindAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::CombiningKindAttr>(getProperties().kind);
}

::mlir::vector::CombiningKind ContractionOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

void ContractionOp::setIndexingMapsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getIndexingMapsAttrName(), attr);
}

void ContractionOp::setIteratorTypesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getIteratorTypesAttrName(), attr);
}

void ContractionOp::setKindAttr(::mlir::vector::CombiningKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void ContractionOp::setKind(::mlir::vector::CombiningKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::vector::CombiningKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ContractionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, ::mlir::vector::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().indexing_maps = indexing_maps;
  odsState.getOrAddProperties<Properties>().iterator_types = iterator_types;
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }
  odsState.addTypes(resultType0);
}

void ContractionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, ::mlir::vector::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().indexing_maps = indexing_maps;
  odsState.getOrAddProperties<Properties>().iterator_types = iterator_types;
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ContractionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, ::mlir::vector::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().indexing_maps = indexing_maps;
  odsState.getOrAddProperties<Properties>().iterator_types = iterator_types;
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.addTypes(resultType0);
}

void ContractionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, ::mlir::vector::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().indexing_maps = indexing_maps;
  odsState.getOrAddProperties<Properties>().iterator_types = iterator_types;
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ContractionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ContractionOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.kind)
    properties.kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), CombiningKind::ADD);
}

::mlir::LogicalResult ContractionOp::verifyInvariantsImpl() {
  auto tblgen_indexing_maps = getProperties().indexing_maps; (void)tblgen_indexing_maps;
  if (!tblgen_indexing_maps) return emitOpError("requires attribute 'indexing_maps'");
  auto tblgen_iterator_types = getProperties().iterator_types; (void)tblgen_iterator_types;
  if (!tblgen_iterator_types) return emitOpError("requires attribute 'iterator_types'");
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps1(*this, tblgen_indexing_maps, "indexing_maps")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps2(*this, tblgen_iterator_types, "iterator_types")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(*this, tblgen_kind, "kind")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getOperation()).getNumOperands() > 1)) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(0).getType()))) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(1).getType()))) && ((::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(0)) == ::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(1))))))
    return emitOpError("failed to verify that lhs and rhs have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(2)))))
    return emitOpError("failed to verify that third operand acc and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult ContractionOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

void ContractionOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ContractionOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::CreateMaskOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateMaskOpGenericAdaptorBase::CreateMaskOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.create_mask", odsAttrs.getContext());
}

CreateMaskOpGenericAdaptorBase::CreateMaskOpGenericAdaptorBase(CreateMaskOp op) : CreateMaskOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateMaskOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CreateMaskOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateMaskOpAdaptor::CreateMaskOpAdaptor(CreateMaskOp op) : CreateMaskOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateMaskOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CreateMaskOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CreateMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateMaskOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CreateMaskOp::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CreateMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CreateMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CreateMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addTypes(resultType0);
}

void CreateMaskOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateMaskOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateMaskOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CreateMaskOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc;
  (void)operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(operandsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(operandsOperands, odsBuildableType0, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateMaskOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void CreateMaskOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::CreateMaskOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ExpandLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpandLoadOpGenericAdaptorBase::ExpandLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.expandload", odsAttrs.getContext());
}

ExpandLoadOpGenericAdaptorBase::ExpandLoadOpGenericAdaptorBase(ExpandLoadOp op) : ExpandLoadOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExpandLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ExpandLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExpandLoadOpAdaptor::ExpandLoadOpAdaptor(ExpandLoadOp op) : ExpandLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExpandLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExpandLoadOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ExpandLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> ExpandLoadOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ExpandLoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> ExpandLoadOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> ExpandLoadOp::getPassThru() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &ExpandLoadOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ExpandLoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &ExpandLoadOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ExpandLoadOp::getPassThruMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExpandLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExpandLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ExpandLoadOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ExpandLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value pass_thru) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addTypes(result);
}

void ExpandLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value pass_thru) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpandLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExpandLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExpandLoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExpandLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand pass_thruRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> pass_thruOperands(pass_thruRawOperands);  ::llvm::SMLoc pass_thruOperandsLoc;
  (void)pass_thruOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type pass_thruRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> pass_thruTypes(pass_thruRawTypes);
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

  pass_thruOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(pass_thruRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    pass_thruRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(pass_thruOperands, pass_thruTypes, pass_thruOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpandLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
  _odsPrinter << getPassThru();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getPassThru().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExpandLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ExpandLoadOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ExtractElementOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtractElementOpGenericAdaptorBase::ExtractElementOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.extractelement", odsAttrs.getContext());
}

ExtractElementOpGenericAdaptorBase::ExtractElementOpGenericAdaptorBase(ExtractElementOp op) : ExtractElementOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtractElementOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ExtractElementOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExtractElementOpAdaptor::ExtractElementOpAdaptor(ExtractElementOp op) : ExtractElementOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtractElementOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ExtractElementOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value ExtractElementOp::getPosition() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &ExtractElementOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ExtractElementOp::getPositionMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractElementOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ExtractElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, /*optional*/::mlir::Value position) {
  odsState.addOperands(vector);
  if (position)
    odsState.addOperands(position);
  odsState.addTypes(result);
}

void ExtractElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, /*optional*/::mlir::Value position) {
  odsState.addOperands(vector);
  if (position)
    odsState.addOperands(position);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExtractElementOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExtractElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, /*optional*/::mlir::Value position) {
  odsState.addOperands(vector);
  if (position)
    odsState.addOperands(position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractElementOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ExtractElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ExtractElementOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ExtractElementOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getElementType(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that result type matches element type of vector operand");
  return ::mlir::success();
}

::mlir::LogicalResult ExtractElementOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult ExtractElementOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::llvm::cast<VectorType>(operands[0].getType()).getElementType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ExtractElementOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> positionOperands;
  ::llvm::SMLoc positionOperandsLoc;
  (void)positionOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> positionTypes;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  {
    positionOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      positionOperands.push_back(operand);
    }
  }
  if (!positionOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      positionTypes.push_back(optionalType);
    }
  }
  }
  if (parser.parseRSquare())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
  for (::mlir::Type type : vectorTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'vector' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(::llvm::cast<VectorType>(vectorTypes[0]).getElementType());
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(positionOperands, positionTypes, positionOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtractElementOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  _odsPrinter << "[";
  if (getPosition()) {
    if (::mlir::Value value = getPosition())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getPosition() ? ::llvm::ArrayRef<::mlir::Type>(getPosition().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void ExtractElementOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ExtractElementOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ExtractOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtractOpGenericAdaptorBase::ExtractOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.extract", odsAttrs.getContext());
}

ExtractOpGenericAdaptorBase::ExtractOpGenericAdaptorBase(ExtractOp op) : ExtractOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtractOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ExtractOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr ExtractOpGenericAdaptorBase::getStaticPositionAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_position);
  return attr;
}

::llvm::ArrayRef<int64_t> ExtractOpGenericAdaptorBase::getStaticPosition() {
  auto attr = getStaticPositionAttr();
  return attr;
}

} // namespace detail
ExtractOpAdaptor::ExtractOpAdaptor(ExtractOp op) : ExtractOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtractOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_static_position = getProperties().static_position; (void)tblgen_static_position;
  if (!tblgen_static_position) return emitError(loc, "'vector.extract' op ""requires attribute 'static_position'");

  if (tblgen_static_position && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_position))))
    return emitError(loc, "'vector.extract' op ""attribute 'static_position' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtractOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ExtractOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ExtractOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ExtractOp::getDynamicPosition() {
  return getODSOperands(1);
}

::mlir::OpOperand &ExtractOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ExtractOp::getDynamicPositionMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ExtractOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ExtractOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.static_position;
       auto attr = dict.get("static_position");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for static_position in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_position` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ExtractOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.static_position;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_position",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExtractOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.static_position.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ExtractOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "static_position")
      return prop.static_position;
  return std::nullopt;
}

void ExtractOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "static_position") {
       prop.static_position = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_position)>>(value);
       return;
    }
}

void ExtractOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.static_position) attrs.append("static_position", prop.static_position);
}

::mlir::LogicalResult ExtractOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getStaticPositionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps4(attr, "static_position", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExtractOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.static_position)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtractOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.static_position);
}

::mlir::DenseI64ArrayAttr ExtractOp::getStaticPositionAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_position);
}

::llvm::ArrayRef<int64_t> ExtractOp::getStaticPosition() {
  auto attr = getStaticPositionAttr();
  return attr;
}

void ExtractOp::setStaticPositionAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticPositionAttrName(), attr);
}

void ExtractOp::setStaticPosition(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticPositionAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::ValueRange dynamic_position, ::mlir::DenseI64ArrayAttr static_position) {
  odsState.addOperands(vector);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = static_position;
  odsState.addTypes(result);
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::ValueRange dynamic_position, ::mlir::DenseI64ArrayAttr static_position) {
  odsState.addOperands(vector);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = static_position;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExtractOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::ValueRange dynamic_position, ::mlir::DenseI64ArrayAttr static_position) {
  odsState.addOperands(vector);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = static_position;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::ValueRange dynamic_position, ::llvm::ArrayRef<int64_t> static_position) {
  odsState.addOperands(vector);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = odsBuilder.getDenseI64ArrayAttr(static_position);
  odsState.addTypes(result);
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::ValueRange dynamic_position, ::llvm::ArrayRef<int64_t> static_position) {
  odsState.addOperands(vector);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = odsBuilder.getDenseI64ArrayAttr(static_position);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExtractOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::ValueRange dynamic_position, ::llvm::ArrayRef<int64_t> static_position) {
  odsState.addOperands(vector);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = odsBuilder.getDenseI64ArrayAttr(static_position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ExtractOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ExtractOp::verifyInvariantsImpl() {
  auto tblgen_static_position = getProperties().static_position; (void)tblgen_static_position;
  if (!tblgen_static_position) return emitOpError("requires attribute 'static_position'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps4(*this, tblgen_static_position, "static_position")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult ExtractOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExtractOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dynamic_positionOperands;
  ::llvm::SMLoc dynamic_positionOperandsLoc;
  (void)dynamic_positionOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_positionAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  {
    dynamic_positionOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, dynamic_positionOperands, static_positionAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ExtractOp::Properties>().static_position = static_positionAttr;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  if (parser.parseKeyword("from"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    vectorRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dynamic_positionOperands, odsBuildableType0, dynamic_positionOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtractOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  printDynamicIndexList(_odsPrinter, *this, getDynamicPosition(), getStaticPositionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_position");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "from";
  _odsPrinter << ' ';
  {
    auto type = getVector().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExtractOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ExtractOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ExtractOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ExtractOp::inferReturnTypes(context,
    location, adaptor, inferredReturnTypes);
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ExtractOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ExtractStridedSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtractStridedSliceOpGenericAdaptorBase::ExtractStridedSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.extract_strided_slice", odsAttrs.getContext());
}

ExtractStridedSliceOpGenericAdaptorBase::ExtractStridedSliceOpGenericAdaptorBase(ExtractStridedSliceOp op) : ExtractStridedSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtractStridedSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExtractStridedSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ExtractStridedSliceOpGenericAdaptorBase::getOffsetsAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().offsets);
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpGenericAdaptorBase::getOffsets() {
  auto attr = getOffsetsAttr();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpGenericAdaptorBase::getSizesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().sizes);
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpGenericAdaptorBase::getSizes() {
  auto attr = getSizesAttr();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpGenericAdaptorBase::getStridesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().strides);
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpGenericAdaptorBase::getStrides() {
  auto attr = getStridesAttr();
  return attr;
}

} // namespace detail
ExtractStridedSliceOpAdaptor::ExtractStridedSliceOpAdaptor(ExtractStridedSliceOp op) : ExtractStridedSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtractStridedSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_offsets = getProperties().offsets; (void)tblgen_offsets;
  if (!tblgen_offsets) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'offsets'");
  auto tblgen_sizes = getProperties().sizes; (void)tblgen_sizes;
  if (!tblgen_sizes) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'sizes'");
  auto tblgen_strides = getProperties().strides; (void)tblgen_strides;
  if (!tblgen_strides) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'strides'");

  if (tblgen_offsets && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_offsets))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_offsets), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_sizes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_sizes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_sizes), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_strides && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_strides))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_strides), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtractStridedSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtractStridedSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ExtractStridedSliceOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExtractStridedSliceOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExtractStridedSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractStridedSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ExtractStridedSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.offsets;
       auto attr = dict.get("offsets");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for offsets in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `offsets` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sizes;
       auto attr = dict.get("sizes");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.strides;
       auto attr = dict.get("strides");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for strides in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `strides` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ExtractStridedSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.offsets;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("offsets",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.strides;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("strides",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExtractStridedSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.offsets.getAsOpaquePointer()), 
    llvm::hash_value(prop.sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.strides.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ExtractStridedSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "offsets")
      return prop.offsets;

    if (name == "sizes")
      return prop.sizes;

    if (name == "strides")
      return prop.strides;
  return std::nullopt;
}

void ExtractStridedSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "offsets") {
       prop.offsets = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.offsets)>>(value);
       return;
    }

    if (name == "sizes") {
       prop.sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sizes)>>(value);
       return;
    }

    if (name == "strides") {
       prop.strides = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.strides)>>(value);
       return;
    }
}

void ExtractStridedSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.offsets) attrs.append("offsets", prop.offsets);

    if (prop.sizes) attrs.append("sizes", prop.sizes);

    if (prop.strides) attrs.append("strides", prop.strides);
}

::mlir::LogicalResult ExtractStridedSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOffsetsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "offsets", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "sizes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStridesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "strides", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExtractStridedSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.offsets)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.strides)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtractStridedSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.offsets);
  writer.writeAttribute(prop.sizes);
  writer.writeAttribute(prop.strides);
}

::mlir::ArrayAttr ExtractStridedSliceOp::getOffsetsAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().offsets);
}

::mlir::ArrayAttr ExtractStridedSliceOp::getOffsets() {
  auto attr = getOffsetsAttr();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOp::getSizesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().sizes);
}

::mlir::ArrayAttr ExtractStridedSliceOp::getSizes() {
  auto attr = getSizesAttr();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOp::getStridesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().strides);
}

::mlir::ArrayAttr ExtractStridedSliceOp::getStrides() {
  auto attr = getStridesAttr();
  return attr;
}

void ExtractStridedSliceOp::setOffsetsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOffsetsAttrName(), attr);
}

void ExtractStridedSliceOp::setSizesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getSizesAttrName(), attr);
}

void ExtractStridedSliceOp::setStridesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getStridesAttrName(), attr);
}

void ExtractStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value vector, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().offsets = offsets;
  odsState.getOrAddProperties<Properties>().sizes = sizes;
  odsState.getOrAddProperties<Properties>().strides = strides;
  odsState.addTypes(resultType0);
}

void ExtractStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().offsets = offsets;
  odsState.getOrAddProperties<Properties>().sizes = sizes;
  odsState.getOrAddProperties<Properties>().strides = strides;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractStridedSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtractStridedSliceOp::verifyInvariantsImpl() {
  auto tblgen_offsets = getProperties().offsets; (void)tblgen_offsets;
  if (!tblgen_offsets) return emitOpError("requires attribute 'offsets'");
  auto tblgen_sizes = getProperties().sizes; (void)tblgen_sizes;
  if (!tblgen_sizes) return emitOpError("requires attribute 'sizes'");
  auto tblgen_strides = getProperties().strides; (void)tblgen_strides;
  if (!tblgen_strides) return emitOpError("requires attribute 'strides'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_offsets, "offsets")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_sizes, "sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_strides, "strides")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult ExtractStridedSliceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExtractStridedSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    vectorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtractStridedSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
}

void ExtractStridedSliceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ExtractStridedSliceOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::FMAOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FMAOpGenericAdaptorBase::FMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.fma", odsAttrs.getContext());
}

FMAOpGenericAdaptorBase::FMAOpGenericAdaptorBase(FMAOp op) : FMAOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FMAOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FMAOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FMAOpAdaptor::FMAOpAdaptor(FMAOp op) : FMAOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FMAOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FMAOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FMAOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> FMAOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> FMAOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> FMAOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &FMAOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FMAOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FMAOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FMAOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FMAOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> FMAOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void FMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addTypes(result);
}

void FMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FMAOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMAOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(FMAOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult FMAOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs, acc, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult FMAOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult FMAOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult FMAOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
  result.addTypes(lhsTypes[0]);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, lhsTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FMAOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void FMAOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::FMAOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::FlatTransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FlatTransposeOpGenericAdaptorBase::FlatTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.flat_transpose", odsAttrs.getContext());
}

FlatTransposeOpGenericAdaptorBase::FlatTransposeOpGenericAdaptorBase(FlatTransposeOp op) : FlatTransposeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FlatTransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FlatTransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr FlatTransposeOpGenericAdaptorBase::getRowsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().rows);
  return attr;
}

uint32_t FlatTransposeOpGenericAdaptorBase::getRows() {
  auto attr = getRowsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr FlatTransposeOpGenericAdaptorBase::getColumnsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().columns);
  return attr;
}

uint32_t FlatTransposeOpGenericAdaptorBase::getColumns() {
  auto attr = getColumnsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
FlatTransposeOpAdaptor::FlatTransposeOpAdaptor(FlatTransposeOp op) : FlatTransposeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FlatTransposeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_columns = getProperties().columns; (void)tblgen_columns;
  if (!tblgen_columns) return emitError(loc, "'vector.flat_transpose' op ""requires attribute 'columns'");
  auto tblgen_rows = getProperties().rows; (void)tblgen_rows;
  if (!tblgen_rows) return emitError(loc, "'vector.flat_transpose' op ""requires attribute 'rows'");

  if (tblgen_rows && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_rows))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_rows).getType().isSignlessInteger(32)))))
    return emitError(loc, "'vector.flat_transpose' op ""attribute 'rows' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_columns && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_columns))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_columns).getType().isSignlessInteger(32)))))
    return emitError(loc, "'vector.flat_transpose' op ""attribute 'columns' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FlatTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FlatTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> FlatTransposeOp::getMatrix() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FlatTransposeOp::getMatrixMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FlatTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FlatTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> FlatTransposeOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult FlatTransposeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.columns;
       auto attr = dict.get("columns");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for columns in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `columns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.rows;
       auto attr = dict.get("rows");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for rows in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `rows` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FlatTransposeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.columns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("columns",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.rows;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("rows",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FlatTransposeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.columns.getAsOpaquePointer()), 
    llvm::hash_value(prop.rows.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FlatTransposeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "columns")
      return prop.columns;

    if (name == "rows")
      return prop.rows;
  return std::nullopt;
}

void FlatTransposeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "columns") {
       prop.columns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.columns)>>(value);
       return;
    }

    if (name == "rows") {
       prop.rows = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.rows)>>(value);
       return;
    }
}

void FlatTransposeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.columns) attrs.append("columns", prop.columns);

    if (prop.rows) attrs.append("rows", prop.rows);
}

::mlir::LogicalResult FlatTransposeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getColumnsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(attr, "columns", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRowsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(attr, "rows", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FlatTransposeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.columns)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.rows)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FlatTransposeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.columns);
  writer.writeAttribute(prop.rows);
}

::mlir::IntegerAttr FlatTransposeOp::getRowsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().rows);
}

uint32_t FlatTransposeOp::getRows() {
  auto attr = getRowsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr FlatTransposeOp::getColumnsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().columns);
}

uint32_t FlatTransposeOp::getColumns() {
  auto attr = getColumnsAttr();
  return attr.getValue().getZExtValue();
}

void FlatTransposeOp::setRowsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getRowsAttrName(), attr);
}

void FlatTransposeOp::setRows(uint32_t attrValue) {
  (*this)->setAttr(getRowsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void FlatTransposeOp::setColumnsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getColumnsAttrName(), attr);
}

void FlatTransposeOp::setColumns(uint32_t attrValue) {
  (*this)->setAttr(getColumnsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrix, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.getOrAddProperties<Properties>().rows = rows;
  odsState.getOrAddProperties<Properties>().columns = columns;
  odsState.addTypes(res);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value matrix, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.getOrAddProperties<Properties>().rows = rows;
  odsState.getOrAddProperties<Properties>().columns = columns;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrix, uint32_t rows, uint32_t columns) {
  odsState.addOperands(matrix);
  odsState.getOrAddProperties<Properties>().rows = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows);
  odsState.getOrAddProperties<Properties>().columns = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns);
  odsState.addTypes(res);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value matrix, uint32_t rows, uint32_t columns) {
  odsState.addOperands(matrix);
  odsState.getOrAddProperties<Properties>().rows = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows);
  odsState.getOrAddProperties<Properties>().columns = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlatTransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FlatTransposeOp::verifyInvariantsImpl() {
  auto tblgen_columns = getProperties().columns; (void)tblgen_columns;
  if (!tblgen_columns) return emitOpError("requires attribute 'columns'");
  auto tblgen_rows = getProperties().rows; (void)tblgen_rows;
  if (!tblgen_rows) return emitOpError("requires attribute 'rows'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(*this, tblgen_rows, "rows")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(*this, tblgen_columns, "columns")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult FlatTransposeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FlatTransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand matrixRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixOperands(matrixRawOperands);  ::llvm::SMLoc matrixOperandsLoc;
  (void)matrixOperandsLoc;
  ::mlir::Type matrixRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixTypes(matrixRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  matrixOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixRawOperands[0]))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(matrixOperands, matrixTypes, matrixOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FlatTransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMatrix();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMatrix().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void FlatTransposeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::FlatTransposeOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::GatherOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.gather", odsAttrs.getContext());
}

GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(GatherOp op) : GatherOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GatherOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false, false, false};
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

::mlir::DictionaryAttr GatherOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GatherOpAdaptor::GatherOpAdaptor(GatherOp op) : GatherOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GatherOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GatherOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, false, false};
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

::mlir::Operation::operand_range GatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ShapedType> GatherOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ShapedType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range GatherOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> GatherOp::getIndexVec() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> GatherOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::VectorType> GatherOp::getPassThru() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &GatherOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange GatherOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &GatherOp::getIndexVecMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &GatherOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &GatherOp::getPassThruMutable() {
  auto range = getODSOperandIndexAndLength(4);
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

::mlir::TypedValue<::mlir::VectorType> GatherOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value index_vec, ::mlir::Value mask, ::mlir::Value pass_thru) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(index_vec);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addTypes(result);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value index_vec, ::mlir::Value mask, ::mlir::Value pass_thru) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(index_vec);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GatherOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult GatherOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand index_vecRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> index_vecOperands(index_vecRawOperands);  ::llvm::SMLoc index_vecOperandsLoc;
  (void)index_vecOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand pass_thruRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> pass_thruOperands(pass_thruRawOperands);  ::llvm::SMLoc pass_thruOperandsLoc;
  (void)pass_thruOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type index_vecRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> index_vecTypes(index_vecRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type pass_thruRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> pass_thruTypes(pass_thruRawTypes);
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
  if (parser.parseLSquare())
    return ::mlir::failure();

  index_vecOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(index_vecRawOperands[0]))
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

  pass_thruOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(pass_thruRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::ShapedType type;
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
    index_vecRawTypes[0] = type;
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    pass_thruRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(index_vecOperands, index_vecTypes, index_vecOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(pass_thruOperands, pass_thruTypes, pass_thruOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GatherOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  _odsPrinter << ' ' << "[";
  _odsPrinter << getIndexVec();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getPassThru();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ShapedType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getIndexVec().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
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
    auto type = getPassThru().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GatherOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::GatherOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::InsertElementOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InsertElementOpGenericAdaptorBase::InsertElementOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.insertelement", odsAttrs.getContext());
}

InsertElementOpGenericAdaptorBase::InsertElementOpGenericAdaptorBase(InsertElementOp op) : InsertElementOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> InsertElementOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr InsertElementOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
InsertElementOpAdaptor::InsertElementOpAdaptor(InsertElementOp op) : InsertElementOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult InsertElementOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InsertElementOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range InsertElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertElementOp::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> InsertElementOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::Value InsertElementOp::getPosition() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &InsertElementOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &InsertElementOp::getDestMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange InsertElementOp::getPositionMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> InsertElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> InsertElementOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void InsertElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value dest, /*optional*/::mlir::Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  if (position)
    odsState.addOperands(position);
  odsState.addTypes(result);
}

void InsertElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value dest, /*optional*/::mlir::Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  if (position)
    odsState.addOperands(position);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(InsertElementOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void InsertElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value dest, /*optional*/::mlir::Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  if (position)
    odsState.addOperands(position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertElementOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void InsertElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(InsertElementOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult InsertElementOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getElementType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that source operand type matches element type of result");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {dest, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult InsertElementOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult InsertElementOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult InsertElementOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc;
  (void)destOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> positionOperands;
  ::llvm::SMLoc positionOperandsLoc;
  (void)positionOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> positionTypes;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  destOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(destRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  {
    positionOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      positionOperands.push_back(operand);
    }
  }
  if (!positionOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      positionTypes.push_back(optionalType);
    }
  }
  }
  if (parser.parseRSquare())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, ::llvm::cast<VectorType>(resultTypes[0]).getElementType(), sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destOperands, resultTypes[0], destOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(positionOperands, positionTypes, positionOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertElementOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDest();
  _odsPrinter << "[";
  if (getPosition()) {
    if (::mlir::Value value = getPosition())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getPosition() ? ::llvm::ArrayRef<::mlir::Type>(getPosition().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void InsertElementOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::InsertElementOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::InsertOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InsertOpGenericAdaptorBase::InsertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.insert", odsAttrs.getContext());
}

InsertOpGenericAdaptorBase::InsertOpGenericAdaptorBase(InsertOp op) : InsertOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> InsertOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr InsertOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr InsertOpGenericAdaptorBase::getStaticPositionAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_position);
  return attr;
}

::llvm::ArrayRef<int64_t> InsertOpGenericAdaptorBase::getStaticPosition() {
  auto attr = getStaticPositionAttr();
  return attr;
}

} // namespace detail
InsertOpAdaptor::InsertOpAdaptor(InsertOp op) : InsertOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult InsertOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_static_position = getProperties().static_position; (void)tblgen_static_position;
  if (!tblgen_static_position) return emitError(loc, "'vector.insert' op ""requires attribute 'static_position'");

  if (tblgen_static_position && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_position))))
    return emitError(loc, "'vector.insert' op ""attribute 'static_position' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InsertOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range InsertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertOp::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> InsertOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range InsertOp::getDynamicPosition() {
  return getODSOperands(2);
}

::mlir::OpOperand &InsertOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &InsertOp::getDestMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange InsertOp::getDynamicPositionMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> InsertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> InsertOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult InsertOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.static_position;
       auto attr = dict.get("static_position");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for static_position in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_position` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute InsertOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.static_position;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_position",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code InsertOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.static_position.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> InsertOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "static_position")
      return prop.static_position;
  return std::nullopt;
}

void InsertOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "static_position") {
       prop.static_position = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_position)>>(value);
       return;
    }
}

void InsertOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.static_position) attrs.append("static_position", prop.static_position);
}

::mlir::LogicalResult InsertOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getStaticPositionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps4(attr, "static_position", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult InsertOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.static_position)))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.static_position);
}

::mlir::DenseI64ArrayAttr InsertOp::getStaticPositionAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_position);
}

::llvm::ArrayRef<int64_t> InsertOp::getStaticPosition() {
  auto attr = getStaticPositionAttr();
  return attr;
}

void InsertOp::setStaticPositionAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticPositionAttrName(), attr);
}

void InsertOp::setStaticPosition(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticPositionAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value dest, ::mlir::ValueRange dynamic_position, ::mlir::DenseI64ArrayAttr static_position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = static_position;
  odsState.addTypes(result);
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value dest, ::mlir::ValueRange dynamic_position, ::mlir::DenseI64ArrayAttr static_position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = static_position;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(InsertOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::ValueRange dynamic_position, ::mlir::DenseI64ArrayAttr static_position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = static_position;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value dest, ::mlir::ValueRange dynamic_position, ::llvm::ArrayRef<int64_t> static_position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = odsBuilder.getDenseI64ArrayAttr(static_position);
  odsState.addTypes(result);
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value dest, ::mlir::ValueRange dynamic_position, ::llvm::ArrayRef<int64_t> static_position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = odsBuilder.getDenseI64ArrayAttr(static_position);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(InsertOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::ValueRange dynamic_position, ::llvm::ArrayRef<int64_t> static_position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(dynamic_position);
  odsState.getOrAddProperties<Properties>().static_position = odsBuilder.getDenseI64ArrayAttr(static_position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(InsertOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult InsertOp::verifyInvariantsImpl() {
  auto tblgen_static_position = getProperties().static_position; (void)tblgen_static_position;
  if (!tblgen_static_position) return emitOpError("requires attribute 'static_position'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps4(*this, tblgen_static_position, "static_position")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {dest, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult InsertOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult InsertOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult InsertOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc;
  (void)destOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dynamic_positionOperands;
  ::llvm::SMLoc dynamic_positionOperandsLoc;
  (void)dynamic_positionOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_positionAttr;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  destOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(destRawOperands[0]))
    return ::mlir::failure();
  {
    dynamic_positionOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, dynamic_positionOperands, static_positionAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<InsertOp::Properties>().static_position = static_positionAttr;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(destTypes[0]);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dynamic_positionOperands, odsBuildableType0, dynamic_positionOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDest();
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getDynamicPosition(), getStaticPositionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_position");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void InsertOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::InsertOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::InsertStridedSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InsertStridedSliceOpGenericAdaptorBase::InsertStridedSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.insert_strided_slice", odsAttrs.getContext());
}

InsertStridedSliceOpGenericAdaptorBase::InsertStridedSliceOpGenericAdaptorBase(InsertStridedSliceOp op) : InsertStridedSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> InsertStridedSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr InsertStridedSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr InsertStridedSliceOpGenericAdaptorBase::getOffsetsAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().offsets);
  return attr;
}

::mlir::ArrayAttr InsertStridedSliceOpGenericAdaptorBase::getOffsets() {
  auto attr = getOffsetsAttr();
  return attr;
}

::mlir::ArrayAttr InsertStridedSliceOpGenericAdaptorBase::getStridesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().strides);
  return attr;
}

::mlir::ArrayAttr InsertStridedSliceOpGenericAdaptorBase::getStrides() {
  auto attr = getStridesAttr();
  return attr;
}

} // namespace detail
InsertStridedSliceOpAdaptor::InsertStridedSliceOpAdaptor(InsertStridedSliceOp op) : InsertStridedSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult InsertStridedSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_offsets = getProperties().offsets; (void)tblgen_offsets;
  if (!tblgen_offsets) return emitError(loc, "'vector.insert_strided_slice' op ""requires attribute 'offsets'");
  auto tblgen_strides = getProperties().strides; (void)tblgen_strides;
  if (!tblgen_strides) return emitError(loc, "'vector.insert_strided_slice' op ""requires attribute 'strides'");

  if (tblgen_offsets && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_offsets))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_offsets), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.insert_strided_slice' op ""attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_strides && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_strides))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_strides), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.insert_strided_slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InsertStridedSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InsertStridedSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> InsertStridedSliceOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> InsertStridedSliceOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &InsertStridedSliceOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &InsertStridedSliceOp::getDestMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> InsertStridedSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertStridedSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> InsertStridedSliceOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult InsertStridedSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.offsets;
       auto attr = dict.get("offsets");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for offsets in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `offsets` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.strides;
       auto attr = dict.get("strides");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for strides in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `strides` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute InsertStridedSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.offsets;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("offsets",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.strides;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("strides",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code InsertStridedSliceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.offsets.getAsOpaquePointer()), 
    llvm::hash_value(prop.strides.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> InsertStridedSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "offsets")
      return prop.offsets;

    if (name == "strides")
      return prop.strides;
  return std::nullopt;
}

void InsertStridedSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "offsets") {
       prop.offsets = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.offsets)>>(value);
       return;
    }

    if (name == "strides") {
       prop.strides = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.strides)>>(value);
       return;
    }
}

void InsertStridedSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.offsets) attrs.append("offsets", prop.offsets);

    if (prop.strides) attrs.append("strides", prop.strides);
}

::mlir::LogicalResult InsertStridedSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOffsetsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "offsets", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStridesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "strides", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult InsertStridedSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.offsets)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.strides)))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertStridedSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.offsets);
  writer.writeAttribute(prop.strides);
}

::mlir::ArrayAttr InsertStridedSliceOp::getOffsetsAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().offsets);
}

::mlir::ArrayAttr InsertStridedSliceOp::getOffsets() {
  auto attr = getOffsetsAttr();
  return attr;
}

::mlir::ArrayAttr InsertStridedSliceOp::getStridesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().strides);
}

::mlir::ArrayAttr InsertStridedSliceOp::getStrides() {
  auto attr = getStridesAttr();
  return attr;
}

void InsertStridedSliceOp::setOffsetsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOffsetsAttrName(), attr);
}

void InsertStridedSliceOp::setStridesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getStridesAttrName(), attr);
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().offsets = offsets;
  odsState.getOrAddProperties<Properties>().strides = strides;
  odsState.addTypes(res);
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().offsets = offsets;
  odsState.getOrAddProperties<Properties>().strides = strides;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(InsertStridedSliceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().offsets = offsets;
  odsState.getOrAddProperties<Properties>().strides = strides;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(InsertStridedSliceOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult InsertStridedSliceOp::verifyInvariantsImpl() {
  auto tblgen_offsets = getProperties().offsets; (void)tblgen_offsets;
  if (!tblgen_offsets) return emitOpError("requires attribute 'offsets'");
  auto tblgen_strides = getProperties().strides; (void)tblgen_strides;
  if (!tblgen_strides) return emitOpError("requires attribute 'strides'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_offsets, "offsets")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_strides, "strides")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand #0 and result have same element type");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {dest, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult InsertStridedSliceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult InsertStridedSliceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult InsertStridedSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc;
  (void)destOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  destOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(destRawOperands[0]))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  result.addTypes(destTypes[0]);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertStridedSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDest();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void InsertStridedSliceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::InsertStridedSliceOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::LoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoadOpGenericAdaptorBase::LoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.load", odsAttrs.getContext());
}

LoadOpGenericAdaptorBase::LoadOpGenericAdaptorBase(LoadOp op) : LoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr LoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr LoadOpGenericAdaptorBase::getNontemporalAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().nontemporal);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool LoadOpGenericAdaptorBase::getNontemporal() {
  auto attr = getNontemporalAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
LoadOpAdaptor::LoadOpAdaptor(LoadOp op) : LoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nontemporal = getProperties().nontemporal; (void)tblgen_nontemporal;

  if (tblgen_nontemporal && !((::llvm::isa<::mlir::BoolAttr>(tblgen_nontemporal))))
    return emitError(loc, "'vector.load' op ""attribute 'nontemporal' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoadOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range LoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> LoadOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range LoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::OpOperand &LoadOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange LoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> LoadOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult LoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nontemporal;
       auto attr = dict.get("nontemporal");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nontemporal in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nontemporal` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nontemporal;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nontemporal",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.nontemporal.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nontemporal")
      return prop.nontemporal;
  return std::nullopt;
}

void LoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nontemporal") {
       prop.nontemporal = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nontemporal)>>(value);
       return;
    }
}

void LoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nontemporal) attrs.append("nontemporal", prop.nontemporal);
}

::mlir::LogicalResult LoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNontemporalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps6(attr, "nontemporal", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nontemporal)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nontemporal);
}

::mlir::BoolAttr LoadOp::getNontemporalAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().nontemporal);
}

bool LoadOp::getNontemporal() {
  auto attr = getNontemporalAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void LoadOp::setNontemporalAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getNontemporalAttrName(), attr);
}

void LoadOp::setNontemporal(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNontemporalAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getNontemporalAttrName());
}

::mlir::Attribute LoadOp::removeNontemporalAttr() {
    auto &attr = getProperties().nontemporal;
    attr = {};
    return attr;
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::BoolAttr nontemporal) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (nontemporal) {
    odsState.getOrAddProperties<Properties>().nontemporal = nontemporal;
  }
  odsState.addTypes(result);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::BoolAttr nontemporal) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (nontemporal) {
    odsState.getOrAddProperties<Properties>().nontemporal = nontemporal;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/bool nontemporal) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().nontemporal = odsBuilder.getBoolAttr(nontemporal);
  odsState.addTypes(result);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/bool nontemporal) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().nontemporal = odsBuilder.getBoolAttr(nontemporal);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LoadOp::verifyInvariantsImpl() {
  auto tblgen_nontemporal = getProperties().nontemporal; (void)tblgen_nontemporal;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps6(*this, tblgen_nontemporal, "nontemporal")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult LoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
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
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNontemporalAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("nontemporal");
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
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::LoadOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::MaskOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskOpGenericAdaptorBase::MaskOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.mask", odsAttrs.getContext());
}

MaskOpGenericAdaptorBase::MaskOpGenericAdaptorBase(MaskOp op) : MaskOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr MaskOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &MaskOpGenericAdaptorBase::getMaskRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange MaskOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
MaskOpAdaptor::MaskOpAdaptor(MaskOp op) : MaskOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value MaskOp::getPassthru() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &MaskOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MaskOp::getPassthruMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MaskOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range MaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range MaskOp::getResults() {
  return getODSResults(0);
}

::mlir::Region &MaskOp::getMaskRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult MaskOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps15(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VectorOps0(*this, region, "maskRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaskOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::MaskOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::MaskedLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskedLoadOpGenericAdaptorBase::MaskedLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.maskedload", odsAttrs.getContext());
}

MaskedLoadOpGenericAdaptorBase::MaskedLoadOpGenericAdaptorBase(MaskedLoadOp op) : MaskedLoadOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskedLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MaskedLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskedLoadOpAdaptor::MaskedLoadOpAdaptor(MaskedLoadOp op) : MaskedLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskedLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskedLoadOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MaskedLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> MaskedLoadOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range MaskedLoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> MaskedLoadOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskedLoadOp::getPassThru() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &MaskedLoadOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MaskedLoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &MaskedLoadOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskedLoadOp::getPassThruMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskedLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskedLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskedLoadOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void MaskedLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value pass_thru) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addTypes(result);
}

void MaskedLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value pass_thru) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaskedLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaskedLoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MaskedLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand pass_thruRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> pass_thruOperands(pass_thruRawOperands);  ::llvm::SMLoc pass_thruOperandsLoc;
  (void)pass_thruOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type pass_thruRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> pass_thruTypes(pass_thruRawTypes);
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

  pass_thruOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(pass_thruRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    pass_thruRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(pass_thruOperands, pass_thruTypes, pass_thruOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskedLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
  _odsPrinter << getPassThru();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getPassThru().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MaskedLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::MaskedLoadOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::MaskedStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskedStoreOpGenericAdaptorBase::MaskedStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.maskedstore", odsAttrs.getContext());
}

MaskedStoreOpGenericAdaptorBase::MaskedStoreOpGenericAdaptorBase(MaskedStoreOp op) : MaskedStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskedStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MaskedStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskedStoreOpAdaptor::MaskedStoreOpAdaptor(MaskedStoreOp op) : MaskedStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskedStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskedStoreOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MaskedStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> MaskedStoreOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range MaskedStoreOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> MaskedStoreOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskedStoreOp::getValueToStore() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &MaskedStoreOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MaskedStoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &MaskedStoreOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskedStoreOp::getValueToStoreMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskedStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskedStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MaskedStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value valueToStore) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(valueToStore);
}

void MaskedStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value mask, ::mlir::Value valueToStore) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(mask);
  odsState.addOperands(valueToStore);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaskedStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaskedStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MaskedStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valueToStoreRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueToStoreOperands(valueToStoreRawOperands);  ::llvm::SMLoc valueToStoreOperandsLoc;
  (void)valueToStoreOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type valueToStoreRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueToStoreTypes(valueToStoreRawTypes);

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

  valueToStoreOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueToStoreRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueToStoreRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valueToStoreOperands, valueToStoreTypes, valueToStoreOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskedStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
  _odsPrinter << getValueToStore();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getValueToStore().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MaskedStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::MaskedStoreOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::MatmulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatmulOpGenericAdaptorBase::MatmulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.matrix_multiply", odsAttrs.getContext());
}

MatmulOpGenericAdaptorBase::MatmulOpGenericAdaptorBase(MatmulOp op) : MatmulOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MatmulOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatmulOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MatmulOpGenericAdaptorBase::getLhsRowsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().lhs_rows);
  return attr;
}

uint32_t MatmulOpGenericAdaptorBase::getLhsRows() {
  auto attr = getLhsRowsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MatmulOpGenericAdaptorBase::getLhsColumnsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().lhs_columns);
  return attr;
}

uint32_t MatmulOpGenericAdaptorBase::getLhsColumns() {
  auto attr = getLhsColumnsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MatmulOpGenericAdaptorBase::getRhsColumnsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().rhs_columns);
  return attr;
}

uint32_t MatmulOpGenericAdaptorBase::getRhsColumns() {
  auto attr = getRhsColumnsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MatmulOpAdaptor::MatmulOpAdaptor(MatmulOp op) : MatmulOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MatmulOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_lhs_columns = getProperties().lhs_columns; (void)tblgen_lhs_columns;
  if (!tblgen_lhs_columns) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'lhs_columns'");
  auto tblgen_lhs_rows = getProperties().lhs_rows; (void)tblgen_lhs_rows;
  if (!tblgen_lhs_rows) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'lhs_rows'");
  auto tblgen_rhs_columns = getProperties().rhs_columns; (void)tblgen_rhs_columns;
  if (!tblgen_rhs_columns) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'rhs_columns'");

  if (tblgen_lhs_rows && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_lhs_rows))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_lhs_rows).getType().isSignlessInteger(32)))))
    return emitError(loc, "'vector.matrix_multiply' op ""attribute 'lhs_rows' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_lhs_columns && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_lhs_columns))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_lhs_columns).getType().isSignlessInteger(32)))))
    return emitError(loc, "'vector.matrix_multiply' op ""attribute 'lhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_rhs_columns && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_rhs_columns))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_rhs_columns).getType().isSignlessInteger(32)))))
    return emitError(loc, "'vector.matrix_multiply' op ""attribute 'rhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatmulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MatmulOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MatmulOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MatmulOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MatmulOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MatmulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MatmulOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MatmulOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.lhs_columns;
       auto attr = dict.get("lhs_columns");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for lhs_columns in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `lhs_columns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.lhs_rows;
       auto attr = dict.get("lhs_rows");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for lhs_rows in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `lhs_rows` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.rhs_columns;
       auto attr = dict.get("rhs_columns");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for rhs_columns in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `rhs_columns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatmulOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.lhs_columns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lhs_columns",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.lhs_rows;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lhs_rows",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.rhs_columns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("rhs_columns",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatmulOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.lhs_columns.getAsOpaquePointer()), 
    llvm::hash_value(prop.lhs_rows.getAsOpaquePointer()), 
    llvm::hash_value(prop.rhs_columns.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatmulOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "lhs_columns")
      return prop.lhs_columns;

    if (name == "lhs_rows")
      return prop.lhs_rows;

    if (name == "rhs_columns")
      return prop.rhs_columns;
  return std::nullopt;
}

void MatmulOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "lhs_columns") {
       prop.lhs_columns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lhs_columns)>>(value);
       return;
    }

    if (name == "lhs_rows") {
       prop.lhs_rows = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lhs_rows)>>(value);
       return;
    }

    if (name == "rhs_columns") {
       prop.rhs_columns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.rhs_columns)>>(value);
       return;
    }
}

void MatmulOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.lhs_columns) attrs.append("lhs_columns", prop.lhs_columns);

    if (prop.lhs_rows) attrs.append("lhs_rows", prop.lhs_rows);

    if (prop.rhs_columns) attrs.append("rhs_columns", prop.rhs_columns);
}

::mlir::LogicalResult MatmulOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLhsColumnsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(attr, "lhs_columns", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLhsRowsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(attr, "lhs_rows", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRhsColumnsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(attr, "rhs_columns", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MatmulOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.lhs_columns)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.lhs_rows)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.rhs_columns)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatmulOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.lhs_columns);
  writer.writeAttribute(prop.lhs_rows);
  writer.writeAttribute(prop.rhs_columns);
}

::mlir::IntegerAttr MatmulOp::getLhsRowsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().lhs_rows);
}

uint32_t MatmulOp::getLhsRows() {
  auto attr = getLhsRowsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MatmulOp::getLhsColumnsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().lhs_columns);
}

uint32_t MatmulOp::getLhsColumns() {
  auto attr = getLhsColumnsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MatmulOp::getRhsColumnsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().rhs_columns);
}

uint32_t MatmulOp::getRhsColumns() {
  auto attr = getRhsColumnsAttr();
  return attr.getValue().getZExtValue();
}

void MatmulOp::setLhsRowsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLhsRowsAttrName(), attr);
}

void MatmulOp::setLhsRows(uint32_t attrValue) {
  (*this)->setAttr(getLhsRowsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MatmulOp::setLhsColumnsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLhsColumnsAttrName(), attr);
}

void MatmulOp::setLhsColumns(uint32_t attrValue) {
  (*this)->setAttr(getLhsColumnsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MatmulOp::setRhsColumnsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getRhsColumnsAttrName(), attr);
}

void MatmulOp::setRhsColumns(uint32_t attrValue) {
  (*this)->setAttr(getRhsColumnsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value lhs, Value rhs, unsigned lhsRows, unsigned lhsColumns, unsigned rhsColumns) {
     odsState.addOperands({lhs, rhs});
     odsState.addAttribute("lhs_rows",odsBuilder.getI32IntegerAttr(lhsRows));
     odsState.addAttribute("lhs_columns",odsBuilder.getI32IntegerAttr(lhsColumns));
     odsState.addAttribute("rhs_columns",odsBuilder.getI32IntegerAttr(rhsColumns));
     odsState.addTypes(VectorType::get(lhsRows * rhsColumns,
       ::llvm::cast<VectorType>(lhs.getType()).getElementType()));
   
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::IntegerAttr lhs_rows, ::mlir::IntegerAttr lhs_columns, ::mlir::IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().lhs_rows = lhs_rows;
  odsState.getOrAddProperties<Properties>().lhs_columns = lhs_columns;
  odsState.getOrAddProperties<Properties>().rhs_columns = rhs_columns;
  odsState.addTypes(res);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::IntegerAttr lhs_rows, ::mlir::IntegerAttr lhs_columns, ::mlir::IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().lhs_rows = lhs_rows;
  odsState.getOrAddProperties<Properties>().lhs_columns = lhs_columns;
  odsState.getOrAddProperties<Properties>().rhs_columns = rhs_columns;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, uint32_t lhs_rows, uint32_t lhs_columns, uint32_t rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().lhs_rows = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows);
  odsState.getOrAddProperties<Properties>().lhs_columns = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns);
  odsState.getOrAddProperties<Properties>().rhs_columns = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns);
  odsState.addTypes(res);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, uint32_t lhs_rows, uint32_t lhs_columns, uint32_t rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().lhs_rows = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows);
  odsState.getOrAddProperties<Properties>().lhs_columns = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns);
  odsState.getOrAddProperties<Properties>().rhs_columns = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatmulOp::verifyInvariantsImpl() {
  auto tblgen_lhs_columns = getProperties().lhs_columns; (void)tblgen_lhs_columns;
  if (!tblgen_lhs_columns) return emitOpError("requires attribute 'lhs_columns'");
  auto tblgen_lhs_rows = getProperties().lhs_rows; (void)tblgen_lhs_rows;
  if (!tblgen_lhs_rows) return emitOpError("requires attribute 'lhs_rows'");
  auto tblgen_rhs_columns = getProperties().rhs_columns; (void)tblgen_rhs_columns;
  if (!tblgen_rhs_columns) return emitOpError("requires attribute 'rhs_columns'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(*this, tblgen_lhs_rows, "lhs_rows")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(*this, tblgen_lhs_columns, "lhs_columns")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps5(*this, tblgen_rhs_columns, "rhs_columns")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that lhs operand and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that rhs operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult MatmulOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatmulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

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
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatmulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MatmulOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::MatmulOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::MultiDimReductionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MultiDimReductionOpGenericAdaptorBase::MultiDimReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.multi_reduction", odsAttrs.getContext());
}

MultiDimReductionOpGenericAdaptorBase::MultiDimReductionOpGenericAdaptorBase(MultiDimReductionOp op) : MultiDimReductionOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MultiDimReductionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MultiDimReductionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::CombiningKindAttr MultiDimReductionOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::cast<::mlir::vector::CombiningKindAttr>(getProperties().kind);
  return attr;
}

::mlir::vector::CombiningKind MultiDimReductionOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::ArrayAttr MultiDimReductionOpGenericAdaptorBase::getReductionDimsAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().reduction_dims);
  return attr;
}

::mlir::ArrayAttr MultiDimReductionOpGenericAdaptorBase::getReductionDims() {
  auto attr = getReductionDimsAttr();
  return attr;
}

} // namespace detail
MultiDimReductionOpAdaptor::MultiDimReductionOpAdaptor(MultiDimReductionOp op) : MultiDimReductionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MultiDimReductionOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitError(loc, "'vector.multi_reduction' op ""requires attribute 'kind'");
  auto tblgen_reduction_dims = getProperties().reduction_dims; (void)tblgen_reduction_dims;
  if (!tblgen_reduction_dims) return emitError(loc, "'vector.multi_reduction' op ""requires attribute 'reduction_dims'");

  if (tblgen_kind && !((::llvm::isa<::mlir::vector::CombiningKindAttr>(tblgen_kind))))
    return emitError(loc, "'vector.multi_reduction' op ""attribute 'kind' failed to satisfy constraint: Kind of combining function for contractions and reductions");

  if (tblgen_reduction_dims && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_reduction_dims))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_reduction_dims), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.multi_reduction' op ""attribute 'reduction_dims' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MultiDimReductionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MultiDimReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MultiDimReductionOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value MultiDimReductionOp::getAcc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MultiDimReductionOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MultiDimReductionOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MultiDimReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MultiDimReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MultiDimReductionOp::getDest() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MultiDimReductionOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/true) {
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

  {
    auto &propStorage = prop.reduction_dims;
       auto attr = dict.get("reduction_dims");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for reduction_dims in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction_dims` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MultiDimReductionOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction_dims;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction_dims",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MultiDimReductionOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.kind.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction_dims.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MultiDimReductionOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kind")
      return prop.kind;

    if (name == "reduction_dims")
      return prop.reduction_dims;
  return std::nullopt;
}

void MultiDimReductionOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }

    if (name == "reduction_dims") {
       prop.reduction_dims = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction_dims)>>(value);
       return;
    }
}

void MultiDimReductionOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kind) attrs.append("kind", prop.kind);

    if (prop.reduction_dims) attrs.append("reduction_dims", prop.reduction_dims);
}

::mlir::LogicalResult MultiDimReductionOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(attr, "kind", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionDimsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "reduction_dims", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MultiDimReductionOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.kind)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.reduction_dims)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiDimReductionOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.kind);
  writer.writeAttribute(prop.reduction_dims);
}

::mlir::vector::CombiningKindAttr MultiDimReductionOp::getKindAttr() {
  return ::llvm::cast<::mlir::vector::CombiningKindAttr>(getProperties().kind);
}

::mlir::vector::CombiningKind MultiDimReductionOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::ArrayAttr MultiDimReductionOp::getReductionDimsAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().reduction_dims);
}

::mlir::ArrayAttr MultiDimReductionOp::getReductionDims() {
  auto attr = getReductionDimsAttr();
  return attr;
}

void MultiDimReductionOp::setKindAttr(::mlir::vector::CombiningKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void MultiDimReductionOp::setKind(::mlir::vector::CombiningKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::vector::CombiningKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MultiDimReductionOp::setReductionDimsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getReductionDimsAttrName(), attr);
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value source, ::mlir::Value acc, ::mlir::ArrayAttr reduction_dims) {
  odsState.addOperands(source);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.getOrAddProperties<Properties>().reduction_dims = reduction_dims;
  odsState.addTypes(dest);
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value source, ::mlir::Value acc, ::mlir::ArrayAttr reduction_dims) {
  odsState.addOperands(source);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.getOrAddProperties<Properties>().reduction_dims = reduction_dims;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MultiDimReductionOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value source, ::mlir::Value acc, ::mlir::ArrayAttr reduction_dims) {
  odsState.addOperands(source);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.getOrAddProperties<Properties>().reduction_dims = reduction_dims;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::vector::CombiningKind kind, ::mlir::Value source, ::mlir::Value acc, ::mlir::ArrayAttr reduction_dims) {
  odsState.addOperands(source);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().reduction_dims = reduction_dims;
  odsState.addTypes(dest);
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::CombiningKind kind, ::mlir::Value source, ::mlir::Value acc, ::mlir::ArrayAttr reduction_dims) {
  odsState.addOperands(source);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().reduction_dims = reduction_dims;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MultiDimReductionOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::CombiningKind kind, ::mlir::Value source, ::mlir::Value acc, ::mlir::ArrayAttr reduction_dims) {
  odsState.addOperands(source);
  odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().reduction_dims = reduction_dims;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiDimReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MultiDimReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MultiDimReductionOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MultiDimReductionOp::verifyInvariantsImpl() {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitOpError("requires attribute 'kind'");
  auto tblgen_reduction_dims = getProperties().reduction_dims; (void)tblgen_reduction_dims;
  if (!tblgen_reduction_dims) return emitOpError("requires attribute 'reduction_dims'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(*this, tblgen_kind, "kind")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_reduction_dims, "reduction_dims")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {dest, acc} have same type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult MultiDimReductionOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult MultiDimReductionOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MultiDimReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::CombiningKindAttr kindAttr;
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::ArrayAttr reduction_dimsAttr;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<MultiDimReductionOp::Properties>().kind = kindAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
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

  if (parser.parseCustomAttributeWithFallback(reduction_dimsAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (reduction_dimsAttr) result.getOrAddProperties<MultiDimReductionOp::Properties>().reduction_dims = reduction_dimsAttr;
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, destTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiDimReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("kind");
  elidedAttrs.push_back("reduction_dims");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getReductionDimsAttr());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MultiDimReductionOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::MultiDimReductionOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::OuterProductOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OuterProductOpGenericAdaptorBase::OuterProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.outerproduct", odsAttrs.getContext());
}

OuterProductOpGenericAdaptorBase::OuterProductOpGenericAdaptorBase(OuterProductOp op) : OuterProductOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OuterProductOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr OuterProductOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::CombiningKindAttr OuterProductOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::CombiningKindAttr>(getProperties().kind);
  return attr;
}

::mlir::vector::CombiningKind OuterProductOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

} // namespace detail
OuterProductOpAdaptor::OuterProductOpAdaptor(OuterProductOp op) : OuterProductOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OuterProductOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;

  if (tblgen_kind && !((::llvm::isa<::mlir::vector::CombiningKindAttr>(tblgen_kind))))
    return emitError(loc, "'vector.outerproduct' op ""attribute 'kind' failed to satisfy constraint: Kind of combining function for contractions and reductions");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OuterProductOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range OuterProductOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> OuterProductOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value OuterProductOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> OuterProductOp::getAcc() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &OuterProductOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &OuterProductOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange OuterProductOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
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

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code OuterProductOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.kind.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> OuterProductOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kind")
      return prop.kind;
  return std::nullopt;
}

void OuterProductOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }
}

void OuterProductOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kind) attrs.append("kind", prop.kind);
}

::mlir::LogicalResult OuterProductOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(attr, "kind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult OuterProductOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.kind)))
    return ::mlir::failure();
  return ::mlir::success();
}

void OuterProductOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.kind);
}

::mlir::vector::CombiningKindAttr OuterProductOp::getKindAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::CombiningKindAttr>(getProperties().kind);
}

::mlir::vector::CombiningKind OuterProductOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

void OuterProductOp::setKindAttr(::mlir::vector::CombiningKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void OuterProductOp::setKind(::mlir::vector::CombiningKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::vector::CombiningKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value acc, ::mlir::vector::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (acc)
    odsState.addOperands(acc);
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }
  odsState.addTypes(resultType0);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value acc, ::mlir::vector::CombiningKindAttr kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (acc)
    odsState.addOperands(acc);
  if (kind) {
    odsState.getOrAddProperties<Properties>().kind = kind;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value acc, ::mlir::vector::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (acc)
    odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.addTypes(resultType0);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value acc, ::mlir::vector::CombiningKind kind) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (acc)
    odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
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

void OuterProductOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.kind)
    properties.kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), CombiningKind::ADD);
}

::mlir::LogicalResult OuterProductOp::verifyInvariantsImpl() {
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(*this, tblgen_kind, "kind")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that lhs operand and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that rhs operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult OuterProductOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

void OuterProductOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::OuterProductOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::PrintOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PrintOpGenericAdaptorBase::PrintOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.print", odsAttrs.getContext());
}

PrintOpGenericAdaptorBase::PrintOpGenericAdaptorBase(PrintOp op) : PrintOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PrintOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr PrintOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::PrintPunctuationAttr PrintOpGenericAdaptorBase::getPunctuationAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::PrintPunctuationAttr>(getProperties().punctuation);
  return attr;
}

::mlir::vector::PrintPunctuation PrintOpGenericAdaptorBase::getPunctuation() {
  auto attr = getPunctuationAttr();
  return attr.getValue();
}

::mlir::StringAttr PrintOpGenericAdaptorBase::getStringLiteralAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().stringLiteral);
  return attr;
}

::std::optional<::mlir::StringAttr> PrintOpGenericAdaptorBase::getStringLiteral() {
  auto attr = getStringLiteralAttr();
  return attr ? ::std::optional<::mlir::StringAttr>(::llvm::cast<::mlir::StringAttr>(attr)) : (::std::nullopt);
}

} // namespace detail
PrintOpAdaptor::PrintOpAdaptor(PrintOp op) : PrintOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PrintOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_punctuation = getProperties().punctuation; (void)tblgen_punctuation;
  auto tblgen_stringLiteral = getProperties().stringLiteral; (void)tblgen_stringLiteral;

  if (tblgen_punctuation && !((::llvm::isa<::mlir::vector::PrintPunctuationAttr>(tblgen_punctuation))))
    return emitError(loc, "'vector.print' op ""attribute 'punctuation' failed to satisfy constraint: Punctuation for separating vectors or vector elements");

  if (tblgen_stringLiteral && !((::llvm::isa<::mlir::StringAttr>(tblgen_stringLiteral))))
    return emitError(loc, "'vector.print' op ""attribute 'stringLiteral' failed to satisfy constraint: An Attribute containing a string");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PrintOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range PrintOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PrintOp::getSource() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange PrintOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PrintOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PrintOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult PrintOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.punctuation;
       auto attr = dict.get("punctuation");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for punctuation in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `punctuation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.stringLiteral;
       auto attr = dict.get("stringLiteral");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for stringLiteral in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stringLiteral` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PrintOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.punctuation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("punctuation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.stringLiteral;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stringLiteral",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PrintOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.punctuation.getAsOpaquePointer()), 
    llvm::hash_value(prop.stringLiteral.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PrintOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "punctuation")
      return prop.punctuation;

    if (name == "stringLiteral")
      return prop.stringLiteral;
  return std::nullopt;
}

void PrintOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "punctuation") {
       prop.punctuation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.punctuation)>>(value);
       return;
    }

    if (name == "stringLiteral") {
       prop.stringLiteral = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stringLiteral)>>(value);
       return;
    }
}

void PrintOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.punctuation) attrs.append("punctuation", prop.punctuation);

    if (prop.stringLiteral) attrs.append("stringLiteral", prop.stringLiteral);
}

::mlir::LogicalResult PrintOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPunctuationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps7(attr, "punctuation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStringLiteralAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps8(attr, "stringLiteral", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PrintOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.punctuation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.stringLiteral)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PrintOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.punctuation);

  writer.writeOptionalAttribute(prop.stringLiteral);
}

::mlir::vector::PrintPunctuationAttr PrintOp::getPunctuationAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::PrintPunctuationAttr>(getProperties().punctuation);
}

::mlir::vector::PrintPunctuation PrintOp::getPunctuation() {
  auto attr = getPunctuationAttr();
  return attr.getValue();
}

::mlir::StringAttr PrintOp::getStringLiteralAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().stringLiteral);
}

::std::optional<::mlir::StringAttr> PrintOp::getStringLiteral() {
  auto attr = getStringLiteralAttr();
  return attr ? ::std::optional<::mlir::StringAttr>(::llvm::cast<::mlir::StringAttr>(attr)) : (::std::nullopt);
}

void PrintOp::setPunctuationAttr(::mlir::vector::PrintPunctuationAttr attr) {
  (*this)->setAttr(getPunctuationAttrName(), attr);
}

void PrintOp::setPunctuation(::mlir::vector::PrintPunctuation attrValue) {
  (*this)->setAttr(getPunctuationAttrName(), ::mlir::vector::PrintPunctuationAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void PrintOp::setStringLiteralAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getStringLiteralAttrName(), attr);
}

::mlir::Attribute PrintOp::removeStringLiteralAttr() {
    auto &attr = getProperties().stringLiteral;
    attr = {};
    return attr;
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, PrintPunctuation punctuation) {
      build(odsBuilder, odsState, {}, punctuation, {});
    
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source) {
      build(odsBuilder, odsState, source, PrintPunctuation::NewLine);
    
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, PrintPunctuation punctuation) {
      build(odsBuilder, odsState, source, punctuation, {});
    
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef string) {
      build(odsBuilder, odsState, {}, PrintPunctuation::NewLine, odsBuilder.getStringAttr(string));
    
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value source, ::mlir::vector::PrintPunctuationAttr punctuation, /*optional*/::mlir::StringAttr stringLiteral) {
  if (source)
    odsState.addOperands(source);
  if (punctuation) {
    odsState.getOrAddProperties<Properties>().punctuation = punctuation;
  }
  if (stringLiteral) {
    odsState.getOrAddProperties<Properties>().stringLiteral = stringLiteral;
  }
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value source, ::mlir::vector::PrintPunctuationAttr punctuation, /*optional*/::mlir::StringAttr stringLiteral) {
  if (source)
    odsState.addOperands(source);
  if (punctuation) {
    odsState.getOrAddProperties<Properties>().punctuation = punctuation;
  }
  if (stringLiteral) {
    odsState.getOrAddProperties<Properties>().stringLiteral = stringLiteral;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value source, ::mlir::vector::PrintPunctuation punctuation, /*optional*/::mlir::StringAttr stringLiteral) {
  if (source)
    odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().punctuation = ::mlir::vector::PrintPunctuationAttr::get(odsBuilder.getContext(), punctuation);
  if (stringLiteral) {
    odsState.getOrAddProperties<Properties>().stringLiteral = stringLiteral;
  }
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value source, ::mlir::vector::PrintPunctuation punctuation, /*optional*/::mlir::StringAttr stringLiteral) {
  if (source)
    odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().punctuation = ::mlir::vector::PrintPunctuationAttr::get(odsBuilder.getContext(), punctuation);
  if (stringLiteral) {
    odsState.getOrAddProperties<Properties>().stringLiteral = stringLiteral;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrintOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PrintOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.punctuation)
    properties.punctuation = ::mlir::vector::PrintPunctuationAttr::get(odsBuilder.getContext(), ::mlir::vector::PrintPunctuation::NewLine);
}

::mlir::LogicalResult PrintOp::verifyInvariantsImpl() {
  auto tblgen_punctuation = getProperties().punctuation; (void)tblgen_punctuation;
  auto tblgen_stringLiteral = getProperties().stringLiteral; (void)tblgen_stringLiteral;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps7(*this, tblgen_punctuation, "punctuation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps8(*this, tblgen_stringLiteral, "stringLiteral")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps16(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((!getStringLiteral() || (!getSource() && getPunctuation() == PrintPunctuation::NewLine))))
    return emitOpError("failed to verify that `source` or `punctuation` are not set when printing strings");
  return ::mlir::success();
}

::mlir::LogicalResult PrintOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PrintOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sourceOperands;
  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> sourceTypes;
  ::mlir::StringAttr stringLiteralAttr;
  ::mlir::vector::PrintPunctuationAttr punctuationAttr;

  {
    sourceOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sourceOperands.push_back(operand);
    }
  }
  if (!sourceOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sourceTypes.push_back(optionalType);
    }
  }
  }
  bool strClause = false;
  bool punctuationClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("str"))) {

  if (strClause) {
    return parser.emitError(parser.getNameLoc())
          << "`str` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  strClause = true;

  ::mlir::OptionalParseResult parseResultstringLiteralAttr =
    parser.parseOptionalAttribute(stringLiteralAttr, ::mlir::Type{});
  if (parseResultstringLiteralAttr.has_value() && failed(*parseResultstringLiteralAttr))
    return ::mlir::failure();
  if (parseResultstringLiteralAttr.has_value() && succeeded(*parseResultstringLiteralAttr))
  if (stringLiteralAttr) result.getOrAddProperties<PrintOp::Properties>().stringLiteral = stringLiteralAttr;
    } else if (succeeded(parser.parseOptionalKeyword("punctuation"))) {

  if (punctuationClause) {
    return parser.emitError(parser.getNameLoc())
          << "`punctuation` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  punctuationClause = true;

  if (parser.parseCustomAttributeWithFallback(punctuationAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (punctuationAttr) result.getOrAddProperties<PrintOp::Properties>().punctuation = punctuationAttr;
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
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PrintOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getSource()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getSource())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getSource() ? ::llvm::ArrayRef<::mlir::Type>(getSource().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
  if (false || (getStringLiteralAttr())) {
  _odsPrinter << ' ' << "str";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getStringLiteralAttr());
  }
  if (false || (getPunctuationAttr() && getPunctuationAttr() != ::mlir::vector::PrintPunctuationAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::vector::PrintPunctuation::NewLine))) {
  _odsPrinter << ' ' << "punctuation";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getPunctuationAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("stringLiteral");
  elidedAttrs.push_back("punctuation");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPunctuationAttr();
     if(attr && (attr == ::mlir::vector::PrintPunctuationAttr::get(odsBuilder.getContext(), ::mlir::vector::PrintPunctuation::NewLine)))
       elidedAttrs.push_back("punctuation");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void PrintOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::PrintOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ReductionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReductionOpGenericAdaptorBase::ReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.reduction", odsAttrs.getContext());
}

ReductionOpGenericAdaptorBase::ReductionOpGenericAdaptorBase(ReductionOp op) : ReductionOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReductionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ReductionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::CombiningKindAttr ReductionOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::cast<::mlir::vector::CombiningKindAttr>(getProperties().kind);
  return attr;
}

::mlir::vector::CombiningKind ReductionOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::arith::FastMathFlagsAttr ReductionOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ReductionOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ReductionOpAdaptor::ReductionOpAdaptor(ReductionOp op) : ReductionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReductionOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitError(loc, "'vector.reduction' op ""requires attribute 'kind'");

  if (tblgen_kind && !((::llvm::isa<::mlir::vector::CombiningKindAttr>(tblgen_kind))))
    return emitError(loc, "'vector.reduction' op ""attribute 'kind' failed to satisfy constraint: Kind of combining function for contractions and reductions");

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'vector.reduction' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReductionOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ReductionOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Value ReductionOp::getAcc() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &ReductionOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ReductionOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOp::getDest() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReductionOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fastmath;
       auto attr = dict.get("fastmath");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for fastmath in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `fastmath` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/true) {
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
  return ::mlir::success();
}

::mlir::Attribute ReductionOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReductionOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()), 
    llvm::hash_value(prop.kind.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReductionOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;

    if (name == "kind")
      return prop.kind;
  return std::nullopt;
}

void ReductionOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }

    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }
}

void ReductionOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);

    if (prop.kind) attrs.append("kind", prop.kind);
}

::mlir::LogicalResult ReductionOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps9(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(attr, "kind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReductionOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.kind)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReductionOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
  writer.writeAttribute(prop.kind);
}

::mlir::vector::CombiningKindAttr ReductionOp::getKindAttr() {
  return ::llvm::cast<::mlir::vector::CombiningKindAttr>(getProperties().kind);
}

::mlir::vector::CombiningKind ReductionOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::arith::FastMathFlagsAttr ReductionOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ReductionOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ReductionOp::setKindAttr(::mlir::vector::CombiningKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void ReductionOp::setKind(::mlir::vector::CombiningKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::vector::CombiningKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReductionOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ReductionOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value vector, /*optional*/::mlir::Value acc, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(vector);
  if (acc)
    odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = kind;
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(dest);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value vector, /*optional*/::mlir::Value acc, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(vector);
  if (acc)
    odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = kind;
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::vector::CombiningKind kind, ::mlir::Value vector, /*optional*/::mlir::Value acc, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(vector);
  if (acc)
    odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(dest);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::CombiningKind kind, ::mlir::Value vector, /*optional*/::mlir::Value acc, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(vector);
  if (acc)
    odsState.addOperands(acc);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReductionOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ReductionOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitOpError("requires attribute 'kind'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(*this, tblgen_kind, "kind")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps9(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  if (!((!getDest() || !getAcc() || std::equal_to<>()(::llvm::cast<Type>((*this->getODSResults(0).begin()).getType()), (*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that dest and acc have the same type");
  return ::mlir::success();
}

::mlir::LogicalResult ReductionOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::CombiningKindAttr kindAttr;
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> accOperands;
  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<ReductionOp::Properties>().kind = kindAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

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
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ReductionOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  for (::mlir::Type type : destTypes) {
    (void)type;
    if (!((true))) {
      return parser.emitError(parser.getNameLoc()) << "'dest' must be any type, but got " << type;
    }
  }
  result.addTypes(destTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, ::llvm::cast<Type>(destTypes[0]), accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  if (getAcc()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getAcc())
      _odsPrinter << value;
  }
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("kind");
  elidedAttrs.push_back("fastmath");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFastmathAttr();
     if(attr && (attr == ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none)))
       elidedAttrs.push_back("fastmath");
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
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ReductionOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ReductionOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ReshapeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReshapeOpGenericAdaptorBase::ReshapeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.reshape", odsAttrs.getContext());
}

ReshapeOpGenericAdaptorBase::ReshapeOpGenericAdaptorBase(ReshapeOp op) : ReshapeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReshapeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ReshapeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ReshapeOpGenericAdaptorBase::getFixedVectorSizesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().fixed_vector_sizes);
  return attr;
}

::mlir::ArrayAttr ReshapeOpGenericAdaptorBase::getFixedVectorSizes() {
  auto attr = getFixedVectorSizesAttr();
  return attr;
}

} // namespace detail
ReshapeOpAdaptor::ReshapeOpAdaptor(ReshapeOp op) : ReshapeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReshapeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fixed_vector_sizes = getProperties().fixed_vector_sizes; (void)tblgen_fixed_vector_sizes;
  if (!tblgen_fixed_vector_sizes) return emitError(loc, "'vector.reshape' op ""requires attribute 'fixed_vector_sizes'");

  if (tblgen_fixed_vector_sizes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_fixed_vector_sizes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_fixed_vector_sizes), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.reshape' op ""attribute 'fixed_vector_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ReshapeOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ReshapeOp::getInputShape() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range ReshapeOp::getOutputShape() {
  return getODSOperands(2);
}

::mlir::OpOperand &ReshapeOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ReshapeOp::getInputShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ReshapeOp::getOutputShapeMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> ReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ReshapeOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReshapeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fixed_vector_sizes;
       auto attr = dict.get("fixed_vector_sizes");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for fixed_vector_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `fixed_vector_sizes` in property conversion: " << attr;
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

::mlir::Attribute ReshapeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fixed_vector_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fixed_vector_sizes",
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

llvm::hash_code ReshapeOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.fixed_vector_sizes.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> ReshapeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fixed_vector_sizes")
      return prop.fixed_vector_sizes;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void ReshapeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fixed_vector_sizes") {
       prop.fixed_vector_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fixed_vector_sizes)>>(value);
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

void ReshapeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fixed_vector_sizes) attrs.append("fixed_vector_sizes", prop.fixed_vector_sizes);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult ReshapeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFixedVectorSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "fixed_vector_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReshapeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.fixed_vector_sizes)))
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

void ReshapeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.fixed_vector_sizes);

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

::mlir::ArrayAttr ReshapeOp::getFixedVectorSizesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().fixed_vector_sizes);
}

::mlir::ArrayAttr ReshapeOp::getFixedVectorSizes() {
  auto attr = getFixedVectorSizesAttr();
  return attr;
}

void ReshapeOp::setFixedVectorSizesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getFixedVectorSizesAttrName(), attr);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::ValueRange input_shape, ::mlir::ValueRange output_shape, ::mlir::ArrayAttr fixed_vector_sizes) {
  odsState.addOperands(vector);
  odsState.addOperands(input_shape);
  odsState.addOperands(output_shape);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(input_shape.size()), static_cast<int32_t>(output_shape.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().fixed_vector_sizes = fixed_vector_sizes;
  odsState.addTypes(result);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::ValueRange input_shape, ::mlir::ValueRange output_shape, ::mlir::ArrayAttr fixed_vector_sizes) {
  odsState.addOperands(vector);
  odsState.addOperands(input_shape);
  odsState.addOperands(output_shape);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(input_shape.size()), static_cast<int32_t>(output_shape.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().fixed_vector_sizes = fixed_vector_sizes;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReshapeOp::verifyInvariantsImpl() {
  auto tblgen_fixed_vector_sizes = getProperties().fixed_vector_sizes; (void)tblgen_fixed_vector_sizes;
  if (!tblgen_fixed_vector_sizes) return emitOpError("requires attribute 'fixed_vector_sizes'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_fixed_vector_sizes, "fixed_vector_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> input_shapeOperands;
  ::llvm::SMLoc input_shapeOperandsLoc;
  (void)input_shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> output_shapeOperands;
  ::llvm::SMLoc output_shapeOperandsLoc;
  (void)output_shapeOperandsLoc;
  ::mlir::ArrayAttr fixed_vector_sizesAttr;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  input_shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(input_shapeOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  output_shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(output_shapeOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(fixed_vector_sizesAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (fixed_vector_sizesAttr) result.getOrAddProperties<ReshapeOp::Properties>().fixed_vector_sizes = fixed_vector_sizesAttr;
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
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(input_shapeOperands.size()), static_cast<int32_t>(output_shapeOperands.size())}), result.getOrAddProperties<ReshapeOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(input_shapeOperands, odsBuildableType0, input_shapeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(output_shapeOperands, odsBuildableType0, output_shapeOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReshapeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  _odsPrinter << ",";
  _odsPrinter << ' ' << "[";
  _odsPrinter << getInputShape();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ' << "[";
  _odsPrinter << getOutputShape();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getFixedVectorSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("fixed_vector_sizes");
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
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ReshapeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ReshapeOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ScalableExtractOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableExtractOpGenericAdaptorBase::ScalableExtractOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.scalable.extract", odsAttrs.getContext());
}

ScalableExtractOpGenericAdaptorBase::ScalableExtractOpGenericAdaptorBase(ScalableExtractOp op) : ScalableExtractOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableExtractOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableExtractOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ScalableExtractOpGenericAdaptorBase::getPosAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().pos);
  return attr;
}

uint64_t ScalableExtractOpGenericAdaptorBase::getPos() {
  auto attr = getPosAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ScalableExtractOpAdaptor::ScalableExtractOpAdaptor(ScalableExtractOp op) : ScalableExtractOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableExtractOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_pos = getProperties().pos; (void)tblgen_pos;
  if (!tblgen_pos) return emitError(loc, "'vector.scalable.extract' op ""requires attribute 'pos'");

  if (tblgen_pos && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_pos))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_pos).getType().isSignlessInteger(64)))))
    return emitError(loc, "'vector.scalable.extract' op ""attribute 'pos' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableExtractOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableExtractOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableExtractOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ScalableExtractOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableExtractOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableExtractOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableExtractOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ScalableExtractOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.pos;
       auto attr = dict.get("pos");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pos in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pos` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ScalableExtractOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.pos;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pos",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ScalableExtractOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.pos.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ScalableExtractOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "pos")
      return prop.pos;
  return std::nullopt;
}

void ScalableExtractOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "pos") {
       prop.pos = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pos)>>(value);
       return;
    }
}

void ScalableExtractOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.pos) attrs.append("pos", prop.pos);
}

::mlir::LogicalResult ScalableExtractOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPosAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(attr, "pos", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ScalableExtractOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.pos)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableExtractOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.pos);
}

::mlir::IntegerAttr ScalableExtractOp::getPosAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().pos);
}

uint64_t ScalableExtractOp::getPos() {
  auto attr = getPosAttr();
  return attr.getValue().getZExtValue();
}

void ScalableExtractOp::setPosAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getPosAttrName(), attr);
}

void ScalableExtractOp::setPos(uint64_t attrValue) {
  (*this)->setAttr(getPosAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ScalableExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::IntegerAttr pos) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().pos = pos;
  odsState.addTypes(res);
}

void ScalableExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::IntegerAttr pos) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().pos = pos;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, uint64_t pos) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().pos = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), pos);
  odsState.addTypes(res);
}

void ScalableExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, uint64_t pos) {
  odsState.addOperands(source);
  odsState.getOrAddProperties<Properties>().pos = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), pos);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableExtractOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableExtractOp::verifyInvariantsImpl() {
  auto tblgen_pos = getProperties().pos; (void)tblgen_pos;
  if (!tblgen_pos) return emitOpError("requires attribute 'pos'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(*this, tblgen_pos, "pos")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {source, res} have same element type");
  if (!(((getPos() % getResultVectorType().getNumElements()) == 0)))
    return emitOpError("failed to verify that position is a multiple of the result length.");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableExtractOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableExtractOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::IntegerAttr posAttr;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(posAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (posAttr) result.getOrAddProperties<ScalableExtractOp::Properties>().pos = posAttr;
  if (parser.parseRSquare())
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  if (parser.parseKeyword("from"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableExtractOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getPosAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("pos");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "from";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ScalableExtractOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ScalableExtractOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ScalableInsertOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableInsertOpGenericAdaptorBase::ScalableInsertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.scalable.insert", odsAttrs.getContext());
}

ScalableInsertOpGenericAdaptorBase::ScalableInsertOpGenericAdaptorBase(ScalableInsertOp op) : ScalableInsertOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableInsertOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableInsertOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ScalableInsertOpGenericAdaptorBase::getPosAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().pos);
  return attr;
}

uint64_t ScalableInsertOpGenericAdaptorBase::getPos() {
  auto attr = getPosAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ScalableInsertOpAdaptor::ScalableInsertOpAdaptor(ScalableInsertOp op) : ScalableInsertOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableInsertOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_pos = getProperties().pos; (void)tblgen_pos;
  if (!tblgen_pos) return emitError(loc, "'vector.scalable.insert' op ""requires attribute 'pos'");

  if (tblgen_pos && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_pos))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_pos).getType().isSignlessInteger(64)))))
    return emitError(loc, "'vector.scalable.insert' op ""attribute 'pos' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableInsertOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableInsertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableInsertOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableInsertOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ScalableInsertOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableInsertOp::getDestMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableInsertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableInsertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableInsertOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ScalableInsertOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.pos;
       auto attr = dict.get("pos");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pos in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pos` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ScalableInsertOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.pos;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pos",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ScalableInsertOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.pos.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ScalableInsertOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "pos")
      return prop.pos;
  return std::nullopt;
}

void ScalableInsertOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "pos") {
       prop.pos = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pos)>>(value);
       return;
    }
}

void ScalableInsertOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.pos) attrs.append("pos", prop.pos);
}

::mlir::LogicalResult ScalableInsertOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPosAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(attr, "pos", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ScalableInsertOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.pos)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableInsertOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.pos);
}

::mlir::IntegerAttr ScalableInsertOp::getPosAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().pos);
}

uint64_t ScalableInsertOp::getPos() {
  auto attr = getPosAttr();
  return attr.getValue().getZExtValue();
}

void ScalableInsertOp::setPosAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getPosAttrName(), attr);
}

void ScalableInsertOp::setPos(uint64_t attrValue) {
  (*this)->setAttr(getPosAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value dest, ::mlir::IntegerAttr pos) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().pos = pos;
  odsState.addTypes(res);
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value dest, ::mlir::IntegerAttr pos) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().pos = pos;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ScalableInsertOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::IntegerAttr pos) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().pos = pos;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value dest, uint64_t pos) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().pos = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), pos);
  odsState.addTypes(res);
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value dest, uint64_t pos) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().pos = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), pos);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ScalableInsertOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value dest, uint64_t pos) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.getOrAddProperties<Properties>().pos = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), pos);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableInsertOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ScalableInsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ScalableInsertOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ScalableInsertOp::verifyInvariantsImpl() {
  auto tblgen_pos = getProperties().pos; (void)tblgen_pos;
  if (!tblgen_pos) return emitOpError("requires attribute 'pos'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(*this, tblgen_pos, "pos")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps17(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(1).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {source, dest} have same element type");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {dest, res} have same type");
  if (!(((getPos() % getSourceVectorType().getNumElements()) == 0)))
    return emitOpError("failed to verify that position is a multiple of the source length.");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableInsertOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ScalableInsertOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ScalableInsertOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc;
  (void)destOperandsLoc;
  ::mlir::IntegerAttr posAttr;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  destOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(destRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(posAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (posAttr) result.getOrAddProperties<ScalableInsertOp::Properties>().pos = posAttr;
  if (parser.parseRSquare())
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  result.addTypes(destTypes[0]);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableInsertOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDest();
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getPosAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("pos");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ScalableInsertOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ScalableInsertOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ScanOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScanOpGenericAdaptorBase::ScanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.scan", odsAttrs.getContext());
}

ScanOpGenericAdaptorBase::ScanOpGenericAdaptorBase(ScanOp op) : ScanOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScanOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScanOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::CombiningKindAttr ScanOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::cast<::mlir::vector::CombiningKindAttr>(getProperties().kind);
  return attr;
}

::mlir::vector::CombiningKind ScanOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::IntegerAttr ScanOpGenericAdaptorBase::getReductionDimAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().reduction_dim);
  return attr;
}

uint64_t ScanOpGenericAdaptorBase::getReductionDim() {
  auto attr = getReductionDimAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr ScanOpGenericAdaptorBase::getInclusiveAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().inclusive);
  return attr;
}

bool ScanOpGenericAdaptorBase::getInclusive() {
  auto attr = getInclusiveAttr();
  return attr.getValue();
}

} // namespace detail
ScanOpAdaptor::ScanOpAdaptor(ScanOp op) : ScanOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScanOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  if (!tblgen_inclusive) return emitError(loc, "'vector.scan' op ""requires attribute 'inclusive'");
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitError(loc, "'vector.scan' op ""requires attribute 'kind'");
  auto tblgen_reduction_dim = getProperties().reduction_dim; (void)tblgen_reduction_dim;
  if (!tblgen_reduction_dim) return emitError(loc, "'vector.scan' op ""requires attribute 'reduction_dim'");

  if (tblgen_kind && !((::llvm::isa<::mlir::vector::CombiningKindAttr>(tblgen_kind))))
    return emitError(loc, "'vector.scan' op ""attribute 'kind' failed to satisfy constraint: Kind of combining function for contractions and reductions");

  if (tblgen_reduction_dim && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_reduction_dim))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_reduction_dim).getType().isSignlessInteger(64)))))
    return emitError(loc, "'vector.scan' op ""attribute 'reduction_dim' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_inclusive && !((::llvm::isa<::mlir::BoolAttr>(tblgen_inclusive))))
    return emitError(loc, "'vector.scan' op ""attribute 'inclusive' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

void ScanOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "dest");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "accumulated_value");
}

std::pair<unsigned, unsigned> ScanOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScanOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScanOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScanOp::getInitialValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ScanOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScanOp::getInitialValueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScanOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScanOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScanOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScanOp::getAccumulatedValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(1).begin());
}

::mlir::LogicalResult ScanOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inclusive;
       auto attr = dict.get("inclusive");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for inclusive in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inclusive` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/true) {
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

  {
    auto &propStorage = prop.reduction_dim;
       auto attr = dict.get("reduction_dim");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for reduction_dim in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction_dim` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ScanOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inclusive;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inclusive",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction_dim;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction_dim",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ScanOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inclusive.getAsOpaquePointer()), 
    llvm::hash_value(prop.kind.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction_dim.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ScanOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inclusive")
      return prop.inclusive;

    if (name == "kind")
      return prop.kind;

    if (name == "reduction_dim")
      return prop.reduction_dim;
  return std::nullopt;
}

void ScanOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inclusive") {
       prop.inclusive = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inclusive)>>(value);
       return;
    }

    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }

    if (name == "reduction_dim") {
       prop.reduction_dim = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction_dim)>>(value);
       return;
    }
}

void ScanOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inclusive) attrs.append("inclusive", prop.inclusive);

    if (prop.kind) attrs.append("kind", prop.kind);

    if (prop.reduction_dim) attrs.append("reduction_dim", prop.reduction_dim);
}

::mlir::LogicalResult ScanOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInclusiveAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps6(attr, "inclusive", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(attr, "kind", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionDimAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(attr, "reduction_dim", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ScanOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.inclusive)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.kind)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.reduction_dim)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScanOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.inclusive);
  writer.writeAttribute(prop.kind);
  writer.writeAttribute(prop.reduction_dim);
}

::mlir::vector::CombiningKindAttr ScanOp::getKindAttr() {
  return ::llvm::cast<::mlir::vector::CombiningKindAttr>(getProperties().kind);
}

::mlir::vector::CombiningKind ScanOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

::mlir::IntegerAttr ScanOp::getReductionDimAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().reduction_dim);
}

uint64_t ScanOp::getReductionDim() {
  auto attr = getReductionDimAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr ScanOp::getInclusiveAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().inclusive);
}

bool ScanOp::getInclusive() {
  auto attr = getInclusiveAttr();
  return attr.getValue();
}

void ScanOp::setKindAttr(::mlir::vector::CombiningKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void ScanOp::setKind(::mlir::vector::CombiningKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::vector::CombiningKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ScanOp::setReductionDimAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getReductionDimAttrName(), attr);
}

void ScanOp::setReductionDim(uint64_t attrValue) {
  (*this)->setAttr(getReductionDimAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ScanOp::setInclusiveAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getInclusiveAttrName(), attr);
}

void ScanOp::setInclusive(bool attrValue) {
  (*this)->setAttr(getInclusiveAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::Type accumulated_value, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value source, ::mlir::Value initial_value, ::mlir::IntegerAttr reduction_dim, ::mlir::BoolAttr inclusive) {
  odsState.addOperands(source);
  odsState.addOperands(initial_value);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.getOrAddProperties<Properties>().reduction_dim = reduction_dim;
  odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  odsState.addTypes(dest);
  odsState.addTypes(accumulated_value);
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value source, ::mlir::Value initial_value, ::mlir::IntegerAttr reduction_dim, ::mlir::BoolAttr inclusive) {
  odsState.addOperands(source);
  odsState.addOperands(initial_value);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.getOrAddProperties<Properties>().reduction_dim = reduction_dim;
  odsState.getOrAddProperties<Properties>().inclusive = inclusive;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ScanOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::CombiningKindAttr kind, ::mlir::Value source, ::mlir::Value initial_value, ::mlir::IntegerAttr reduction_dim, ::mlir::BoolAttr inclusive) {
  odsState.addOperands(source);
  odsState.addOperands(initial_value);
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.getOrAddProperties<Properties>().reduction_dim = reduction_dim;
  odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::Type accumulated_value, ::mlir::vector::CombiningKind kind, ::mlir::Value source, ::mlir::Value initial_value, uint64_t reduction_dim, bool inclusive) {
  odsState.addOperands(source);
  odsState.addOperands(initial_value);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().reduction_dim = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), reduction_dim);
  odsState.getOrAddProperties<Properties>().inclusive = odsBuilder.getBoolAttr(inclusive);
  odsState.addTypes(dest);
  odsState.addTypes(accumulated_value);
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::CombiningKind kind, ::mlir::Value source, ::mlir::Value initial_value, uint64_t reduction_dim, bool inclusive) {
  odsState.addOperands(source);
  odsState.addOperands(initial_value);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().reduction_dim = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), reduction_dim);
  odsState.getOrAddProperties<Properties>().inclusive = odsBuilder.getBoolAttr(inclusive);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ScanOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::CombiningKind kind, ::mlir::Value source, ::mlir::Value initial_value, uint64_t reduction_dim, bool inclusive) {
  odsState.addOperands(source);
  odsState.addOperands(initial_value);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::vector::CombiningKindAttr::get(odsBuilder.getContext(), kind);
  odsState.getOrAddProperties<Properties>().reduction_dim = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), reduction_dim);
  odsState.getOrAddProperties<Properties>().inclusive = odsBuilder.getBoolAttr(inclusive);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScanOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ScanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ScanOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ScanOp::verifyInvariantsImpl() {
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  if (!tblgen_inclusive) return emitOpError("requires attribute 'inclusive'");
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitOpError("requires attribute 'kind'");
  auto tblgen_reduction_dim = getProperties().reduction_dim; (void)tblgen_reduction_dim;
  if (!tblgen_reduction_dim) return emitOpError("requires attribute 'reduction_dim'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps3(*this, tblgen_kind, "kind")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(*this, tblgen_reduction_dim, "reduction_dim")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps6(*this, tblgen_inclusive, "inclusive")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {source, dest} have same type");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(1).begin()).getType()) && ((*this->getODSResults(1).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {initial_value, accumulated_value} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult ScanOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult ScanOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  ::mlir::Type odsInferredType1 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  inferredReturnTypes[1] = odsInferredType1;
  return ::mlir::success();
}

::mlir::ParseResult ScanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::CombiningKindAttr kindAttr;
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand initial_valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> initial_valueOperands(initial_valueRawOperands);  ::llvm::SMLoc initial_valueOperandsLoc;
  (void)initial_valueOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type initial_valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> initial_valueTypes(initial_valueRawTypes);

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<ScanOp::Properties>().kind = kindAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  initial_valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(initial_valueRawOperands[0]))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    initial_valueRawTypes[0] = type;
  }
  result.addTypes(sourceTypes[0]);
  result.addTypes(initial_valueTypes[0]);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(initial_valueOperands, initial_valueTypes, initial_valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScanOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getInitialValue();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("kind");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getInitialValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ScanOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ScanOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ScatterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScatterOpGenericAdaptorBase::ScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.scatter", odsAttrs.getContext());
}

ScatterOpGenericAdaptorBase::ScatterOpGenericAdaptorBase(ScatterOp op) : ScatterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScatterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false, false, false};
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

::mlir::DictionaryAttr ScatterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScatterOpAdaptor::ScatterOpAdaptor(ScatterOp op) : ScatterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScatterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScatterOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, false, false};
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

::mlir::Operation::operand_range ScatterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> ScatterOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ScatterOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> ScatterOp::getIndexVec() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScatterOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScatterOp::getValueToStore() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &ScatterOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ScatterOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &ScatterOp::getIndexVecMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScatterOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScatterOp::getValueToStoreMutable() {
  auto range = getODSOperandIndexAndLength(4);
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

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value index_vec, ::mlir::Value mask, ::mlir::Value valueToStore) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(index_vec);
  odsState.addOperands(mask);
  odsState.addOperands(valueToStore);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value index_vec, ::mlir::Value mask, ::mlir::Value valueToStore) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(index_vec);
  odsState.addOperands(mask);
  odsState.addOperands(valueToStore);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScatterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScatterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScatterOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ScatterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand index_vecRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> index_vecOperands(index_vecRawOperands);  ::llvm::SMLoc index_vecOperandsLoc;
  (void)index_vecOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valueToStoreRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueToStoreOperands(valueToStoreRawOperands);  ::llvm::SMLoc valueToStoreOperandsLoc;
  (void)valueToStoreOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type index_vecRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> index_vecTypes(index_vecRawTypes);
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type valueToStoreRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueToStoreTypes(valueToStoreRawTypes);

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
  if (parser.parseLSquare())
    return ::mlir::failure();

  index_vecOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(index_vecRawOperands[0]))
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

  valueToStoreOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueToStoreRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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
    index_vecRawTypes[0] = type;
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueToStoreRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(index_vecOperands, index_vecTypes, index_vecOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valueToStoreOperands, valueToStoreTypes, valueToStoreOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScatterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  _odsPrinter << ' ' << "[";
  _odsPrinter << getIndexVec();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValueToStore();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getIndexVec().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
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
    auto type = getValueToStore().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ScatterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ScatterOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ShapeCastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShapeCastOpGenericAdaptorBase::ShapeCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.shape_cast", odsAttrs.getContext());
}

ShapeCastOpGenericAdaptorBase::ShapeCastOpGenericAdaptorBase(ShapeCastOp op) : ShapeCastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShapeCastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShapeCastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShapeCastOpAdaptor::ShapeCastOpAdaptor(ShapeCastOp op) : ShapeCastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShapeCastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShapeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShapeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ShapeCastOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ShapeCastOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShapeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShapeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ShapeCastOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ShapeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void ShapeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShapeCastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShapeCastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShapeCastOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ShapeCastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
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
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShapeCastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ShapeCastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ShapeCastOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::ShuffleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShuffleOpGenericAdaptorBase::ShuffleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.shuffle", odsAttrs.getContext());
}

ShuffleOpGenericAdaptorBase::ShuffleOpGenericAdaptorBase(ShuffleOp op) : ShuffleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShuffleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShuffleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ShuffleOpGenericAdaptorBase::getMaskAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().mask);
  return attr;
}

::mlir::ArrayAttr ShuffleOpGenericAdaptorBase::getMask() {
  auto attr = getMaskAttr();
  return attr;
}

} // namespace detail
ShuffleOpAdaptor::ShuffleOpAdaptor(ShuffleOp op) : ShuffleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShuffleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mask = getProperties().mask; (void)tblgen_mask;
  if (!tblgen_mask) return emitError(loc, "'vector.shuffle' op ""requires attribute 'mask'");

  if (tblgen_mask && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mask))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mask), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'vector.shuffle' op ""attribute 'mask' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShuffleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ShuffleOp::getV1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ShuffleOp::getV2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShuffleOp::getV1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShuffleOp::getV2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShuffleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShuffleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ShuffleOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ShuffleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mask;
       auto attr = dict.get("mask");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mask in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mask` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ShuffleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mask;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mask",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ShuffleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mask.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ShuffleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mask")
      return prop.mask;
  return std::nullopt;
}

void ShuffleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mask") {
       prop.mask = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mask)>>(value);
       return;
    }
}

void ShuffleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mask) attrs.append("mask", prop.mask);
}

::mlir::LogicalResult ShuffleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMaskAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(attr, "mask", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ShuffleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mask)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShuffleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mask);
}

::mlir::ArrayAttr ShuffleOp::getMaskAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().mask);
}

::mlir::ArrayAttr ShuffleOp::getMask() {
  auto attr = getMaskAttr();
  return attr;
}

void ShuffleOp::setMaskAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMaskAttrName(), attr);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.getOrAddProperties<Properties>().mask = mask;
  odsState.addTypes(vector);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.getOrAddProperties<Properties>().mask = mask;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShuffleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.getOrAddProperties<Properties>().mask = mask;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ShuffleOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ShuffleOp::verifyInvariantsImpl() {
  auto tblgen_mask = getProperties().mask; (void)tblgen_mask;
  if (!tblgen_mask) return emitOpError("requires attribute 'mask'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps0(*this, tblgen_mask, "mask")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that first operand v1 and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that second operand v2 and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult ShuffleOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ShuffleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::ArrayAttr maskAttr;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(maskAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (maskAttr) result.getOrAddProperties<ShuffleOp::Properties>().mask = maskAttr;
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

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();

  ::llvm::SmallVector<::mlir::Type> inferredReturnTypes;
  if (::mlir::failed(ShuffleOp::inferReturnTypes(parser.getContext(),
      result.location, result.operands,
      result.attributes.getDictionary(parser.getContext()),
      result.getRawProperties(),
      result.regions, inferredReturnTypes)))
    return ::mlir::failure();
  result.addTypes(inferredReturnTypes);
  return ::mlir::success();
}

void ShuffleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMaskAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mask");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

void ShuffleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::LogicalResult
ShuffleOp::inferReturnTypes(::mlir::MLIRContext *context,
                  std::optional<::mlir::Location> location,
                  ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes,
                  ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions,
                  ::llvm::SmallVectorImpl<::mlir::Type> &inferredReturnTypes) {
  ShuffleOp::Adaptor adaptor(operands, attributes, properties, regions);
  return ShuffleOp::inferReturnTypes(context,
    location, adaptor, inferredReturnTypes);
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::ShuffleOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::SplatOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplatOpGenericAdaptorBase::SplatOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.splat", odsAttrs.getContext());
}

SplatOpGenericAdaptorBase::SplatOpGenericAdaptorBase(SplatOp op) : SplatOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SplatOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SplatOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SplatOpAdaptor::SplatOpAdaptor(SplatOp op) : SplatOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SplatOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SplatOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SplatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SplatOp::getInput() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SplatOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SplatOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SplatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SplatOp::getAggregate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void SplatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value element, Type aggregateType) {
 build(odsBuilder, odsState, aggregateType, element); 
}

void SplatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type aggregate, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(aggregate);
}

void SplatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplatOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SplatOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps19(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getElementType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that operand type matches element type of result");
  return ::mlir::success();
}

::mlir::LogicalResult SplatOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SplatOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::Type aggregateRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> aggregateTypes(aggregateRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    aggregateRawTypes[0] = type;
  }
  for (::mlir::Type type : aggregateTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'aggregate' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(aggregateTypes);
  if (parser.resolveOperands(inputOperands, ::llvm::cast<VectorType>(aggregateTypes[0]).getElementType(), inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplatOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getAggregate().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SplatOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::SplatOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::StoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
StoreOpGenericAdaptorBase::StoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.store", odsAttrs.getContext());
}

StoreOpGenericAdaptorBase::StoreOpGenericAdaptorBase(StoreOp op) : StoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> StoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr StoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr StoreOpGenericAdaptorBase::getNontemporalAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().nontemporal);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool StoreOpGenericAdaptorBase::getNontemporal() {
  auto attr = getNontemporalAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

} // namespace detail
StoreOpAdaptor::StoreOpAdaptor(StoreOp op) : StoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nontemporal = getProperties().nontemporal; (void)tblgen_nontemporal;

  if (tblgen_nontemporal && !((::llvm::isa<::mlir::BoolAttr>(tblgen_nontemporal))))
    return emitError(loc, "'vector.store' op ""attribute 'nontemporal' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StoreOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range StoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> StoreOp::getValueToStore() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> StoreOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range StoreOp::getIndices() {
  return getODSOperands(2);
}

::mlir::OpOperand &StoreOp::getValueToStoreMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &StoreOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange StoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> StoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range StoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult StoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nontemporal;
       auto attr = dict.get("nontemporal");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nontemporal in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nontemporal` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute StoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nontemporal;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nontemporal",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code StoreOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.nontemporal.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> StoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nontemporal")
      return prop.nontemporal;
  return std::nullopt;
}

void StoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nontemporal") {
       prop.nontemporal = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nontemporal)>>(value);
       return;
    }
}

void StoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nontemporal) attrs.append("nontemporal", prop.nontemporal);
}

::mlir::LogicalResult StoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNontemporalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps6(attr, "nontemporal", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult StoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nontemporal)))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nontemporal);
}

::mlir::BoolAttr StoreOp::getNontemporalAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().nontemporal);
}

bool StoreOp::getNontemporal() {
  auto attr = getNontemporalAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void StoreOp::setNontemporalAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getNontemporalAttrName(), attr);
}

void StoreOp::setNontemporal(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNontemporalAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getNontemporalAttrName());
}

::mlir::Attribute StoreOp::removeNontemporalAttr() {
    auto &attr = getProperties().nontemporal;
    attr = {};
    return attr;
}

void StoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::BoolAttr nontemporal) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (nontemporal) {
    odsState.getOrAddProperties<Properties>().nontemporal = nontemporal;
  }
}

void StoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::BoolAttr nontemporal) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  if (nontemporal) {
    odsState.getOrAddProperties<Properties>().nontemporal = nontemporal;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/bool nontemporal) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().nontemporal = odsBuilder.getBoolAttr(nontemporal);
}

void StoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/bool nontemporal) {
  odsState.addOperands(valueToStore);
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().nontemporal = odsBuilder.getBoolAttr(nontemporal);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult StoreOp::verifyInvariantsImpl() {
  auto tblgen_nontemporal = getProperties().nontemporal; (void)tblgen_nontemporal;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps6(*this, tblgen_nontemporal, "nontemporal")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult StoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult StoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueToStoreRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueToStoreOperands(valueToStoreRawOperands);  ::llvm::SMLoc valueToStoreOperandsLoc;
  (void)valueToStoreOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
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
    valueToStoreRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(valueToStoreOperands, valueToStoreTypes, valueToStoreOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValueToStore();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNontemporalAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("nontemporal");
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
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void StoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::StoreOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::TransferReadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransferReadOpGenericAdaptorBase::TransferReadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.transfer_read", odsAttrs.getContext());
}

TransferReadOpGenericAdaptorBase::TransferReadOpGenericAdaptorBase(TransferReadOp op) : TransferReadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TransferReadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TransferReadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::AffineMapAttr TransferReadOpGenericAdaptorBase::getPermutationMapAttr() {
  auto attr = ::llvm::cast<::mlir::AffineMapAttr>(getProperties().permutation_map);
  return attr;
}

::mlir::AffineMap TransferReadOpGenericAdaptorBase::getPermutationMap() {
  auto attr = getPermutationMapAttr();
  return attr.getValue();
}

::mlir::ArrayAttr TransferReadOpGenericAdaptorBase::getInBoundsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_bounds);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TransferReadOpGenericAdaptorBase::getInBounds() {
  auto attr = getInBoundsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TransferReadOpAdaptor::TransferReadOpAdaptor(TransferReadOp op) : TransferReadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TransferReadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_in_bounds = getProperties().in_bounds; (void)tblgen_in_bounds;
  auto tblgen_permutation_map = getProperties().permutation_map; (void)tblgen_permutation_map;
  if (!tblgen_permutation_map) return emitError(loc, "'vector.transfer_read' op ""requires attribute 'permutation_map'");

  if (tblgen_permutation_map && !((::llvm::isa<::mlir::AffineMapAttr>(tblgen_permutation_map))))
    return emitError(loc, "'vector.transfer_read' op ""attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");

  if (tblgen_in_bounds && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_in_bounds))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_in_bounds), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return emitError(loc, "'vector.transfer_read' op ""attribute 'in_bounds' failed to satisfy constraint: 1-bit boolean array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TransferReadOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TransferReadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ShapedType> TransferReadOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ShapedType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TransferReadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::Value TransferReadOp::getPadding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> TransferReadOp::getMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &TransferReadOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TransferReadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &TransferReadOp::getPaddingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TransferReadOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TransferReadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransferReadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TransferReadOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult TransferReadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.in_bounds;
       auto attr = dict.get("in_bounds");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for in_bounds in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `in_bounds` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.permutation_map;
       auto attr = dict.get("permutation_map");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for permutation_map in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `permutation_map` in property conversion: " << attr;
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

::mlir::Attribute TransferReadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.in_bounds;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("in_bounds",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.permutation_map;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("permutation_map",
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

llvm::hash_code TransferReadOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.in_bounds.getAsOpaquePointer()), 
    llvm::hash_value(prop.permutation_map.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TransferReadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "in_bounds")
      return prop.in_bounds;

    if (name == "permutation_map")
      return prop.permutation_map;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TransferReadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "in_bounds") {
       prop.in_bounds = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.in_bounds)>>(value);
       return;
    }

    if (name == "permutation_map") {
       prop.permutation_map = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.permutation_map)>>(value);
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

void TransferReadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.in_bounds) attrs.append("in_bounds", prop.in_bounds);

    if (prop.permutation_map) attrs.append("permutation_map", prop.permutation_map);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TransferReadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInBoundsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps12(attr, "in_bounds", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPermutationMapAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps11(attr, "permutation_map", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TransferReadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.in_bounds)))
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

  if (::mlir::failed(reader.readAttribute(prop.permutation_map)))
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

void TransferReadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.in_bounds);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}
  writer.writeAttribute(prop.permutation_map);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::AffineMapAttr TransferReadOp::getPermutationMapAttr() {
  return ::llvm::cast<::mlir::AffineMapAttr>(getProperties().permutation_map);
}

::mlir::AffineMap TransferReadOp::getPermutationMap() {
  auto attr = getPermutationMapAttr();
  return attr.getValue();
}

::mlir::ArrayAttr TransferReadOp::getInBoundsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_bounds);
}

::std::optional< ::mlir::ArrayAttr > TransferReadOp::getInBounds() {
  auto attr = getInBoundsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TransferReadOp::setPermutationMapAttr(::mlir::AffineMapAttr attr) {
  (*this)->setAttr(getPermutationMapAttrName(), attr);
}

void TransferReadOp::setPermutationMap(::mlir::AffineMap attrValue) {
  (*this)->setAttr(getPermutationMapAttrName(), ::mlir::AffineMapAttr::get(attrValue));
}

void TransferReadOp::setInBoundsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getInBoundsAttrName(), attr);
}

::mlir::Attribute TransferReadOp::removeInBoundsAttr() {
    auto &attr = getProperties().in_bounds;
    attr = {};
    return attr;
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMapAttr permutation_map, ::mlir::Value padding, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(source);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), 1, (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = permutation_map;
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  odsState.addTypes(vector);
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMapAttr permutation_map, ::mlir::Value padding, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(source);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), 1, (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = permutation_map;
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMap permutation_map, ::mlir::Value padding, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(source);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), 1, (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = ::mlir::AffineMapAttr::get(permutation_map);
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  odsState.addTypes(vector);
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMap permutation_map, ::mlir::Value padding, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(source);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(indices.size()), 1, (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = ::mlir::AffineMapAttr::get(permutation_map);
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferReadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransferReadOp::verifyInvariantsImpl() {
  auto tblgen_in_bounds = getProperties().in_bounds; (void)tblgen_in_bounds;
  auto tblgen_permutation_map = getProperties().permutation_map; (void)tblgen_permutation_map;
  if (!tblgen_permutation_map) return emitOpError("requires attribute 'permutation_map'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps11(*this, tblgen_permutation_map, "permutation_map")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps12(*this, tblgen_in_bounds, "in_bounds")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TransferReadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::TransferReadOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::TransferWriteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransferWriteOpGenericAdaptorBase::TransferWriteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.transfer_write", odsAttrs.getContext());
}

TransferWriteOpGenericAdaptorBase::TransferWriteOpGenericAdaptorBase(TransferWriteOp op) : TransferWriteOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TransferWriteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TransferWriteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::AffineMapAttr TransferWriteOpGenericAdaptorBase::getPermutationMapAttr() {
  auto attr = ::llvm::cast<::mlir::AffineMapAttr>(getProperties().permutation_map);
  return attr;
}

::mlir::AffineMap TransferWriteOpGenericAdaptorBase::getPermutationMap() {
  auto attr = getPermutationMapAttr();
  return attr.getValue();
}

::mlir::ArrayAttr TransferWriteOpGenericAdaptorBase::getInBoundsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_bounds);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TransferWriteOpGenericAdaptorBase::getInBounds() {
  auto attr = getInBoundsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TransferWriteOpAdaptor::TransferWriteOpAdaptor(TransferWriteOp op) : TransferWriteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TransferWriteOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_in_bounds = getProperties().in_bounds; (void)tblgen_in_bounds;
  auto tblgen_permutation_map = getProperties().permutation_map; (void)tblgen_permutation_map;
  if (!tblgen_permutation_map) return emitError(loc, "'vector.transfer_write' op ""requires attribute 'permutation_map'");

  if (tblgen_permutation_map && !((::llvm::isa<::mlir::AffineMapAttr>(tblgen_permutation_map))))
    return emitError(loc, "'vector.transfer_write' op ""attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");

  if (tblgen_in_bounds && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_in_bounds))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_in_bounds), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return emitError(loc, "'vector.transfer_write' op ""attribute 'in_bounds' failed to satisfy constraint: 1-bit boolean array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TransferWriteOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TransferWriteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TransferWriteOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ShapedType> TransferWriteOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ShapedType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range TransferWriteOp::getIndices() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::VectorType> TransferWriteOp::getMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &TransferWriteOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TransferWriteOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TransferWriteOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TransferWriteOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TransferWriteOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range TransferWriteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> TransferWriteOp::getResult() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::TypedValue<::mlir::RankedTensorType>() : ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*results.begin());
}

::mlir::LogicalResult TransferWriteOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.in_bounds;
       auto attr = dict.get("in_bounds");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for in_bounds in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `in_bounds` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.permutation_map;
       auto attr = dict.get("permutation_map");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for permutation_map in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `permutation_map` in property conversion: " << attr;
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

::mlir::Attribute TransferWriteOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.in_bounds;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("in_bounds",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.permutation_map;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("permutation_map",
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

llvm::hash_code TransferWriteOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.in_bounds.getAsOpaquePointer()), 
    llvm::hash_value(prop.permutation_map.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TransferWriteOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "in_bounds")
      return prop.in_bounds;

    if (name == "permutation_map")
      return prop.permutation_map;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TransferWriteOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "in_bounds") {
       prop.in_bounds = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.in_bounds)>>(value);
       return;
    }

    if (name == "permutation_map") {
       prop.permutation_map = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.permutation_map)>>(value);
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

void TransferWriteOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.in_bounds) attrs.append("in_bounds", prop.in_bounds);

    if (prop.permutation_map) attrs.append("permutation_map", prop.permutation_map);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TransferWriteOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInBoundsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps12(attr, "in_bounds", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPermutationMapAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps11(attr, "permutation_map", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TransferWriteOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.in_bounds)))
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

  if (::mlir::failed(reader.readAttribute(prop.permutation_map)))
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

void TransferWriteOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.in_bounds);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}
  writer.writeAttribute(prop.permutation_map);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::AffineMapAttr TransferWriteOp::getPermutationMapAttr() {
  return ::llvm::cast<::mlir::AffineMapAttr>(getProperties().permutation_map);
}

::mlir::AffineMap TransferWriteOp::getPermutationMap() {
  auto attr = getPermutationMapAttr();
  return attr.getValue();
}

::mlir::ArrayAttr TransferWriteOp::getInBoundsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_bounds);
}

::std::optional< ::mlir::ArrayAttr > TransferWriteOp::getInBounds() {
  auto attr = getInBoundsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TransferWriteOp::setPermutationMapAttr(::mlir::AffineMapAttr attr) {
  (*this)->setAttr(getPermutationMapAttrName(), attr);
}

void TransferWriteOp::setPermutationMap(::mlir::AffineMap attrValue) {
  (*this)->setAttr(getPermutationMapAttrName(), ::mlir::AffineMapAttr::get(attrValue));
}

void TransferWriteOp::setInBoundsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getInBoundsAttrName(), attr);
}

::mlir::Attribute TransferWriteOp::removeInBoundsAttr() {
    auto &attr = getProperties().in_bounds;
    attr = {};
    return attr;
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value vector, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMapAttr permutation_map, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(vector);
  odsState.addOperands(source);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = permutation_map;
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  if (result)
    odsState.addTypes(result);
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMapAttr permutation_map, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(vector);
  odsState.addOperands(source);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = permutation_map;
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  odsState.addTypes(resultTypes);
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value vector, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMap permutation_map, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(vector);
  odsState.addOperands(source);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = ::mlir::AffineMapAttr::get(permutation_map);
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  if (result)
    odsState.addTypes(result);
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value source, ::mlir::ValueRange indices, ::mlir::AffineMap permutation_map, /*optional*/::mlir::Value mask, /*optional*/::mlir::ArrayAttr in_bounds) {
  odsState.addOperands(vector);
  odsState.addOperands(source);
  odsState.addOperands(indices);
  if (mask)
    odsState.addOperands(mask);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(indices.size()), (mask ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().permutation_map = ::mlir::AffineMapAttr::get(permutation_map);
  if (in_bounds) {
    odsState.getOrAddProperties<Properties>().in_bounds = in_bounds;
  }
  odsState.addTypes(resultTypes);
}

void TransferWriteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransferWriteOp::verifyInvariantsImpl() {
  auto tblgen_in_bounds = getProperties().in_bounds; (void)tblgen_in_bounds;
  auto tblgen_permutation_map = getProperties().permutation_map; (void)tblgen_permutation_map;
  if (!tblgen_permutation_map) return emitOpError("requires attribute 'permutation_map'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps11(*this, tblgen_permutation_map, "permutation_map")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps12(*this, tblgen_in_bounds, "in_bounds")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps20(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TransferWriteOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::TransferWriteOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::TransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransposeOpGenericAdaptorBase::TransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.transpose", odsAttrs.getContext());
}

TransposeOpGenericAdaptorBase::TransposeOpGenericAdaptorBase(TransposeOp op) : TransposeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TransposeOpGenericAdaptorBase::getPermutationAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().permutation);
  return attr;
}

::llvm::ArrayRef<int64_t> TransposeOpGenericAdaptorBase::getPermutation() {
  auto attr = getPermutationAttr();
  return attr;
}

} // namespace detail
TransposeOpAdaptor::TransposeOpAdaptor(TransposeOp op) : TransposeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TransposeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_permutation = getProperties().permutation; (void)tblgen_permutation;
  if (!tblgen_permutation) return emitError(loc, "'vector.transpose' op ""requires attribute 'permutation'");

  if (tblgen_permutation && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_permutation))))
    return emitError(loc, "'vector.transpose' op ""attribute 'permutation' failed to satisfy constraint: i64 dense array attribute");
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

::mlir::TypedValue<::mlir::VectorType> TransposeOp::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TransposeOp::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
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

::mlir::TypedValue<::mlir::VectorType> TransposeOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult TransposeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.permutation;
       auto attr = dict.get("permutation");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for permutation in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `permutation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TransposeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.permutation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("permutation",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TransposeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.permutation.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TransposeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "permutation")
      return prop.permutation;
  return std::nullopt;
}

void TransposeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "permutation") {
       prop.permutation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.permutation)>>(value);
       return;
    }
}

void TransposeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.permutation) attrs.append("permutation", prop.permutation);
}

::mlir::LogicalResult TransposeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPermutationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps4(attr, "permutation", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TransposeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.permutation)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.permutation);
}

::mlir::DenseI64ArrayAttr TransposeOp::getPermutationAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().permutation);
}

::llvm::ArrayRef<int64_t> TransposeOp::getPermutation() {
  auto attr = getPermutationAttr();
  return attr;
}

void TransposeOp::setPermutationAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getPermutationAttrName(), attr);
}

void TransposeOp::setPermutation(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getPermutationAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::DenseI64ArrayAttr permutation) {
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().permutation = permutation;
  odsState.addTypes(result);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::DenseI64ArrayAttr permutation) {
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().permutation = permutation;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::llvm::ArrayRef<int64_t> permutation) {
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().permutation = odsBuilder.getDenseI64ArrayAttr(permutation);
  odsState.addTypes(result);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::llvm::ArrayRef<int64_t> permutation) {
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().permutation = odsBuilder.getDenseI64ArrayAttr(permutation);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeOp::verifyInvariantsImpl() {
  auto tblgen_permutation = getProperties().permutation; (void)tblgen_permutation;
  if (!tblgen_permutation) return emitOpError("requires attribute 'permutation'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps4(*this, tblgen_permutation, "permutation")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult TransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc;
  (void)vectorOperandsLoc;
  ::mlir::DenseI64ArrayAttr permutationAttr;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  vectorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vectorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(permutationAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (permutationAttr) result.getOrAddProperties<TransposeOp::Properties>().permutation = permutationAttr;
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
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVector();
  _odsPrinter << ",";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getPermutationAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("permutation");
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
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TransposeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::TransposeOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::TypeCastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TypeCastOpGenericAdaptorBase::TypeCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.type_cast", odsAttrs.getContext());
}

TypeCastOpGenericAdaptorBase::TypeCastOpGenericAdaptorBase(TypeCastOp op) : TypeCastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TypeCastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TypeCastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TypeCastOpAdaptor::TypeCastOpAdaptor(TypeCastOp op) : TypeCastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TypeCastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TypeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TypeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TypeCastOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TypeCastOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TypeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TypeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TypeCastOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSResults(0).begin());
}

void TypeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value memref) {
  odsState.addOperands(memref);
  odsState.addTypes(result);
}

void TypeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref) {
  odsState.addOperands(memref);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TypeCastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TypeCastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps21(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TypeCastOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TypeCastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TypeCastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TypeCastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::TypeCastOp)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::WarpExecuteOnLane0Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
WarpExecuteOnLane0OpGenericAdaptorBase::WarpExecuteOnLane0OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.warp_execute_on_lane_0", odsAttrs.getContext());
}

WarpExecuteOnLane0OpGenericAdaptorBase::WarpExecuteOnLane0OpGenericAdaptorBase(WarpExecuteOnLane0Op op) : WarpExecuteOnLane0OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WarpExecuteOnLane0OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr WarpExecuteOnLane0OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WarpExecuteOnLane0OpGenericAdaptorBase::getWarpSizeAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().warp_size);
  return attr;
}

uint64_t WarpExecuteOnLane0OpGenericAdaptorBase::getWarpSize() {
  auto attr = getWarpSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::Region &WarpExecuteOnLane0OpGenericAdaptorBase::getWarpRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange WarpExecuteOnLane0OpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
WarpExecuteOnLane0OpAdaptor::WarpExecuteOnLane0OpAdaptor(WarpExecuteOnLane0Op op) : WarpExecuteOnLane0OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WarpExecuteOnLane0OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_warp_size = getProperties().warp_size; (void)tblgen_warp_size;
  if (!tblgen_warp_size) return emitError(loc, "'vector.warp_execute_on_lane_0' op ""requires attribute 'warp_size'");

  if (tblgen_warp_size && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_warp_size))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_warp_size).getType().isSignlessInteger(64)))))
    return emitError(loc, "'vector.warp_execute_on_lane_0' op ""attribute 'warp_size' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WarpExecuteOnLane0Op::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range WarpExecuteOnLane0Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> WarpExecuteOnLane0Op::getLaneid() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range WarpExecuteOnLane0Op::getArgs() {
  return getODSOperands(1);
}

::mlir::OpOperand &WarpExecuteOnLane0Op::getLaneidMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange WarpExecuteOnLane0Op::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> WarpExecuteOnLane0Op::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range WarpExecuteOnLane0Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range WarpExecuteOnLane0Op::getResults() {
  return getODSResults(0);
}

::mlir::Region &WarpExecuteOnLane0Op::getWarpRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult WarpExecuteOnLane0Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.warp_size;
       auto attr = dict.get("warp_size");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for warp_size in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `warp_size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WarpExecuteOnLane0Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.warp_size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("warp_size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WarpExecuteOnLane0Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.warp_size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WarpExecuteOnLane0Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "warp_size")
      return prop.warp_size;
  return std::nullopt;
}

void WarpExecuteOnLane0Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "warp_size") {
       prop.warp_size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.warp_size)>>(value);
       return;
    }
}

void WarpExecuteOnLane0Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.warp_size) attrs.append("warp_size", prop.warp_size);
}

::mlir::LogicalResult WarpExecuteOnLane0Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getWarpSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(attr, "warp_size", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WarpExecuteOnLane0Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.warp_size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WarpExecuteOnLane0Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.warp_size);
}

::mlir::IntegerAttr WarpExecuteOnLane0Op::getWarpSizeAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().warp_size);
}

uint64_t WarpExecuteOnLane0Op::getWarpSize() {
  auto attr = getWarpSizeAttr();
  return attr.getValue().getZExtValue();
}

void WarpExecuteOnLane0Op::setWarpSizeAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getWarpSizeAttrName(), attr);
}

void WarpExecuteOnLane0Op::setWarpSize(uint64_t attrValue) {
  (*this)->setAttr(getWarpSizeAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

::mlir::LogicalResult WarpExecuteOnLane0Op::verifyInvariantsImpl() {
  auto tblgen_warp_size = getProperties().warp_size; (void)tblgen_warp_size;
  if (!tblgen_warp_size) return emitOpError("requires attribute 'warp_size'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorOps10(*this, tblgen_warp_size, "warp_size")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps15(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_VectorOps0(*this, region, "warpRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult WarpExecuteOnLane0Op::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::WarpExecuteOnLane0Op)

namespace mlir {
namespace vector {

//===----------------------------------------------------------------------===//
// ::mlir::vector::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("vector.yield", odsAttrs.getContext());
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

::mlir::Operation::operand_range YieldOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::getOperandsMutable() {
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

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
 /* nothing to do */ 
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorOps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc;
  (void)operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> operandsTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(operandsOperands))
    return ::mlir::failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(operandsTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getOperands().empty()) {
    _odsPrinter << ' ';
    _odsPrinter << getOperands();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getOperands().getTypes();
  }
}

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange YieldOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vector::YieldOp)


#endif  // GET_OP_CLASSES

