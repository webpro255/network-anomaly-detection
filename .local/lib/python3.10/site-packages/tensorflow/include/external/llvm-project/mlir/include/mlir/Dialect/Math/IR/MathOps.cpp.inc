/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MathOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::math::AbsFOp,
::mlir::math::AbsIOp,
::mlir::math::AcosOp,
::mlir::math::AcoshOp,
::mlir::math::AsinOp,
::mlir::math::AsinhOp,
::mlir::math::Atan2Op,
::mlir::math::AtanOp,
::mlir::math::AtanhOp,
::mlir::math::CbrtOp,
::mlir::math::CeilOp,
::mlir::math::CopySignOp,
::mlir::math::CosOp,
::mlir::math::CoshOp,
::mlir::math::CountLeadingZerosOp,
::mlir::math::CountTrailingZerosOp,
::mlir::math::CtPopOp,
::mlir::math::ErfOp,
::mlir::math::Exp2Op,
::mlir::math::ExpM1Op,
::mlir::math::ExpOp,
::mlir::math::FPowIOp,
::mlir::math::FloorOp,
::mlir::math::FmaOp,
::mlir::math::IPowIOp,
::mlir::math::Log10Op,
::mlir::math::Log1pOp,
::mlir::math::Log2Op,
::mlir::math::LogOp,
::mlir::math::PowFOp,
::mlir::math::RoundEvenOp,
::mlir::math::RoundOp,
::mlir::math::RsqrtOp,
::mlir::math::SinOp,
::mlir::math::SinhOp,
::mlir::math::SqrtOp,
::mlir::math::TanOp,
::mlir::math::TanhOp,
::mlir::math::TruncOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace math {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MathOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::FloatType>(type))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be floating-point-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MathOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MathOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Floating point fast math flags";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MathOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MathOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace math
} // namespace mlir
namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AbsFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AbsFOpGenericAdaptorBase::AbsFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.absf", odsAttrs.getContext());
}

AbsFOpGenericAdaptorBase::AbsFOpGenericAdaptorBase(AbsFOp op) : AbsFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AbsFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AbsFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AbsFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AbsFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AbsFOpAdaptor::AbsFOpAdaptor(AbsFOp op) : AbsFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AbsFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.absf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AbsFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AbsFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsFOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AbsFOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AbsFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AbsFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AbsFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AbsFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AbsFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AbsFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AbsFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AbsFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AbsFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AbsFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AbsFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AbsFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AbsFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AbsFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AbsFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AbsFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AbsFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AbsFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AbsFOp::inferReturnTypes(odsBuilder.getContext(),
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

void AbsFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AbsFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AbsFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AbsFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AbsFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AbsFOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AbsFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AbsFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AbsFOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AbsIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AbsIOpGenericAdaptorBase::AbsIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.absi", odsAttrs.getContext());
}

AbsIOpGenericAdaptorBase::AbsIOpGenericAdaptorBase(AbsIOp op) : AbsIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AbsIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AbsIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AbsIOpAdaptor::AbsIOpAdaptor(AbsIOp op) : AbsIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AbsIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AbsIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AbsIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsIOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AbsIOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AbsIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AbsIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AbsIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AbsIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AbsIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AbsIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AbsIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AbsIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AbsIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AbsIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AbsIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AbsIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AbsIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void AbsIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AbsIOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AcosOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AcosOpGenericAdaptorBase::AcosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.acos", odsAttrs.getContext());
}

AcosOpGenericAdaptorBase::AcosOpGenericAdaptorBase(AcosOp op) : AcosOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AcosOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AcosOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AcosOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AcosOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AcosOpAdaptor::AcosOpAdaptor(AcosOp op) : AcosOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AcosOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.acos' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value AcosOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value AcosOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AcosOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AcosOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AcosOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AcosOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AcosOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AcosOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AcosOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AcosOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcosOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AcosOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AcosOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AcosOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AcosOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AcosOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AcosOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AcosOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AcosOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AcosOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AcosOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcosOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AcosOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AcosOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AcoshOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AcoshOpGenericAdaptorBase::AcoshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.acosh", odsAttrs.getContext());
}

AcoshOpGenericAdaptorBase::AcoshOpGenericAdaptorBase(AcoshOp op) : AcoshOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AcoshOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AcoshOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AcoshOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AcoshOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AcoshOpAdaptor::AcoshOpAdaptor(AcoshOp op) : AcoshOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AcoshOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.acosh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value AcoshOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value AcoshOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AcoshOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AcoshOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AcoshOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AcoshOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AcoshOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AcoshOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AcoshOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AcoshOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcoshOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AcoshOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AcoshOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AcoshOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AcoshOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AcoshOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AcoshOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AcoshOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AcoshOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AcoshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AcoshOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcoshOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AcoshOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AcoshOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AsinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsinOpGenericAdaptorBase::AsinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.asin", odsAttrs.getContext());
}

