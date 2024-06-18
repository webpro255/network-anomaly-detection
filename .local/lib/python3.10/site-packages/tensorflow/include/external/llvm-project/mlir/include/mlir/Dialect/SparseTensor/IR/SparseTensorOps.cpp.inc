/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: SparseTensorOps.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::sparse_tensor::AssembleOp,
::mlir::sparse_tensor::BinaryOp,
::mlir::sparse_tensor::CompressOp,
::mlir::sparse_tensor::ConcatenateOp,
::mlir::sparse_tensor::ConvertOp,
::mlir::sparse_tensor::CrdTranslateOp,
::mlir::sparse_tensor::DisassembleOp,
::mlir::sparse_tensor::ExpandOp,
::mlir::sparse_tensor::ForeachOp,
::mlir::sparse_tensor::GetStorageSpecifierOp,
::mlir::sparse_tensor::InsertOp,
::mlir::sparse_tensor::LoadOp,
::mlir::sparse_tensor::LvlOp,
::mlir::sparse_tensor::NewOp,
::mlir::sparse_tensor::NumberOfEntriesOp,
::mlir::sparse_tensor::OutOp,
::mlir::sparse_tensor::PushBackOp,
::mlir::sparse_tensor::ReduceOp,
::mlir::sparse_tensor::ReinterpretMapOp,
::mlir::sparse_tensor::ReorderCOOOp,
::mlir::sparse_tensor::SelectOp,
::mlir::sparse_tensor::SetStorageSpecifierOp,
::mlir::sparse_tensor::SortOp,
::mlir::sparse_tensor::StorageSpecifierInitOp,
::mlir::sparse_tensor::ToCoordinatesBufferOp,
::mlir::sparse_tensor::ToCoordinatesOp,
::mlir::sparse_tensor::ToPositionsOp,
::mlir::sparse_tensor::ToSliceOffsetOp,
::mlir::sparse_tensor::ToSliceStrideOp,
::mlir::sparse_tensor::ToValuesOp,
::mlir::sparse_tensor::UnaryOp,
::mlir::sparse_tensor::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace sparse_tensor {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of tensor of signless integer or index values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::TensorType>(type))) && ((!!::mlir::sparse_tensor::getSparseTensorEncoding(type)))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be sparse tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (( isStrided(::llvm::cast<::mlir::MemRefType>(type)) ))) && ((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be strided memref of any type values of rank 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1D memref of 1-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IndexType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1D memref of index values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of ranked tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be ranked tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 0)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((type.isSignlessIntOrIndex())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalar like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::RankedTensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 0)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || ((type.isSignlessIntOrIndex())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of scalar like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::sparse_tensor::StorageSpecifierType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be metadata, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps15(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1D memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps16(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return ((::llvm::isa<::mlir::IntegerType>(elementType))) || ((::llvm::isa<::mlir::IndexType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1D memref of integer or index values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps17(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of 1D memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SparseTensorOps18(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::TensorType>(type))) && ((!!::mlir::sparse_tensor::getSparseTensorEncoding(type) &&   ::mlir::sparse_tensor::getSparseTensorEncoding(type).isSlice()))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be sparse tensor slice of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: dimension attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::sparse_tensor::CrdTransDirectionKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: sparse tensor coordinate translation direction";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::sparse_tensor::SparseTensorEncodingAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: ";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::AffineMapAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: AffineMap attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::sparse_tensor::StorageSpecifierKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: sparse tensor storage specifier kind";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: level attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::sparse_tensor::SparseTensorSortKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: sparse tensor sort algorithm";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: index attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SparseTensorOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SparseTensorOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_SparseTensorOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_SparseTensorOps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::AssembleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AssembleOpGenericAdaptorBase::AssembleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.assemble", odsAttrs.getContext());
}

AssembleOpGenericAdaptorBase::AssembleOpGenericAdaptorBase(AssembleOp op) : AssembleOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AssembleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr AssembleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AssembleOpAdaptor::AssembleOpAdaptor(AssembleOp op) : AssembleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AssembleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AssembleOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range AssembleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AssembleOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range AssembleOp::getLevels() {
  return getODSOperands(1);
}

::mlir::OpOperand &AssembleOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange AssembleOp::getLevelsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AssembleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AssembleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AssembleOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void AssembleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value values, ::mlir::ValueRange levels) {
  odsState.addOperands(values);
  odsState.addOperands(levels);
  odsState.addTypes(result);
}

void AssembleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value values, ::mlir::ValueRange levels) {
  odsState.addOperands(values);
  odsState.addOperands(levels);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssembleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AssembleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AssembleOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AssembleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> levelsOperands;
  ::llvm::SMLoc levelsOperandsLoc;
  (void)levelsOperandsLoc;
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> levelsTypes;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  levelsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(levelsOperands))
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
    valuesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(levelsTypes))
    return ::mlir::failure();
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(levelsOperands, levelsTypes, levelsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AssembleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getLevels();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getLevels().getTypes();
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AssembleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::AssembleOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::BinaryOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BinaryOpGenericAdaptorBase::BinaryOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.binary", odsAttrs.getContext());
}

BinaryOpGenericAdaptorBase::BinaryOpGenericAdaptorBase(BinaryOp op) : BinaryOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BinaryOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BinaryOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr BinaryOpGenericAdaptorBase::getLeftIdentityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().left_identity);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool BinaryOpGenericAdaptorBase::getLeftIdentity() {
  auto attr = getLeftIdentityAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr BinaryOpGenericAdaptorBase::getRightIdentityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().right_identity);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool BinaryOpGenericAdaptorBase::getRightIdentity() {
  auto attr = getRightIdentityAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &BinaryOpGenericAdaptorBase::getOverlapRegion() {
  return *odsRegions[0];
}

::mlir::Region &BinaryOpGenericAdaptorBase::getLeftRegion() {
  return *odsRegions[1];
}

::mlir::Region &BinaryOpGenericAdaptorBase::getRightRegion() {
  return *odsRegions[2];
}

::mlir::RegionRange BinaryOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
BinaryOpAdaptor::BinaryOpAdaptor(BinaryOp op) : BinaryOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BinaryOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_left_identity = getProperties().left_identity; (void)tblgen_left_identity;
  auto tblgen_right_identity = getProperties().right_identity; (void)tblgen_right_identity;

  if (tblgen_left_identity && !((::llvm::isa<::mlir::UnitAttr>(tblgen_left_identity))))
    return emitError(loc, "'sparse_tensor.binary' op ""attribute 'left_identity' failed to satisfy constraint: unit attribute");

  if (tblgen_right_identity && !((::llvm::isa<::mlir::UnitAttr>(tblgen_right_identity))))
    return emitError(loc, "'sparse_tensor.binary' op ""attribute 'right_identity' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BinaryOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BinaryOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BinaryOp::getX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value BinaryOp::getY() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &BinaryOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &BinaryOp::getYMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BinaryOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BinaryOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BinaryOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &BinaryOp::getOverlapRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &BinaryOp::getLeftRegion() {
  return (*this)->getRegion(1);
}

::mlir::Region &BinaryOp::getRightRegion() {
  return (*this)->getRegion(2);
}

::mlir::LogicalResult BinaryOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.left_identity;
       auto attr = dict.get("left_identity");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for left_identity in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `left_identity` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.right_identity;
       auto attr = dict.get("right_identity");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for right_identity in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `right_identity` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute BinaryOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.left_identity;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("left_identity",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.right_identity;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("right_identity",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code BinaryOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.left_identity.getAsOpaquePointer()), 
    llvm::hash_value(prop.right_identity.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BinaryOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "left_identity")
      return prop.left_identity;

    if (name == "right_identity")
      return prop.right_identity;
  return std::nullopt;
}

void BinaryOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "left_identity") {
       prop.left_identity = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.left_identity)>>(value);
       return;
    }

    if (name == "right_identity") {
       prop.right_identity = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.right_identity)>>(value);
       return;
    }
}

void BinaryOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.left_identity) attrs.append("left_identity", prop.left_identity);

    if (prop.right_identity) attrs.append("right_identity", prop.right_identity);
}

::mlir::LogicalResult BinaryOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLeftIdentityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(attr, "left_identity", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRightIdentityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(attr, "right_identity", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult BinaryOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.left_identity)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.right_identity)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BinaryOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.left_identity);

  writer.writeOptionalAttribute(prop.right_identity);
}

::mlir::UnitAttr BinaryOp::getLeftIdentityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().left_identity);
}

bool BinaryOp::getLeftIdentity() {
  auto attr = getLeftIdentityAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr BinaryOp::getRightIdentityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().right_identity);
}

bool BinaryOp::getRightIdentity() {
  auto attr = getRightIdentityAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void BinaryOp::setLeftIdentityAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getLeftIdentityAttrName(), attr);
}

void BinaryOp::setLeftIdentity(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLeftIdentityAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getLeftIdentityAttrName());
}

void BinaryOp::setRightIdentityAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getRightIdentityAttrName(), attr);
}

void BinaryOp::setRightIdentity(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getRightIdentityAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getRightIdentityAttrName());
}

::mlir::Attribute BinaryOp::removeLeftIdentityAttr() {
    auto &attr = getProperties().left_identity;
    attr = {};
    return attr;
}

::mlir::Attribute BinaryOp::removeRightIdentityAttr() {
    auto &attr = getProperties().right_identity;
    attr = {};
    return attr;
}

void BinaryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x, ::mlir::Value y, /*optional*/::mlir::UnitAttr left_identity, /*optional*/::mlir::UnitAttr right_identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  if (left_identity) {
    odsState.getOrAddProperties<Properties>().left_identity = left_identity;
  }
  if (right_identity) {
    odsState.getOrAddProperties<Properties>().right_identity = right_identity;
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  odsState.addTypes(output);
}

void BinaryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y, /*optional*/::mlir::UnitAttr left_identity, /*optional*/::mlir::UnitAttr right_identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  if (left_identity) {
    odsState.getOrAddProperties<Properties>().left_identity = left_identity;
  }
  if (right_identity) {
    odsState.getOrAddProperties<Properties>().right_identity = right_identity;
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BinaryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x, ::mlir::Value y, /*optional*/bool left_identity, /*optional*/bool right_identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  if (left_identity) {
    odsState.getOrAddProperties<Properties>().left_identity = ((left_identity) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (right_identity) {
    odsState.getOrAddProperties<Properties>().right_identity = ((right_identity) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  odsState.addTypes(output);
}

void BinaryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y, /*optional*/bool left_identity, /*optional*/bool right_identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  if (left_identity) {
    odsState.getOrAddProperties<Properties>().left_identity = ((left_identity) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (right_identity) {
    odsState.getOrAddProperties<Properties>().right_identity = ((right_identity) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BinaryOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 3; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BinaryOp::verifyInvariantsImpl() {
  auto tblgen_left_identity = getProperties().left_identity; (void)tblgen_left_identity;
  auto tblgen_right_identity = getProperties().right_identity; (void)tblgen_right_identity;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(*this, tblgen_left_identity, "left_identity")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(*this, tblgen_right_identity, "right_identity")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps0(*this, region, "overlapRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps0(*this, region, "leftRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(2)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps0(*this, region, "rightRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult BinaryOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult BinaryOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);
  std::unique_ptr<::mlir::Region> overlapRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> leftRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> rightRegionRegion = std::make_unique<::mlir::Region>();

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  yOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(yRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
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

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    yRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outputRawTypes[0] = type;
  }
  if (parser.parseKeyword("overlap"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseRegion(*overlapRegionRegion))
    return ::mlir::failure();
  if (parser.parseKeyword("left"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("identity"))) {
    result.getOrAddProperties<BinaryOp::Properties>().left_identity = parser.getBuilder().getUnitAttr();  } else {

  if (parser.parseRegion(*leftRegionRegion))
    return ::mlir::failure();
  }
  if (parser.parseKeyword("right"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("identity"))) {
    result.getOrAddProperties<BinaryOp::Properties>().right_identity = parser.getBuilder().getUnitAttr();  } else {

  if (parser.parseRegion(*rightRegionRegion))
    return ::mlir::failure();
  }
  result.addRegion(std::move(overlapRegionRegion));
  result.addRegion(std::move(leftRegionRegion));
  result.addRegion(std::move(rightRegionRegion));
  result.addTypes(outputTypes);
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(yOperands, yTypes, yOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BinaryOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getY();
  _odsPrinter << ' ' << ":";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("left_identity");
  elidedAttrs.push_back("right_identity");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLeftIdentityAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("left_identity");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getRightIdentityAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("right_identity");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getY().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter.printNewline();
  _odsPrinter << ' ' << "overlap";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getOverlapRegion());
  _odsPrinter.printNewline();
  _odsPrinter << ' ' << "left";
  _odsPrinter << ' ' << "=";
  if (getLeftIdentityAttr()) {
    _odsPrinter << ' ' << "identity";
  } else {
    _odsPrinter << ' ';
    _odsPrinter.printRegion(getLeftRegion());
  }
  _odsPrinter.printNewline();
  _odsPrinter << ' ' << "right";
  _odsPrinter << ' ' << "=";
  if (getRightIdentityAttr()) {
    _odsPrinter << ' ' << "identity";
  } else {
    _odsPrinter << ' ';
    _odsPrinter.printRegion(getRightRegion());
  }
}

void BinaryOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::BinaryOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::CompressOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CompressOpGenericAdaptorBase::CompressOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.compress", odsAttrs.getContext());
}

CompressOpGenericAdaptorBase::CompressOpGenericAdaptorBase(CompressOp op) : CompressOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CompressOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 5) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CompressOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CompressOpAdaptor::CompressOpAdaptor(CompressOp op) : CompressOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CompressOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CompressOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 5) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CompressOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CompressOp::getValues() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CompressOp::getFilled() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CompressOp::getAdded() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> CompressOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::TensorType> CompressOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(4).begin());
}

::mlir::Operation::operand_range CompressOp::getLvlCoords() {
  return getODSOperands(5);
}

::mlir::OpOperand &CompressOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CompressOp::getFilledMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CompressOp::getAddedMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CompressOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CompressOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange CompressOp::getLvlCoordsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CompressOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CompressOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> CompressOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void CompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value values, ::mlir::Value filled, ::mlir::Value added, ::mlir::Value count, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords) {
  odsState.addOperands(values);
  odsState.addOperands(filled);
  odsState.addOperands(added);
  odsState.addOperands(count);
  odsState.addOperands(tensor);
  odsState.addOperands(lvlCoords);
  odsState.addTypes(result);
}

void CompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value values, ::mlir::Value filled, ::mlir::Value added, ::mlir::Value count, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords) {
  odsState.addOperands(values);
  odsState.addOperands(filled);
  odsState.addOperands(added);
  odsState.addOperands(count);
  odsState.addOperands(tensor);
  odsState.addOperands(lvlCoords);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CompressOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value values, ::mlir::Value filled, ::mlir::Value added, ::mlir::Value count, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords) {
  odsState.addOperands(values);
  odsState.addOperands(filled);
  odsState.addOperands(added);
  odsState.addOperands(count);
  odsState.addOperands(tensor);
  odsState.addOperands(lvlCoords);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CompressOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CompressOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CompressOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(4).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that all of {tensor, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult CompressOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult CompressOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[4].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CompressOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand filledRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> filledOperands(filledRawOperands);  ::llvm::SMLoc filledOperandsLoc;
  (void)filledOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand addedRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> addedOperands(addedRawOperands);  ::llvm::SMLoc addedOperandsLoc;
  (void)addedOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lvlCoordsOperands;
  ::llvm::SMLoc lvlCoordsOperandsLoc;
  (void)lvlCoordsOperandsLoc;
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  ::mlir::Type filledRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> filledTypes(filledRawTypes);
  ::mlir::Type addedRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> addedTypes(addedRawTypes);
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  filledOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(filledRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  addedOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(addedRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  lvlCoordsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(lvlCoordsOperands))
    return ::mlir::failure();
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    filledRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    addedRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(tensorTypes[0]);
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(filledOperands, filledTypes, filledOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(addedOperands, addedTypes, addedOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(countOperands, odsBuildableType0, countOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lvlCoordsOperands, odsBuildableType0, lvlCoordsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CompressOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getFilled();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getAdded();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  _odsPrinter << "[";
  _odsPrinter << getLvlCoords();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getFilled().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getAdded().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::CompressOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ConcatenateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConcatenateOpGenericAdaptorBase::ConcatenateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.concatenate", odsAttrs.getContext());
}

ConcatenateOpGenericAdaptorBase::ConcatenateOpGenericAdaptorBase(ConcatenateOp op) : ConcatenateOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConcatenateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ConcatenateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ConcatenateOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  return attr;
}

::mlir::sparse_tensor::Dimension ConcatenateOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ConcatenateOpAdaptor::ConcatenateOpAdaptor(ConcatenateOp op) : ConcatenateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConcatenateOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'sparse_tensor.concatenate' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType())))))
    return emitError(loc, "'sparse_tensor.concatenate' op ""attribute 'dimension' failed to satisfy constraint: dimension attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConcatenateOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ConcatenateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ConcatenateOp::getInputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ConcatenateOp::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ConcatenateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConcatenateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ConcatenateOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ConcatenateOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dimension;
       auto attr = dict.get("dimension");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dimension in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ConcatenateOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dimension",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ConcatenateOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ConcatenateOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void ConcatenateOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void ConcatenateOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult ConcatenateOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps1(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ConcatenateOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConcatenateOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::IntegerAttr ConcatenateOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
}

::mlir::sparse_tensor::Dimension ConcatenateOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

void ConcatenateOp::setDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void ConcatenateOp::setDimension(::mlir::sparse_tensor::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::IntegerAttr dimension) {
  odsState.addOperands(inputs);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(result);
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::IntegerAttr dimension) {
  odsState.addOperands(inputs);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::sparse_tensor::Dimension dimension) {
  odsState.addOperands(inputs);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dimension);
  odsState.addTypes(result);
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::sparse_tensor::Dimension dimension) {
  odsState.addOperands(inputs);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatenateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConcatenateOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps1(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConcatenateOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ConcatenateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> inputsOperands;
  ::llvm::SMLoc inputsOperandsLoc;
  (void)inputsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> inputsTypes;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  inputsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(inputsOperands))
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

  if (parser.parseTypeList(inputsTypes))
    return ::mlir::failure();
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputsOperands, inputsTypes, inputsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConcatenateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInputs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getInputs().getTypes();
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ConcatenateOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ConcatenateOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ConvertOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertOpGenericAdaptorBase::ConvertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.convert", odsAttrs.getContext());
}

ConvertOpGenericAdaptorBase::ConvertOpGenericAdaptorBase(ConvertOp op) : ConvertOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertOpAdaptor::ConvertOpAdaptor(ConvertOp op) : ConvertOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConvertOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ConvertOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ConvertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(dest);
}

void ConvertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConvertOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ConvertOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConvertOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ConvertOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ConvertOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::CrdTranslateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CrdTranslateOpGenericAdaptorBase::CrdTranslateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.crd_translate", odsAttrs.getContext());
}

CrdTranslateOpGenericAdaptorBase::CrdTranslateOpGenericAdaptorBase(CrdTranslateOp op) : CrdTranslateOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CrdTranslateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CrdTranslateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::sparse_tensor::CrdTransDirectionKindAttr CrdTranslateOpGenericAdaptorBase::getDirectionAttr() {
  auto attr = ::llvm::cast<::mlir::sparse_tensor::CrdTransDirectionKindAttr>(getProperties().direction);
  return attr;
}

::mlir::sparse_tensor::CrdTransDirectionKind CrdTranslateOpGenericAdaptorBase::getDirection() {
  auto attr = getDirectionAttr();
  return attr.getValue();
}

::mlir::sparse_tensor::SparseTensorEncodingAttr CrdTranslateOpGenericAdaptorBase::getEncoderAttr() {
  auto attr = ::llvm::cast<::mlir::sparse_tensor::SparseTensorEncodingAttr>(getProperties().encoder);
  return attr;
}

::mlir::sparse_tensor::SparseTensorEncodingAttr CrdTranslateOpGenericAdaptorBase::getEncoder() {
  auto attr = getEncoderAttr();
  return ::llvm::cast<::mlir::sparse_tensor::SparseTensorEncodingAttr>(attr);
}

} // namespace detail
CrdTranslateOpAdaptor::CrdTranslateOpAdaptor(CrdTranslateOp op) : CrdTranslateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CrdTranslateOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_direction = getProperties().direction; (void)tblgen_direction;
  if (!tblgen_direction) return emitError(loc, "'sparse_tensor.crd_translate' op ""requires attribute 'direction'");
  auto tblgen_encoder = getProperties().encoder; (void)tblgen_encoder;
  if (!tblgen_encoder) return emitError(loc, "'sparse_tensor.crd_translate' op ""requires attribute 'encoder'");

  if (tblgen_direction && !((::llvm::isa<::mlir::sparse_tensor::CrdTransDirectionKindAttr>(tblgen_direction))))
    return emitError(loc, "'sparse_tensor.crd_translate' op ""attribute 'direction' failed to satisfy constraint: sparse tensor coordinate translation direction");

  if (tblgen_encoder && !((::llvm::isa<::mlir::sparse_tensor::SparseTensorEncodingAttr>(tblgen_encoder))))
    return emitError(loc, "'sparse_tensor.crd_translate' op ""attribute 'encoder' failed to satisfy constraint: ");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CrdTranslateOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CrdTranslateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CrdTranslateOp::getInCrds() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CrdTranslateOp::getInCrdsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CrdTranslateOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CrdTranslateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range CrdTranslateOp::getOutCrds() {
  return getODSResults(0);
}

::mlir::LogicalResult CrdTranslateOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.direction;
       auto attr = dict.get("direction");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for direction in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `direction` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.encoder;
       auto attr = dict.get("encoder");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for encoder in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `encoder` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CrdTranslateOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.direction;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("direction",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.encoder;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("encoder",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CrdTranslateOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.direction.getAsOpaquePointer()), 
    llvm::hash_value(prop.encoder.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CrdTranslateOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "direction")
      return prop.direction;

    if (name == "encoder")
      return prop.encoder;
  return std::nullopt;
}

void CrdTranslateOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "direction") {
       prop.direction = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.direction)>>(value);
       return;
    }

    if (name == "encoder") {
       prop.encoder = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.encoder)>>(value);
       return;
    }
}

void CrdTranslateOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.direction) attrs.append("direction", prop.direction);

    if (prop.encoder) attrs.append("encoder", prop.encoder);
}

::mlir::LogicalResult CrdTranslateOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDirectionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps2(attr, "direction", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEncoderAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps3(attr, "encoder", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CrdTranslateOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.direction)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.encoder)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CrdTranslateOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.direction);
  writer.writeAttribute(prop.encoder);
}

::mlir::sparse_tensor::CrdTransDirectionKindAttr CrdTranslateOp::getDirectionAttr() {
  return ::llvm::cast<::mlir::sparse_tensor::CrdTransDirectionKindAttr>(getProperties().direction);
}

::mlir::sparse_tensor::CrdTransDirectionKind CrdTranslateOp::getDirection() {
  auto attr = getDirectionAttr();
  return attr.getValue();
}

::mlir::sparse_tensor::SparseTensorEncodingAttr CrdTranslateOp::getEncoderAttr() {
  return ::llvm::cast<::mlir::sparse_tensor::SparseTensorEncodingAttr>(getProperties().encoder);
}

::mlir::sparse_tensor::SparseTensorEncodingAttr CrdTranslateOp::getEncoder() {
  auto attr = getEncoderAttr();
  return ::llvm::cast<::mlir::sparse_tensor::SparseTensorEncodingAttr>(attr);
}

void CrdTranslateOp::setDirectionAttr(::mlir::sparse_tensor::CrdTransDirectionKindAttr attr) {
  (*this)->setAttr(getDirectionAttrName(), attr);
}

void CrdTranslateOp::setDirection(::mlir::sparse_tensor::CrdTransDirectionKind attrValue) {
  (*this)->setAttr(getDirectionAttrName(), ::mlir::sparse_tensor::CrdTransDirectionKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CrdTranslateOp::setEncoderAttr(::mlir::sparse_tensor::SparseTensorEncodingAttr attr) {
  (*this)->setAttr(getEncoderAttrName(), attr);
}

void CrdTranslateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange out_crds, ::mlir::ValueRange in_crds, ::mlir::sparse_tensor::CrdTransDirectionKindAttr direction, ::mlir::sparse_tensor::SparseTensorEncodingAttr encoder) {
  odsState.addOperands(in_crds);
  odsState.getOrAddProperties<Properties>().direction = direction;
  odsState.getOrAddProperties<Properties>().encoder = encoder;
  odsState.addTypes(out_crds);
}

void CrdTranslateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange out_crds, ::mlir::ValueRange in_crds, ::mlir::sparse_tensor::CrdTransDirectionKind direction, ::mlir::sparse_tensor::SparseTensorEncodingAttr encoder) {
  odsState.addOperands(in_crds);
  odsState.getOrAddProperties<Properties>().direction = ::mlir::sparse_tensor::CrdTransDirectionKindAttr::get(odsBuilder.getContext(), direction);
  odsState.getOrAddProperties<Properties>().encoder = encoder;
  odsState.addTypes(out_crds);
}

void CrdTranslateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CrdTranslateOp::verifyInvariantsImpl() {
  auto tblgen_direction = getProperties().direction; (void)tblgen_direction;
  if (!tblgen_direction) return emitOpError("requires attribute 'direction'");
  auto tblgen_encoder = getProperties().encoder; (void)tblgen_encoder;
  if (!tblgen_encoder) return emitOpError("requires attribute 'encoder'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps2(*this, tblgen_direction, "direction")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps3(*this, tblgen_encoder, "encoder")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CrdTranslateOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CrdTranslateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::sparse_tensor::CrdTransDirectionKindAttr directionAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> in_crdsOperands;
  ::llvm::SMLoc in_crdsOperandsLoc;
  (void)in_crdsOperandsLoc;
  ::mlir::sparse_tensor::SparseTensorEncodingAttr encoderAttr;
  ::llvm::SmallVector<::mlir::Type, 1> out_crdsTypes;

  if (parser.parseCustomAttributeWithFallback(directionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (directionAttr) result.getOrAddProperties<CrdTranslateOp::Properties>().direction = directionAttr;
  if (parser.parseLSquare())
    return ::mlir::failure();

  in_crdsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(in_crdsOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseKeyword("as"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(encoderAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (encoderAttr) result.getOrAddProperties<CrdTranslateOp::Properties>().encoder = encoderAttr;
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

  if (parser.parseTypeList(out_crdsTypes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(out_crdsTypes);
  if (parser.resolveOperands(in_crdsOperands, odsBuildableType0, in_crdsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CrdTranslateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDirectionAttr());
  _odsPrinter << "[";
  _odsPrinter << getInCrds();
  _odsPrinter << "]";
  _odsPrinter << ' ' << "as";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getEncoderAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("direction");
  elidedAttrs.push_back("encoder");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOutCrds().getTypes();
}

void CrdTranslateOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::CrdTranslateOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::DisassembleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DisassembleOpGenericAdaptorBase::DisassembleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.disassemble", odsAttrs.getContext());
}

DisassembleOpGenericAdaptorBase::DisassembleOpGenericAdaptorBase(DisassembleOp op) : DisassembleOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DisassembleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr DisassembleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DisassembleOpAdaptor::DisassembleOpAdaptor(DisassembleOp op) : DisassembleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DisassembleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void DisassembleOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "ret_values");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "ret_levels");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "val_len");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "lvl_lens");
}

std::pair<unsigned, unsigned> DisassembleOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range DisassembleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DisassembleOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> DisassembleOp::getOutValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range DisassembleOp::getOutLevels() {
  return getODSOperands(2);
}

::mlir::OpOperand &DisassembleOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DisassembleOp::getOutValuesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange DisassembleOp::getOutLevelsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DisassembleOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 2) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range DisassembleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> DisassembleOp::getRetValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::Operation::result_range DisassembleOp::getRetLevels() {
  return getODSResults(1);
}

::mlir::Value DisassembleOp::getValLen() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(2).begin());
}

