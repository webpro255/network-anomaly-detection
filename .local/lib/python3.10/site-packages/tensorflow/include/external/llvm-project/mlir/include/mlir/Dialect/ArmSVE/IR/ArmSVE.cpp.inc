/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSVE.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::arm_sve::ConvertFromSvboolIntrOp,
::mlir::arm_sve::ConvertFromSvboolOp,
::mlir::arm_sve::ConvertToSvboolIntrOp,
::mlir::arm_sve::ConvertToSvboolOp,
::mlir::arm_sve::ScalableMaskedAddFIntrOp,
::mlir::arm_sve::ScalableMaskedAddFOp,
::mlir::arm_sve::ScalableMaskedAddIIntrOp,
::mlir::arm_sve::ScalableMaskedAddIOp,
::mlir::arm_sve::ScalableMaskedDivFIntrOp,
::mlir::arm_sve::ScalableMaskedDivFOp,
::mlir::arm_sve::ScalableMaskedMulFIntrOp,
::mlir::arm_sve::ScalableMaskedMulFOp,
::mlir::arm_sve::ScalableMaskedMulIIntrOp,
::mlir::arm_sve::ScalableMaskedMulIOp,
::mlir::arm_sve::ScalableMaskedSDivIIntrOp,
::mlir::arm_sve::ScalableMaskedSDivIOp,
::mlir::arm_sve::ScalableMaskedSubFIntrOp,
::mlir::arm_sve::ScalableMaskedSubFOp,
::mlir::arm_sve::ScalableMaskedSubIIntrOp,
::mlir::arm_sve::ScalableMaskedSubIOp,
::mlir::arm_sve::ScalableMaskedUDivIIntrOp,
::mlir::arm_sve::ScalableMaskedUDivIOp,
::mlir::arm_sve::SdotIntrOp,
::mlir::arm_sve::SdotOp,
::mlir::arm_sve::SmmlaIntrOp,
::mlir::arm_sve::SmmlaOp,
::mlir::arm_sve::UdotIntrOp,
::mlir::arm_sve::UdotOp,
::mlir::arm_sve::UmmlaIntrOp,
::mlir::arm_sve::UmmlaOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_sve {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be  of ranks 1scalable vector of 1-bit signless integer values of length 16, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0)) && ((::llvm::cast<::mlir::VectorType>(type).getScalableDims().back())) && ((!llvm::is_contained(::llvm::cast<::mlir::VectorType>(type).getScalableDims().drop_back(), true)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).getRank() >= 1)) && ((::llvm::is_contained(ArrayRef<int64_t>({16}), ::llvm::cast<::mlir::ShapedType>(type).getDimSize(::llvm::cast<::mlir::ShapedType>(type).getRank() + -1))))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be trailing scalable vector of 1-bit signless integer values with dim -1 having a size of {16}, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0)) && ((::llvm::cast<::mlir::VectorType>(type).getScalableDims().back())) && ((!llvm::is_contained(::llvm::cast<::mlir::VectorType>(type).getScalableDims().drop_back(), true)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).getRank() >= 1)) && ((::llvm::is_contained(ArrayRef<int64_t>({16, 8, 4, 2, 1}), ::llvm::cast<::mlir::ShapedType>(type).getDimSize(::llvm::cast<::mlir::ShapedType>(type).getRank() + -1))))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be trailing scalable vector of 1-bit signless integer values with dim -1 having a size of {16, 8, 4, 2, 1}, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE4(
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
        << " must be  of ranks 1scalable vector of 1-bit signless integer values of length 16/8/4/2/1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of 1-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of floating-point values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of 32-bit signless integer or 64-bit signless integer values of length 4/2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of 8-bit signless integer or 16-bit signless integer values of length 16/8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of 32-bit signless integer values of length 4, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSVE12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be scalable vector of 8-bit signless integer values of length 16, but got " << type;
  }
  return ::mlir::success();
}
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertFromSvboolIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertFromSvboolIntrOpGenericAdaptorBase::ConvertFromSvboolIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.convert.from.svbool", odsAttrs.getContext());
}