AsinOpGenericAdaptorBase::AsinOpGenericAdaptorBase(AsinOp op) : AsinOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsinOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsinOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AsinOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AsinOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AsinOpAdaptor::AsinOpAdaptor(AsinOp op) : AsinOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsinOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.asin' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value AsinOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value AsinOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AsinOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AsinOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AsinOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AsinOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AsinOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AsinOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AsinOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AsinOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AsinOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AsinOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AsinOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AsinOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AsinOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AsinOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AsinOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AsinOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AsinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AsinOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AsinOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AsinOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AsinhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsinhOpGenericAdaptorBase::AsinhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.asinh", odsAttrs.getContext());
}

AsinhOpGenericAdaptorBase::AsinhOpGenericAdaptorBase(AsinhOp op) : AsinhOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsinhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsinhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AsinhOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AsinhOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AsinhOpAdaptor::AsinhOpAdaptor(AsinhOp op) : AsinhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsinhOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.asinh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value AsinhOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value AsinhOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AsinhOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AsinhOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AsinhOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AsinhOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AsinhOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AsinhOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AsinhOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AsinhOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinhOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AsinhOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AsinhOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AsinhOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AsinhOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AsinhOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AsinhOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AsinhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AsinhOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AsinhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AsinhOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AsinhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AsinhOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::Atan2Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Atan2OpGenericAdaptorBase::Atan2OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.atan2", odsAttrs.getContext());
}

Atan2OpGenericAdaptorBase::Atan2OpGenericAdaptorBase(Atan2Op op) : Atan2OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Atan2OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Atan2OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr Atan2OpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags Atan2OpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
Atan2OpAdaptor::Atan2OpAdaptor(Atan2Op op) : Atan2OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Atan2OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.atan2' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Atan2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Atan2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Atan2Op::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value Atan2Op::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &Atan2Op::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Atan2Op::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Atan2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Atan2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Atan2Op::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Atan2Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute Atan2Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Atan2Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Atan2Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void Atan2Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void Atan2Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult Atan2Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Atan2Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Atan2Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr Atan2Op::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags Atan2Op::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void Atan2Op::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void Atan2Op::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Atan2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Atan2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Atan2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Atan2Op::inferReturnTypes(odsBuilder.getContext(),
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

void Atan2Op::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult Atan2Op::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Atan2Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Atan2Op::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult Atan2Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<Atan2Op::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, resultTypes[0], lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, resultTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Atan2Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Atan2Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::Atan2Op)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AtanOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtanOpGenericAdaptorBase::AtanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.atan", odsAttrs.getContext());
}

AtanOpGenericAdaptorBase::AtanOpGenericAdaptorBase(AtanOp op) : AtanOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtanOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtanOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AtanOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AtanOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AtanOpAdaptor::AtanOpAdaptor(AtanOp op) : AtanOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtanOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.atan' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value AtanOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value AtanOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AtanOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AtanOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AtanOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AtanOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AtanOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AtanOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AtanOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AtanOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AtanOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AtanOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AtanOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AtanOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AtanOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AtanOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtanOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AtanOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AtanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AtanOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AtanOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AtanOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::AtanhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtanhOpGenericAdaptorBase::AtanhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.atanh", odsAttrs.getContext());
}

AtanhOpGenericAdaptorBase::AtanhOpGenericAdaptorBase(AtanhOp op) : AtanhOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtanhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtanhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AtanhOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AtanhOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AtanhOpAdaptor::AtanhOpAdaptor(AtanhOp op) : AtanhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtanhOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.atanh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value AtanhOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value AtanhOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AtanhOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute AtanhOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AtanhOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AtanhOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AtanhOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AtanhOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AtanhOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AtanhOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanhOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AtanhOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AtanhOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AtanhOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AtanhOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AtanhOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AtanhOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtanhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AtanhOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AtanhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AtanhOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AtanhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::AtanhOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CbrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CbrtOpGenericAdaptorBase::CbrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.cbrt", odsAttrs.getContext());
}

CbrtOpGenericAdaptorBase::CbrtOpGenericAdaptorBase(CbrtOp op) : CbrtOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CbrtOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CbrtOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr CbrtOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags CbrtOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
CbrtOpAdaptor::CbrtOpAdaptor(CbrtOp op) : CbrtOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CbrtOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.cbrt' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CbrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CbrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CbrtOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CbrtOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CbrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CbrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CbrtOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CbrtOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute CbrtOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CbrtOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CbrtOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void CbrtOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void CbrtOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult CbrtOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CbrtOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CbrtOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr CbrtOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags CbrtOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void CbrtOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void CbrtOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CbrtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CbrtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CbrtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CbrtOp::inferReturnTypes(odsBuilder.getContext(),
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

void CbrtOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult CbrtOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CbrtOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CbrtOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CbrtOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<CbrtOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CbrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CbrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CbrtOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CeilOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CeilOpGenericAdaptorBase::CeilOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.ceil", odsAttrs.getContext());
}

CeilOpGenericAdaptorBase::CeilOpGenericAdaptorBase(CeilOp op) : CeilOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CeilOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CeilOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr CeilOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags CeilOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
CeilOpAdaptor::CeilOpAdaptor(CeilOp op) : CeilOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CeilOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.ceil' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value CeilOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CeilOp::getOperandMutable() {
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

::mlir::Value CeilOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CeilOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute CeilOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CeilOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CeilOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void CeilOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void CeilOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult CeilOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CeilOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CeilOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr CeilOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags CeilOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void CeilOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void CeilOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CeilOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CeilOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CeilOp::inferReturnTypes(odsBuilder.getContext(),
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

void CeilOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult CeilOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CeilOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CeilOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CeilOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<CeilOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CeilOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CeilOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CeilOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CopySignOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CopySignOpGenericAdaptorBase::CopySignOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.copysign", odsAttrs.getContext());
}

CopySignOpGenericAdaptorBase::CopySignOpGenericAdaptorBase(CopySignOp op) : CopySignOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CopySignOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CopySignOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr CopySignOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags CopySignOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
CopySignOpAdaptor::CopySignOpAdaptor(CopySignOp op) : CopySignOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CopySignOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.copysign' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CopySignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CopySignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopySignOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CopySignOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CopySignOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CopySignOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CopySignOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CopySignOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopySignOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CopySignOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute CopySignOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CopySignOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CopySignOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void CopySignOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void CopySignOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult CopySignOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CopySignOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CopySignOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr CopySignOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags CopySignOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void CopySignOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void CopySignOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CopySignOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CopySignOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopySignOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CopySignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CopySignOp::inferReturnTypes(odsBuilder.getContext(),
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

void CopySignOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult CopySignOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CopySignOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CopySignOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CopySignOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<CopySignOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, resultTypes[0], lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, resultTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CopySignOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CopySignOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CopySignOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CosOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CosOpGenericAdaptorBase::CosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.cos", odsAttrs.getContext());
}

CosOpGenericAdaptorBase::CosOpGenericAdaptorBase(CosOp op) : CosOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CosOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CosOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr CosOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags CosOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
CosOpAdaptor::CosOpAdaptor(CosOp op) : CosOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CosOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.cos' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CosOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CosOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CosOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CosOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute CosOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CosOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CosOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void CosOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void CosOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult CosOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CosOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CosOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr CosOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags CosOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void CosOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void CosOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CosOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CosOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CosOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CosOp::inferReturnTypes(odsBuilder.getContext(),
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

void CosOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult CosOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CosOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CosOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CosOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<CosOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CosOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CosOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CosOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CoshOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoshOpGenericAdaptorBase::CoshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.cosh", odsAttrs.getContext());
}

CoshOpGenericAdaptorBase::CoshOpGenericAdaptorBase(CoshOp op) : CoshOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoshOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoshOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr CoshOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags CoshOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
CoshOpAdaptor::CoshOpAdaptor(CoshOp op) : CoshOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoshOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.cosh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value CoshOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value CoshOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CoshOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute CoshOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CoshOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CoshOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void CoshOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void CoshOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult CoshOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CoshOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoshOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr CoshOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags CoshOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void CoshOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void CoshOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void CoshOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult CoshOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoshOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CoshOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CoshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<CoshOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoshOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CoshOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CoshOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CountLeadingZerosOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CountLeadingZerosOpGenericAdaptorBase::CountLeadingZerosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.ctlz", odsAttrs.getContext());
}

CountLeadingZerosOpGenericAdaptorBase::CountLeadingZerosOpGenericAdaptorBase(CountLeadingZerosOp op) : CountLeadingZerosOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CountLeadingZerosOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CountLeadingZerosOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CountLeadingZerosOpAdaptor::CountLeadingZerosOpAdaptor(CountLeadingZerosOp op) : CountLeadingZerosOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CountLeadingZerosOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CountLeadingZerosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CountLeadingZerosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CountLeadingZerosOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CountLeadingZerosOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CountLeadingZerosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CountLeadingZerosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CountLeadingZerosOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CountLeadingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CountLeadingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CountLeadingZerosOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CountLeadingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CountLeadingZerosOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CountLeadingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CountLeadingZerosOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CountLeadingZerosOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CountLeadingZerosOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CountLeadingZerosOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CountLeadingZerosOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CountLeadingZerosOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void CountLeadingZerosOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CountLeadingZerosOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CountTrailingZerosOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CountTrailingZerosOpGenericAdaptorBase::CountTrailingZerosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.cttz", odsAttrs.getContext());
}