::mlir::Operation::result_range DisassembleOp::getLvlLens() {
  return getODSResults(3);
}

void DisassembleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type ret_values, ::mlir::TypeRange ret_levels, ::mlir::Type val_len, ::mlir::TypeRange lvl_lens, ::mlir::Value tensor, ::mlir::Value out_values, ::mlir::ValueRange out_levels) {
  odsState.addOperands(tensor);
  odsState.addOperands(out_values);
  odsState.addOperands(out_levels);
  odsState.addTypes(ret_values);
  odsState.addTypes(ret_levels);
  odsState.addTypes(val_len);
  odsState.addTypes(lvl_lens);
}

void DisassembleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::Value out_values, ::mlir::ValueRange out_levels) {
  odsState.addOperands(tensor);
  odsState.addOperands(out_values);
  odsState.addOperands(out_levels);
  assert(resultTypes.size() >= 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DisassembleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DisassembleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DisassembleOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DisassembleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::OpAsmParser::UnresolvedOperand out_valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> out_valuesOperands(out_valuesRawOperands);  ::llvm::SMLoc out_valuesOperandsLoc;
  (void)out_valuesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> out_levelsOperands;
  ::llvm::SMLoc out_levelsOperandsLoc;
  (void)out_levelsOperandsLoc;
  ::mlir::Type out_valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> out_valuesTypes(out_valuesRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> out_levelsTypes;
  ::mlir::Type ret_valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> ret_valuesTypes(ret_valuesRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> ret_levelsTypes;
  ::mlir::Type val_lenRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> val_lenTypes(val_lenRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> lvl_lensTypes;

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  if (parser.parseKeyword("outs"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  out_valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(out_valuesRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  out_levelsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(out_levelsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    out_valuesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(out_levelsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    ret_valuesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseTypeList(ret_levelsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    val_lenRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseTypeList(lvl_lensTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  result.addTypes(ret_valuesTypes);
  result.addTypes(ret_levelsTypes);
  result.addTypes(val_lenTypes);
  result.addTypes(lvl_lensTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(out_valuesOperands, out_valuesTypes, out_valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(out_levelsOperands, out_levelsTypes, out_levelsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DisassembleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "outs";
  _odsPrinter << "(";
  _odsPrinter << getOutValues();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOutLevels();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOutValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOutLevels().getTypes();
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRetValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ' << "(";
  _odsPrinter << getRetLevels().getTypes();
  _odsPrinter << ")";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValLen().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ' << "(";
  _odsPrinter << getLvlLens().getTypes();
  _odsPrinter << ")";
}

void DisassembleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::DisassembleOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ExpandOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpandOpGenericAdaptorBase::ExpandOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.expand", odsAttrs.getContext());
}

ExpandOpGenericAdaptorBase::ExpandOpGenericAdaptorBase(ExpandOp op) : ExpandOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExpandOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExpandOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExpandOpAdaptor::ExpandOpAdaptor(ExpandOp op) : ExpandOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExpandOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ExpandOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "values");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "filled");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "added");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "count");
}

std::pair<unsigned, unsigned> ExpandOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExpandOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ExpandOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExpandOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExpandOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExpandOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpandOp::getValues() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> ExpandOp::getFilled() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::MemRefType> ExpandOp::getAdded() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSResults(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> ExpandOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(3).begin());
}

void ExpandOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values, ::mlir::Type filled, ::mlir::Type added, ::mlir::Type count, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  odsState.addTypes(values);
  odsState.addTypes(filled);
  odsState.addTypes(added);
  odsState.addTypes(count);
}

void ExpandOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpandOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExpandOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExpandOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ExpandOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  ::mlir::Type filledRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> filledTypes(filledRawTypes);
  ::mlir::Type addedRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> addedTypes(addedRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
    tensorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    filledRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    addedRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(valuesTypes);
  result.addTypes(filledTypes);
  result.addTypes(addedTypes);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpandOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getFilled().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getAdded().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ExpandOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ForeachOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ForeachOpGenericAdaptorBase::ForeachOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.foreach", odsAttrs.getContext());
}

ForeachOpGenericAdaptorBase::ForeachOpGenericAdaptorBase(ForeachOp op) : ForeachOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ForeachOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ForeachOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::AffineMapAttr ForeachOpGenericAdaptorBase::getOrderAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::AffineMapAttr>(getProperties().order);
  return attr;
}

::std::optional< ::mlir::AffineMap > ForeachOpGenericAdaptorBase::getOrder() {
  auto attr = getOrderAttr();
  return attr ? ::std::optional< ::mlir::AffineMap >(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &ForeachOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ForeachOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ForeachOpAdaptor::ForeachOpAdaptor(ForeachOp op) : ForeachOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ForeachOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_order = getProperties().order; (void)tblgen_order;

  if (tblgen_order && !((::llvm::isa<::mlir::AffineMapAttr>(tblgen_order))))
    return emitError(loc, "'sparse_tensor.foreach' op ""attribute 'order' failed to satisfy constraint: AffineMap attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForeachOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ForeachOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ForeachOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ForeachOp::getInitArgs() {
  return getODSOperands(1);
}

::mlir::OpOperand &ForeachOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ForeachOp::getInitArgsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ForeachOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range ForeachOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ForeachOp::getResults() {
  return getODSResults(0);
}

::mlir::Region &ForeachOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult ForeachOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.order;
       auto attr = dict.get("order");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for order in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `order` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ForeachOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.order;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("order",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ForeachOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.order.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ForeachOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "order")
      return prop.order;
  return std::nullopt;
}

void ForeachOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "order") {
       prop.order = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.order)>>(value);
       return;
    }
}

void ForeachOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.order) attrs.append("order", prop.order);
}

::mlir::LogicalResult ForeachOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOrderAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps4(attr, "order", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ForeachOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.order)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForeachOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.order);
}

::mlir::AffineMapAttr ForeachOp::getOrderAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::AffineMapAttr>(getProperties().order);
}

::std::optional< ::mlir::AffineMap > ForeachOp::getOrder() {
  auto attr = getOrderAttr();
  return attr ? ::std::optional< ::mlir::AffineMap >(attr.getValue()) : (::std::nullopt);
}

void ForeachOp::setOrderAttr(::mlir::AffineMapAttr attr) {
  (*this)->setAttr(getOrderAttrName(), attr);
}

void ForeachOp::setOrder(::std::optional<::mlir::AffineMap> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOrderAttrName(), ::mlir::AffineMapAttr::get(*attrValue));
    (*this)->removeAttr(getOrderAttrName());
}

::mlir::Attribute ForeachOp::removeOrderAttr() {
    auto &attr = getProperties().order;
    attr = {};
    return attr;
}

void ForeachOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, AffineMapAttr order, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> bodyBuilder) {
      build(odsBuilder, odsState, tensor, ValueRange(), order, bodyBuilder);
    
}

void ForeachOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> bodyBuilder) {
      build(odsBuilder, odsState, tensor, ValueRange(), nullptr, bodyBuilder);
    
}

void ForeachOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, ValueRange iterArgs, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> bodyBuilder) {
      build(odsBuilder, odsState, tensor, iterArgs, nullptr, bodyBuilder);
    
}

void ForeachOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value tensor, ::mlir::ValueRange initArgs, /*optional*/::mlir::AffineMapAttr order) {
  odsState.addOperands(tensor);
  odsState.addOperands(initArgs);
  if (order) {
    odsState.getOrAddProperties<Properties>().order = order;
  }
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void ForeachOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ForeachOp::verifyInvariantsImpl() {
  auto tblgen_order = getProperties().order; (void)tblgen_order;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps4(*this, tblgen_order, "order")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ForeachOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ForeachOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> initArgsOperands;
  ::llvm::SMLoc initArgsOperandsLoc;
  (void)initArgsOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> initArgsTypes;
  ::llvm::SmallVector<::mlir::Type, 1> resultsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("init"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  initArgsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(initArgsOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseTypeList(initArgsTypes))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalArrow())) {

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  }
  if (parser.parseKeyword("do"))
    return ::mlir::failure();

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();

  ensureTerminator(*regionRegion, parser.getBuilder(), result.location);
  result.addRegion(std::move(regionRegion));
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(initArgsOperands, initArgsTypes, initArgsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForeachOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  if (!getInitArgs().empty()) {
    _odsPrinter << ' ' << "init";
    _odsPrinter << "(";
    _odsPrinter << getInitArgs();
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (!getInitArgs().empty()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << getInitArgs().getTypes();
  }
  if (!getResults().empty()) {
    _odsPrinter << ' ' << "->";
    _odsPrinter << ' ';
    _odsPrinter << getResults().getTypes();
  }
  _odsPrinter << ' ' << "do";
  _odsPrinter << ' ';

  {
    bool printTerminator = true;
    if (auto *term = getRegion().empty() ? nullptr : getRegion().begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(getRegion(), /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ForeachOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::GetStorageSpecifierOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetStorageSpecifierOpGenericAdaptorBase::GetStorageSpecifierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.storage_specifier.get", odsAttrs.getContext());
}

GetStorageSpecifierOpGenericAdaptorBase::GetStorageSpecifierOpGenericAdaptorBase(GetStorageSpecifierOp op) : GetStorageSpecifierOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetStorageSpecifierOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetStorageSpecifierOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::sparse_tensor::StorageSpecifierKindAttr GetStorageSpecifierOpGenericAdaptorBase::getSpecifierKindAttr() {
  auto attr = ::llvm::cast<::mlir::sparse_tensor::StorageSpecifierKindAttr>(getProperties().specifierKind);
  return attr;
}

::mlir::sparse_tensor::StorageSpecifierKind GetStorageSpecifierOpGenericAdaptorBase::getSpecifierKind() {
  auto attr = getSpecifierKindAttr();
  return attr.getValue();
}

::mlir::IntegerAttr GetStorageSpecifierOpGenericAdaptorBase::getLevelAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().level);
  return attr;
}

::std::optional<::mlir::sparse_tensor::Level> GetStorageSpecifierOpGenericAdaptorBase::getLevel() {
  auto attr = getLevelAttr();
  return attr ? ::std::optional<::mlir::sparse_tensor::Level>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
GetStorageSpecifierOpAdaptor::GetStorageSpecifierOpAdaptor(GetStorageSpecifierOp op) : GetStorageSpecifierOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetStorageSpecifierOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  auto tblgen_specifierKind = getProperties().specifierKind; (void)tblgen_specifierKind;
  if (!tblgen_specifierKind) return emitError(loc, "'sparse_tensor.storage_specifier.get' op ""requires attribute 'specifierKind'");

  if (tblgen_specifierKind && !((::llvm::isa<::mlir::sparse_tensor::StorageSpecifierKindAttr>(tblgen_specifierKind))))
    return emitError(loc, "'sparse_tensor.storage_specifier.get' op ""attribute 'specifierKind' failed to satisfy constraint: sparse tensor storage specifier kind");

  if (tblgen_level && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_level))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_level).getType())))))
    return emitError(loc, "'sparse_tensor.storage_specifier.get' op ""attribute 'level' failed to satisfy constraint: level attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetStorageSpecifierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetStorageSpecifierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> GetStorageSpecifierOp::getSpecifier() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetStorageSpecifierOp::getSpecifierMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetStorageSpecifierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetStorageSpecifierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> GetStorageSpecifierOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetStorageSpecifierOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.level;
       auto attr = dict.get("level");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for level in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `level` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.specifierKind;
       auto attr = dict.get("specifierKind");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for specifierKind in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `specifierKind` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetStorageSpecifierOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.level;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("level",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.specifierKind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("specifierKind",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetStorageSpecifierOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.level.getAsOpaquePointer()), 
    llvm::hash_value(prop.specifierKind.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetStorageSpecifierOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "level")
      return prop.level;

    if (name == "specifierKind")
      return prop.specifierKind;
  return std::nullopt;
}

void GetStorageSpecifierOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "level") {
       prop.level = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.level)>>(value);
       return;
    }

    if (name == "specifierKind") {
       prop.specifierKind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.specifierKind)>>(value);
       return;
    }
}

void GetStorageSpecifierOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.level) attrs.append("level", prop.level);

    if (prop.specifierKind) attrs.append("specifierKind", prop.specifierKind);
}

::mlir::LogicalResult GetStorageSpecifierOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLevelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(attr, "level", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSpecifierKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps5(attr, "specifierKind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetStorageSpecifierOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.level)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.specifierKind)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetStorageSpecifierOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.level);
  writer.writeAttribute(prop.specifierKind);
}

::mlir::sparse_tensor::StorageSpecifierKindAttr GetStorageSpecifierOp::getSpecifierKindAttr() {
  return ::llvm::cast<::mlir::sparse_tensor::StorageSpecifierKindAttr>(getProperties().specifierKind);
}

::mlir::sparse_tensor::StorageSpecifierKind GetStorageSpecifierOp::getSpecifierKind() {
  auto attr = getSpecifierKindAttr();
  return attr.getValue();
}

::mlir::IntegerAttr GetStorageSpecifierOp::getLevelAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().level);
}