ConvertFromSvboolIntrOpGenericAdaptorBase::ConvertFromSvboolIntrOpGenericAdaptorBase(ConvertFromSvboolIntrOp op) : ConvertFromSvboolIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertFromSvboolIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertFromSvboolIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertFromSvboolIntrOpAdaptor::ConvertFromSvboolIntrOpAdaptor(ConvertFromSvboolIntrOp op) : ConvertFromSvboolIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertFromSvboolIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertFromSvboolIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertFromSvboolIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ConvertFromSvboolIntrOp::getSvbool() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertFromSvboolIntrOp::getSvboolMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertFromSvboolIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertFromSvboolIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertFromSvboolIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ConvertFromSvboolIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value svbool) {
  odsState.addOperands(svbool);
  odsState.addTypes(res);
}

void ConvertFromSvboolIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value svbool) {
  odsState.addOperands(svbool);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertFromSvboolIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertFromSvboolIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((::llvm::isa<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()) &&
                  ::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).isScalable())) && ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()) &&
                  ::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getElementType()))) && (((::llvm::isa<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()) &&
                  ::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).isScalable())) && (((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getNumElements()
                           == 1))))))
    return emitOpError("failed to verify that 'res' is  of ranks 1scalable vector of 1-bit signless integer values of length 16/8/4/2/1");
  return ::mlir::success();
}

::mlir::LogicalResult ConvertFromSvboolIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertFromSvboolIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertFromSvboolOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertFromSvboolOpGenericAdaptorBase::ConvertFromSvboolOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.convert_from_svbool", odsAttrs.getContext());
}

ConvertFromSvboolOpGenericAdaptorBase::ConvertFromSvboolOpGenericAdaptorBase(ConvertFromSvboolOp op) : ConvertFromSvboolOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertFromSvboolOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertFromSvboolOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertFromSvboolOpAdaptor::ConvertFromSvboolOpAdaptor(ConvertFromSvboolOp op) : ConvertFromSvboolOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertFromSvboolOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertFromSvboolOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertFromSvboolOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ConvertFromSvboolOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertFromSvboolOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertFromSvboolOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertFromSvboolOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ConvertFromSvboolOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ConvertFromSvboolOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void ConvertFromSvboolOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertFromSvboolOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertFromSvboolOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(VectorType(VectorType::Builder(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType())).setDim(::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).getRank() - 1, 16)), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that expected corresponding svbool type widened to [16]xi1");
  return ::mlir::success();
}

::mlir::LogicalResult ConvertFromSvboolOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConvertFromSvboolOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
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
    resultRawTypes[0] = type;
  }
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0)) && ((::llvm::cast<::mlir::VectorType>(type).getScalableDims().back())) && ((!llvm::is_contained(::llvm::cast<::mlir::VectorType>(type).getScalableDims().drop_back(), true)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).getRank() >= 1)) && ((::llvm::is_contained(ArrayRef<int64_t>({16, 8, 4, 2, 1}), ::llvm::cast<::mlir::ShapedType>(type).getDimSize(::llvm::cast<::mlir::ShapedType>(type).getRank() + -1))))))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be trailing scalable vector of 1-bit signless integer values with dim -1 having a size of {16, 8, 4, 2, 1}, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, VectorType(VectorType::Builder(::llvm::cast<VectorType>(resultTypes[0])).setDim(::llvm::cast<VectorType>(resultTypes[0]).getRank() - 1, 16)), sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConvertFromSvboolOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
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

void ConvertFromSvboolOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertFromSvboolOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertToSvboolIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertToSvboolIntrOpGenericAdaptorBase::ConvertToSvboolIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.convert.to.svbool", odsAttrs.getContext());
}