CountTrailingZerosOpGenericAdaptorBase::CountTrailingZerosOpGenericAdaptorBase(CountTrailingZerosOp op) : CountTrailingZerosOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CountTrailingZerosOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CountTrailingZerosOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CountTrailingZerosOpAdaptor::CountTrailingZerosOpAdaptor(CountTrailingZerosOp op) : CountTrailingZerosOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CountTrailingZerosOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CountTrailingZerosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CountTrailingZerosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CountTrailingZerosOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CountTrailingZerosOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CountTrailingZerosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CountTrailingZerosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CountTrailingZerosOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CountTrailingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CountTrailingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CountTrailingZerosOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CountTrailingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CountTrailingZerosOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CountTrailingZerosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CountTrailingZerosOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CountTrailingZerosOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CountTrailingZerosOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CountTrailingZerosOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CountTrailingZerosOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CountTrailingZerosOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void CountTrailingZerosOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CountTrailingZerosOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::CtPopOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CtPopOpGenericAdaptorBase::CtPopOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.ctpop", odsAttrs.getContext());
}

CtPopOpGenericAdaptorBase::CtPopOpGenericAdaptorBase(CtPopOp op) : CtPopOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CtPopOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CtPopOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CtPopOpAdaptor::CtPopOpAdaptor(CtPopOp op) : CtPopOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CtPopOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CtPopOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CtPopOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CtPopOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CtPopOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CtPopOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CtPopOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CtPopOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CtPopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CtPopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CtPopOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CtPopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CtPopOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CtPopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CtPopOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CtPopOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CtPopOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CtPopOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CtPopOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CtPopOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void CtPopOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::CtPopOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::ErfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ErfOpGenericAdaptorBase::ErfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.erf", odsAttrs.getContext());
}

ErfOpGenericAdaptorBase::ErfOpGenericAdaptorBase(ErfOp op) : ErfOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ErfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ErfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ErfOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ErfOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ErfOpAdaptor::ErfOpAdaptor(ErfOp op) : ErfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ErfOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.erf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value ErfOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value ErfOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ErfOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute ErfOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ErfOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ErfOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void ErfOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void ErfOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult ErfOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ErfOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr ErfOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ErfOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ErfOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ErfOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void ErfOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ErfOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ErfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ErfOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ErfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ErfOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ErfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::ErfOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::Exp2Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Exp2OpGenericAdaptorBase::Exp2OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.exp2", odsAttrs.getContext());
}

Exp2OpGenericAdaptorBase::Exp2OpGenericAdaptorBase(Exp2Op op) : Exp2OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Exp2OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Exp2OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr Exp2OpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags Exp2OpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
Exp2OpAdaptor::Exp2OpAdaptor(Exp2Op op) : Exp2OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Exp2OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.exp2' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Exp2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Exp2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Exp2Op::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Exp2Op::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Exp2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Exp2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Exp2Op::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Exp2Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute Exp2Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Exp2Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Exp2Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void Exp2Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void Exp2Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult Exp2Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Exp2Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Exp2Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr Exp2Op::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags Exp2Op::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void Exp2Op::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void Exp2Op::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Exp2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Exp2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Exp2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Exp2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Exp2Op::inferReturnTypes(odsBuilder.getContext(),
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

void Exp2Op::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult Exp2Op::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Exp2Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Exp2Op::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult Exp2Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<Exp2Op::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Exp2Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Exp2Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::Exp2Op)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::ExpM1Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpM1OpGenericAdaptorBase::ExpM1OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.expm1", odsAttrs.getContext());
}

ExpM1OpGenericAdaptorBase::ExpM1OpGenericAdaptorBase(ExpM1Op op) : ExpM1OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExpM1OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExpM1OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ExpM1OpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ExpM1OpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ExpM1OpAdaptor::ExpM1OpAdaptor(ExpM1Op op) : ExpM1OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExpM1OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.expm1' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExpM1Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExpM1Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpM1Op::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExpM1Op::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExpM1Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExpM1Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpM1Op::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ExpM1Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute ExpM1Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExpM1Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ExpM1Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void ExpM1Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void ExpM1Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult ExpM1Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExpM1Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpM1Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr ExpM1Op::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ExpM1Op::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ExpM1Op::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ExpM1Op::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExpM1Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExpM1Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpM1Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ExpM1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ExpM1Op::inferReturnTypes(odsBuilder.getContext(),
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