::std::optional<::mlir::sparse_tensor::Level> GetStorageSpecifierOp::getLevel() {
  auto attr = getLevelAttr();
  return attr ? ::std::optional<::mlir::sparse_tensor::Level>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void GetStorageSpecifierOp::setSpecifierKindAttr(::mlir::sparse_tensor::StorageSpecifierKindAttr attr) {
  (*this)->setAttr(getSpecifierKindAttrName(), attr);
}

void GetStorageSpecifierOp::setSpecifierKind(::mlir::sparse_tensor::StorageSpecifierKind attrValue) {
  (*this)->setAttr(getSpecifierKindAttrName(), ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void GetStorageSpecifierOp::setLevelAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLevelAttrName(), attr);
}

void GetStorageSpecifierOp::setLevel(::std::optional<::mlir::sparse_tensor::Level> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLevelAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), *attrValue));
    (*this)->removeAttr(getLevelAttrName());
}

::mlir::Attribute GetStorageSpecifierOp::removeLevelAttr() {
    auto &attr = getProperties().level;
    attr = {};
    return attr;
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level) {
  odsState.addOperands(specifier);
  odsState.getOrAddProperties<Properties>().specifierKind = specifierKind;
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  odsState.addTypes(result);
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level) {
  odsState.addOperands(specifier);
  odsState.getOrAddProperties<Properties>().specifierKind = specifierKind;
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GetStorageSpecifierOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level) {
  odsState.addOperands(specifier);
  odsState.getOrAddProperties<Properties>().specifierKind = specifierKind;
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level) {
  odsState.addOperands(specifier);
  odsState.getOrAddProperties<Properties>().specifierKind = ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(odsBuilder.getContext(), specifierKind);
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  odsState.addTypes(result);
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level) {
  odsState.addOperands(specifier);
  odsState.getOrAddProperties<Properties>().specifierKind = ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(odsBuilder.getContext(), specifierKind);
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GetStorageSpecifierOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level) {
  odsState.addOperands(specifier);
  odsState.getOrAddProperties<Properties>().specifierKind = ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(odsBuilder.getContext(), specifierKind);
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(GetStorageSpecifierOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult GetStorageSpecifierOp::verifyInvariantsImpl() {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  auto tblgen_specifierKind = getProperties().specifierKind; (void)tblgen_specifierKind;
  if (!tblgen_specifierKind) return emitOpError("requires attribute 'specifierKind'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps5(*this, tblgen_specifierKind, "specifierKind")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(*this, tblgen_level, "level")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetStorageSpecifierOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult GetStorageSpecifierOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult GetStorageSpecifierOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand specifierRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> specifierOperands(specifierRawOperands);  ::llvm::SMLoc specifierOperandsLoc;
  (void)specifierOperandsLoc;
  ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKindAttr;
  ::mlir::IntegerAttr levelAttr;
  ::mlir::Type specifierRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> specifierTypes(specifierRawTypes);

  specifierOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(specifierRawOperands[0]))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(specifierKindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (specifierKindAttr) result.getOrAddProperties<GetStorageSpecifierOp::Properties>().specifierKind = specifierKindAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("at"))) {

  if (parser.parseCustomAttributeWithFallback(levelAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (levelAttr) result.getOrAddProperties<GetStorageSpecifierOp::Properties>().level = levelAttr;
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

  if (parser.parseType(specifierRawTypes[0]))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(specifierOperands, specifierTypes, specifierOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetStorageSpecifierOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSpecifier();
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getSpecifierKindAttr());
  if (getLevelAttr()) {
    _odsPrinter << ' ' << "at";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getLevelAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("specifierKind");
  elidedAttrs.push_back("level");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
   _odsPrinter << getSpecifier().getType();
}

void GetStorageSpecifierOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::GetStorageSpecifierOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::InsertOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InsertOpGenericAdaptorBase::InsertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.insert", odsAttrs.getContext());
}

InsertOpGenericAdaptorBase::InsertOpGenericAdaptorBase(InsertOp op) : InsertOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

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

} // namespace detail
InsertOpAdaptor::InsertOpAdaptor(InsertOp op) : InsertOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult InsertOpAdaptor::verify(::mlir::Location loc) {
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

::mlir::Value InsertOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::TensorType> InsertOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range InsertOp::getLvlCoords() {
  return getODSOperands(2);
}

::mlir::OpOperand &InsertOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &InsertOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange InsertOp::getLvlCoordsMutable() {
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

::mlir::TypedValue<::mlir::TensorType> InsertOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords) {
  odsState.addOperands(value);
  odsState.addOperands(tensor);
  odsState.addOperands(lvlCoords);
  odsState.addTypes(result);
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords) {
  odsState.addOperands(value);
  odsState.addOperands(tensor);
  odsState.addOperands(lvlCoords);

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

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords) {
  odsState.addOperands(value);
  odsState.addOperands(tensor);
  odsState.addOperands(lvlCoords);
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
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ShapedType>((*this->getODSOperands(1).begin()).getType()).getElementType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that value type matches element type of tensor");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {tensor, result} have same type");
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
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lvlCoordsOperands;
  ::llvm::SMLoc lvlCoordsOperandsLoc;
  (void)lvlCoordsOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  lvlCoordsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(lvlCoordsOperands))
    return ::mlir::failure();
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  for (::mlir::Type type : tensorTypes) {
    (void)type;
    if (!((((::llvm::isa<::mlir::TensorType>(type))) && ((!!::mlir::sparse_tensor::getSparseTensorEncoding(type)))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
      return parser.emitError(parser.getNameLoc()) << "'tensor' must be sparse tensor of any type values, but got " << type;
    }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(tensorTypes[0]);
  if (parser.resolveOperands(valueOperands, ::llvm::cast<ShapedType>(tensorTypes[0]).getElementType(), valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(lvlCoordsOperands, odsBuildableType0, lvlCoordsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  _odsPrinter << "[";
  _odsPrinter << getLvlCoords();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::InsertOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::LoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoadOpGenericAdaptorBase::LoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.load", odsAttrs.getContext());
}

LoadOpGenericAdaptorBase::LoadOpGenericAdaptorBase(LoadOp op) : LoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr LoadOpGenericAdaptorBase::getHasInsertsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().hasInserts);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool LoadOpGenericAdaptorBase::getHasInserts() {
  auto attr = getHasInsertsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
LoadOpAdaptor::LoadOpAdaptor(LoadOp op) : LoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_hasInserts = getProperties().hasInserts; (void)tblgen_hasInserts;

  if (tblgen_hasInserts && !((::llvm::isa<::mlir::UnitAttr>(tblgen_hasInserts))))
    return emitError(loc, "'sparse_tensor.load' op ""attribute 'hasInserts' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LoadOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LoadOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LoadOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult LoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.hasInserts;
       auto attr = dict.get("hasInserts");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hasInserts in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hasInserts` in property conversion: " << attr;
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
      const auto &propStorage = prop.hasInserts;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hasInserts",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.hasInserts.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "hasInserts")
      return prop.hasInserts;
  return std::nullopt;
}

void LoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "hasInserts") {
       prop.hasInserts = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hasInserts)>>(value);
       return;
    }
}

void LoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.hasInserts) attrs.append("hasInserts", prop.hasInserts);
}

::mlir::LogicalResult LoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getHasInsertsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(attr, "hasInserts", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.hasInserts)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.hasInserts);
}

::mlir::UnitAttr LoadOp::getHasInsertsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().hasInserts);
}

bool LoadOp::getHasInserts() {
  auto attr = getHasInsertsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void LoadOp::setHasInsertsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getHasInsertsAttrName(), attr);
}

void LoadOp::setHasInserts(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getHasInsertsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getHasInsertsAttrName());
}

::mlir::Attribute LoadOp::removeHasInsertsAttr() {
    auto &attr = getProperties().hasInserts;
    attr = {};
    return attr;
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, /*optional*/::mlir::UnitAttr hasInserts) {
  odsState.addOperands(tensor);
  if (hasInserts) {
    odsState.getOrAddProperties<Properties>().hasInserts = hasInserts;
  }
  odsState.addTypes(result);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, /*optional*/::mlir::UnitAttr hasInserts) {
  odsState.addOperands(tensor);
  if (hasInserts) {
    odsState.getOrAddProperties<Properties>().hasInserts = hasInserts;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LoadOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, /*optional*/::mlir::UnitAttr hasInserts) {
  odsState.addOperands(tensor);
  if (hasInserts) {
    odsState.getOrAddProperties<Properties>().hasInserts = hasInserts;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, /*optional*/bool hasInserts) {
  odsState.addOperands(tensor);
  if (hasInserts) {
    odsState.getOrAddProperties<Properties>().hasInserts = ((hasInserts) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, /*optional*/bool hasInserts) {
  odsState.addOperands(tensor);
  if (hasInserts) {
    odsState.getOrAddProperties<Properties>().hasInserts = ((hasInserts) ? odsBuilder.getUnitAttr() : nullptr);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LoadOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, /*optional*/bool hasInserts) {
  odsState.addOperands(tensor);
  if (hasInserts) {
    odsState.getOrAddProperties<Properties>().hasInserts = ((hasInserts) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LoadOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult LoadOp::verifyInvariantsImpl() {
  auto tblgen_hasInserts = getProperties().hasInserts; (void)tblgen_hasInserts;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(*this, tblgen_hasInserts, "hasInserts")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult LoadOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult LoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("hasInserts"))) {
    result.getOrAddProperties<LoadOp::Properties>().hasInserts = parser.getBuilder().getUnitAttr();  }
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  result.addTypes(tensorTypes[0]);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  if (getHasInsertsAttr()) {
    _odsPrinter << ' ' << "hasInserts";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("hasInserts");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHasInsertsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("hasInserts");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::LoadOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::LvlOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LvlOpGenericAdaptorBase::LvlOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.lvl", odsAttrs.getContext());
}

LvlOpGenericAdaptorBase::LvlOpGenericAdaptorBase(LvlOp op) : LvlOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LvlOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LvlOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LvlOpAdaptor::LvlOpAdaptor(LvlOp op) : LvlOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LvlOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LvlOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LvlOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> LvlOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> LvlOp::getIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &LvlOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LvlOp::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> LvlOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LvlOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> LvlOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void LvlOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value index) {
  odsState.addOperands(source);
  odsState.addOperands(index);
  odsState.addTypes(result);
}

void LvlOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value index) {
  odsState.addOperands(source);
  odsState.addOperands(index);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LvlOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LvlOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value index) {
  odsState.addOperands(source);
  odsState.addOperands(index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LvlOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LvlOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LvlOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult LvlOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LvlOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult LvlOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult LvlOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> indexOperands(indexRawOperands);  ::llvm::SMLoc indexOperandsLoc;
  (void)indexOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(indexRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indexOperands, odsBuildableType0, indexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LvlOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndex();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LvlOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::LvlOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::NewOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NewOpGenericAdaptorBase::NewOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.new", odsAttrs.getContext());
}

NewOpGenericAdaptorBase::NewOpGenericAdaptorBase(NewOp op) : NewOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NewOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NewOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NewOpAdaptor::NewOpAdaptor(NewOp op) : NewOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NewOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NewOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NewOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NewOp::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NewOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NewOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NewOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> NewOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void NewOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void NewOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NewOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NewOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NewOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult NewOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NewOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void NewOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::NewOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::NumberOfEntriesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NumberOfEntriesOpGenericAdaptorBase::NumberOfEntriesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.number_of_entries", odsAttrs.getContext());
}

NumberOfEntriesOpGenericAdaptorBase::NumberOfEntriesOpGenericAdaptorBase(NumberOfEntriesOp op) : NumberOfEntriesOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NumberOfEntriesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NumberOfEntriesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NumberOfEntriesOpAdaptor::NumberOfEntriesOpAdaptor(NumberOfEntriesOp op) : NumberOfEntriesOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NumberOfEntriesOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NumberOfEntriesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NumberOfEntriesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> NumberOfEntriesOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NumberOfEntriesOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NumberOfEntriesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NumberOfEntriesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> NumberOfEntriesOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void NumberOfEntriesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  odsState.addTypes(result);
}

void NumberOfEntriesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor) {
  odsState.addOperands(tensor);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NumberOfEntriesOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NumberOfEntriesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NumberOfEntriesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NumberOfEntriesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NumberOfEntriesOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult NumberOfEntriesOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NumberOfEntriesOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult NumberOfEntriesOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult NumberOfEntriesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
    tensorRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NumberOfEntriesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void NumberOfEntriesOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::NumberOfEntriesOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::OutOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OutOpGenericAdaptorBase::OutOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.out", odsAttrs.getContext());
}

OutOpGenericAdaptorBase::OutOpGenericAdaptorBase(OutOp op) : OutOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OutOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr OutOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
OutOpAdaptor::OutOpAdaptor(OutOp op) : OutOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OutOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OutOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OutOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> OutOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Value OutOp::getDest() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &OutOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &OutOp::getDestMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> OutOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OutOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void OutOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, ::mlir::Value dest) {
  odsState.addOperands(tensor);
  odsState.addOperands(dest);
}

void OutOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::Value dest) {
  odsState.addOperands(tensor);
  odsState.addOperands(dest);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OutOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OutOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OutOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult OutOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc;
  (void)destOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OutOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDest();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::OutOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::PushBackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PushBackOpGenericAdaptorBase::PushBackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.push_back", odsAttrs.getContext());
}

PushBackOpGenericAdaptorBase::PushBackOpGenericAdaptorBase(PushBackOp op) : PushBackOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PushBackOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, true};
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

::mlir::DictionaryAttr PushBackOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr PushBackOpGenericAdaptorBase::getInboundsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inbounds);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PushBackOpGenericAdaptorBase::getInbounds() {
  auto attr = getInboundsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
PushBackOpAdaptor::PushBackOpAdaptor(PushBackOp op) : PushBackOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PushBackOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inbounds = getProperties().inbounds; (void)tblgen_inbounds;

  if (tblgen_inbounds && !((::llvm::isa<::mlir::UnitAttr>(tblgen_inbounds))))
    return emitError(loc, "'sparse_tensor.push_back' op ""attribute 'inbounds' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void PushBackOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "outBuffer");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "newSize");
}

std::pair<unsigned, unsigned> PushBackOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
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

::mlir::Operation::operand_range PushBackOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> PushBackOp::getCurSize() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> PushBackOp::getInBuffer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Value PushBackOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> PushBackOp::getN() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IndexType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*operands.begin());
}

::mlir::OpOperand &PushBackOp::getCurSizeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PushBackOp::getInBufferMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PushBackOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange PushBackOp::getNMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PushBackOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PushBackOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> PushBackOp::getOutBuffer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> PushBackOp::getNewSize() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(1).begin());
}

::mlir::LogicalResult PushBackOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inbounds;
       auto attr = dict.get("inbounds");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for inbounds in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inbounds` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PushBackOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inbounds;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inbounds",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PushBackOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inbounds.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PushBackOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inbounds")
      return prop.inbounds;
  return std::nullopt;
}

void PushBackOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inbounds") {
       prop.inbounds = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inbounds)>>(value);
       return;
    }
}

void PushBackOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inbounds) attrs.append("inbounds", prop.inbounds);
}

::mlir::LogicalResult PushBackOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInboundsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(attr, "inbounds", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PushBackOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inbounds)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PushBackOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inbounds);
}