ConvertToSvboolIntrOpGenericAdaptorBase::ConvertToSvboolIntrOpGenericAdaptorBase(ConvertToSvboolIntrOp op) : ConvertToSvboolIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertToSvboolIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertToSvboolIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertToSvboolIntrOpAdaptor::ConvertToSvboolIntrOpAdaptor(ConvertToSvboolIntrOp op) : ConvertToSvboolIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertToSvboolIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertToSvboolIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertToSvboolIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ConvertToSvboolIntrOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertToSvboolIntrOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertToSvboolIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertToSvboolIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertToSvboolIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ConvertToSvboolIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask) {
  odsState.addOperands(mask);
  odsState.addTypes(res);
}

void ConvertToSvboolIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask) {
  odsState.addOperands(mask);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertToSvboolIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertToSvboolIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((::llvm::isa<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()) &&
                  ::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).isScalable())) && ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()) &&
                  ::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getElementType()))) && (((::llvm::isa<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()) &&
                  ::llvm::cast<VectorType>((*this->getODSResults(0).begin()).getType()).isScalable())) && ((::llvm::cast<::mlir::VectorType>((*this->getODSResults(0).begin()).getType()).getNumElements()
                           == 16)))))
    return emitOpError("failed to verify that 'res' is  of ranks 1scalable vector of 1-bit signless integer values of length 16");
  return ::mlir::success();
}

::mlir::LogicalResult ConvertToSvboolIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertToSvboolIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertToSvboolOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertToSvboolOpGenericAdaptorBase::ConvertToSvboolOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.convert_to_svbool", odsAttrs.getContext());
}

ConvertToSvboolOpGenericAdaptorBase::ConvertToSvboolOpGenericAdaptorBase(ConvertToSvboolOp op) : ConvertToSvboolOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertToSvboolOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertToSvboolOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertToSvboolOpAdaptor::ConvertToSvboolOpAdaptor(ConvertToSvboolOp op) : ConvertToSvboolOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertToSvboolOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertToSvboolOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertToSvboolOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ConvertToSvboolOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertToSvboolOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertToSvboolOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertToSvboolOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ConvertToSvboolOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ConvertToSvboolOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void ConvertToSvboolOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertToSvboolOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertToSvboolOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(VectorType(VectorType::Builder(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType())).setDim(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).getRank() - 1, 16)), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that expected corresponding svbool type widened to [16]xi1");
  return ::mlir::success();
}

::mlir::LogicalResult ConvertToSvboolOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConvertToSvboolOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);

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
  for (::mlir::Type type : sourceTypes) {
    (void)type;
    if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0)) && ((::llvm::cast<::mlir::VectorType>(type).getScalableDims().back())) && ((!llvm::is_contained(::llvm::cast<::mlir::VectorType>(type).getScalableDims().drop_back(), true)))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).getRank() >= 1)) && ((::llvm::is_contained(ArrayRef<int64_t>({16, 8, 4, 2, 1}), ::llvm::cast<::mlir::ShapedType>(type).getDimSize(::llvm::cast<::mlir::ShapedType>(type).getRank() + -1))))))) {
      return parser.emitError(parser.getNameLoc()) << "'source' must be trailing scalable vector of 1-bit signless integer values with dim -1 having a size of {16, 8, 4, 2, 1}, but got " << type;
    }
  }
  result.addTypes(VectorType(VectorType::Builder(::llvm::cast<VectorType>(sourceTypes[0])).setDim(::llvm::cast<VectorType>(sourceTypes[0]).getRank() - 1, 16)));
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConvertToSvboolOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

void ConvertToSvboolOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertToSvboolOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddFIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedAddFIntrOpGenericAdaptorBase::ScalableMaskedAddFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.fadd", odsAttrs.getContext());
}

ScalableMaskedAddFIntrOpGenericAdaptorBase::ScalableMaskedAddFIntrOpGenericAdaptorBase(ScalableMaskedAddFIntrOp op) : ScalableMaskedAddFIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedAddFIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedAddFIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedAddFIntrOpAdaptor::ScalableMaskedAddFIntrOpAdaptor(ScalableMaskedAddFIntrOp op) : ScalableMaskedAddFIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedAddFIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedAddFIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedAddFIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedAddFIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedAddFIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedAddFIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedAddFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedAddFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedAddFIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedAddFIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedAddFIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedAddFOpGenericAdaptorBase::ScalableMaskedAddFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.addf", odsAttrs.getContext());
}