void ExpM1Op::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ExpM1Op::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExpM1Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ExpM1Op::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ExpM1Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ExpM1Op::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpM1Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExpM1Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::ExpM1Op)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::ExpOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpOpGenericAdaptorBase::ExpOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.exp", odsAttrs.getContext());
}

ExpOpGenericAdaptorBase::ExpOpGenericAdaptorBase(ExpOp op) : ExpOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExpOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExpOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ExpOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ExpOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ExpOpAdaptor::ExpOpAdaptor(ExpOp op) : ExpOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExpOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.exp' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value ExpOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExpOp::getOperandMutable() {
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

::mlir::Value ExpOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ExpOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute ExpOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExpOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ExpOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void ExpOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void ExpOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult ExpOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExpOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr ExpOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ExpOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ExpOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ExpOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExpOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ExpOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ExpOp::inferReturnTypes(odsBuilder.getContext(),
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

void ExpOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ExpOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExpOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ExpOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ExpOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ExpOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExpOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::ExpOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::FPowIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FPowIOpGenericAdaptorBase::FPowIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.fpowi", odsAttrs.getContext());
}

FPowIOpGenericAdaptorBase::FPowIOpGenericAdaptorBase(FPowIOp op) : FPowIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FPowIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FPowIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr FPowIOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags FPowIOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
FPowIOpAdaptor::FPowIOpAdaptor(FPowIOp op) : FPowIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FPowIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.fpowi' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FPowIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FPowIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FPowIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value FPowIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &FPowIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FPowIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FPowIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FPowIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FPowIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult FPowIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute FPowIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FPowIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FPowIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void FPowIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void FPowIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult FPowIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FPowIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FPowIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr FPowIOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags FPowIOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void FPowIOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void FPowIOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FPowIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FPowIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPowIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(FPowIOp::inferReturnTypes(odsBuilder.getContext(),
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

void FPowIOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult FPowIOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult FPowIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult FPowIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult FPowIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<FPowIOp::Properties>().fastmath = fastmathAttr;
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
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  result.addTypes(lhsTypes[0]);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FPowIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void FPowIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::FPowIOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::FloorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FloorOpGenericAdaptorBase::FloorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.floor", odsAttrs.getContext());
}

FloorOpGenericAdaptorBase::FloorOpGenericAdaptorBase(FloorOp op) : FloorOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FloorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FloorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr FloorOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags FloorOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
FloorOpAdaptor::FloorOpAdaptor(FloorOp op) : FloorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FloorOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.floor' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value FloorOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FloorOp::getOperandMutable() {
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

::mlir::Value FloorOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult FloorOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute FloorOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FloorOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FloorOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void FloorOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void FloorOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult FloorOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FloorOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FloorOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr FloorOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags FloorOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void FloorOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void FloorOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FloorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FloorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(FloorOp::inferReturnTypes(odsBuilder.getContext(),
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

void FloorOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult FloorOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FloorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult FloorOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult FloorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<FloorOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FloorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void FloorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::FloorOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::FmaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FmaOpGenericAdaptorBase::FmaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.fma", odsAttrs.getContext());
}

FmaOpGenericAdaptorBase::FmaOpGenericAdaptorBase(FmaOp op) : FmaOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FmaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FmaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr FmaOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags FmaOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
FmaOpAdaptor::FmaOpAdaptor(FmaOp op) : FmaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FmaOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.fma' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FmaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FmaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FmaOp::getA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value FmaOp::getB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value FmaOp::getC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &FmaOp::getAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FmaOp::getBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FmaOp::getCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FmaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FmaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FmaOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult FmaOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute FmaOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FmaOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FmaOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void FmaOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void FmaOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult FmaOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FmaOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FmaOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr FmaOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags FmaOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void FmaOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void FmaOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FmaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FmaOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FmaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(FmaOp::inferReturnTypes(odsBuilder.getContext(),
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

void FmaOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult FmaOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FmaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult FmaOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult FmaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand aRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> aOperands(aRawOperands);  ::llvm::SMLoc aOperandsLoc;
  (void)aOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bOperands(bRawOperands);  ::llvm::SMLoc bOperandsLoc;
  (void)bOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand cRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> cOperands(cRawOperands);  ::llvm::SMLoc cOperandsLoc;
  (void)cOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

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
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<FmaOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(aOperands, resultTypes[0], aOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bOperands, resultTypes[0], bOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(cOperands, resultTypes[0], cOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FmaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getC();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void FmaOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::FmaOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::IPowIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IPowIOpGenericAdaptorBase::IPowIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.ipowi", odsAttrs.getContext());
}

IPowIOpGenericAdaptorBase::IPowIOpGenericAdaptorBase(IPowIOp op) : IPowIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IPowIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IPowIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IPowIOpAdaptor::IPowIOpAdaptor(IPowIOp op) : IPowIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IPowIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IPowIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IPowIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IPowIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value IPowIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &IPowIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &IPowIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IPowIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IPowIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IPowIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void IPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void IPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(IPowIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IPowIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IPowIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(IPowIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult IPowIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IPowIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult IPowIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult IPowIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
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
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, resultTypes[0], lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, resultTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IPowIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
}

void IPowIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::IPowIOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::Log10Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Log10OpGenericAdaptorBase::Log10OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.log10", odsAttrs.getContext());
}

Log10OpGenericAdaptorBase::Log10OpGenericAdaptorBase(Log10Op op) : Log10OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Log10OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Log10OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr Log10OpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags Log10OpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
Log10OpAdaptor::Log10OpAdaptor(Log10Op op) : Log10OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Log10OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.log10' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Log10Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Log10Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log10Op::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Log10Op::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Log10Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Log10Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log10Op::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Log10Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute Log10Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Log10Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Log10Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void Log10Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void Log10Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult Log10Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Log10Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log10Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr Log10Op::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags Log10Op::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void Log10Op::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void Log10Op::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Log10Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Log10Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log10Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Log10Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Log10Op::inferReturnTypes(odsBuilder.getContext(),
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

void Log10Op::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult Log10Op::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Log10Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Log10Op::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult Log10Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<Log10Op::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log10Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Log10Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::Log10Op)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::Log1pOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Log1pOpGenericAdaptorBase::Log1pOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.log1p", odsAttrs.getContext());
}

