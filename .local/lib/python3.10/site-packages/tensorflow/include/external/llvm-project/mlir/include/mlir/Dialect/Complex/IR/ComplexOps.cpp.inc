/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ComplexOps.td                                                        *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::complex::AbsOp,
::mlir::complex::AddOp,
::mlir::complex::AngleOp,
::mlir::complex::Atan2Op,
::mlir::complex::BitcastOp,
::mlir::complex::ConjOp,
::mlir::complex::ConstantOp,
::mlir::complex::CosOp,
::mlir::complex::CreateOp,
::mlir::complex::DivOp,
::mlir::complex::EqualOp,
::mlir::complex::ExpOp,
::mlir::complex::Expm1Op,
::mlir::complex::ImOp,
::mlir::complex::Log1pOp,
::mlir::complex::LogOp,
::mlir::complex::MulOp,
::mlir::complex::NegOp,
::mlir::complex::NotEqualOp,
::mlir::complex::PowOp,
::mlir::complex::ReOp,
::mlir::complex::RsqrtOp,
::mlir::complex::SignOp,
::mlir::complex::SinOp,
::mlir::complex::SqrtOp,
::mlir::complex::SubOp,
::mlir::complex::TanOp,
::mlir::complex::TanhOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace complex {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ComplexOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::ComplexType>(type))) && ((::llvm::isa<::mlir::FloatType>(::llvm::cast<::mlir::ComplexType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be complex type with floating-point elements, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ComplexOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::FloatType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be floating-point, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ComplexOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ComplexOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::ComplexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be complex-type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ComplexOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ComplexOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Floating point fast math flags";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ComplexOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ComplexOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ComplexOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ComplexOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ComplexOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace complex
} // namespace mlir
namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::AbsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AbsOpGenericAdaptorBase::AbsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.abs", odsAttrs.getContext());
}

AbsOpGenericAdaptorBase::AbsOpGenericAdaptorBase(AbsOp op) : AbsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AbsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AbsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AbsOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AbsOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AbsOpAdaptor::AbsOpAdaptor(AbsOp op) : AbsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AbsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.abs' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> AbsOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AbsOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::FloatType> AbsOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult AbsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute AbsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code AbsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AbsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AbsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AbsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AbsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AbsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AbsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AbsOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AbsOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AbsOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AbsOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AbsOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AbsOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AbsOp::inferReturnTypes(odsBuilder.getContext(),
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

void AbsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AbsOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ComplexType>((*this->getODSOperands(0).begin()).getType()).getElementType(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that complex element type matches result type");
  return ::mlir::success();
}

::mlir::LogicalResult AbsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AbsOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::llvm::cast<ComplexType>(operands[0].getType()).getElementType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AbsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AbsOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  for (::mlir::Type type : complexTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::ComplexType>(type))) && ((::llvm::isa<::mlir::FloatType>(::llvm::cast<::mlir::ComplexType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(::llvm::cast<ComplexType>(complexTypes[0]).getElementType());
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AbsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AbsOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::AbsOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::AddOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddOpGenericAdaptorBase::AddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.add", odsAttrs.getContext());
}

AddOpGenericAdaptorBase::AddOpGenericAdaptorBase(AddOp op) : AddOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AddOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AddOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AddOpAdaptor::AddOpAdaptor(AddOp op) : AddOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.add' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> AddOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> AddOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddOp::getRhsMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> AddOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult AddOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute AddOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code AddOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AddOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AddOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AddOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AddOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AddOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AddOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AddOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AddOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AddOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AddOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AddOp::inferReturnTypes(odsBuilder.getContext(),
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

void AddOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AddOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AddOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AddOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<AddOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
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

void AddOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AddOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::AddOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::AngleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AngleOpGenericAdaptorBase::AngleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.angle", odsAttrs.getContext());
}

AngleOpGenericAdaptorBase::AngleOpGenericAdaptorBase(AngleOp op) : AngleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AngleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AngleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AngleOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AngleOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AngleOpAdaptor::AngleOpAdaptor(AngleOp op) : AngleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AngleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.angle' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AngleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AngleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> AngleOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AngleOp::getComplexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AngleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AngleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> AngleOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult AngleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute AngleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code AngleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AngleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AngleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AngleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AngleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AngleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AngleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AngleOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AngleOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AngleOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AngleOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AngleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AngleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AngleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AngleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AngleOp::inferReturnTypes(odsBuilder.getContext(),
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

void AngleOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AngleOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ComplexType>((*this->getODSOperands(0).begin()).getType()).getElementType(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that complex element type matches result type");
  return ::mlir::success();
}

::mlir::LogicalResult AngleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AngleOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::llvm::cast<ComplexType>(operands[0].getType()).getElementType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AngleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<AngleOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  for (::mlir::Type type : complexTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::ComplexType>(type))) && ((::llvm::isa<::mlir::FloatType>(::llvm::cast<::mlir::ComplexType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(::llvm::cast<ComplexType>(complexTypes[0]).getElementType());
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AngleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AngleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::AngleOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::Atan2Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Atan2OpGenericAdaptorBase::Atan2OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.atan2", odsAttrs.getContext());
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
    return emitError(loc, "'complex.atan2' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> Atan2Op::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> Atan2Op::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
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

::mlir::TypedValue<::mlir::ComplexType> Atan2Op::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
    ::mlir::ComplexType type;
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
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Atan2Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::Atan2Op)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::BitcastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitcastOpGenericAdaptorBase::BitcastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.bitcast", odsAttrs.getContext());
}

BitcastOpGenericAdaptorBase::BitcastOpGenericAdaptorBase(BitcastOp op) : BitcastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BitcastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BitcastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BitcastOpAdaptor::BitcastOpAdaptor(BitcastOp op) : BitcastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BitcastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BitcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BitcastOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BitcastOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> BitcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BitcastOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BitcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void BitcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitcastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitcastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitcastOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult BitcastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
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
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitcastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
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

void BitcastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::BitcastOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::ConjOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConjOpGenericAdaptorBase::ConjOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.conj", odsAttrs.getContext());
}

ConjOpGenericAdaptorBase::ConjOpGenericAdaptorBase(ConjOp op) : ConjOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConjOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConjOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ConjOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ConjOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ConjOpAdaptor::ConjOpAdaptor(ConjOp op) : ConjOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConjOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.conj' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> ConjOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConjOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> ConjOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ConjOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ConjOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ConjOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ConjOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void ConjOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void ConjOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult ConjOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ConjOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConjOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr ConjOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ConjOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ConjOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ConjOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

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

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

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

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void ConjOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ConjOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConjOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ConjOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ConjOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ConjOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConjOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ConjOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::ConjOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::ConstantOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstantOpGenericAdaptorBase::ConstantOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.constant", odsAttrs.getContext());
}