ScalableMaskedAddFOpGenericAdaptorBase::ScalableMaskedAddFOpGenericAdaptorBase(ScalableMaskedAddFOp op) : ScalableMaskedAddFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedAddFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedAddFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedAddFOpAdaptor::ScalableMaskedAddFOpAdaptor(ScalableMaskedAddFOp op) : ScalableMaskedAddFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedAddFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedAddFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedAddFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddFOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddFOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddFOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedAddFOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedAddFOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedAddFOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedAddFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedAddFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddFOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedAddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedAddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedAddFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedAddFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedAddFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedAddFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedAddFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddIIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedAddIIntrOpGenericAdaptorBase::ScalableMaskedAddIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.add", odsAttrs.getContext());
}

ScalableMaskedAddIIntrOpGenericAdaptorBase::ScalableMaskedAddIIntrOpGenericAdaptorBase(ScalableMaskedAddIIntrOp op) : ScalableMaskedAddIIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedAddIIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedAddIIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedAddIIntrOpAdaptor::ScalableMaskedAddIIntrOpAdaptor(ScalableMaskedAddIIntrOp op) : ScalableMaskedAddIIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedAddIIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedAddIIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedAddIIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedAddIIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedAddIIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedAddIIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedAddIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedAddIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedAddIIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedAddIIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedAddIIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedAddIOpGenericAdaptorBase::ScalableMaskedAddIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.addi", odsAttrs.getContext());
}

ScalableMaskedAddIOpGenericAdaptorBase::ScalableMaskedAddIOpGenericAdaptorBase(ScalableMaskedAddIOp op) : ScalableMaskedAddIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedAddIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedAddIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedAddIOpAdaptor::ScalableMaskedAddIOpAdaptor(ScalableMaskedAddIOp op) : ScalableMaskedAddIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedAddIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedAddIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedAddIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddIOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddIOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddIOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedAddIOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedAddIOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedAddIOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedAddIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedAddIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedAddIOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedAddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedAddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedAddIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedAddIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedAddIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedAddIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedAddIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedDivFIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedDivFIntrOpGenericAdaptorBase::ScalableMaskedDivFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.fdiv", odsAttrs.getContext());
}

ScalableMaskedDivFIntrOpGenericAdaptorBase::ScalableMaskedDivFIntrOpGenericAdaptorBase(ScalableMaskedDivFIntrOp op) : ScalableMaskedDivFIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedDivFIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedDivFIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedDivFIntrOpAdaptor::ScalableMaskedDivFIntrOpAdaptor(ScalableMaskedDivFIntrOp op) : ScalableMaskedDivFIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedDivFIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedDivFIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedDivFIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedDivFIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedDivFIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedDivFIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedDivFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedDivFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedDivFIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedDivFIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedDivFIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedDivFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedDivFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedDivFOpGenericAdaptorBase::ScalableMaskedDivFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.divf", odsAttrs.getContext());
}

ScalableMaskedDivFOpGenericAdaptorBase::ScalableMaskedDivFOpGenericAdaptorBase(ScalableMaskedDivFOp op) : ScalableMaskedDivFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedDivFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedDivFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedDivFOpAdaptor::ScalableMaskedDivFOpAdaptor(ScalableMaskedDivFOp op) : ScalableMaskedDivFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedDivFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedDivFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedDivFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedDivFOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedDivFOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedDivFOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedDivFOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedDivFOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedDivFOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedDivFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedDivFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedDivFOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedDivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedDivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedDivFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedDivFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedDivFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedDivFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedDivFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedDivFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulFIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedMulFIntrOpGenericAdaptorBase::ScalableMaskedMulFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.fmul", odsAttrs.getContext());
}

