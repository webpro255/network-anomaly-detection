/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmNeon.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::arm_neon::SMullOp,
::mlir::arm_neon::Sdot2dOp,
::mlir::arm_neon::SdotOp,
::mlir::arm_neon::SmmlaOp,
::mlir::arm_neon::UmmlaOp,
::mlir::arm_neon::UsmmlaOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_neon {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmNeon0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 8-bit signless integer or 16-bit signless integer or 32-bit signless integer values of length 8/4/2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmNeon1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values of length 8/4/2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmNeon2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit signless integer values of length 4/2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmNeon3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 8-bit signless integer values of length 16/8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmNeon4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({4}))) && ((::llvm::isa<::mlir::VectorType>(type) &&
                                  !::llvm::cast<VectorType>(type).isScalable()))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector with length 4 of 32-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmNeon5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::cast<::mlir::VectorType>(type).getShape() == ArrayRef<int64_t>({16}))) && ((::llvm::isa<::mlir::VectorType>(type) &&
                                  !::llvm::cast<VectorType>(type).isScalable()))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector with length 16 of 8-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}
} // namespace arm_neon
} // namespace mlir
namespace mlir {
namespace arm_neon {

//===----------------------------------------------------------------------===//
// ::mlir::arm_neon::SMullOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SMullOpGenericAdaptorBase::SMullOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_neon.intr.smull", odsAttrs.getContext());
}

SMullOpGenericAdaptorBase::SMullOpGenericAdaptorBase(SMullOp op) : SMullOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SMullOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SMullOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SMullOpAdaptor::SMullOpAdaptor(SMullOp op) : SMullOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SMullOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SMullOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SMullOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SMullOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SMullOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SMullOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SMullOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SMullOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SMullOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> SMullOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void SMullOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(res);
}

void SMullOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SMullOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SMullOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, b} have same type");
  if (!((std::equal_to<>()(::llvm::cast<VectorType>((*this->getODSOperands(0).begin()).getType()).scaleElementBitwidth(2), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that res has same vector shape and element bitwidth scaled by 2 as a");
  return ::mlir::success();
}

::mlir::LogicalResult SMullOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SMullOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::Type aRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> aTypes(aRawTypes);
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
    aRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(aOperands, aTypes, aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bOperands, aTypes[0], bOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SMullOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SMullOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_neon
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_neon::SMullOp)

namespace mlir {
namespace arm_neon {

//===----------------------------------------------------------------------===//
// ::mlir::arm_neon::Sdot2dOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Sdot2dOpGenericAdaptorBase::Sdot2dOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_neon.2d.sdot", odsAttrs.getContext());
}

Sdot2dOpGenericAdaptorBase::Sdot2dOpGenericAdaptorBase(Sdot2dOp op) : Sdot2dOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Sdot2dOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Sdot2dOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
Sdot2dOpAdaptor::Sdot2dOpAdaptor(Sdot2dOp op) : Sdot2dOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Sdot2dOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Sdot2dOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Sdot2dOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> Sdot2dOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> Sdot2dOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> Sdot2dOp::getC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &Sdot2dOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Sdot2dOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Sdot2dOp::getCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Sdot2dOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Sdot2dOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> Sdot2dOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void Sdot2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes(res);
}

void Sdot2dOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Sdot2dOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Sdot2dOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {b, c} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, res} have same type");
  if (!((::llvm::cast<VectorType>(getA().getType()).getShape().size() == 1)))
    return emitOpError("failed to verify that operand `a` should be 1-dimensional");
  if (!((::llvm::cast<VectorType>(getB().getType()).getShape().size() == 2)))
    return emitOpError("failed to verify that operand `b` should be 2-dimensional");
  if (!((::llvm::cast<VectorType>(getB().getType()).getShape()[1] == 4)))
    return emitOpError("failed to verify that operand `b` should have 4 columns");
  if (!((::llvm::cast<VectorType>(getB().getType()).getShape()[0] == ::llvm::cast<VectorType>(getA().getType()).getShape()[0])))
    return emitOpError("failed to verify that operand `b` should have as many rows as the size of operand `a`");
  return ::mlir::success();
}

::mlir::LogicalResult Sdot2dOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult Sdot2dOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand cRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> cOperands(cRawOperands);  ::llvm::SMLoc cOperandsLoc;
  (void)cOperandsLoc;
  ::mlir::Type bRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bTypes(bRawTypes);
  ::mlir::Type cRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> cTypes(cRawTypes);
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
  if (parser.parseComma())
    return ::mlir::failure();

  cOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(cRawOperands[0]))
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
    bRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    cRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
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
  if (parser.resolveOperands(bOperands, bTypes, bOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(cOperands, cTypes, cOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Sdot2dOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
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
}

void Sdot2dOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_neon
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_neon::Sdot2dOp)

namespace mlir {
namespace arm_neon {

//===----------------------------------------------------------------------===//
// ::mlir::arm_neon::SdotOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SdotOpGenericAdaptorBase::SdotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_neon.intr.sdot", odsAttrs.getContext());
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

::mlir::TypedValue<::mlir::VectorType> SdotOp::getA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> SdotOp::getB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> SdotOp::getC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SdotOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SdotOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SdotOp::getCMutable() {
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

::mlir::TypedValue<::mlir::VectorType> SdotOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void SdotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes(res);
}

void SdotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {b, c} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {a, res} have same type");
  if (!((std::equal_to<>()(VectorType::get({::llvm::cast<VectorType>((*this->getODSOperands(1).begin()).getType()).getShape()[0] / 4},IntegerType::get((*this->getODSOperands(1).begin()).getType().getContext(), 32)), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that res has the same number of elements as operand b");
  return ::mlir::success();
}

::mlir::LogicalResult SdotOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SdotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand cRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> cOperands(cRawOperands);  ::llvm::SMLoc cOperandsLoc;
  (void)cOperandsLoc;
  ::mlir::Type bRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bTypes(bRawTypes);
  ::mlir::Type cRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> cTypes(cRawTypes);
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
  if (parser.parseComma())
    return ::mlir::failure();

  cOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(cRawOperands[0]))
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
    bRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    cRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
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
  if (parser.resolveOperands(bOperands, bTypes, bOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(cOperands, cTypes, cOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SdotOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
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
}

void SdotOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_neon
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_neon::SdotOp)

namespace mlir {
namespace arm_neon {

//===----------------------------------------------------------------------===//
// ::mlir::arm_neon::SmmlaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SmmlaOpGenericAdaptorBase::SmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_neon.intr.smmla", odsAttrs.getContext());
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

::mlir::TypedValue<::mlir::VectorType> SmmlaOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void SmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, res} have same type");
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
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

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
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(accOperands, resTypes[0], accOperandsLoc, result.operands))
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SmmlaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_neon
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_neon::SmmlaOp)

namespace mlir {
namespace arm_neon {

//===----------------------------------------------------------------------===//
// ::mlir::arm_neon::UmmlaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UmmlaOpGenericAdaptorBase::UmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_neon.intr.ummla", odsAttrs.getContext());
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

::mlir::TypedValue<::mlir::VectorType> UmmlaOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void UmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, res} have same type");
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
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

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
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(accOperands, resTypes[0], accOperandsLoc, result.operands))
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void UmmlaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_neon
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_neon::UmmlaOp)

namespace mlir {
namespace arm_neon {

//===----------------------------------------------------------------------===//
// ::mlir::arm_neon::UsmmlaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UsmmlaOpGenericAdaptorBase::UsmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_neon.intr.usmmla", odsAttrs.getContext());
}

UsmmlaOpGenericAdaptorBase::UsmmlaOpGenericAdaptorBase(UsmmlaOp op) : UsmmlaOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UsmmlaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UsmmlaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UsmmlaOpAdaptor::UsmmlaOpAdaptor(UsmmlaOp op) : UsmmlaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UsmmlaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UsmmlaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UsmmlaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> UsmmlaOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> UsmmlaOp::getSrc1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> UsmmlaOp::getSrc2() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &UsmmlaOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UsmmlaOp::getSrc1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &UsmmlaOp::getSrc2Mutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UsmmlaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UsmmlaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> UsmmlaOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void UsmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  odsState.addTypes(res);
}

void UsmmlaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2) {
  odsState.addOperands(acc);
  odsState.addOperands(src1);
  odsState.addOperands(src2);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UsmmlaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UsmmlaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmNeon4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {src1, src2} have same type");
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult UsmmlaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UsmmlaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

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
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(accOperands, resTypes[0], accOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src1Operands, src1Types, src1OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(src2Operands, src1Types[0], src2OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UsmmlaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void UsmmlaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arm_neon
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_neon::UsmmlaOp)


#endif  // GET_OP_CLASSES