ConstantOpGenericAdaptorBase::ConstantOpGenericAdaptorBase(ConstantOp op) : ConstantOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstantOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstantOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ConstantOpGenericAdaptorBase::getValueAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().value);
  return attr;
}

::mlir::ArrayAttr ConstantOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ConstantOpAdaptor::ConstantOpAdaptor(ConstantOp op) : ConstantOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstantOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitError(loc, "'complex.constant' op ""requires attribute 'value'");

  if (tblgen_value && !((::llvm::isa<::mlir::ArrayAttr>(tblgen_value))))
    return emitError(loc, "'complex.constant' op ""attribute 'value' failed to satisfy constraint: array attribute");
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

::mlir::TypedValue<::mlir::ComplexType> ConstantOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ConstantOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ConstantOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ConstantOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.value.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ConstantOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "value")
      return prop.value;
  return std::nullopt;
}

void ConstantOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "value") {
       prop.value = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.value)>>(value);
       return;
    }
}

void ConstantOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.value) attrs.append("value", prop.value);
}

::mlir::LogicalResult ConstantOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getValueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps1(attr, "value", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ConstantOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.value)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConstantOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.value);
}

::mlir::ArrayAttr ConstantOp::getValueAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().value);
}

::mlir::ArrayAttr ConstantOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ConstantOp::setValueAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type complex, ::mlir::ArrayAttr value) {
  odsState.getOrAddProperties<Properties>().value = value;
  odsState.addTypes(complex);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ArrayAttr value) {
  odsState.getOrAddProperties<Properties>().value = value;
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

::mlir::LogicalResult ConstantOp::verifyInvariantsImpl() {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitOpError("requires attribute 'value'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps1(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConstantOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ConstantOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ArrayAttr valueAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  if (parser.parseCustomAttributeWithFallback(valueAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (valueAttr) result.getOrAddProperties<ConstantOp::Properties>().value = valueAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes);
  return ::mlir::success();
}

void ConstantOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getValueAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("value");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ConstantOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::ConstantOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::CosOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CosOpGenericAdaptorBase::CosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.cos", odsAttrs.getContext());
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
    return emitError(loc, "'complex.cos' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> CosOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CosOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> CosOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CosOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CosOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::CosOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::CreateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateOpGenericAdaptorBase::CreateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.create", odsAttrs.getContext());
}

CreateOpGenericAdaptorBase::CreateOpGenericAdaptorBase(CreateOp op) : CreateOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CreateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateOpAdaptor::CreateOpAdaptor(CreateOp op) : CreateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CreateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CreateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> CreateOp::getReal() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::FloatType> CreateOp::getImaginary() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CreateOp::getRealMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateOp::getImaginaryMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CreateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> CreateOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

void CreateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type complex, ::mlir::Value real, ::mlir::Value imaginary) {
  odsState.addOperands(real);
  odsState.addOperands(imaginary);
  odsState.addTypes(complex);
}

void CreateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value real, ::mlir::Value imaginary) {
  odsState.addOperands(real);
  odsState.addOperands(imaginary);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {real, imaginary} have same type");
  if (!((std::equal_to<>()(::llvm::cast<ComplexType>((*this->getODSResults(0).begin()).getType()).getElementType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that complex element type matches real operand type");
  if (!((std::equal_to<>()(::llvm::cast<ComplexType>((*this->getODSResults(0).begin()).getType()).getElementType(), (*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that complex element type matches imaginary operand type");
  return ::mlir::success();
}

::mlir::LogicalResult CreateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand realRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> realOperands(realRawOperands);  ::llvm::SMLoc realOperandsLoc;
  (void)realOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand imaginaryRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> imaginaryOperands(imaginaryRawOperands);  ::llvm::SMLoc imaginaryOperandsLoc;
  (void)imaginaryOperandsLoc;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  realOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(realRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  imaginaryOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(imaginaryRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  for (::mlir::Type type : complexTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::ComplexType>(type))) && ((::llvm::isa<::mlir::FloatType>(::llvm::cast<::mlir::ComplexType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(complexTypes);
  if (parser.resolveOperands(realOperands, ::llvm::cast<ComplexType>(complexTypes[0]).getElementType(), realOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(imaginaryOperands, ::llvm::cast<ComplexType>(complexTypes[0]).getElementType(), imaginaryOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getReal();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getImaginary();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CreateOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::CreateOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::DivOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DivOpGenericAdaptorBase::DivOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.div", odsAttrs.getContext());
}

DivOpGenericAdaptorBase::DivOpGenericAdaptorBase(DivOp op) : DivOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DivOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DivOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr DivOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags DivOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
DivOpAdaptor::DivOpAdaptor(DivOp op) : DivOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DivOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.div' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> DivOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> DivOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DivOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DivOp::getRhsMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> DivOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult DivOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute DivOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code DivOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> DivOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void DivOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void DivOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult DivOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DivOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void DivOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr DivOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags DivOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void DivOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void DivOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DivOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DivOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DivOp::inferReturnTypes(odsBuilder.getContext(),
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

void DivOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult DivOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DivOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult DivOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult DivOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<DivOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
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

void DivOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void DivOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::DivOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::EqualOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EqualOpGenericAdaptorBase::EqualOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.eq", odsAttrs.getContext());
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

::mlir::TypedValue<::mlir::ComplexType> EqualOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> EqualOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &EqualOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &EqualOp::getRhsMutable() {
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

::mlir::TypedValue<::mlir::IntegerType> EqualOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

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

void EqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult EqualOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult EqualOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIntegerType(1);
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult EqualOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
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
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void EqualOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void EqualOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::EqualOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::ExpOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExpOpGenericAdaptorBase::ExpOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.exp", odsAttrs.getContext());
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
    return emitError(loc, "'complex.exp' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> ExpOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExpOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> ExpOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExpOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExpOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::ExpOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::Expm1Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
Expm1OpGenericAdaptorBase::Expm1OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.expm1", odsAttrs.getContext());
}

Expm1OpGenericAdaptorBase::Expm1OpGenericAdaptorBase(Expm1Op op) : Expm1OpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Expm1OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr Expm1OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr Expm1OpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags Expm1OpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
Expm1OpAdaptor::Expm1OpAdaptor(Expm1Op op) : Expm1OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Expm1OpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.expm1' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> Expm1Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Expm1Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> Expm1Op::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Expm1Op::getComplexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Expm1Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Expm1Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> Expm1Op::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult Expm1Op::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute Expm1Op::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code Expm1Op::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Expm1Op::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void Expm1Op::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void Expm1Op::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult Expm1Op::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Expm1Op::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Expm1Op::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr Expm1Op::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags Expm1Op::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void Expm1Op::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void Expm1Op::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Expm1Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(Expm1Op::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Expm1Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(Expm1Op::inferReturnTypes(odsBuilder.getContext(),
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

void Expm1Op::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult Expm1Op::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Expm1Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult Expm1Op::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult Expm1Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<Expm1Op::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Expm1Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Expm1Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::Expm1Op)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::ImOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ImOpGenericAdaptorBase::ImOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.im", odsAttrs.getContext());
}

ImOpGenericAdaptorBase::ImOpGenericAdaptorBase(ImOp op) : ImOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ImOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ImOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ImOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ImOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ImOpAdaptor::ImOpAdaptor(ImOp op) : ImOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ImOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.im' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ImOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ImOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> ImOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ImOp::getComplexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ImOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ImOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> ImOp::getImaginary() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ImOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ImOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ImOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ImOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void ImOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void ImOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult ImOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ImOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ImOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr ImOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ImOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ImOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ImOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type imaginary, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(imaginary);
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ImOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type imaginary, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(imaginary);
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ImOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ImOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ImOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ImOp::inferReturnTypes(odsBuilder.getContext(),
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

void ImOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ImOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ComplexType>((*this->getODSOperands(0).begin()).getType()).getElementType(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that complex element type matches result type");
  return ::mlir::success();
}

::mlir::LogicalResult ImOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ImOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::llvm::cast<ComplexType>(operands[0].getType()).getElementType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ImOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ImOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  for (::mlir::Type type : complexTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::ComplexType>(type))) && ((::llvm::isa<::mlir::FloatType>(::llvm::cast<::mlir::ComplexType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(::llvm::cast<ComplexType>(complexTypes[0]).getElementType());
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ImOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ImOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::ImOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::Log1pOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Log1pOpGenericAdaptorBase::Log1pOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.log1p", odsAttrs.getContext());
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
    return emitError(loc, "'complex.log1p' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> Log1pOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &Log1pOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> Log1pOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Log1pOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void Log1pOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::Log1pOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::LogOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LogOpGenericAdaptorBase::LogOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.log", odsAttrs.getContext());
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
    return emitError(loc, "'complex.log' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> LogOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &LogOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> LogOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LogOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LogOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::LogOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::MulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulOpGenericAdaptorBase::MulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.mul", odsAttrs.getContext());
}

MulOpGenericAdaptorBase::MulOpGenericAdaptorBase(MulOp op) : MulOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MulOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags MulOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MulOpAdaptor::MulOpAdaptor(MulOp op) : MulOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.mul' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> MulOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> MulOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulOp::getRhsMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> MulOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MulOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MulOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MulOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MulOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void MulOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void MulOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult MulOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MulOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr MulOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags MulOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MulOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MulOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MulOp::inferReturnTypes(odsBuilder.getContext(),
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

void MulOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult MulOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MulOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MulOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<MulOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
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

void MulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MulOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::MulOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::NegOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NegOpGenericAdaptorBase::NegOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.neg", odsAttrs.getContext());
}

NegOpGenericAdaptorBase::NegOpGenericAdaptorBase(NegOp op) : NegOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NegOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NegOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr NegOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags NegOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
NegOpAdaptor::NegOpAdaptor(NegOp op) : NegOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NegOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.neg' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NegOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NegOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> NegOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NegOp::getComplexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NegOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NegOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> NegOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult NegOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute NegOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code NegOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> NegOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void NegOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void NegOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult NegOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult NegOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void NegOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr NegOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags NegOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void NegOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void NegOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NegOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NegOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NegOp::inferReturnTypes(odsBuilder.getContext(),
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

void NegOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult NegOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NegOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult NegOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult NegOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<NegOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NegOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void NegOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::NegOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::NotEqualOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NotEqualOpGenericAdaptorBase::NotEqualOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.neq", odsAttrs.getContext());
}

NotEqualOpGenericAdaptorBase::NotEqualOpGenericAdaptorBase(NotEqualOp op) : NotEqualOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NotEqualOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NotEqualOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NotEqualOpAdaptor::NotEqualOpAdaptor(NotEqualOp op) : NotEqualOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NotEqualOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NotEqualOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NotEqualOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> NotEqualOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> NotEqualOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &NotEqualOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &NotEqualOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NotEqualOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NotEqualOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> NotEqualOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void NotEqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void NotEqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NotEqualOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NotEqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NotEqualOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NotEqualOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NotEqualOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult NotEqualOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult NotEqualOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult NotEqualOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIntegerType(1);
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult NotEqualOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
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
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NotEqualOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void NotEqualOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::NotEqualOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::PowOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PowOpGenericAdaptorBase::PowOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.pow", odsAttrs.getContext());
}

PowOpGenericAdaptorBase::PowOpGenericAdaptorBase(PowOp op) : PowOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PowOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PowOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr PowOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags PowOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
PowOpAdaptor::PowOpAdaptor(PowOp op) : PowOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PowOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.pow' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> PowOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> PowOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &PowOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &PowOp::getRhsMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> PowOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PowOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute PowOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code PowOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PowOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void PowOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void PowOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult PowOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PowOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PowOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr PowOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags PowOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void PowOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void PowOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PowOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(PowOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(PowOp::inferReturnTypes(odsBuilder.getContext(),
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

void PowOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult PowOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PowOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult PowOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult PowOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<PowOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
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

void PowOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void PowOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::PowOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::ReOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReOpGenericAdaptorBase::ReOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.re", odsAttrs.getContext());
}

ReOpGenericAdaptorBase::ReOpGenericAdaptorBase(ReOp op) : ReOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ReOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags ReOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ReOpAdaptor::ReOpAdaptor(ReOp op) : ReOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.re' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> ReOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReOp::getComplexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> ReOp::getReal() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ReOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ReOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void ReOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void ReOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult ReOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr ReOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags ReOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ReOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ReOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type real, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(real);
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type real, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(real);
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ReOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ReOp::inferReturnTypes(odsBuilder.getContext(),
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

void ReOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult ReOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ComplexType>((*this->getODSOperands(0).begin()).getType()).getElementType(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that complex element type matches result type");
  return ::mlir::success();
}

::mlir::LogicalResult ReOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ReOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::llvm::cast<ComplexType>(operands[0].getType()).getElementType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ReOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<ReOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  for (::mlir::Type type : complexTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::ComplexType>(type))) && ((::llvm::isa<::mlir::FloatType>(::llvm::cast<::mlir::ComplexType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(::llvm::cast<ComplexType>(complexTypes[0]).getElementType());
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ReOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::ReOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::RsqrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RsqrtOpGenericAdaptorBase::RsqrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.rsqrt", odsAttrs.getContext());
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
    return emitError(loc, "'complex.rsqrt' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> RsqrtOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RsqrtOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> RsqrtOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RsqrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RsqrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::RsqrtOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::SignOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SignOpGenericAdaptorBase::SignOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.sign", odsAttrs.getContext());
}

SignOpGenericAdaptorBase::SignOpGenericAdaptorBase(SignOp op) : SignOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SignOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SignOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SignOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags SignOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SignOpAdaptor::SignOpAdaptor(SignOp op) : SignOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SignOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.sign' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> SignOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SignOp::getComplexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SignOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SignOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ComplexType> SignOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult SignOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute SignOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code SignOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SignOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void SignOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void SignOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult SignOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SignOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SignOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr SignOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags SignOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SignOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SignOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SignOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SignOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SignOp::inferReturnTypes(odsBuilder.getContext(),
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

void SignOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult SignOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SignOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SignOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SignOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("fastmath"))) {

  if (parser.parseCustomAttributeWithFallback(fastmathAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (fastmathAttr) result.getOrAddProperties<SignOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SignOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SignOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::SignOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::SinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SinOpGenericAdaptorBase::SinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.sin", odsAttrs.getContext());
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
    return emitError(loc, "'complex.sin' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> SinOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SinOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> SinOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SinOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::SinOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::SqrtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SqrtOpGenericAdaptorBase::SqrtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.sqrt", odsAttrs.getContext());
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
    return emitError(loc, "'complex.sqrt' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> SqrtOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SqrtOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> SqrtOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SqrtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SqrtOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::SqrtOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::SubOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubOpGenericAdaptorBase::SubOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.sub", odsAttrs.getContext());
}

SubOpGenericAdaptorBase::SubOpGenericAdaptorBase(SubOp op) : SubOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SubOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags SubOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SubOpAdaptor::SubOpAdaptor(SubOp op) : SubOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'complex.sub' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> SubOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ComplexType> SubOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SubOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubOp::getRhsMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> SubOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute SubOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code SubOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void SubOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void SubOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult SubOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr SubOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags SubOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SubOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SubOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
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

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubOp::inferReturnTypes(odsBuilder.getContext(),
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

void SubOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult SubOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SubOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<SubOp::Properties>().fastmath = fastmathAttr;
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
    ::mlir::ComplexType type;
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

void SubOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SubOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::SubOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::TanOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanOpGenericAdaptorBase::TanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.tan", odsAttrs.getContext());
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
    return emitError(loc, "'complex.tan' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> TanOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TanOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> TanOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TanOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::TanOp)

namespace mlir {
namespace complex {

//===----------------------------------------------------------------------===//
// ::mlir::complex::TanhOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TanhOpGenericAdaptorBase::TanhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("complex.tanh", odsAttrs.getContext());
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
    return emitError(loc, "'complex.tanh' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
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

::mlir::TypedValue<::mlir::ComplexType> TanhOp::getComplex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TanhOp::getComplexMutable() {
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

::mlir::TypedValue<::mlir::ComplexType> TanhOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ComplexType>>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(attr, "fastmath", emitError)))
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

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
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

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(complex);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value complex, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(complex);
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

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ComplexOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ComplexOps0(*this, v.getType(), "result", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand complexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> complexOperands(complexRawOperands);  ::llvm::SMLoc complexOperandsLoc;
  (void)complexOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type complexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> complexTypes(complexRawTypes);

  complexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(complexRawOperands[0]))
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
    ::mlir::ComplexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    complexRawTypes[0] = type;
  }
  result.addTypes(complexTypes[0]);
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanhOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getComplex();
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
    auto type = getComplex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ComplexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TanhOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace complex
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::complex::TanhOp)


#endif  // GET_OP_CLASSES