::mlir::UnitAttr PushBackOp::getInboundsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inbounds);
}

bool PushBackOp::getInbounds() {
  auto attr = getInboundsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void PushBackOp::setInboundsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getInboundsAttrName(), attr);
}

void PushBackOp::setInbounds(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInboundsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getInboundsAttrName());
}

::mlir::Attribute PushBackOp::removeInboundsAttr() {
    auto &attr = getProperties().inbounds;
    attr = {};
    return attr;
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outBuffer, ::mlir::Type newSize, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/::mlir::UnitAttr inbounds) {
  odsState.addOperands(curSize);
  odsState.addOperands(inBuffer);
  odsState.addOperands(value);
  if (n)
    odsState.addOperands(n);
  if (inbounds) {
    odsState.getOrAddProperties<Properties>().inbounds = inbounds;
  }
  odsState.addTypes(outBuffer);
  odsState.addTypes(newSize);
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/::mlir::UnitAttr inbounds) {
  odsState.addOperands(curSize);
  odsState.addOperands(inBuffer);
  odsState.addOperands(value);
  if (n)
    odsState.addOperands(n);
  if (inbounds) {
    odsState.getOrAddProperties<Properties>().inbounds = inbounds;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PushBackOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/::mlir::UnitAttr inbounds) {
  odsState.addOperands(curSize);
  odsState.addOperands(inBuffer);
  odsState.addOperands(value);
  if (n)
    odsState.addOperands(n);
  if (inbounds) {
    odsState.getOrAddProperties<Properties>().inbounds = inbounds;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outBuffer, ::mlir::Type newSize, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/bool inbounds) {
  odsState.addOperands(curSize);
  odsState.addOperands(inBuffer);
  odsState.addOperands(value);
  if (n)
    odsState.addOperands(n);
  if (inbounds) {
    odsState.getOrAddProperties<Properties>().inbounds = ((inbounds) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(outBuffer);
  odsState.addTypes(newSize);
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/bool inbounds) {
  odsState.addOperands(curSize);
  odsState.addOperands(inBuffer);
  odsState.addOperands(value);
  if (n)
    odsState.addOperands(n);
  if (inbounds) {
    odsState.getOrAddProperties<Properties>().inbounds = ((inbounds) ? odsBuilder.getUnitAttr() : nullptr);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PushBackOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/bool inbounds) {
  odsState.addOperands(curSize);
  odsState.addOperands(inBuffer);
  odsState.addOperands(value);
  if (n)
    odsState.addOperands(n);
  if (inbounds) {
    odsState.getOrAddProperties<Properties>().inbounds = ((inbounds) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PushBackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PushBackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(PushBackOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult PushBackOp::verifyInvariantsImpl() {
  auto tblgen_inbounds = getProperties().inbounds; (void)tblgen_inbounds;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps0(*this, tblgen_inbounds, "inbounds")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps15(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ShapedType>((*this->getODSOperands(1).begin()).getType()).getElementType(), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that value type matches element type of inBuffer");
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {inBuffer, outBuffer} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult PushBackOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult PushBackOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  ::mlir::Type odsInferredType1 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  inferredReturnTypes[1] = odsInferredType1;
  return ::mlir::success();
}

::mlir::ParseResult PushBackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand curSizeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> curSizeOperands(curSizeRawOperands);  ::llvm::SMLoc curSizeOperandsLoc;
  (void)curSizeOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand inBufferRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inBufferOperands(inBufferRawOperands);  ::llvm::SMLoc inBufferOperandsLoc;
  (void)inBufferOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> nOperands;
  ::llvm::SMLoc nOperandsLoc;
  (void)nOperandsLoc;
  ::mlir::Type curSizeRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> curSizeTypes(curSizeRawTypes);
  ::mlir::Type inBufferRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inBufferTypes(inBufferRawTypes);
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> nTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("inbounds"))) {
    result.getOrAddProperties<PushBackOp::Properties>().inbounds = parser.getBuilder().getUnitAttr();  }

  curSizeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(curSizeRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  inBufferOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inBufferRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    nOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      nOperands.push_back(operand);
    }
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
    ::mlir::IndexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    curSizeRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inBufferRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      nTypes.push_back(optionalType);
    }
  }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(inBufferTypes[0]);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(curSizeOperands, curSizeTypes, curSizeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(inBufferOperands, inBufferTypes, inBufferOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(nOperands, nTypes, nOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PushBackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getInboundsAttr()) {
    _odsPrinter << ' ' << "inbounds";
  }
  _odsPrinter << ' ';
  _odsPrinter << getCurSize();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getInBuffer();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  if (getN()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getN())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("inbounds");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInboundsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inbounds");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getCurSize().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IndexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getInBuffer().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (getN()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << (getN() ? ::llvm::ArrayRef<::mlir::Type>(getN().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::PushBackOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ReduceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceOpGenericAdaptorBase::ReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.reduce", odsAttrs.getContext());
}

ReduceOpGenericAdaptorBase::ReduceOpGenericAdaptorBase(ReduceOp op) : ReduceOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ReduceOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ReduceOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReduceOpAdaptor::ReduceOpAdaptor(ReduceOp op) : ReduceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceOp::getX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ReduceOp::getY() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value ReduceOp::getIdentity() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ReduceOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ReduceOp::getYMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ReduceOp::getIdentityMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &ReduceOp::getRegion() {
  return (*this)->getRegion(0);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x, ::mlir::Value y, ::mlir::Value identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  odsState.addOperands(identity);
  (void)odsState.addRegion();
  odsState.addTypes(output);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value y, ::mlir::Value identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  odsState.addOperands(identity);
  (void)odsState.addRegion();

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReduceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y, ::mlir::Value identity) {
  odsState.addOperands(x);
  odsState.addOperands(y);
  odsState.addOperands(identity);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReduceOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ReduceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult ReduceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ReduceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand yRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> yOperands(yRawOperands);  ::llvm::SMLoc yOperandsLoc;
  (void)yOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand identityRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> identityOperands(identityRawOperands);  ::llvm::SMLoc identityOperandsLoc;
  (void)identityOperandsLoc;
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  yOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(yRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  identityOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(identityRawOperands[0]))
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
    outputRawTypes[0] = type;
  }

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  result.addTypes(outputTypes);
  if (parser.resolveOperands(xOperands, outputTypes[0], xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(yOperands, outputTypes[0], yOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(identityOperands, outputTypes[0], identityOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getY();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIdentity();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
}

void ReduceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ReduceOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ReinterpretMapOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReinterpretMapOpGenericAdaptorBase::ReinterpretMapOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.reinterpret_map", odsAttrs.getContext());
}

ReinterpretMapOpGenericAdaptorBase::ReinterpretMapOpGenericAdaptorBase(ReinterpretMapOp op) : ReinterpretMapOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReinterpretMapOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReinterpretMapOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReinterpretMapOpAdaptor::ReinterpretMapOpAdaptor(ReinterpretMapOp op) : ReinterpretMapOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReinterpretMapOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReinterpretMapOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReinterpretMapOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReinterpretMapOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReinterpretMapOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReinterpretMapOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReinterpretMapOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReinterpretMapOp::getDest() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

void ReinterpretMapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(dest);
}

void ReinterpretMapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReinterpretMapOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReinterpretMapOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReinterpretMapOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReinterpretMapOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    destRawTypes[0] = type;
  }
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReinterpretMapOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDest().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ReinterpretMapOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ReinterpretMapOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ReorderCOOOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReorderCOOOpGenericAdaptorBase::ReorderCOOOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.reorder_coo", odsAttrs.getContext());
}

ReorderCOOOpGenericAdaptorBase::ReorderCOOOpGenericAdaptorBase(ReorderCOOOp op) : ReorderCOOOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReorderCOOOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReorderCOOOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::sparse_tensor::SparseTensorSortKindAttr ReorderCOOOpGenericAdaptorBase::getAlgorithmAttr() {
  auto attr = ::llvm::cast<::mlir::sparse_tensor::SparseTensorSortKindAttr>(getProperties().algorithm);
  return attr;
}

::mlir::sparse_tensor::SparseTensorSortKind ReorderCOOOpGenericAdaptorBase::getAlgorithm() {
  auto attr = getAlgorithmAttr();
  return attr.getValue();
}

} // namespace detail
ReorderCOOOpAdaptor::ReorderCOOOpAdaptor(ReorderCOOOp op) : ReorderCOOOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReorderCOOOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_algorithm = getProperties().algorithm; (void)tblgen_algorithm;
  if (!tblgen_algorithm) return emitError(loc, "'sparse_tensor.reorder_coo' op ""requires attribute 'algorithm'");

  if (tblgen_algorithm && !((::llvm::isa<::mlir::sparse_tensor::SparseTensorSortKindAttr>(tblgen_algorithm))))
    return emitError(loc, "'sparse_tensor.reorder_coo' op ""attribute 'algorithm' failed to satisfy constraint: sparse tensor sort algorithm");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReorderCOOOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReorderCOOOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReorderCOOOp::getInputCoo() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReorderCOOOp::getInputCooMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReorderCOOOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReorderCOOOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReorderCOOOp::getResultCoo() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReorderCOOOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.algorithm;
       auto attr = dict.get("algorithm");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for algorithm in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `algorithm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReorderCOOOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.algorithm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("algorithm",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReorderCOOOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.algorithm.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReorderCOOOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "algorithm")
      return prop.algorithm;
  return std::nullopt;
}

void ReorderCOOOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "algorithm") {
       prop.algorithm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.algorithm)>>(value);
       return;
    }
}

void ReorderCOOOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.algorithm) attrs.append("algorithm", prop.algorithm);
}

::mlir::LogicalResult ReorderCOOOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAlgorithmAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps7(attr, "algorithm", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReorderCOOOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.algorithm)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReorderCOOOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.algorithm);
}

::mlir::sparse_tensor::SparseTensorSortKindAttr ReorderCOOOp::getAlgorithmAttr() {
  return ::llvm::cast<::mlir::sparse_tensor::SparseTensorSortKindAttr>(getProperties().algorithm);
}

::mlir::sparse_tensor::SparseTensorSortKind ReorderCOOOp::getAlgorithm() {
  auto attr = getAlgorithmAttr();
  return attr.getValue();
}

void ReorderCOOOp::setAlgorithmAttr(::mlir::sparse_tensor::SparseTensorSortKindAttr attr) {
  (*this)->setAttr(getAlgorithmAttrName(), attr);
}

void ReorderCOOOp::setAlgorithm(::mlir::sparse_tensor::SparseTensorSortKind attrValue) {
  (*this)->setAttr(getAlgorithmAttrName(), ::mlir::sparse_tensor::SparseTensorSortKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReorderCOOOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result_coo, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm) {
  odsState.addOperands(input_coo);
  odsState.getOrAddProperties<Properties>().algorithm = algorithm;
  odsState.addTypes(result_coo);
}

void ReorderCOOOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm) {
  odsState.addOperands(input_coo);
  odsState.getOrAddProperties<Properties>().algorithm = algorithm;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReorderCOOOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result_coo, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKind algorithm) {
  odsState.addOperands(input_coo);
  odsState.getOrAddProperties<Properties>().algorithm = ::mlir::sparse_tensor::SparseTensorSortKindAttr::get(odsBuilder.getContext(), algorithm);
  odsState.addTypes(result_coo);
}

void ReorderCOOOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKind algorithm) {
  odsState.addOperands(input_coo);
  odsState.getOrAddProperties<Properties>().algorithm = ::mlir::sparse_tensor::SparseTensorSortKindAttr::get(odsBuilder.getContext(), algorithm);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReorderCOOOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReorderCOOOp::verifyInvariantsImpl() {
  auto tblgen_algorithm = getProperties().algorithm; (void)tblgen_algorithm;
  if (!tblgen_algorithm) return emitOpError("requires attribute 'algorithm'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps7(*this, tblgen_algorithm, "algorithm")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReorderCOOOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReorderCOOOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithmAttr;
  ::mlir::OpAsmParser::UnresolvedOperand input_cooRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> input_cooOperands(input_cooRawOperands);  ::llvm::SMLoc input_cooOperandsLoc;
  (void)input_cooOperandsLoc;
  ::mlir::Type input_cooRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> input_cooTypes(input_cooRawTypes);
  ::mlir::Type result_cooRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> result_cooTypes(result_cooRawTypes);

  if (parser.parseCustomAttributeWithFallback(algorithmAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (algorithmAttr) result.getOrAddProperties<ReorderCOOOp::Properties>().algorithm = algorithmAttr;

  input_cooOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(input_cooRawOperands[0]))
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    input_cooRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    result_cooRawTypes[0] = type;
  }
  result.addTypes(result_cooTypes);
  if (parser.resolveOperands(input_cooOperands, input_cooTypes, input_cooOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReorderCOOOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getAlgorithmAttr());
  _odsPrinter << ' ';
  _odsPrinter << getInputCoo();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("algorithm");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInputCoo().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResultCoo().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ReorderCOOOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ReorderCOOOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::SelectOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.select", odsAttrs.getContext());
}

SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(SelectOp op) : SelectOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SelectOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SelectOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &SelectOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange SelectOpGenericAdaptorBase::getRegions() {
  return odsRegions;
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

::mlir::Value SelectOp::getX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SelectOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
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

::mlir::Value SelectOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &SelectOp::getRegion() {
  return (*this)->getRegion(0);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x) {
  odsState.addOperands(x);
  (void)odsState.addRegion();
  odsState.addTypes(output);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x) {
  odsState.addOperands(x);
  (void)odsState.addRegion();

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SelectOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x) {
  odsState.addOperands(x);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SelectOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SelectOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SelectOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult SelectOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SelectOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  result.addTypes(xTypes[0]);
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SelectOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
}

void SelectOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SelectOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::SetStorageSpecifierOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SetStorageSpecifierOpGenericAdaptorBase::SetStorageSpecifierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.storage_specifier.set", odsAttrs.getContext());
}

SetStorageSpecifierOpGenericAdaptorBase::SetStorageSpecifierOpGenericAdaptorBase(SetStorageSpecifierOp op) : SetStorageSpecifierOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SetStorageSpecifierOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SetStorageSpecifierOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::sparse_tensor::StorageSpecifierKindAttr SetStorageSpecifierOpGenericAdaptorBase::getSpecifierKindAttr() {
  auto attr = ::llvm::cast<::mlir::sparse_tensor::StorageSpecifierKindAttr>(getProperties().specifierKind);
  return attr;
}

::mlir::sparse_tensor::StorageSpecifierKind SetStorageSpecifierOpGenericAdaptorBase::getSpecifierKind() {
  auto attr = getSpecifierKindAttr();
  return attr.getValue();
}

::mlir::IntegerAttr SetStorageSpecifierOpGenericAdaptorBase::getLevelAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().level);
  return attr;
}

::std::optional<::mlir::sparse_tensor::Level> SetStorageSpecifierOpGenericAdaptorBase::getLevel() {
  auto attr = getLevelAttr();
  return attr ? ::std::optional<::mlir::sparse_tensor::Level>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
SetStorageSpecifierOpAdaptor::SetStorageSpecifierOpAdaptor(SetStorageSpecifierOp op) : SetStorageSpecifierOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SetStorageSpecifierOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  auto tblgen_specifierKind = getProperties().specifierKind; (void)tblgen_specifierKind;
  if (!tblgen_specifierKind) return emitError(loc, "'sparse_tensor.storage_specifier.set' op ""requires attribute 'specifierKind'");

  if (tblgen_specifierKind && !((::llvm::isa<::mlir::sparse_tensor::StorageSpecifierKindAttr>(tblgen_specifierKind))))
    return emitError(loc, "'sparse_tensor.storage_specifier.set' op ""attribute 'specifierKind' failed to satisfy constraint: sparse tensor storage specifier kind");

  if (tblgen_level && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_level))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_level).getType())))))
    return emitError(loc, "'sparse_tensor.storage_specifier.set' op ""attribute 'level' failed to satisfy constraint: level attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SetStorageSpecifierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SetStorageSpecifierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> SetStorageSpecifierOp::getSpecifier() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> SetStorageSpecifierOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SetStorageSpecifierOp::getSpecifierMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SetStorageSpecifierOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SetStorageSpecifierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SetStorageSpecifierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> SetStorageSpecifierOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult SetStorageSpecifierOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.level;
       auto attr = dict.get("level");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for level in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `level` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.specifierKind;
       auto attr = dict.get("specifierKind");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for specifierKind in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `specifierKind` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SetStorageSpecifierOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.level;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("level",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.specifierKind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("specifierKind",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SetStorageSpecifierOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.level.getAsOpaquePointer()), 
    llvm::hash_value(prop.specifierKind.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SetStorageSpecifierOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "level")
      return prop.level;

    if (name == "specifierKind")
      return prop.specifierKind;
  return std::nullopt;
}

void SetStorageSpecifierOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "level") {
       prop.level = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.level)>>(value);
       return;
    }

    if (name == "specifierKind") {
       prop.specifierKind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.specifierKind)>>(value);
       return;
    }
}

void SetStorageSpecifierOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.level) attrs.append("level", prop.level);

    if (prop.specifierKind) attrs.append("specifierKind", prop.specifierKind);
}

::mlir::LogicalResult SetStorageSpecifierOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLevelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(attr, "level", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSpecifierKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps5(attr, "specifierKind", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SetStorageSpecifierOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.level)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.specifierKind)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SetStorageSpecifierOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.level);
  writer.writeAttribute(prop.specifierKind);
}

::mlir::sparse_tensor::StorageSpecifierKindAttr SetStorageSpecifierOp::getSpecifierKindAttr() {
  return ::llvm::cast<::mlir::sparse_tensor::StorageSpecifierKindAttr>(getProperties().specifierKind);
}

::mlir::sparse_tensor::StorageSpecifierKind SetStorageSpecifierOp::getSpecifierKind() {
  auto attr = getSpecifierKindAttr();
  return attr.getValue();
}

::mlir::IntegerAttr SetStorageSpecifierOp::getLevelAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().level);
}

::std::optional<::mlir::sparse_tensor::Level> SetStorageSpecifierOp::getLevel() {
  auto attr = getLevelAttr();
  return attr ? ::std::optional<::mlir::sparse_tensor::Level>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void SetStorageSpecifierOp::setSpecifierKindAttr(::mlir::sparse_tensor::StorageSpecifierKindAttr attr) {
  (*this)->setAttr(getSpecifierKindAttrName(), attr);
}

void SetStorageSpecifierOp::setSpecifierKind(::mlir::sparse_tensor::StorageSpecifierKind attrValue) {
  (*this)->setAttr(getSpecifierKindAttrName(), ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SetStorageSpecifierOp::setLevelAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLevelAttrName(), attr);
}

void SetStorageSpecifierOp::setLevel(::std::optional<::mlir::sparse_tensor::Level> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getLevelAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), *attrValue));
    (*this)->removeAttr(getLevelAttrName());
}

::mlir::Attribute SetStorageSpecifierOp::removeLevelAttr() {
    auto &attr = getProperties().level;
    attr = {};
    return attr;
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value) {
  odsState.addOperands(specifier);
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().specifierKind = specifierKind;
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  odsState.addTypes(result);
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value) {
  odsState.addOperands(specifier);
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().specifierKind = specifierKind;
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SetStorageSpecifierOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value) {
  odsState.addOperands(specifier);
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().specifierKind = specifierKind;
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value) {
  odsState.addOperands(specifier);
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().specifierKind = ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(odsBuilder.getContext(), specifierKind);
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  odsState.addTypes(result);
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value) {
  odsState.addOperands(specifier);
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().specifierKind = ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(odsBuilder.getContext(), specifierKind);
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SetStorageSpecifierOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value) {
  odsState.addOperands(specifier);
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().specifierKind = ::mlir::sparse_tensor::StorageSpecifierKindAttr::get(odsBuilder.getContext(), specifierKind);
  if (level) {
    odsState.getOrAddProperties<Properties>().level = level;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SetStorageSpecifierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SetStorageSpecifierOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SetStorageSpecifierOp::verifyInvariantsImpl() {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  auto tblgen_specifierKind = getProperties().specifierKind; (void)tblgen_specifierKind;
  if (!tblgen_specifierKind) return emitOpError("requires attribute 'specifierKind'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps5(*this, tblgen_specifierKind, "specifierKind")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(*this, tblgen_level, "level")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps14(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()) && ((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {result, specifier} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult SetStorageSpecifierOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult SetStorageSpecifierOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SetStorageSpecifierOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand specifierRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> specifierOperands(specifierRawOperands);  ::llvm::SMLoc specifierOperandsLoc;
  (void)specifierOperandsLoc;
  ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKindAttr;
  ::mlir::IntegerAttr levelAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  specifierOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(specifierRawOperands[0]))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(specifierKindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (specifierKindAttr) result.getOrAddProperties<SetStorageSpecifierOp::Properties>().specifierKind = specifierKindAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("at"))) {

  if (parser.parseCustomAttributeWithFallback(levelAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (levelAttr) result.getOrAddProperties<SetStorageSpecifierOp::Properties>().level = levelAttr;
  }
  if (parser.parseKeyword("with"))
    return ::mlir::failure();

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
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

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(specifierOperands, resultTypes[0], specifierOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valueOperands, odsBuildableType0, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SetStorageSpecifierOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSpecifier();
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getSpecifierKindAttr());
  if (getLevelAttr()) {
    _odsPrinter << ' ' << "at";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getLevelAttr());
  }
  _odsPrinter << ' ' << "with";
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("specifierKind");
  elidedAttrs.push_back("level");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
   _odsPrinter << getResult().getType();
}

void SetStorageSpecifierOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SetStorageSpecifierOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::SortOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SortOpGenericAdaptorBase::SortOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.sort", odsAttrs.getContext());
}

SortOpGenericAdaptorBase::SortOpGenericAdaptorBase(SortOp op) : SortOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SortOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr SortOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::AffineMapAttr SortOpGenericAdaptorBase::getPermMapAttr() {
  auto attr = ::llvm::cast<::mlir::AffineMapAttr>(getProperties().perm_map);
  return attr;
}

::mlir::AffineMap SortOpGenericAdaptorBase::getPermMap() {
  auto attr = getPermMapAttr();
  return attr.getValue();
}

::mlir::IntegerAttr SortOpGenericAdaptorBase::getNyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().ny);
  return attr;
}

::std::optional< ::llvm::APInt > SortOpGenericAdaptorBase::getNy() {
  auto attr = getNyAttr();
  return attr ? ::std::optional< ::llvm::APInt >(attr.getValue()) : (::std::nullopt);
}

::mlir::sparse_tensor::SparseTensorSortKindAttr SortOpGenericAdaptorBase::getAlgorithmAttr() {
  auto attr = ::llvm::cast<::mlir::sparse_tensor::SparseTensorSortKindAttr>(getProperties().algorithm);
  return attr;
}

::mlir::sparse_tensor::SparseTensorSortKind SortOpGenericAdaptorBase::getAlgorithm() {
  auto attr = getAlgorithmAttr();
  return attr.getValue();
}

} // namespace detail
SortOpAdaptor::SortOpAdaptor(SortOp op) : SortOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SortOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_algorithm = getProperties().algorithm; (void)tblgen_algorithm;
  if (!tblgen_algorithm) return emitError(loc, "'sparse_tensor.sort' op ""requires attribute 'algorithm'");
  auto tblgen_ny = getProperties().ny; (void)tblgen_ny;
  auto tblgen_perm_map = getProperties().perm_map; (void)tblgen_perm_map;
  if (!tblgen_perm_map) return emitError(loc, "'sparse_tensor.sort' op ""requires attribute 'perm_map'");

  if (tblgen_perm_map && !((::llvm::isa<::mlir::AffineMapAttr>(tblgen_perm_map))))
    return emitError(loc, "'sparse_tensor.sort' op ""attribute 'perm_map' failed to satisfy constraint: AffineMap attribute");

  if (tblgen_ny && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_ny))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_ny).getType())))))
    return emitError(loc, "'sparse_tensor.sort' op ""attribute 'ny' failed to satisfy constraint: index attribute");

  if (tblgen_algorithm && !((::llvm::isa<::mlir::sparse_tensor::SparseTensorSortKindAttr>(tblgen_algorithm))))
    return emitError(loc, "'sparse_tensor.sort' op ""attribute 'algorithm' failed to satisfy constraint: sparse tensor sort algorithm");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SortOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range SortOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SortOp::getN() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SortOp::getXy() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range SortOp::getYs() {
  return getODSOperands(2);
}

::mlir::OpOperand &SortOp::getNMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SortOp::getXyMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SortOp::getYsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SortOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SortOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult SortOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.algorithm;
       auto attr = dict.get("algorithm");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for algorithm in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `algorithm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.ny;
       auto attr = dict.get("ny");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for ny in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `ny` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.perm_map;
       auto attr = dict.get("perm_map");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for perm_map in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `perm_map` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SortOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.algorithm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("algorithm",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.ny;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("ny",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.perm_map;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("perm_map",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SortOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.algorithm.getAsOpaquePointer()), 
    llvm::hash_value(prop.ny.getAsOpaquePointer()), 
    llvm::hash_value(prop.perm_map.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SortOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "algorithm")
      return prop.algorithm;

    if (name == "ny")
      return prop.ny;

    if (name == "perm_map")
      return prop.perm_map;
  return std::nullopt;
}

void SortOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "algorithm") {
       prop.algorithm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.algorithm)>>(value);
       return;
    }

    if (name == "ny") {
       prop.ny = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.ny)>>(value);
       return;
    }

    if (name == "perm_map") {
       prop.perm_map = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.perm_map)>>(value);
       return;
    }
}

void SortOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.algorithm) attrs.append("algorithm", prop.algorithm);

    if (prop.ny) attrs.append("ny", prop.ny);

    if (prop.perm_map) attrs.append("perm_map", prop.perm_map);
}

::mlir::LogicalResult SortOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAlgorithmAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps7(attr, "algorithm", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps8(attr, "ny", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPermMapAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps4(attr, "perm_map", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SortOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.algorithm)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.ny)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.perm_map)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SortOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.algorithm);

  writer.writeOptionalAttribute(prop.ny);
  writer.writeAttribute(prop.perm_map);
}

::mlir::AffineMapAttr SortOp::getPermMapAttr() {
  return ::llvm::cast<::mlir::AffineMapAttr>(getProperties().perm_map);
}

::mlir::AffineMap SortOp::getPermMap() {
  auto attr = getPermMapAttr();
  return attr.getValue();
}

::mlir::IntegerAttr SortOp::getNyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().ny);
}

::std::optional< ::llvm::APInt > SortOp::getNy() {
  auto attr = getNyAttr();
  return attr ? ::std::optional< ::llvm::APInt >(attr.getValue()) : (::std::nullopt);
}

::mlir::sparse_tensor::SparseTensorSortKindAttr SortOp::getAlgorithmAttr() {
  return ::llvm::cast<::mlir::sparse_tensor::SparseTensorSortKindAttr>(getProperties().algorithm);
}