Log1pOpGenericAdaptorBase::Log1pOpGenericAdaptorBase(Log1pOp op) : Log1pOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Log1pOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Log1pOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr Log1pOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags Log1pOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
Log1pOpAdaptor::Log1pOpAdaptor(Log1pOp op) : Log1pOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Log1pOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.log1p' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Log1pOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Log1pOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log1pOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Log1pOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Log1pOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Log1pOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log1pOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Log1pOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute Log1pOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Log1pOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Log1pOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void Log1pOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void Log1pOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult Log1pOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Log1pOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log1pOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr Log1pOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags Log1pOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void Log1pOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void Log1pOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Log1pOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Log1pOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log1pOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Log1pOp::inferReturnTypes(odsBuilder.getContext(),
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

void Log1pOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult Log1pOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Log1pOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Log1pOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult Log1pOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<Log1pOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log1pOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Log1pOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::Log1pOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::Log2Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Log2OpGenericAdaptorBase::Log2OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.log2", odsAttrs.getContext());
}

Log2OpGenericAdaptorBase::Log2OpGenericAdaptorBase(Log2Op op) : Log2OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Log2OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Log2OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr Log2OpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags Log2OpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
Log2OpAdaptor::Log2OpAdaptor(Log2Op op) : Log2OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Log2OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.log2' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Log2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Log2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log2Op::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Log2Op::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Log2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Log2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log2Op::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult Log2Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute Log2Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Log2Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Log2Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void Log2Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void Log2Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult Log2Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Log2Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log2Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr Log2Op::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags Log2Op::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void Log2Op::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void Log2Op::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Log2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Log2Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Log2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Log2Op::inferReturnTypes(odsBuilder.getContext(),
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

void Log2Op::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult Log2Op::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Log2Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Log2Op::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult Log2Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<Log2Op::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log2Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Log2Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::Log2Op)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::LogOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogOpGenericAdaptorBase::LogOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.log", odsAttrs.getContext());
}

LogOpGenericAdaptorBase::LogOpGenericAdaptorBase(LogOp op) : LogOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LogOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LogOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr LogOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags LogOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
LogOpAdaptor::LogOpAdaptor(LogOp op) : LogOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LogOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.log' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value LogOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LogOp::getOperandMutable() {
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

::mlir::Value LogOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult LogOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute LogOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LogOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LogOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void LogOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void LogOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult LogOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LogOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr LogOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags LogOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void LogOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void LogOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LogOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LogOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LogOp::inferReturnTypes(odsBuilder.getContext(),
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

void LogOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult LogOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LogOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult LogOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult LogOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<LogOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LogOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::LogOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::PowFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PowFOpGenericAdaptorBase::PowFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.powf", odsAttrs.getContext());
}

