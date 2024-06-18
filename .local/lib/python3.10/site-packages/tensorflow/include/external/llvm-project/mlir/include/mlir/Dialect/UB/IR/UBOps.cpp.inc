/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: UBOps.td                                                             *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::ub::PoisonOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace ub {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_UBOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_UBOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ub::PoisonAttrInterface>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: PoisonAttrInterface instance";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_UBOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_UBOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace ub
} // namespace mlir
namespace mlir {
namespace ub {

//===----------------------------------------------------------------------===//
// ::mlir::ub::PoisonOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PoisonOpGenericAdaptorBase::PoisonOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ub.poison", odsAttrs.getContext());
}

PoisonOpGenericAdaptorBase::PoisonOpGenericAdaptorBase(PoisonOp op) : PoisonOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PoisonOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PoisonOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ub::PoisonAttrInterface PoisonOpGenericAdaptorBase::getValueAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ub::PoisonAttrInterface>(getProperties().value);
  return attr;
}

::mlir::ub::PoisonAttrInterface PoisonOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
PoisonOpAdaptor::PoisonOpAdaptor(PoisonOp op) : PoisonOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PoisonOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_value = getProperties().value; (void)tblgen_value;

  if (tblgen_value && !((::llvm::isa<::mlir::ub::PoisonAttrInterface>(tblgen_value))))
    return emitError(loc, "'ub.poison' op ""attribute 'value' failed to satisfy constraint: PoisonAttrInterface instance");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PoisonOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PoisonOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> PoisonOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PoisonOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoisonOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult PoisonOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.value;
       auto attr = dict.get("value");
    if (attr || /*isRequired=*/false) {
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

::mlir::Attribute PoisonOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code PoisonOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.value.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PoisonOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "value")
      return prop.value;
  return std::nullopt;
}

void PoisonOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "value") {
       prop.value = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.value)>>(value);
       return;
    }
}

void PoisonOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.value) attrs.append("value", prop.value);
}

::mlir::LogicalResult PoisonOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getValueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_UBOps0(attr, "value", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PoisonOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.value)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PoisonOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.value);
}

::mlir::ub::PoisonAttrInterface PoisonOp::getValueAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ub::PoisonAttrInterface>(getProperties().value);
}

::mlir::ub::PoisonAttrInterface PoisonOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void PoisonOp::setValueAttr(::mlir::ub::PoisonAttrInterface attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void PoisonOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ub::PoisonAttrInterface value) {
  if (value) {
    odsState.getOrAddProperties<Properties>().value = value;
  }
  odsState.addTypes(result);
}

void PoisonOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ub::PoisonAttrInterface value) {
  if (value) {
    odsState.getOrAddProperties<Properties>().value = value;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoisonOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PoisonOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.value)
    properties.value = ::mlir::ub::PoisonAttr::get(odsBuilder.getContext());
}

::mlir::LogicalResult PoisonOp::verifyInvariantsImpl() {
  auto tblgen_value = getProperties().value; (void)tblgen_value;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_UBOps0(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_UBOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PoisonOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PoisonOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ub::PoisonAttrInterface valueAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalLess())) {

  if (parser.parseCustomAttributeWithFallback(valueAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (valueAttr) result.getOrAddProperties<PoisonOp::Properties>().value = valueAttr;
  if (parser.parseGreater())
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
  return ::mlir::success();
}

void PoisonOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("value");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getValueAttr();
     if(attr && (attr == ::mlir::ub::PoisonAttr::get(odsBuilder.getContext())))
       elidedAttrs.push_back("value");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (getValueAttr() && getValueAttr() != ::mlir::ub::PoisonAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext())) {
    _odsPrinter << "<";
  _odsPrinter.printStrippedAttrOrType(getValueAttr());
    _odsPrinter << ">";
  }
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

void PoisonOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ub
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ub::PoisonOp)


#endif  // GET_OP_CLASSES