::mlir::sparse_tensor::SparseTensorSortKind SortOp::getAlgorithm() {
  auto attr = getAlgorithmAttr();
  return attr.getValue();
}

void SortOp::setPermMapAttr(::mlir::AffineMapAttr attr) {
  (*this)->setAttr(getPermMapAttrName(), attr);
}

void SortOp::setPermMap(::mlir::AffineMap attrValue) {
  (*this)->setAttr(getPermMapAttrName(), ::mlir::AffineMapAttr::get(attrValue));
}

void SortOp::setNyAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNyAttrName(), attr);
}

void SortOp::setNy(::std::optional<::llvm::APInt> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNyAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), *attrValue));
    (*this)->removeAttr(getNyAttrName());
}

void SortOp::setAlgorithmAttr(::mlir::sparse_tensor::SparseTensorSortKindAttr attr) {
  (*this)->setAttr(getAlgorithmAttrName(), attr);
}

void SortOp::setAlgorithm(::mlir::sparse_tensor::SparseTensorSortKind attrValue) {
  (*this)->setAttr(getAlgorithmAttrName(), ::mlir::sparse_tensor::SparseTensorSortKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

::mlir::Attribute SortOp::removeNyAttr() {
    auto &attr = getProperties().ny;
    attr = {};
    return attr;
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMapAttr perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm) {
  odsState.addOperands(n);
  odsState.addOperands(xy);
  odsState.addOperands(ys);
  odsState.getOrAddProperties<Properties>().perm_map = perm_map;
  if (ny) {
    odsState.getOrAddProperties<Properties>().ny = ny;
  }
  odsState.getOrAddProperties<Properties>().algorithm = algorithm;
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMapAttr perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm) {
  odsState.addOperands(n);
  odsState.addOperands(xy);
  odsState.addOperands(ys);
  odsState.getOrAddProperties<Properties>().perm_map = perm_map;
  if (ny) {
    odsState.getOrAddProperties<Properties>().ny = ny;
  }
  odsState.getOrAddProperties<Properties>().algorithm = algorithm;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMap perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKind algorithm) {
  odsState.addOperands(n);
  odsState.addOperands(xy);
  odsState.addOperands(ys);
  odsState.getOrAddProperties<Properties>().perm_map = ::mlir::AffineMapAttr::get(perm_map);
  if (ny) {
    odsState.getOrAddProperties<Properties>().ny = ny;
  }
  odsState.getOrAddProperties<Properties>().algorithm = ::mlir::sparse_tensor::SparseTensorSortKindAttr::get(odsBuilder.getContext(), algorithm);
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMap perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKind algorithm) {
  odsState.addOperands(n);
  odsState.addOperands(xy);
  odsState.addOperands(ys);
  odsState.getOrAddProperties<Properties>().perm_map = ::mlir::AffineMapAttr::get(perm_map);
  if (ny) {
    odsState.getOrAddProperties<Properties>().ny = ny;
  }
  odsState.getOrAddProperties<Properties>().algorithm = ::mlir::sparse_tensor::SparseTensorSortKindAttr::get(odsBuilder.getContext(), algorithm);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SortOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SortOp::verifyInvariantsImpl() {
  auto tblgen_algorithm = getProperties().algorithm; (void)tblgen_algorithm;
  if (!tblgen_algorithm) return emitOpError("requires attribute 'algorithm'");
  auto tblgen_ny = getProperties().ny; (void)tblgen_ny;
  auto tblgen_perm_map = getProperties().perm_map; (void)tblgen_perm_map;
  if (!tblgen_perm_map) return emitOpError("requires attribute 'perm_map'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps4(*this, tblgen_perm_map, "perm_map")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps8(*this, tblgen_ny, "ny")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps7(*this, tblgen_algorithm, "algorithm")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps16(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SortOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SortOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithmAttr;
  ::mlir::OpAsmParser::UnresolvedOperand nRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> nOperands(nRawOperands);  ::llvm::SMLoc nOperandsLoc;
  (void)nOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand xyRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xyOperands(xyRawOperands);  ::llvm::SMLoc xyOperandsLoc;
  (void)xyOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> ysOperands;
  ::llvm::SMLoc ysOperandsLoc;
  (void)ysOperandsLoc;
  ::mlir::Type xyRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xyTypes(xyRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> ysTypes;

  if (parser.parseCustomAttributeWithFallback(algorithmAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (algorithmAttr) result.getOrAddProperties<SortOp::Properties>().algorithm = algorithmAttr;

  nOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  xyOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xyRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("jointly"))) {

  ysOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(ysOperands))
    return ::mlir::failure();
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
    xyRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("jointly"))) {

  if (parser.parseTypeList(ysTypes))
    return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(nOperands, odsBuildableType0, nOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(xyOperands, xyTypes, xyOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(ysOperands, ysTypes, ysOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SortOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getAlgorithmAttr());
  _odsPrinter << ' ';
  _odsPrinter << getN();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getXy();
  if (!getYs().empty()) {
    _odsPrinter << ' ' << "jointly";
    _odsPrinter << ' ';
    _odsPrinter << getYs();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("algorithm");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getXy().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (!getYs().empty()) {
    _odsPrinter << ' ' << "jointly";
    _odsPrinter << ' ';
    _odsPrinter << getYs().getTypes();
  }
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SortOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::StorageSpecifierInitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
StorageSpecifierInitOpGenericAdaptorBase::StorageSpecifierInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.storage_specifier.init", odsAttrs.getContext());
}

StorageSpecifierInitOpGenericAdaptorBase::StorageSpecifierInitOpGenericAdaptorBase(StorageSpecifierInitOp op) : StorageSpecifierInitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> StorageSpecifierInitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr StorageSpecifierInitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
StorageSpecifierInitOpAdaptor::StorageSpecifierInitOpAdaptor(StorageSpecifierInitOp op) : StorageSpecifierInitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StorageSpecifierInitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StorageSpecifierInitOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range StorageSpecifierInitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> StorageSpecifierInitOp::getSource() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType>>(*operands.begin());
}

::mlir::MutableOperandRange StorageSpecifierInitOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> StorageSpecifierInitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range StorageSpecifierInitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> StorageSpecifierInitOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType>>(*getODSResults(0).begin());
}

void StorageSpecifierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type result) {
      build(odsBuilder, odsState, result, Value());
    
}

void StorageSpecifierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value source) {
  if (source)
    odsState.addOperands(source);
  odsState.addTypes(result);
}

void StorageSpecifierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value source) {
  if (source)
    odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StorageSpecifierInitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult StorageSpecifierInitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps14(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult StorageSpecifierInitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult StorageSpecifierInitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sourceOperands;
  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> sourceTypes;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("with"))) {

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
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("from"))) {

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
  if (parser.parseKeyword("to"))
    return ::mlir::failure();
  }

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void StorageSpecifierInitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (getSource()) {
    _odsPrinter << ' ' << "with";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSource())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  if (getSource()) {
    _odsPrinter << ' ' << "from";
    _odsPrinter << ' ';
    _odsPrinter << (getSource() ? ::llvm::ArrayRef<::mlir::Type>(getSource().getType()) : ::llvm::ArrayRef<::mlir::Type>());
    _odsPrinter << ' ' << "to";
  }
  _odsPrinter << ' ';
   _odsPrinter << getResult().getType();
}

void StorageSpecifierInitOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::StorageSpecifierInitOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToCoordinatesBufferOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ToCoordinatesBufferOpGenericAdaptorBase::ToCoordinatesBufferOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.coordinates_buffer", odsAttrs.getContext());
}

ToCoordinatesBufferOpGenericAdaptorBase::ToCoordinatesBufferOpGenericAdaptorBase(ToCoordinatesBufferOp op) : ToCoordinatesBufferOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ToCoordinatesBufferOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ToCoordinatesBufferOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ToCoordinatesBufferOpAdaptor::ToCoordinatesBufferOpAdaptor(ToCoordinatesBufferOp op) : ToCoordinatesBufferOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ToCoordinatesBufferOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ToCoordinatesBufferOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToCoordinatesBufferOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ToCoordinatesBufferOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ToCoordinatesBufferOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ToCoordinatesBufferOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToCoordinatesBufferOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToCoordinatesBufferOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ToCoordinatesBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  odsState.addTypes(result);
}

void ToCoordinatesBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToCoordinatesBufferOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ToCoordinatesBufferOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ToCoordinatesBufferOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ToCoordinatesBufferOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
    tensorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToCoordinatesBufferOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ToCoordinatesBufferOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToCoordinatesBufferOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToCoordinatesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ToCoordinatesOpGenericAdaptorBase::ToCoordinatesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.coordinates", odsAttrs.getContext());
}

ToCoordinatesOpGenericAdaptorBase::ToCoordinatesOpGenericAdaptorBase(ToCoordinatesOp op) : ToCoordinatesOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ToCoordinatesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ToCoordinatesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ToCoordinatesOpGenericAdaptorBase::getLevelAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().level);
  return attr;
}

::mlir::sparse_tensor::Level ToCoordinatesOpGenericAdaptorBase::getLevel() {
  auto attr = getLevelAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ToCoordinatesOpAdaptor::ToCoordinatesOpAdaptor(ToCoordinatesOp op) : ToCoordinatesOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ToCoordinatesOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  if (!tblgen_level) return emitError(loc, "'sparse_tensor.coordinates' op ""requires attribute 'level'");

  if (tblgen_level && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_level))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_level).getType())))))
    return emitError(loc, "'sparse_tensor.coordinates' op ""attribute 'level' failed to satisfy constraint: level attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ToCoordinatesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToCoordinatesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ToCoordinatesOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ToCoordinatesOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ToCoordinatesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToCoordinatesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToCoordinatesOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ToCoordinatesOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.level;
       auto attr = dict.get("level");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for level in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `level` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ToCoordinatesOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.level;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("level",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ToCoordinatesOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.level.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ToCoordinatesOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "level")
      return prop.level;
  return std::nullopt;
}

void ToCoordinatesOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "level") {
       prop.level = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.level)>>(value);
       return;
    }
}

void ToCoordinatesOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.level) attrs.append("level", prop.level);
}

::mlir::LogicalResult ToCoordinatesOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLevelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(attr, "level", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ToCoordinatesOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.level)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToCoordinatesOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.level);
}

::mlir::IntegerAttr ToCoordinatesOp::getLevelAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().level);
}

::mlir::sparse_tensor::Level ToCoordinatesOp::getLevel() {
  auto attr = getLevelAttr();
  return attr.getValue().getZExtValue();
}

void ToCoordinatesOp::setLevelAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLevelAttrName(), attr);
}

void ToCoordinatesOp::setLevel(::mlir::sparse_tensor::Level attrValue) {
  (*this)->setAttr(getLevelAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ToCoordinatesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::IntegerAttr level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = level;
  odsState.addTypes(result);
}

void ToCoordinatesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::IntegerAttr level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = level;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToCoordinatesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), level);
  odsState.addTypes(result);
}

void ToCoordinatesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), level);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToCoordinatesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ToCoordinatesOp::verifyInvariantsImpl() {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  if (!tblgen_level) return emitOpError("requires attribute 'level'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(*this, tblgen_level, "level")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ToCoordinatesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ToCoordinatesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToCoordinatesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ToCoordinatesOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToCoordinatesOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToPositionsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ToPositionsOpGenericAdaptorBase::ToPositionsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.positions", odsAttrs.getContext());
}

ToPositionsOpGenericAdaptorBase::ToPositionsOpGenericAdaptorBase(ToPositionsOp op) : ToPositionsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ToPositionsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ToPositionsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ToPositionsOpGenericAdaptorBase::getLevelAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().level);
  return attr;
}