PowFOpGenericAdaptorBase::PowFOpGenericAdaptorBase(PowFOp op) : PowFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PowFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PowFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr PowFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags PowFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
PowFOpAdaptor::PowFOpAdaptor(PowFOp op) : PowFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PowFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.powf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PowFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PowFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PowFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value PowFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &PowFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PowFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> PowFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PowFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PowFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult PowFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute PowFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PowFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PowFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void PowFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void PowFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult PowFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PowFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PowFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr PowFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags PowFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void PowFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void PowFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PowFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PowFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PowFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(PowFOp::inferReturnTypes(odsBuilder.getContext(),
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

void PowFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult PowFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PowFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult PowFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult PowFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<PowFOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(lhsOperands, resultTypes[0], lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, resultTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PowFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void PowFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::PowFOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::RoundEvenOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RoundEvenOpGenericAdaptorBase::RoundEvenOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.roundeven", odsAttrs.getContext());
}

RoundEvenOpGenericAdaptorBase::RoundEvenOpGenericAdaptorBase(RoundEvenOp op) : RoundEvenOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RoundEvenOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RoundEvenOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr RoundEvenOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags RoundEvenOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
RoundEvenOpAdaptor::RoundEvenOpAdaptor(RoundEvenOp op) : RoundEvenOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RoundEvenOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.roundeven' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RoundEvenOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RoundEvenOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundEvenOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RoundEvenOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RoundEvenOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RoundEvenOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundEvenOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RoundEvenOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute RoundEvenOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RoundEvenOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RoundEvenOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void RoundEvenOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void RoundEvenOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult RoundEvenOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RoundEvenOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RoundEvenOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr RoundEvenOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags RoundEvenOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void RoundEvenOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void RoundEvenOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RoundEvenOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RoundEvenOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundEvenOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RoundEvenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RoundEvenOp::inferReturnTypes(odsBuilder.getContext(),
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

void RoundEvenOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult RoundEvenOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RoundEvenOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RoundEvenOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RoundEvenOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<RoundEvenOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RoundEvenOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RoundEvenOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::RoundEvenOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::RoundOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RoundOpGenericAdaptorBase::RoundOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.round", odsAttrs.getContext());
}

RoundOpGenericAdaptorBase::RoundOpGenericAdaptorBase(RoundOp op) : RoundOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RoundOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RoundOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr RoundOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags RoundOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
RoundOpAdaptor::RoundOpAdaptor(RoundOp op) : RoundOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RoundOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.round' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RoundOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RoundOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RoundOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RoundOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RoundOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RoundOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute RoundOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RoundOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RoundOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void RoundOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void RoundOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult RoundOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RoundOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RoundOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr RoundOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags RoundOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void RoundOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void RoundOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RoundOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RoundOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RoundOp::inferReturnTypes(odsBuilder.getContext(),
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

void RoundOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult RoundOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RoundOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RoundOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RoundOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<RoundOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RoundOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RoundOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::RoundOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::RsqrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RsqrtOpGenericAdaptorBase::RsqrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.rsqrt", odsAttrs.getContext());
}

RsqrtOpGenericAdaptorBase::RsqrtOpGenericAdaptorBase(RsqrtOp op) : RsqrtOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RsqrtOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RsqrtOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr RsqrtOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags RsqrtOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
RsqrtOpAdaptor::RsqrtOpAdaptor(RsqrtOp op) : RsqrtOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RsqrtOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.rsqrt' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value RsqrtOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RsqrtOp::getOperandMutable() {
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

::mlir::Value RsqrtOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RsqrtOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute RsqrtOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RsqrtOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RsqrtOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void RsqrtOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void RsqrtOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult RsqrtOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RsqrtOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RsqrtOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr RsqrtOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags RsqrtOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void RsqrtOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void RsqrtOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void RsqrtOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult RsqrtOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<RsqrtOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RsqrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RsqrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::RsqrtOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::SinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SinOpGenericAdaptorBase::SinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.sin", odsAttrs.getContext());
}

SinOpGenericAdaptorBase::SinOpGenericAdaptorBase(SinOp op) : SinOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SinOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SinOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SinOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags SinOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SinOpAdaptor::SinOpAdaptor(SinOp op) : SinOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SinOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.sin' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SinOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SinOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute SinOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SinOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SinOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void SinOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void SinOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult SinOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SinOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr SinOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags SinOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SinOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SinOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SinOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SinOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SinOp::inferReturnTypes(odsBuilder.getContext(),
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

void SinOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult SinOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SinOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SinOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<SinOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SinOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::SinOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::SinhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SinhOpGenericAdaptorBase::SinhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.sinh", odsAttrs.getContext());
}

