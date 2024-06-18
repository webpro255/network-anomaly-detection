/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::linalg::IndexOp,
::mlir::linalg::SoftmaxOp,
::mlir::linalg::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace linalg {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::ShapedType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be shaped of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of ranked tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() >= 0))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace linalg
} // namespace mlir
namespace mlir {
namespace linalg {

//===----------------------------------------------------------------------===//
// ::mlir::linalg::IndexOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IndexOpGenericAdaptorBase::IndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("linalg.index", odsAttrs.getContext());
}

IndexOpGenericAdaptorBase::IndexOpGenericAdaptorBase(IndexOp op) : IndexOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IndexOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IndexOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr IndexOpGenericAdaptorBase::getDimAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dim);
  return attr;
}

uint64_t IndexOpGenericAdaptorBase::getDim() {
  auto attr = getDimAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
IndexOpAdaptor::IndexOpAdaptor(IndexOp op) : IndexOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IndexOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dim = getProperties().dim; (void)tblgen_dim;
  if (!tblgen_dim) return emitError(loc, "'linalg.index' op ""requires attribute 'dim'");

  if (tblgen_dim && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_dim))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dim).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dim).getInt() >= 0))))
    return emitError(loc, "'linalg.index' op ""attribute 'dim' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IndexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IndexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> IndexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IndexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> IndexOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult IndexOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute IndexOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code IndexOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dim.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> IndexOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dim")
      return prop.dim;
  return std::nullopt;
}

void IndexOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dim") {
       prop.dim = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dim)>>(value);
       return;
    }
}

void IndexOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dim) attrs.append("dim", prop.dim);
}

::mlir::LogicalResult IndexOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgOps0(attr, "dim", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult IndexOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dim)))
    return ::mlir::failure();
  return ::mlir::success();
}

void IndexOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dim);
}

::mlir::IntegerAttr IndexOp::getDimAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dim);
}

uint64_t IndexOp::getDim() {
  auto attr = getDimAttr();
  return attr.getValue().getZExtValue();
}

void IndexOp::setDimAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimAttrName(), attr);
}

void IndexOp::setDim(uint64_t attrValue) {
  (*this)->setAttr(getDimAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr dim) {
  odsState.getOrAddProperties<Properties>().dim = dim;
  odsState.addTypes(result);
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr dim) {
  odsState.getOrAddProperties<Properties>().dim = dim;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(IndexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr dim) {
  odsState.getOrAddProperties<Properties>().dim = dim;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, uint64_t dim) {
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dim);
  odsState.addTypes(result);
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t dim) {
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dim);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(IndexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t dim) {
  odsState.getOrAddProperties<Properties>().dim = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(IndexOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult IndexOp::verifyInvariantsImpl() {
  auto tblgen_dim = getProperties().dim; (void)tblgen_dim;
  if (!tblgen_dim) return emitOpError("requires attribute 'dim'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgOps0(*this, tblgen_dim, "dim")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IndexOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult IndexOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult IndexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr dimAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseCustomAttributeWithFallback(dimAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (dimAttr) result.getOrAddProperties<IndexOp::Properties>().dim = dimAttr;
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
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void IndexOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDimAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dim");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IndexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void IndexOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace linalg
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::linalg::IndexOp)

namespace mlir {
namespace linalg {

//===----------------------------------------------------------------------===//
// ::mlir::linalg::SoftmaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SoftmaxOpGenericAdaptorBase::SoftmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("linalg.softmax", odsAttrs.getContext());
}

SoftmaxOpGenericAdaptorBase::SoftmaxOpGenericAdaptorBase(SoftmaxOp op) : SoftmaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SoftmaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SoftmaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SoftmaxOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  return attr;
}

uint64_t SoftmaxOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
SoftmaxOpAdaptor::SoftmaxOpAdaptor(SoftmaxOp op) : SoftmaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SoftmaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'linalg.softmax' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'linalg.softmax' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SoftmaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SoftmaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ShapedType> SoftmaxOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ShapedType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::ShapedType> SoftmaxOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ShapedType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SoftmaxOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SoftmaxOp::getOutputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SoftmaxOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SoftmaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range SoftmaxOp::getResult() {
  return getODSResults(0);
}

::mlir::LogicalResult SoftmaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute SoftmaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code SoftmaxOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SoftmaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void SoftmaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void SoftmaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult SoftmaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgOps1(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SoftmaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SoftmaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::IntegerAttr SoftmaxOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
}

uint64_t SoftmaxOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

void SoftmaxOp::setDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void SoftmaxOp::setDimension(uint64_t attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SoftmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::Value input, ::mlir::Value output, ::mlir::IntegerAttr dimension) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(result);
}

void SoftmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::Value input, ::mlir::Value output, uint64_t dimension) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.addTypes(result);
}

void SoftmaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SoftmaxOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgOps1(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getOperation()).getNumOperands() > 1)) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(0).getType()))) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(1).getType()))) && ((::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(0)) == ::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(1))))))
    return emitOpError("failed to verify that input and output have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult SoftmaxOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SoftmaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr dimensionAttr;
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::OpAsmParser::UnresolvedOperand outputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> outputOperands(outputRawOperands);  ::llvm::SMLoc outputOperandsLoc;
  (void)outputOperandsLoc;
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseKeyword("dimension"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<SoftmaxOp::Properties>().dimension = dimensionAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseKeyword("ins"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::ShapedType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseKeyword("outs"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  outputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(outputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::ShapedType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outputRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalArrow())) {

  if (parser.parseTypeList(resultTypes))
    return ::mlir::failure();
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(outputOperands, outputTypes, outputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SoftmaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "dimension";
  _odsPrinter << "(";
  _odsPrinter.printAttributeWithoutType(getDimensionAttr());
  _odsPrinter << ")";
  _odsPrinter << ' ' << "ins";
  _odsPrinter << "(";
  _odsPrinter << getInput();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ShapedType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "outs";
  _odsPrinter << "(";
  _odsPrinter << getOutput();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::ShapedType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  if (!getResult().empty()) {
    _odsPrinter << ' ' << "->";
    _odsPrinter << ' ';
    _odsPrinter << getResult().getTypes();
  }
}

} // namespace linalg
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::linalg::SoftmaxOp)

namespace mlir {
namespace linalg {

//===----------------------------------------------------------------------===//
// ::mlir::linalg::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("linalg.yield", odsAttrs.getContext());
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

::mlir::Operation::operand_range YieldOp::getValues() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::getValuesMutable() {
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

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange values) {
  odsState.addOperands(values);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgOps3(*this, v.getType(), "operand", index++)))
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

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange YieldOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace linalg
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::linalg::YieldOp)


#endif  // GET_OP_CLASSES