::mlir::sparse_tensor::Level ToPositionsOpGenericAdaptorBase::getLevel() {
  auto attr = getLevelAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ToPositionsOpAdaptor::ToPositionsOpAdaptor(ToPositionsOp op) : ToPositionsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ToPositionsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  if (!tblgen_level) return emitError(loc, "'sparse_tensor.positions' op ""requires attribute 'level'");

  if (tblgen_level && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_level))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_level).getType())))))
    return emitError(loc, "'sparse_tensor.positions' op ""attribute 'level' failed to satisfy constraint: level attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ToPositionsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToPositionsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ToPositionsOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ToPositionsOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ToPositionsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToPositionsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToPositionsOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ToPositionsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.level;
       auto attr = dict.get("level");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for level in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `level` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ToPositionsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.level;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("level",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ToPositionsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.level.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ToPositionsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "level")
      return prop.level;
  return std::nullopt;
}

void ToPositionsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "level") {
       prop.level = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.level)>>(value);
       return;
    }
}

void ToPositionsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.level) attrs.append("level", prop.level);
}

::mlir::LogicalResult ToPositionsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLevelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(attr, "level", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ToPositionsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.level)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToPositionsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.level);
}

::mlir::IntegerAttr ToPositionsOp::getLevelAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().level);
}

::mlir::sparse_tensor::Level ToPositionsOp::getLevel() {
  auto attr = getLevelAttr();
  return attr.getValue().getZExtValue();
}

void ToPositionsOp::setLevelAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLevelAttrName(), attr);
}

void ToPositionsOp::setLevel(::mlir::sparse_tensor::Level attrValue) {
  (*this)->setAttr(getLevelAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ToPositionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::IntegerAttr level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = level;
  odsState.addTypes(result);
}

void ToPositionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::IntegerAttr level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = level;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToPositionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), level);
  odsState.addTypes(result);
}

void ToPositionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level) {
  odsState.addOperands(tensor);
  odsState.getOrAddProperties<Properties>().level = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), level);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToPositionsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ToPositionsOp::verifyInvariantsImpl() {
  auto tblgen_level = getProperties().level; (void)tblgen_level;
  if (!tblgen_level) return emitOpError("requires attribute 'level'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps6(*this, tblgen_level, "level")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ToPositionsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ToPositionsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToPositionsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ToPositionsOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToPositionsOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToSliceOffsetOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ToSliceOffsetOpGenericAdaptorBase::ToSliceOffsetOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.slice.offset", odsAttrs.getContext());
}

ToSliceOffsetOpGenericAdaptorBase::ToSliceOffsetOpGenericAdaptorBase(ToSliceOffsetOp op) : ToSliceOffsetOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ToSliceOffsetOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ToSliceOffsetOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ToSliceOffsetOpGenericAdaptorBase::getDimAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dim);
  return attr;
}

::llvm::APInt ToSliceOffsetOpGenericAdaptorBase::getDim() {
  auto attr = getDimAttr();
  return attr.getValue();
}

} // namespace detail
ToSliceOffsetOpAdaptor::ToSliceOffsetOpAdaptor(ToSliceOffsetOp op) : ToSliceOffsetOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ToSliceOffsetOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dim = getProperties().dim; (void)tblgen_dim;
  if (!tblgen_dim) return emitError(loc, "'sparse_tensor.slice.offset' op ""requires attribute 'dim'");

  if (tblgen_dim && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dim))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_dim).getType())))))
    return emitError(loc, "'sparse_tensor.slice.offset' op ""attribute 'dim' failed to satisfy constraint: index attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ToSliceOffsetOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToSliceOffsetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ToSliceOffsetOp::getSlice() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ToSliceOffsetOp::getSliceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ToSliceOffsetOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToSliceOffsetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> ToSliceOffsetOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ToSliceOffsetOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dim;
       auto attr = dict.get("dim");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dim in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dim` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ToSliceOffsetOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dim;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dim",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ToSliceOffsetOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dim.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ToSliceOffsetOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dim")
      return prop.dim;
  return std::nullopt;
}

void ToSliceOffsetOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dim") {
       prop.dim = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dim)>>(value);
       return;
    }
}

void ToSliceOffsetOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dim) attrs.append("dim", prop.dim);
}

::mlir::LogicalResult ToSliceOffsetOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps8(attr, "dim", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ToSliceOffsetOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dim)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToSliceOffsetOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dim);
}

::mlir::IntegerAttr ToSliceOffsetOp::getDimAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dim);
}

::llvm::APInt ToSliceOffsetOp::getDim() {
  auto attr = getDimAttr();
  return attr.getValue();
}

void ToSliceOffsetOp::setDimAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimAttrName(), attr);
}

void ToSliceOffsetOp::setDim(::llvm::APInt attrValue) {
  (*this)->setAttr(getDimAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value slice, ::mlir::IntegerAttr dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = dim;
  odsState.addTypes(offset);
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::mlir::IntegerAttr dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = dim;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ToSliceOffsetOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::mlir::IntegerAttr dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = dim;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value slice, ::llvm::APInt dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim);
  odsState.addTypes(offset);
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::llvm::APInt dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ToSliceOffsetOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::llvm::APInt dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ToSliceOffsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ToSliceOffsetOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ToSliceOffsetOp::verifyInvariantsImpl() {
  auto tblgen_dim = getProperties().dim; (void)tblgen_dim;
  if (!tblgen_dim) return emitOpError("requires attribute 'dim'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps8(*this, tblgen_dim, "dim")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ToSliceOffsetOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult ToSliceOffsetOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ToSliceOffsetOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sliceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sliceOperands(sliceRawOperands);  ::llvm::SMLoc sliceOperandsLoc;
  (void)sliceOperandsLoc;
  ::mlir::IntegerAttr dimAttr;
  ::mlir::Type sliceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sliceTypes(sliceRawTypes);

  sliceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sliceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("at"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(dimAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (dimAttr) result.getOrAddProperties<ToSliceOffsetOp::Properties>().dim = dimAttr;
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sliceRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(sliceOperands, sliceTypes, sliceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToSliceOffsetOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSlice();
  _odsPrinter << ' ' << "at";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDimAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dim");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSlice().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ToSliceOffsetOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToSliceOffsetOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToSliceStrideOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ToSliceStrideOpGenericAdaptorBase::ToSliceStrideOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.slice.stride", odsAttrs.getContext());
}

ToSliceStrideOpGenericAdaptorBase::ToSliceStrideOpGenericAdaptorBase(ToSliceStrideOp op) : ToSliceStrideOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ToSliceStrideOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ToSliceStrideOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ToSliceStrideOpGenericAdaptorBase::getDimAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dim);
  return attr;
}

::llvm::APInt ToSliceStrideOpGenericAdaptorBase::getDim() {
  auto attr = getDimAttr();
  return attr.getValue();
}

} // namespace detail
ToSliceStrideOpAdaptor::ToSliceStrideOpAdaptor(ToSliceStrideOp op) : ToSliceStrideOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ToSliceStrideOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dim = getProperties().dim; (void)tblgen_dim;
  if (!tblgen_dim) return emitError(loc, "'sparse_tensor.slice.stride' op ""requires attribute 'dim'");

  if (tblgen_dim && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dim))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_dim).getType())))))
    return emitError(loc, "'sparse_tensor.slice.stride' op ""attribute 'dim' failed to satisfy constraint: index attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ToSliceStrideOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToSliceStrideOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ToSliceStrideOp::getSlice() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ToSliceStrideOp::getSliceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ToSliceStrideOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToSliceStrideOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> ToSliceStrideOp::getStride() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ToSliceStrideOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dim;
       auto attr = dict.get("dim");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dim in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dim` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ToSliceStrideOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dim;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dim",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ToSliceStrideOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dim.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ToSliceStrideOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dim")
      return prop.dim;
  return std::nullopt;
}

void ToSliceStrideOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dim") {
       prop.dim = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dim)>>(value);
       return;
    }
}

void ToSliceStrideOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dim) attrs.append("dim", prop.dim);
}

::mlir::LogicalResult ToSliceStrideOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps8(attr, "dim", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ToSliceStrideOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dim)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToSliceStrideOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dim);
}

::mlir::IntegerAttr ToSliceStrideOp::getDimAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dim);
}

::llvm::APInt ToSliceStrideOp::getDim() {
  auto attr = getDimAttr();
  return attr.getValue();
}

void ToSliceStrideOp::setDimAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimAttrName(), attr);
}

void ToSliceStrideOp::setDim(::llvm::APInt attrValue) {
  (*this)->setAttr(getDimAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type stride, ::mlir::Value slice, ::mlir::IntegerAttr dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = dim;
  odsState.addTypes(stride);
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::mlir::IntegerAttr dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = dim;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ToSliceStrideOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::mlir::IntegerAttr dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = dim;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type stride, ::mlir::Value slice, ::llvm::APInt dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim);
  odsState.addTypes(stride);
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::llvm::APInt dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ToSliceStrideOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::llvm::APInt dim) {
  odsState.addOperands(slice);
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToSliceStrideOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ToSliceStrideOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ToSliceStrideOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ToSliceStrideOp::verifyInvariantsImpl() {
  auto tblgen_dim = getProperties().dim; (void)tblgen_dim;
  if (!tblgen_dim) return emitOpError("requires attribute 'dim'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SparseTensorOps8(*this, tblgen_dim, "dim")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ToSliceStrideOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult ToSliceStrideOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ToSliceStrideOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sliceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sliceOperands(sliceRawOperands);  ::llvm::SMLoc sliceOperandsLoc;
  (void)sliceOperandsLoc;
  ::mlir::IntegerAttr dimAttr;
  ::mlir::Type sliceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sliceTypes(sliceRawTypes);

  sliceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sliceRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("at"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(dimAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (dimAttr) result.getOrAddProperties<ToSliceStrideOp::Properties>().dim = dimAttr;
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
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sliceRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(sliceOperands, sliceTypes, sliceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToSliceStrideOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSlice();
  _odsPrinter << ' ' << "at";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDimAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dim");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSlice().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ToSliceStrideOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToSliceStrideOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToValuesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ToValuesOpGenericAdaptorBase::ToValuesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.values", odsAttrs.getContext());
}

ToValuesOpGenericAdaptorBase::ToValuesOpGenericAdaptorBase(ToValuesOp op) : ToValuesOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ToValuesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ToValuesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ToValuesOpAdaptor::ToValuesOpAdaptor(ToValuesOp op) : ToValuesOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ToValuesOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ToValuesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToValuesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ToValuesOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ToValuesOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ToValuesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToValuesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToValuesOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ToValuesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  odsState.addTypes(result);
}

void ToValuesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor) {
  odsState.addOperands(tensor);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToValuesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ToValuesOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ToValuesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ToValuesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
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
    tensorRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ToValuesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ToValuesOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToValuesOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::UnaryOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UnaryOpGenericAdaptorBase::UnaryOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.unary", odsAttrs.getContext());
}

UnaryOpGenericAdaptorBase::UnaryOpGenericAdaptorBase(UnaryOp op) : UnaryOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UnaryOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UnaryOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &UnaryOpGenericAdaptorBase::getPresentRegion() {
  return *odsRegions[0];
}

::mlir::Region &UnaryOpGenericAdaptorBase::getAbsentRegion() {
  return *odsRegions[1];
}

::mlir::RegionRange UnaryOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
UnaryOpAdaptor::UnaryOpAdaptor(UnaryOp op) : UnaryOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UnaryOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UnaryOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UnaryOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UnaryOp::getX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &UnaryOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UnaryOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UnaryOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UnaryOp::getOutput() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &UnaryOp::getPresentRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &UnaryOp::getAbsentRegion() {
  return (*this)->getRegion(1);
}

void UnaryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x) {
  odsState.addOperands(x);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  odsState.addTypes(output);
}

void UnaryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x) {
  odsState.addOperands(x);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UnaryOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UnaryOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps0(*this, region, "presentRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_SparseTensorOps0(*this, region, "absentRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult UnaryOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult UnaryOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);
  std::unique_ptr<::mlir::Region> presentRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> absentRegionRegion = std::make_unique<::mlir::Region>();

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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outputRawTypes[0] = type;
  }
  if (parser.parseKeyword("present"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseRegion(*presentRegionRegion))
    return ::mlir::failure();
  if (parser.parseKeyword("absent"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseRegion(*absentRegionRegion))
    return ::mlir::failure();
  result.addRegion(std::move(presentRegionRegion));
  result.addRegion(std::move(absentRegionRegion));
  result.addTypes(outputTypes);
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UnaryOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter.printNewline();
  _odsPrinter << ' ' << "present";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getPresentRegion());
  _odsPrinter.printNewline();
  _odsPrinter << ' ' << "absent";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getAbsentRegion());
}

void UnaryOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::UnaryOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("sparse_tensor.yield", odsAttrs.getContext());
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

::mlir::Value YieldOp::getResult() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange YieldOp::getResultMutable() {
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
      build(odsBuilder, odsState, Value());
    
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value result) {
  if (result)
    odsState.addOperands(result);
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value result) {
  if (result)
    odsState.addOperands(result);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
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

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SparseTensorOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> resultOperands;
  ::llvm::SMLoc resultOperandsLoc;
  (void)resultOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;

  {
    resultOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      resultOperands.push_back(operand);
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
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      resultTypes.push_back(optionalType);
    }
  }
  if (parser.resolveOperands(resultOperands, resultTypes, resultOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  if (::mlir::Value value = getResult())
    _odsPrinter << value;
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getResult() ? ::llvm::ArrayRef<::mlir::Type>(getResult().getType()) : ::llvm::ArrayRef<::mlir::Type>());
}

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace sparse_tensor
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::YieldOp)


#endif  // GET_OP_CLASSES