SinhOpGenericAdaptorBase::SinhOpGenericAdaptorBase(SinhOp op) : SinhOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SinhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SinhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SinhOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags SinhOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SinhOpAdaptor::SinhOpAdaptor(SinhOp op) : SinhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SinhOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.sinh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value SinhOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value SinhOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SinhOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute SinhOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SinhOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SinhOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void SinhOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void SinhOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult SinhOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SinhOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinhOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr SinhOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags SinhOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SinhOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SinhOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void SinhOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult SinhOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SinhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SinhOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SinhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<SinhOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SinhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::SinhOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::SqrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SqrtOpGenericAdaptorBase::SqrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.sqrt", odsAttrs.getContext());
}

SqrtOpGenericAdaptorBase::SqrtOpGenericAdaptorBase(SqrtOp op) : SqrtOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SqrtOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SqrtOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SqrtOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags SqrtOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SqrtOpAdaptor::SqrtOpAdaptor(SqrtOp op) : SqrtOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SqrtOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.sqrt' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SqrtOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SqrtOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SqrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SqrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SqrtOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SqrtOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute SqrtOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SqrtOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SqrtOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void SqrtOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void SqrtOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult SqrtOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SqrtOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SqrtOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr SqrtOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags SqrtOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SqrtOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SqrtOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SqrtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SqrtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SqrtOp::inferReturnTypes(odsBuilder.getContext(),
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

void SqrtOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult SqrtOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SqrtOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SqrtOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SqrtOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<SqrtOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SqrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SqrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::SqrtOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::TanOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanOpGenericAdaptorBase::TanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.tan", odsAttrs.getContext());
}

TanOpGenericAdaptorBase::TanOpGenericAdaptorBase(TanOp op) : TanOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TanOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TanOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr TanOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags TanOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
TanOpAdaptor::TanOpAdaptor(TanOp op) : TanOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TanOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.tan' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value TanOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
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

::mlir::Value TanOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult TanOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute TanOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TanOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TanOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void TanOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void TanOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult TanOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TanOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr TanOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags TanOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void TanOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void TanOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void TanOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult TanOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TanOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult TanOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult TanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<TanOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TanOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::TanOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::TanhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanhOpGenericAdaptorBase::TanhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.tanh", odsAttrs.getContext());
}

TanhOpGenericAdaptorBase::TanhOpGenericAdaptorBase(TanhOp op) : TanhOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TanhOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TanhOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr TanhOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags TanhOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
TanhOpAdaptor::TanhOpAdaptor(TanhOp op) : TanhOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TanhOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.tanh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::Value TanhOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TanhOp::getOperandMutable() {
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

::mlir::Value TanhOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult TanhOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute TanhOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TanhOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TanhOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void TanhOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void TanhOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult TanhOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TanhOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanhOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr TanhOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags TanhOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void TanhOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void TanhOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TanhOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TanhOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(TanhOp::inferReturnTypes(odsBuilder.getContext(),
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

void TanhOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult TanhOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TanhOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult TanhOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult TanhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<TanhOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TanhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::TanhOp)

namespace mlir {
namespace math {

//===----------------------------------------------------------------------===//
// ::mlir::math::TruncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TruncOpGenericAdaptorBase::TruncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("math.trunc", odsAttrs.getContext());
}

TruncOpGenericAdaptorBase::TruncOpGenericAdaptorBase(TruncOp op) : TruncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TruncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TruncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr TruncOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags TruncOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
TruncOpAdaptor::TruncOpAdaptor(TruncOp op) : TruncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TruncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'math.trunc' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TruncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TruncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TruncOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TruncOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TruncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TruncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TruncOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult TruncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute TruncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TruncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TruncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void TruncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void TruncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult TruncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TruncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TruncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr TruncOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags TruncOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void TruncOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void TruncOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TruncOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(TruncOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TruncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TruncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(TruncOp::inferReturnTypes(odsBuilder.getContext(),
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

void TruncOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult TruncOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MathOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MathOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TruncOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult TruncOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult TruncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<TruncOp::Properties>().fastmath = fastmathAttr;
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
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, resultTypes[0], operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TruncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  if (getFastmathAttr() && getFastmathAttr() != ::mlir::arith::FastMathFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::FastMathFlags::none)) {
    _odsPrinter << ' ' << "fastmath";
  _odsPrinter.printStrippedAttrOrType(getFastmathAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TruncOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace math
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::math::TruncOp)


#endif  // GET_OP_CLASSES