ScalableMaskedMulFIntrOpGenericAdaptorBase::ScalableMaskedMulFIntrOpGenericAdaptorBase(ScalableMaskedMulFIntrOp op) : ScalableMaskedMulFIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedMulFIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedMulFIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedMulFIntrOpAdaptor::ScalableMaskedMulFIntrOpAdaptor(ScalableMaskedMulFIntrOp op) : ScalableMaskedMulFIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedMulFIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedMulFIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedMulFIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedMulFIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedMulFIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedMulFIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedMulFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedMulFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedMulFIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedMulFIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedMulFIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedMulFOpGenericAdaptorBase::ScalableMaskedMulFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.mulf", odsAttrs.getContext());
}

ScalableMaskedMulFOpGenericAdaptorBase::ScalableMaskedMulFOpGenericAdaptorBase(ScalableMaskedMulFOp op) : ScalableMaskedMulFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedMulFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedMulFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedMulFOpAdaptor::ScalableMaskedMulFOpAdaptor(ScalableMaskedMulFOp op) : ScalableMaskedMulFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedMulFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedMulFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedMulFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulFOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulFOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulFOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedMulFOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedMulFOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedMulFOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedMulFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedMulFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulFOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedMulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedMulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedMulFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedMulFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedMulFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedMulFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedMulFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulIIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedMulIIntrOpGenericAdaptorBase::ScalableMaskedMulIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.mul", odsAttrs.getContext());
}

ScalableMaskedMulIIntrOpGenericAdaptorBase::ScalableMaskedMulIIntrOpGenericAdaptorBase(ScalableMaskedMulIIntrOp op) : ScalableMaskedMulIIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedMulIIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedMulIIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedMulIIntrOpAdaptor::ScalableMaskedMulIIntrOpAdaptor(ScalableMaskedMulIIntrOp op) : ScalableMaskedMulIIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedMulIIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedMulIIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedMulIIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedMulIIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedMulIIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedMulIIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedMulIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedMulIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedMulIIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedMulIIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedMulIIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedMulIOpGenericAdaptorBase::ScalableMaskedMulIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.muli", odsAttrs.getContext());
}

ScalableMaskedMulIOpGenericAdaptorBase::ScalableMaskedMulIOpGenericAdaptorBase(ScalableMaskedMulIOp op) : ScalableMaskedMulIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedMulIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedMulIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedMulIOpAdaptor::ScalableMaskedMulIOpAdaptor(ScalableMaskedMulIOp op) : ScalableMaskedMulIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedMulIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedMulIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedMulIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulIOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulIOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulIOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedMulIOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedMulIOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedMulIOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedMulIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedMulIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedMulIOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedMulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedMulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedMulIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedMulIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedMulIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedMulIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedMulIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSDivIIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedSDivIIntrOpGenericAdaptorBase::ScalableMaskedSDivIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.sdiv", odsAttrs.getContext());
}

ScalableMaskedSDivIIntrOpGenericAdaptorBase::ScalableMaskedSDivIIntrOpGenericAdaptorBase(ScalableMaskedSDivIIntrOp op) : ScalableMaskedSDivIIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedSDivIIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedSDivIIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedSDivIIntrOpAdaptor::ScalableMaskedSDivIIntrOpAdaptor(ScalableMaskedSDivIIntrOp op) : ScalableMaskedSDivIIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedSDivIIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedSDivIIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedSDivIIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedSDivIIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedSDivIIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedSDivIIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedSDivIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedSDivIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedSDivIIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedSDivIIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedSDivIIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSDivIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSDivIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedSDivIOpGenericAdaptorBase::ScalableMaskedSDivIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.divi_signed", odsAttrs.getContext());
}

