/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: X86Vector.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::x86vector::DotIntrOp,
::mlir::x86vector::DotOp,
::mlir::x86vector::MaskCompressIntrOp,
::mlir::x86vector::MaskCompressOp,
::mlir::x86vector::MaskRndScaleOp,
::mlir::x86vector::MaskRndScalePDIntrOp,
::mlir::x86vector::MaskRndScalePSIntrOp,
::mlir::x86vector::MaskScaleFOp,
::mlir::x86vector::MaskScaleFPDIntrOp,
::mlir::x86vector::MaskScaleFPSIntrOp,
::mlir::x86vector::RsqrtIntrOp,
::mlir::x86vector::RsqrtOp,
::mlir::x86vector::Vp2IntersectDIntrOp,
::mlir::x86vector::Vp2IntersectOp,
::mlir::x86vector::Vp2IntersectQIntrOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace x86vector {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(8)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 8-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isSignlessInteger(32))) || ((elementType.isF64())) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float or 32-bit signless integer or 64-bit float or 64-bit signless integer values of length 16/8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 1-bit signless integer values of length 16/8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(16))) || ((type.isSignlessInteger(8))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 16-bit signless integer or 8-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 64-bit float values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float values of length 16, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(16)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 16-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit signless integer values of length 16, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit signless integer or 64-bit signless integer values of length 16/8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_X86Vector13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 64-bit signless integer values of length 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_X86Vector0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ElementsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: constant vector/tensor attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_X86Vector0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_X86Vector0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace x86vector
} // namespace mlir
namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::DotIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DotIntrOpGenericAdaptorBase::DotIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx.intr.dp.ps.256", odsAttrs.getContext());
}

DotIntrOpGenericAdaptorBase::DotIntrOpGenericAdaptorBase(DotIntrOp op) : DotIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DotIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DotIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DotIntrOpAdaptor::DotIntrOpAdaptor(DotIntrOp op) : DotIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DotIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DotIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> DotIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> DotIntrOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> DotIntrOp::getC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &DotIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DotIntrOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DotIntrOp::getCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DotIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> DotIntrOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void DotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes(res);
}

void DotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DotIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DotIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult DotIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, b, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult DotIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult DotIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void DotIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::DotIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::DotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DotOpGenericAdaptorBase::DotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx.intr.dot", odsAttrs.getContext());
}

DotOpGenericAdaptorBase::DotOpGenericAdaptorBase(DotOp op) : DotOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DotOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DotOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DotOpAdaptor::DotOpAdaptor(DotOp op) : DotOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> DotOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> DotOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DotOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DotOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> DotOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(res);
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DotOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DotOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult DotOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult DotOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult DotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  aOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(aRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bRawOperands[0]))
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
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(aOperands, resTypes[0], aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bOperands, resTypes[0], bOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DotOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getB();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void DotOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::DotOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskCompressIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskCompressIntrOpGenericAdaptorBase::MaskCompressIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.mask.compress", odsAttrs.getContext());
}

MaskCompressIntrOpGenericAdaptorBase::MaskCompressIntrOpGenericAdaptorBase(MaskCompressIntrOp op) : MaskCompressIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskCompressIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskCompressIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskCompressIntrOpAdaptor::MaskCompressIntrOpAdaptor(MaskCompressIntrOp op) : MaskCompressIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskCompressIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskCompressIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskCompressIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressIntrOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressIntrOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MaskCompressIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskCompressIntrOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskCompressIntrOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskCompressIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskCompressIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaskCompressIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaskCompressIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value src, ::mlir::Value k) {
  odsState.addOperands(a);
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addTypes(res);
}

void MaskCompressIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value src, ::mlir::Value k) {
  odsState.addOperands(a);
  odsState.addOperands(src);
  odsState.addOperands(k);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskCompressIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskCompressIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value src, ::mlir::Value k) {
  odsState.addOperands(a);
  odsState.addOperands(src);
  odsState.addOperands(k);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskCompressIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskCompressIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskCompressIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskCompressIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, src, res} have same type");
  if (!((std::equal_to<>()(VectorType::get({::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getShape()[0]}, IntegerType::get((*this->getODSResults(0).begin()).getType().getContext(), 1)), (*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that `k` has the same number of bits as elements in `res`");
  return ::mlir::success();
}

::mlir::LogicalResult MaskCompressIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskCompressIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void MaskCompressIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskCompressIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskCompressOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskCompressOpGenericAdaptorBase::MaskCompressOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.mask.compress", odsAttrs.getContext());
}

MaskCompressOpGenericAdaptorBase::MaskCompressOpGenericAdaptorBase(MaskCompressOp op) : MaskCompressOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskCompressOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr MaskCompressOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ElementsAttr MaskCompressOpGenericAdaptorBase::getConstantSrcAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ElementsAttr>(getProperties().constant_src);
  return attr;
}

::std::optional< ::mlir::ElementsAttr > MaskCompressOpGenericAdaptorBase::getConstantSrc() {
  auto attr = getConstantSrcAttr();
  return attr ? ::std::optional< ::mlir::ElementsAttr >(attr) : (::std::nullopt);
}

} // namespace detail
MaskCompressOpAdaptor::MaskCompressOpAdaptor(MaskCompressOp op) : MaskCompressOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskCompressOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_constant_src = getProperties().constant_src; (void)tblgen_constant_src;

  if (tblgen_constant_src && !((::llvm::isa<::mlir::ElementsAttr>(tblgen_constant_src))))
    return emitError(loc, "'x86vector.avx512.mask.compress' op ""attribute 'constant_src' failed to satisfy constraint: constant vector/tensor attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskCompressOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MaskCompressOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressOp::getSrc() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::VectorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*operands.begin());
}

::mlir::OpOperand &MaskCompressOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskCompressOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MaskCompressOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MaskCompressOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskCompressOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskCompressOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MaskCompressOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.constant_src;
       auto attr = dict.get("constant_src");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for constant_src in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `constant_src` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MaskCompressOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.constant_src;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("constant_src",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MaskCompressOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.constant_src.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MaskCompressOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "constant_src")
      return prop.constant_src;
  return std::nullopt;
}

void MaskCompressOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "constant_src") {
       prop.constant_src = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.constant_src)>>(value);
       return;
    }
}

void MaskCompressOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.constant_src) attrs.append("constant_src", prop.constant_src);
}

::mlir::LogicalResult MaskCompressOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getConstantSrcAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_X86Vector0(attr, "constant_src", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MaskCompressOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.constant_src)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskCompressOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.constant_src);
}

::mlir::ElementsAttr MaskCompressOp::getConstantSrcAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ElementsAttr>(getProperties().constant_src);
}

::std::optional< ::mlir::ElementsAttr > MaskCompressOp::getConstantSrc() {
  auto attr = getConstantSrcAttr();
  return attr ? ::std::optional< ::mlir::ElementsAttr >(attr) : (::std::nullopt);
}

void MaskCompressOp::setConstantSrcAttr(::mlir::ElementsAttr attr) {
  (*this)->setAttr(getConstantSrcAttrName(), attr);
}

::mlir::Attribute MaskCompressOp::removeConstantSrcAttr() {
    auto &attr = getProperties().constant_src;
    attr = {};
    return attr;
}

void MaskCompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value k, ::mlir::Value a, /*optional*/::mlir::Value src, /*optional*/::mlir::ElementsAttr constant_src) {
  odsState.addOperands(k);
  odsState.addOperands(a);
  if (src)
    odsState.addOperands(src);
  if (constant_src) {
    odsState.getOrAddProperties<Properties>().constant_src = constant_src;
  }
  odsState.addTypes(dst);
}

void MaskCompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value k, ::mlir::Value a, /*optional*/::mlir::Value src, /*optional*/::mlir::ElementsAttr constant_src) {
  odsState.addOperands(k);
  odsState.addOperands(a);
  if (src)
    odsState.addOperands(src);
  if (constant_src) {
    odsState.getOrAddProperties<Properties>().constant_src = constant_src;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskCompressOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskCompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value k, ::mlir::Value a, /*optional*/::mlir::Value src, /*optional*/::mlir::ElementsAttr constant_src) {
  odsState.addOperands(k);
  odsState.addOperands(a);
  if (src)
    odsState.addOperands(src);
  if (constant_src) {
    odsState.getOrAddProperties<Properties>().constant_src = constant_src;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskCompressOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskCompressOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskCompressOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskCompressOp::verifyInvariantsImpl() {
  auto tblgen_constant_src = getProperties().constant_src; (void)tblgen_constant_src;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_X86Vector0(*this, tblgen_constant_src, "constant_src")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, dst} have same type");
  if (!((std::equal_to<>()(VectorType::get({::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getShape()[0]}, IntegerType::get((*this->getODSResults(0).begin()).getType().getContext(), 1)), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that `k` has the same number of bits as elements in `dst`");
  return ::mlir::success();
}

::mlir::LogicalResult MaskCompressOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult MaskCompressOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaskCompressOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand kRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> kOperands(kRawOperands);  ::llvm::SMLoc kOperandsLoc;
  (void)kOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> srcOperands;
  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> srcTypes;

  kOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(kRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  aOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(aRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    srcOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      srcOperands.push_back(operand);
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      srcTypes.push_back(optionalType);
    }
  }
  }
  for (::mlir::Type type : dstTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isSignlessInteger(32))) || ((elementType.isF64())) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'dst' must be vector of 32-bit float or 32-bit signless integer or 64-bit float or 64-bit signless integer values of length 16/8, but got " << type;
    }
  }
  result.addTypes(dstTypes);
  if (parser.resolveOperands(kOperands, VectorType::get({::llvm::cast<VectorType>(dstTypes[0]).getShape()[0]}, IntegerType::get(dstTypes[0].getContext(), 1)), kOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(aOperands, dstTypes[0], aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskCompressOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getK();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getA();
  if (getSrc()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSrc())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (getSrc()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << (getSrc() ? ::llvm::ArrayRef<::mlir::Type>(getSrc().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

void MaskCompressOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskCompressOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskRndScaleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskRndScaleOpGenericAdaptorBase::MaskRndScaleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.mask.rndscale", odsAttrs.getContext());
}

MaskRndScaleOpGenericAdaptorBase::MaskRndScaleOpGenericAdaptorBase(MaskRndScaleOp op) : MaskRndScaleOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskRndScaleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskRndScaleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskRndScaleOpAdaptor::MaskRndScaleOpAdaptor(MaskRndScaleOp op) : MaskRndScaleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskRndScaleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskRndScaleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskRndScaleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScaleOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskRndScaleOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScaleOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::Value MaskRndScaleOp::getImm() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskRndScaleOp::getRounding() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MaskRndScaleOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScaleOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScaleOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScaleOp::getImmMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScaleOp::getRoundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskRndScaleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskRndScaleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScaleOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void MaskRndScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  odsState.addTypes(dst);
}

void MaskRndScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskRndScaleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskRndScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskRndScaleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskRndScaleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskRndScaleOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskRndScaleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, a, dst} have same type");
  if (!((std::equal_to<>()(IntegerType::get((*this->getODSResults(0).begin()).getType().getContext(), (::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getShape()[0])), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that imm has the same number of bits as elements in dst");
  return ::mlir::success();
}

::mlir::LogicalResult MaskRndScaleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskRndScaleOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaskRndScaleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand kRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> kOperands(kRawOperands);  ::llvm::SMLoc kOperandsLoc;
  (void)kOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand immRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> immOperands(immRawOperands);  ::llvm::SMLoc immOperandsLoc;
  (void)immOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand roundingRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> roundingOperands(roundingRawOperands);  ::llvm::SMLoc roundingOperandsLoc;
  (void)roundingOperandsLoc;
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  kOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(kRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  aOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(aRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  immOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(immRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  roundingOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(roundingRawOperands[0]))
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
    dstRawTypes[0] = type;
  }
  for (::mlir::Type type : dstTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'dst' must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << type;
    }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(dstTypes);
  if (parser.resolveOperands(srcOperands, dstTypes[0], srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(kOperands, odsBuildableType0, kOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(aOperands, dstTypes[0], aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(immOperands, IntegerType::get(dstTypes[0].getContext(), (::llvm::cast<VectorType>(dstTypes[0]).getShape()[0])), immOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(roundingOperands, odsBuildableType0, roundingOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskRndScaleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getK();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getImm();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRounding();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MaskRndScaleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskRndScaleOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskRndScalePDIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskRndScalePDIntrOpGenericAdaptorBase::MaskRndScalePDIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.mask.rndscale.pd.512", odsAttrs.getContext());
}

MaskRndScalePDIntrOpGenericAdaptorBase::MaskRndScalePDIntrOpGenericAdaptorBase(MaskRndScalePDIntrOp op) : MaskRndScalePDIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskRndScalePDIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskRndScalePDIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskRndScalePDIntrOpAdaptor::MaskRndScalePDIntrOpAdaptor(MaskRndScalePDIntrOp op) : MaskRndScalePDIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskRndScalePDIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskRndScalePDIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskRndScalePDIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScalePDIntrOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskRndScalePDIntrOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScalePDIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskRndScalePDIntrOp::getImm() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::Value MaskRndScalePDIntrOp::getRounding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MaskRndScalePDIntrOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePDIntrOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePDIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePDIntrOp::getImmMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePDIntrOp::getRoundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskRndScalePDIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskRndScalePDIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaskRndScalePDIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaskRndScalePDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  odsState.addTypes(res);
}

void MaskRndScalePDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskRndScalePDIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskRndScalePDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskRndScalePDIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskRndScalePDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskRndScalePDIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskRndScalePDIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, a, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MaskRndScalePDIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskRndScalePDIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void MaskRndScalePDIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskRndScalePDIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskRndScalePSIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskRndScalePSIntrOpGenericAdaptorBase::MaskRndScalePSIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.mask.rndscale.ps.512", odsAttrs.getContext());
}

MaskRndScalePSIntrOpGenericAdaptorBase::MaskRndScalePSIntrOpGenericAdaptorBase(MaskRndScalePSIntrOp op) : MaskRndScalePSIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskRndScalePSIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskRndScalePSIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskRndScalePSIntrOpAdaptor::MaskRndScalePSIntrOpAdaptor(MaskRndScalePSIntrOp op) : MaskRndScalePSIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskRndScalePSIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskRndScalePSIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskRndScalePSIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScalePSIntrOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskRndScalePSIntrOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskRndScalePSIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskRndScalePSIntrOp::getImm() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::Value MaskRndScalePSIntrOp::getRounding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MaskRndScalePSIntrOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePSIntrOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePSIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePSIntrOp::getImmMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskRndScalePSIntrOp::getRoundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskRndScalePSIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskRndScalePSIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaskRndScalePSIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaskRndScalePSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  odsState.addTypes(res);
}

void MaskRndScalePSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskRndScalePSIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskRndScalePSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskRndScalePSIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskRndScalePSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskRndScalePSIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskRndScalePSIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, a, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MaskRndScalePSIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskRndScalePSIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void MaskRndScalePSIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskRndScalePSIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskScaleFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskScaleFOpGenericAdaptorBase::MaskScaleFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.mask.scalef", odsAttrs.getContext());
}

MaskScaleFOpGenericAdaptorBase::MaskScaleFOpGenericAdaptorBase(MaskScaleFOp op) : MaskScaleFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskScaleFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskScaleFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskScaleFOpAdaptor::MaskScaleFOpAdaptor(MaskScaleFOp op) : MaskScaleFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskScaleFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskScaleFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskScaleFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::Value MaskScaleFOp::getK() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskScaleFOp::getRounding() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MaskScaleFOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFOp::getRoundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskScaleFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskScaleFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void MaskScaleFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  odsState.addTypes(dst);
}

void MaskScaleFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskScaleFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskScaleFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskScaleFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskScaleFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskScaleFOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskScaleFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, a, b, dst} have same type");
  if (!((std::equal_to<>()(IntegerType::get((*this->getODSResults(0).begin()).getType().getContext(), (::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getShape()[0])), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that k has the same number of bits as elements in dst");
  return ::mlir::success();
}

::mlir::LogicalResult MaskScaleFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskScaleFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaskScaleFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand kRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> kOperands(kRawOperands);  ::llvm::SMLoc kOperandsLoc;
  (void)kOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand roundingRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> roundingOperands(roundingRawOperands);  ::llvm::SMLoc roundingOperandsLoc;
  (void)roundingOperandsLoc;
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  aOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(aRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  kOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(kRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  roundingOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(roundingRawOperands[0]))
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
    dstRawTypes[0] = type;
  }
  for (::mlir::Type type : dstTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'dst' must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << type;
    }
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(dstTypes);
  if (parser.resolveOperands(srcOperands, dstTypes[0], srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(aOperands, dstTypes[0], aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bOperands, dstTypes[0], bOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(kOperands, IntegerType::get(dstTypes[0].getContext(), (::llvm::cast<VectorType>(dstTypes[0]).getShape()[0])), kOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(roundingOperands, odsBuildableType0, roundingOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskScaleFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getK();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRounding();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MaskScaleFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskScaleFOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskScaleFPDIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskScaleFPDIntrOpGenericAdaptorBase::MaskScaleFPDIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.mask.scalef.pd.512", odsAttrs.getContext());
}

MaskScaleFPDIntrOpGenericAdaptorBase::MaskScaleFPDIntrOpGenericAdaptorBase(MaskScaleFPDIntrOp op) : MaskScaleFPDIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskScaleFPDIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskScaleFPDIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskScaleFPDIntrOpAdaptor::MaskScaleFPDIntrOpAdaptor(MaskScaleFPDIntrOp op) : MaskScaleFPDIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskScaleFPDIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskScaleFPDIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskScaleFPDIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFPDIntrOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFPDIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFPDIntrOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskScaleFPDIntrOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::Value MaskScaleFPDIntrOp::getRounding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MaskScaleFPDIntrOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPDIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPDIntrOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPDIntrOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPDIntrOp::getRoundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskScaleFPDIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskScaleFPDIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaskScaleFPDIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaskScaleFPDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  odsState.addTypes(res);
}

void MaskScaleFPDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskScaleFPDIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskScaleFPDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskScaleFPDIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskScaleFPDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskScaleFPDIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskScaleFPDIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, a, b, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MaskScaleFPDIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskScaleFPDIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void MaskScaleFPDIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskScaleFPDIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::MaskScaleFPSIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskScaleFPSIntrOpGenericAdaptorBase::MaskScaleFPSIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.mask.scalef.ps.512", odsAttrs.getContext());
}

MaskScaleFPSIntrOpGenericAdaptorBase::MaskScaleFPSIntrOpGenericAdaptorBase(MaskScaleFPSIntrOp op) : MaskScaleFPSIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaskScaleFPSIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaskScaleFPSIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaskScaleFPSIntrOpAdaptor::MaskScaleFPSIntrOpAdaptor(MaskScaleFPSIntrOp op) : MaskScaleFPSIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaskScaleFPSIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskScaleFPSIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaskScaleFPSIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFPSIntrOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFPSIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MaskScaleFPSIntrOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MaskScaleFPSIntrOp::getK() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::Value MaskScaleFPSIntrOp::getRounding() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MaskScaleFPSIntrOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPSIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPSIntrOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPSIntrOp::getKMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaskScaleFPSIntrOp::getRoundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaskScaleFPSIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskScaleFPSIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaskScaleFPSIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaskScaleFPSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  odsState.addTypes(res);
}

void MaskScaleFPSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaskScaleFPSIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaskScaleFPSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskScaleFPSIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaskScaleFPSIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaskScaleFPSIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaskScaleFPSIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {src, a, b, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MaskScaleFPSIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaskScaleFPSIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void MaskScaleFPSIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::MaskScaleFPSIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::RsqrtIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RsqrtIntrOpGenericAdaptorBase::RsqrtIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx.intr.rsqrt.ps.256", odsAttrs.getContext());
}

RsqrtIntrOpGenericAdaptorBase::RsqrtIntrOpGenericAdaptorBase(RsqrtIntrOp op) : RsqrtIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RsqrtIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RsqrtIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RsqrtIntrOpAdaptor::RsqrtIntrOpAdaptor(RsqrtIntrOp op) : RsqrtIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RsqrtIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RsqrtIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RsqrtIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> RsqrtIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RsqrtIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RsqrtIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RsqrtIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RsqrtIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RsqrtIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a) {
  odsState.addOperands(a);
  odsState.addTypes(res);
}

void RsqrtIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a) {
  odsState.addOperands(a);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RsqrtIntrOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RsqrtIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a) {
  odsState.addOperands(a);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RsqrtIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RsqrtIntrOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RsqrtIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RsqrtIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RsqrtIntrOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void RsqrtIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::RsqrtIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::RsqrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RsqrtOpGenericAdaptorBase::RsqrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx.rsqrt", odsAttrs.getContext());
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

::mlir::TypedValue<::mlir::VectorType> RsqrtOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RsqrtOp::getAMutable() {
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

::mlir::TypedValue<::mlir::VectorType> RsqrtOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type b, ::mlir::Value a) {
  odsState.addOperands(a);
  odsState.addTypes(b);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a) {
  odsState.addOperands(a);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RsqrtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a) {
  odsState.addOperands(a);
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

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RsqrtOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RsqrtOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RsqrtOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RsqrtOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RsqrtOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::Type aRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> aTypes(aRawTypes);

  aOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(aRawOperands[0]))
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
    aRawTypes[0] = type;
  }
  result.addTypes(aTypes[0]);
  if (parser.resolveOperands(aOperands, aTypes, aOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RsqrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getA();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RsqrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::RsqrtOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::Vp2IntersectDIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Vp2IntersectDIntrOpGenericAdaptorBase::Vp2IntersectDIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.vp2intersect.d.512", odsAttrs.getContext());
}

Vp2IntersectDIntrOpGenericAdaptorBase::Vp2IntersectDIntrOpGenericAdaptorBase(Vp2IntersectDIntrOp op) : Vp2IntersectDIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Vp2IntersectDIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Vp2IntersectDIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Vp2IntersectDIntrOpAdaptor::Vp2IntersectDIntrOpAdaptor(Vp2IntersectDIntrOp op) : Vp2IntersectDIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Vp2IntersectDIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Vp2IntersectDIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Vp2IntersectDIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectDIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectDIntrOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &Vp2IntersectDIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Vp2IntersectDIntrOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Vp2IntersectDIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Vp2IntersectDIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Vp2IntersectDIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void Vp2IntersectDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(res);
}

void Vp2IntersectDIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Vp2IntersectDIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Vp2IntersectDIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Vp2IntersectDIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void Vp2IntersectDIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::Vp2IntersectDIntrOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::Vp2IntersectOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Vp2IntersectOpGenericAdaptorBase::Vp2IntersectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.vp2intersect", odsAttrs.getContext());
}

Vp2IntersectOpGenericAdaptorBase::Vp2IntersectOpGenericAdaptorBase(Vp2IntersectOp op) : Vp2IntersectOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Vp2IntersectOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Vp2IntersectOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Vp2IntersectOpAdaptor::Vp2IntersectOpAdaptor(Vp2IntersectOp op) : Vp2IntersectOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Vp2IntersectOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void Vp2IntersectOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "k1");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "k2");
}

std::pair<unsigned, unsigned> Vp2IntersectOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Vp2IntersectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &Vp2IntersectOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Vp2IntersectOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Vp2IntersectOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Vp2IntersectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectOp::getK1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectOp::getK2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(1).begin());
}

void Vp2IntersectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type k1, ::mlir::Type k2, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(k1);
  odsState.addTypes(k2);
}

void Vp2IntersectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Vp2IntersectOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Vp2IntersectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Vp2IntersectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Vp2IntersectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Vp2IntersectOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult Vp2IntersectOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, b} have same type");
  if (!((std::equal_to<>()(VectorType::get({::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getShape()[0]}, IntegerType::get((*this->getODSOperands(0).begin()).getType().getContext(), 1)), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that k1 has the same number of bits as elements in a");
  if (!((std::equal_to<>()(VectorType::get({::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getShape()[0]}, IntegerType::get((*this->getODSOperands(0).begin()).getType().getContext(), 1)), (*this->getODSResults(1).begin()).getType()))))
    return emitOpError("failed to verify that k2 has the same number of bits as elements in b");
  return ::mlir::success();
}

::mlir::LogicalResult Vp2IntersectOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Vp2IntersectOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = VectorType::get({::llvm::cast<VectorType>(operands[0].getType()).getShape()[0]}, IntegerType::get(operands[0].getType().getContext(), 1));
  ::mlir::Type odsInferredType1 = VectorType::get({::llvm::cast<VectorType>(operands[0].getType()).getShape()[0]}, IntegerType::get(operands[0].getType().getContext(), 1));
  inferredReturnTypes[0] = odsInferredType0;
  inferredReturnTypes[1] = odsInferredType1;
  return ::mlir::success();
}

::mlir::ParseResult Vp2IntersectOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::Type aRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> aTypes(aRawTypes);

  aOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(aRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bRawOperands[0]))
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
    aRawTypes[0] = type;
  }
  for (::mlir::Type type : aTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'a' must be vector of 32-bit signless integer or 64-bit signless integer values of length 16/8, but got " << type;
    }
  }
  result.addTypes(VectorType::get({::llvm::cast<VectorType>(aTypes[0]).getShape()[0]}, IntegerType::get(aTypes[0].getContext(), 1)));
  result.addTypes(VectorType::get({::llvm::cast<VectorType>(aTypes[0]).getShape()[0]}, IntegerType::get(aTypes[0].getContext(), 1)));
  if (parser.resolveOperands(aOperands, aTypes, aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bOperands, aTypes[0], bOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Vp2IntersectOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getB();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Vp2IntersectOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::Vp2IntersectOp)

namespace mlir {
namespace x86vector {

//===----------------------------------------------------------------------===//
// ::mlir::x86vector::Vp2IntersectQIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Vp2IntersectQIntrOpGenericAdaptorBase::Vp2IntersectQIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("x86vector.avx512.intr.vp2intersect.q.512", odsAttrs.getContext());
}

Vp2IntersectQIntrOpGenericAdaptorBase::Vp2IntersectQIntrOpGenericAdaptorBase(Vp2IntersectQIntrOp op) : Vp2IntersectQIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Vp2IntersectQIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Vp2IntersectQIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Vp2IntersectQIntrOpAdaptor::Vp2IntersectQIntrOpAdaptor(Vp2IntersectQIntrOp op) : Vp2IntersectQIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Vp2IntersectQIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Vp2IntersectQIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Vp2IntersectQIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectQIntrOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> Vp2IntersectQIntrOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &Vp2IntersectQIntrOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Vp2IntersectQIntrOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Vp2IntersectQIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Vp2IntersectQIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Vp2IntersectQIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void Vp2IntersectQIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(res);
}

void Vp2IntersectQIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Vp2IntersectQIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Vp2IntersectQIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_X86Vector4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Vp2IntersectQIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void Vp2IntersectQIntrOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace x86vector
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::x86vector::Vp2IntersectQIntrOp)


#endif  // GET_OP_CLASSES