ScalableMaskedSDivIOpGenericAdaptorBase::ScalableMaskedSDivIOpGenericAdaptorBase(ScalableMaskedSDivIOp op) : ScalableMaskedSDivIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedSDivIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedSDivIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedSDivIOpAdaptor::ScalableMaskedSDivIOpAdaptor(ScalableMaskedSDivIOp op) : ScalableMaskedSDivIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedSDivIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedSDivIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedSDivIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSDivIOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSDivIOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSDivIOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedSDivIOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedSDivIOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedSDivIOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedSDivIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedSDivIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSDivIOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedSDivIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedSDivIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedSDivIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedSDivIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedSDivIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedSDivIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedSDivIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSDivIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubFIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedSubFIntrOpGenericAdaptorBase::ScalableMaskedSubFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.fsub", odsAttrs.getContext());
}

ScalableMaskedSubFIntrOpGenericAdaptorBase::ScalableMaskedSubFIntrOpGenericAdaptorBase(ScalableMaskedSubFIntrOp op) : ScalableMaskedSubFIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedSubFIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedSubFIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedSubFIntrOpAdaptor::ScalableMaskedSubFIntrOpAdaptor(ScalableMaskedSubFIntrOp op) : ScalableMaskedSubFIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedSubFIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedSubFIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedSubFIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedSubFIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedSubFIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedSubFIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedSubFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedSubFIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedSubFIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedSubFIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedSubFIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedSubFOpGenericAdaptorBase::ScalableMaskedSubFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.subf", odsAttrs.getContext());
}

ScalableMaskedSubFOpGenericAdaptorBase::ScalableMaskedSubFOpGenericAdaptorBase(ScalableMaskedSubFOp op) : ScalableMaskedSubFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedSubFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedSubFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedSubFOpAdaptor::ScalableMaskedSubFOpAdaptor(ScalableMaskedSubFOp op) : ScalableMaskedSubFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedSubFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedSubFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedSubFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubFOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubFOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubFOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedSubFOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedSubFOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedSubFOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedSubFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedSubFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubFOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedSubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedSubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedSubFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedSubFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedSubFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedSubFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedSubFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubIIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedSubIIntrOpGenericAdaptorBase::ScalableMaskedSubIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.sub", odsAttrs.getContext());
}

ScalableMaskedSubIIntrOpGenericAdaptorBase::ScalableMaskedSubIIntrOpGenericAdaptorBase(ScalableMaskedSubIIntrOp op) : ScalableMaskedSubIIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedSubIIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedSubIIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedSubIIntrOpAdaptor::ScalableMaskedSubIIntrOpAdaptor(ScalableMaskedSubIIntrOp op) : ScalableMaskedSubIIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedSubIIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedSubIIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedSubIIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedSubIIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedSubIIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedSubIIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedSubIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedSubIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedSubIIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedSubIIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedSubIIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedSubIOpGenericAdaptorBase::ScalableMaskedSubIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.subi", odsAttrs.getContext());
}

ScalableMaskedSubIOpGenericAdaptorBase::ScalableMaskedSubIOpGenericAdaptorBase(ScalableMaskedSubIOp op) : ScalableMaskedSubIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedSubIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedSubIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedSubIOpAdaptor::ScalableMaskedSubIOpAdaptor(ScalableMaskedSubIOp op) : ScalableMaskedSubIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedSubIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedSubIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedSubIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubIOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubIOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubIOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedSubIOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedSubIOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedSubIOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedSubIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedSubIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedSubIOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedSubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedSubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedSubIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedSubIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedSubIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedSubIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedSubIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedUDivIIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedUDivIIntrOpGenericAdaptorBase::ScalableMaskedUDivIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.udiv", odsAttrs.getContext());
}

ScalableMaskedUDivIIntrOpGenericAdaptorBase::ScalableMaskedUDivIIntrOpGenericAdaptorBase(ScalableMaskedUDivIIntrOp op) : ScalableMaskedUDivIIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedUDivIIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedUDivIIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedUDivIIntrOpAdaptor::ScalableMaskedUDivIIntrOpAdaptor(ScalableMaskedUDivIIntrOp op) : ScalableMaskedUDivIIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedUDivIIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedUDivIIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedUDivIIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ScalableMaskedUDivIIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedUDivIIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScalableMaskedUDivIIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ScalableMaskedUDivIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void ScalableMaskedUDivIIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedUDivIIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedUDivIIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedUDivIIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedUDivIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedUDivIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalableMaskedUDivIOpGenericAdaptorBase::ScalableMaskedUDivIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.masked.divi_unsigned", odsAttrs.getContext());
}

ScalableMaskedUDivIOpGenericAdaptorBase::ScalableMaskedUDivIOpGenericAdaptorBase(ScalableMaskedUDivIOp op) : ScalableMaskedUDivIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScalableMaskedUDivIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalableMaskedUDivIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalableMaskedUDivIOpAdaptor::ScalableMaskedUDivIOpAdaptor(ScalableMaskedUDivIOp op) : ScalableMaskedUDivIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScalableMaskedUDivIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalableMaskedUDivIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalableMaskedUDivIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedUDivIOp::getMask() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedUDivIOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedUDivIOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ScalableMaskedUDivIOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedUDivIOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ScalableMaskedUDivIOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ScalableMaskedUDivIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalableMaskedUDivIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> ScalableMaskedUDivIOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void ScalableMaskedUDivIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void ScalableMaskedUDivIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(mask);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalableMaskedUDivIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalableMaskedUDivIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2, res} have same type");
  if (!((std::equal_to<>()(getI1SameShape((*this->getODSOperands(1).begin()).getType()), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that mask has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult ScalableMaskedUDivIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalableMaskedUDivIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type maskRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> maskTypes(maskRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    maskRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, resTypes[0], src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, resTypes[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalableMaskedUDivIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedUDivIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SdotIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SdotIntrOpGenericAdaptorBase::SdotIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.sdot", odsAttrs.getContext());
}

SdotIntrOpGenericAdaptorBase::SdotIntrOpGenericAdaptorBase(SdotIntrOp op) : SdotIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SdotIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SdotIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SdotIntrOpAdaptor::SdotIntrOpAdaptor(SdotIntrOp op) : SdotIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SdotIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SdotIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SdotIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SdotIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SdotIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SdotIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SdotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void SdotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SdotIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SdotIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SdotIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SdotIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SdotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SdotOpGenericAdaptorBase::SdotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.sdot", odsAttrs.getContext());
}

SdotOpGenericAdaptorBase::SdotOpGenericAdaptorBase(SdotOp op) : SdotOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SdotOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SdotOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SdotOpAdaptor::SdotOpAdaptor(SdotOp op) : SdotOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SdotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SdotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SdotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SdotOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SdotOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SdotOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SdotOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SdotOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SdotOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SdotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SdotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SdotOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void SdotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(dst);
}

void SdotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SdotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SdotOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, dst} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult SdotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SdotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type src1RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> src1Types(src1RawTypes);
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    src1RawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  result.addTypes(dstTypes);
  if (parser.resolveOperands(accOperands, dstTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, src1Types, src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, src1Types[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SdotOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc1().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SdotOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SdotOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SmmlaIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SmmlaIntrOpGenericAdaptorBase::SmmlaIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.smmla", odsAttrs.getContext());
}

SmmlaIntrOpGenericAdaptorBase::SmmlaIntrOpGenericAdaptorBase(SmmlaIntrOp op) : SmmlaIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SmmlaIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SmmlaIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SmmlaIntrOpAdaptor::SmmlaIntrOpAdaptor(SmmlaIntrOp op) : SmmlaIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SmmlaIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SmmlaIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SmmlaIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SmmlaIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SmmlaIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SmmlaIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SmmlaIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void SmmlaIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SmmlaIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SmmlaIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SmmlaIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SmmlaIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SmmlaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SmmlaOpGenericAdaptorBase::SmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.smmla", odsAttrs.getContext());
}

SmmlaOpGenericAdaptorBase::SmmlaOpGenericAdaptorBase(SmmlaOp op) : SmmlaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SmmlaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SmmlaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SmmlaOpAdaptor::SmmlaOpAdaptor(SmmlaOp op) : SmmlaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SmmlaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SmmlaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SmmlaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SmmlaOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SmmlaOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SmmlaOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SmmlaOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SmmlaOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SmmlaOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SmmlaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SmmlaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SmmlaOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void SmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(dst);
}

void SmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SmmlaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SmmlaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, dst} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult SmmlaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SmmlaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type src1RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> src1Types(src1RawTypes);
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    src1RawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  result.addTypes(dstTypes);
  if (parser.resolveOperands(accOperands, dstTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, src1Types, src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, src1Types[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SmmlaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc1().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SmmlaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SmmlaOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UdotIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UdotIntrOpGenericAdaptorBase::UdotIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.udot", odsAttrs.getContext());
}

UdotIntrOpGenericAdaptorBase::UdotIntrOpGenericAdaptorBase(UdotIntrOp op) : UdotIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UdotIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UdotIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UdotIntrOpAdaptor::UdotIntrOpAdaptor(UdotIntrOp op) : UdotIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UdotIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UdotIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UdotIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> UdotIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UdotIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UdotIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void UdotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void UdotIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UdotIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UdotIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UdotIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UdotIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UdotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UdotOpGenericAdaptorBase::UdotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.udot", odsAttrs.getContext());
}

UdotOpGenericAdaptorBase::UdotOpGenericAdaptorBase(UdotOp op) : UdotOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UdotOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UdotOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UdotOpAdaptor::UdotOpAdaptor(UdotOp op) : UdotOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UdotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UdotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UdotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> UdotOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UdotOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UdotOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &UdotOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UdotOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UdotOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UdotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UdotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> UdotOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void UdotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(dst);
}

void UdotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UdotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UdotOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, dst} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult UdotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UdotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type src1RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> src1Types(src1RawTypes);
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    src1RawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  result.addTypes(dstTypes);
  if (parser.resolveOperands(accOperands, dstTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, src1Types, src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, src1Types[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UdotOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc1().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void UdotOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UdotOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UmmlaIntrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UmmlaIntrOpGenericAdaptorBase::UmmlaIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.intr.ummla", odsAttrs.getContext());
}

UmmlaIntrOpGenericAdaptorBase::UmmlaIntrOpGenericAdaptorBase(UmmlaIntrOp op) : UmmlaIntrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UmmlaIntrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UmmlaIntrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UmmlaIntrOpAdaptor::UmmlaIntrOpAdaptor(UmmlaIntrOp op) : UmmlaIntrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UmmlaIntrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UmmlaIntrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UmmlaIntrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> UmmlaIntrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UmmlaIntrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UmmlaIntrOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void UmmlaIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addTypes(res);
}

void UmmlaIntrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UmmlaIntrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UmmlaIntrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UmmlaIntrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UmmlaIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UmmlaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UmmlaOpGenericAdaptorBase::UmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sve.ummla", odsAttrs.getContext());
}

UmmlaOpGenericAdaptorBase::UmmlaOpGenericAdaptorBase(UmmlaOp op) : UmmlaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UmmlaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UmmlaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UmmlaOpAdaptor::UmmlaOpAdaptor(UmmlaOp op) : UmmlaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UmmlaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UmmlaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UmmlaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> UmmlaOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UmmlaOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UmmlaOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &UmmlaOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UmmlaOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UmmlaOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UmmlaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UmmlaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> UmmlaOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void UmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(dst);
}

void UmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UmmlaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UmmlaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSVE11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, dst} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult UmmlaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UmmlaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src1Operands(src1RawOperands);  ::llvm::SMLoc src1OperandsLoc;
  (void)src1OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand src2RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> src2Operands(src2RawOperands);  ::llvm::SMLoc src2OperandsLoc;
  (void)src2OperandsLoc;
  ::mlir::Type src1RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> src1Types(src1RawTypes);
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src1RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  src2OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(src2RawOperands[0]))
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
    src1RawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  result.addTypes(dstTypes);
  if (parser.resolveOperands(accOperands, dstTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, src1Types, src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, src1Types[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UmmlaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc1();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc2();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc1().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void UmmlaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_sve
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UmmlaOp)


#endif  // GET_OP_CLASSES

