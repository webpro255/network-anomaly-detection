/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AsyncOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::async::AddToGroupOp,
::mlir::async::AwaitAllOp,
::mlir::async::AwaitOp,
::mlir::async::CallOp,
::mlir::async::CoroBeginOp,
::mlir::async::CoroEndOp,
::mlir::async::CoroFreeOp,
::mlir::async::CoroIdOp,
::mlir::async::CoroSaveOp,
::mlir::async::CoroSuspendOp,
::mlir::async::CreateGroupOp,
::mlir::async::ExecuteOp,
::mlir::async::FuncOp,
::mlir::async::ReturnOp,
::mlir::async::RuntimeAddRefOp,
::mlir::async::RuntimeAddToGroupOp,
::mlir::async::RuntimeAwaitAndResumeOp,
::mlir::async::RuntimeAwaitOp,
::mlir::async::RuntimeCreateGroupOp,
::mlir::async::RuntimeCreateOp,
::mlir::async::RuntimeDropRefOp,
::mlir::async::RuntimeIsErrorOp,
::mlir::async::RuntimeLoadOp,
::mlir::async::RuntimeNumWorkerThreadsOp,
::mlir::async::RuntimeResumeOp,
::mlir::async::RuntimeSetAvailableOp,
::mlir::async::RuntimeSetErrorOp,
::mlir::async::RuntimeStoreOp,
::mlir::async::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace async {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::async::ValueType>(type))) || ((::llvm::isa<::mlir::async::TokenType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be async value type or async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::GroupType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be async group type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::async::ValueType>(type))) || ((::llvm::isa<::mlir::async::TokenType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of async value type or async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::CoroIdType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be switched-resume coroutine identifier, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::CoroHandleType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be coroutine handle, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::CoroStateType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be saved coroutine state, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::TokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::TokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::ValueType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of async value type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::async::ValueType>(type))) || ((::llvm::isa<::mlir::async::TokenType>(type))) || ((::llvm::isa<::mlir::async::GroupType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be async value type or async token type or async group type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AsyncOps14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::async::ValueType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be async value type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: flat symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AsyncOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AsyncOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: type attribute of function type";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AsyncOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Array of dictionary attributes";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AsyncOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AsyncOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AsyncOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_AsyncOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_AsyncOps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}
} // namespace async
} // namespace mlir
namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::AddToGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddToGroupOpGenericAdaptorBase::AddToGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.add_to_group", odsAttrs.getContext());
}

AddToGroupOpGenericAdaptorBase::AddToGroupOpGenericAdaptorBase(AddToGroupOp op) : AddToGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddToGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddToGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AddToGroupOpAdaptor::AddToGroupOpAdaptor(AddToGroupOp op) : AddToGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddToGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AddToGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddToGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddToGroupOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::async::GroupType> AddToGroupOp::getGroup() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::GroupType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddToGroupOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddToGroupOp::getGroupMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AddToGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddToGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> AddToGroupOp::getRank() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void AddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type rank, ::mlir::Value operand, ::mlir::Value group) {
  odsState.addOperands(operand);
  odsState.addOperands(group);
  odsState.addTypes(rank);
}

void AddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value group) {
  odsState.addOperands(operand);
  odsState.addOperands(group);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddToGroupOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value group) {
  odsState.addOperands(operand);
  odsState.addOperands(group);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddToGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AddToGroupOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AddToGroupOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AddToGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AddToGroupOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AddToGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand groupRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> groupOperands(groupRawOperands);  ::llvm::SMLoc groupOperandsLoc;
  (void)groupOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  groupOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(groupRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::async::GroupType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(groupOperands, odsBuildableType1, groupOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AddToGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getGroup();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::AddToGroupOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::AwaitAllOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AwaitAllOpGenericAdaptorBase::AwaitAllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.await_all", odsAttrs.getContext());
}

AwaitAllOpGenericAdaptorBase::AwaitAllOpGenericAdaptorBase(AwaitAllOp op) : AwaitAllOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AwaitAllOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AwaitAllOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AwaitAllOpAdaptor::AwaitAllOpAdaptor(AwaitAllOp op) : AwaitAllOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AwaitAllOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AwaitAllOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AwaitAllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::GroupType> AwaitAllOp::getOperand() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::GroupType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AwaitAllOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AwaitAllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AwaitAllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AwaitAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
}

void AwaitAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AwaitAllOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AwaitAllOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AwaitAllOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AwaitAllOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::GroupType>();
  if (parser.resolveOperands(operandOperands, odsBuildableType0, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AwaitAllOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::AwaitAllOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::AwaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AwaitOpGenericAdaptorBase::AwaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.await", odsAttrs.getContext());
}

AwaitOpGenericAdaptorBase::AwaitOpGenericAdaptorBase(AwaitOp op) : AwaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AwaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AwaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AwaitOpAdaptor::AwaitOpAdaptor(AwaitOp op) : AwaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AwaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AwaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AwaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AwaitOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AwaitOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AwaitOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range AwaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AwaitOp::getResult() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult AwaitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps0(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AwaitOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AwaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  {
    ::mlir::Type resultType;
    auto odsResult = parseAwaitResultType(parser, operandRawTypes[0], resultType);
    if (odsResult) return ::mlir::failure();
    if (resultType)
      resultTypes.push_back(resultType);
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AwaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printAwaitResultType(_odsPrinter, *this, getOperand().getType(), (getResult() ? getResult().getType() : ::mlir::Type()));
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::AwaitOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CallOpGenericAdaptorBase::CallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.call", odsAttrs.getContext());
}

CallOpGenericAdaptorBase::CallOpGenericAdaptorBase(CallOp op) : CallOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CallOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CallOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr CallOpGenericAdaptorBase::getCalleeAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().callee);
  return attr;
}

::llvm::StringRef CallOpGenericAdaptorBase::getCallee() {
  auto attr = getCalleeAttr();
  return attr.getValue();
}

} // namespace detail
CallOpAdaptor::CallOpAdaptor(CallOp op) : CallOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CallOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_callee = getProperties().callee; (void)tblgen_callee;
  if (!tblgen_callee) return emitError(loc, "'async.call' op ""requires attribute 'callee'");

  if (tblgen_callee && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_callee))))
    return emitError(loc, "'async.call' op ""attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CallOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CallOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CallOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CallOp::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CallOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CallOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult CallOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.callee;
       auto attr = dict.get("callee");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for callee in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `callee` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CallOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.callee;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("callee",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CallOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.callee.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CallOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "callee")
      return prop.callee;
  return std::nullopt;
}

void CallOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "callee") {
       prop.callee = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.callee)>>(value);
       return;
    }
}

void CallOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.callee) attrs.append("callee", prop.callee);
}

::mlir::LogicalResult CallOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getCalleeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps0(attr, "callee", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CallOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.callee)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CallOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.callee);
}

::mlir::FlatSymbolRefAttr CallOp::getCalleeAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().callee);
}

::llvm::StringRef CallOp::getCallee() {
  auto attr = getCalleeAttr();
  return attr.getValue();
}

void CallOp::setCalleeAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getCalleeAttrName(), attr);
}

void CallOp::setCallee(::llvm::StringRef attrValue) {
  (*this)->setAttr(getCalleeAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, FuncOp callee, ValueRange operands) {
      odsState.addOperands(operands);
      odsState.addAttribute("callee", SymbolRefAttr::get(callee));
      odsState.addTypes(callee.getFunctionType().getResults());
    
}

void CallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, SymbolRefAttr callee, TypeRange results, ValueRange operands) {
      odsState.addOperands(operands);
      odsState.addAttribute("callee", callee);
      odsState.addTypes(results);
    
}

void CallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, StringAttr callee, TypeRange results, ValueRange operands) {
      build(odsBuilder, odsState, SymbolRefAttr::get(callee), results, operands);
    
}

void CallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, StringRef callee, TypeRange results, ValueRange operands) {
      build(odsBuilder, odsState, StringAttr::get(odsBuilder.getContext(), callee),
            results, operands);
    
}

void CallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::FlatSymbolRefAttr callee, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.getOrAddProperties<Properties>().callee = callee;
  odsState.addTypes(resultType0);
}

void CallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::llvm::StringRef callee, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.getOrAddProperties<Properties>().callee = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), callee);
  odsState.addTypes(resultType0);
}

void CallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CallOp::verifyInvariantsImpl() {
  auto tblgen_callee = getProperties().callee; (void)tblgen_callee;
  if (!tblgen_callee) return emitOpError("requires attribute 'callee'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps0(*this, tblgen_callee, "callee")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CallOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::FlatSymbolRefAttr calleeAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc;
  (void)operandsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> operandsTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  if (parser.parseCustomAttributeWithFallback(calleeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (calleeAttr) result.getOrAddProperties<CallOp::Properties>().callee = calleeAttr;
  if (parser.parseLParen())
    return ::mlir::failure();

  operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(operandsOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
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

  ::mlir::FunctionType operands__allResult_functionType;
  if (parser.parseType(operands__allResult_functionType))
    return ::mlir::failure();
  operandsTypes = operands__allResult_functionType.getInputs();
  allResultTypes = operands__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getCalleeAttr());
  _odsPrinter << "(";
  _odsPrinter << getOperands();
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("callee");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperands().getTypes(), getOperation()->getResultTypes());
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CallOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CoroBeginOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoroBeginOpGenericAdaptorBase::CoroBeginOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.coro.begin", odsAttrs.getContext());
}

CoroBeginOpGenericAdaptorBase::CoroBeginOpGenericAdaptorBase(CoroBeginOp op) : CoroBeginOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoroBeginOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoroBeginOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoroBeginOpAdaptor::CoroBeginOpAdaptor(CoroBeginOp op) : CoroBeginOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoroBeginOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoroBeginOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoroBeginOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroIdType> CoroBeginOp::getId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroIdType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CoroBeginOp::getIdMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CoroBeginOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoroBeginOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroHandleType> CoroBeginOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroHandleType>>(*getODSResults(0).begin());
}

void CoroBeginOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type handle, ::mlir::Value id) {
  odsState.addOperands(id);
  odsState.addTypes(handle);
}

void CoroBeginOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value id) {
  odsState.addOperands(id);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CoroBeginOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CoroBeginOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value id) {
  odsState.addOperands(id);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoroBeginOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CoroBeginOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CoroBeginOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CoroBeginOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoroBeginOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CoroBeginOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getType<::mlir::async::CoroHandleType>();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CoroBeginOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand idRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> idOperands(idRawOperands);  ::llvm::SMLoc idOperandsLoc;
  (void)idOperandsLoc;

  idOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(idRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroHandleType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::async::CoroIdType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(idOperands, odsBuildableType1, idOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoroBeginOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getId();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CoroBeginOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CoroEndOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoroEndOpGenericAdaptorBase::CoroEndOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.coro.end", odsAttrs.getContext());
}

CoroEndOpGenericAdaptorBase::CoroEndOpGenericAdaptorBase(CoroEndOp op) : CoroEndOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoroEndOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoroEndOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoroEndOpAdaptor::CoroEndOpAdaptor(CoroEndOp op) : CoroEndOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoroEndOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoroEndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoroEndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroHandleType> CoroEndOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroHandleType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CoroEndOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CoroEndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoroEndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CoroEndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value handle) {
  odsState.addOperands(handle);
}

void CoroEndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value handle) {
  odsState.addOperands(handle);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoroEndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CoroEndOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoroEndOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CoroEndOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;

  handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(handleRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroHandleType>();
  if (parser.resolveOperands(handleOperands, odsBuildableType0, handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoroEndOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CoroEndOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CoroFreeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoroFreeOpGenericAdaptorBase::CoroFreeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.coro.free", odsAttrs.getContext());
}

CoroFreeOpGenericAdaptorBase::CoroFreeOpGenericAdaptorBase(CoroFreeOp op) : CoroFreeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoroFreeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoroFreeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoroFreeOpAdaptor::CoroFreeOpAdaptor(CoroFreeOp op) : CoroFreeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoroFreeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoroFreeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoroFreeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroIdType> CoroFreeOp::getId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroIdType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::async::CoroHandleType> CoroFreeOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroHandleType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CoroFreeOp::getIdMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CoroFreeOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CoroFreeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoroFreeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CoroFreeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value id, ::mlir::Value handle) {
  odsState.addOperands(id);
  odsState.addOperands(handle);
}

void CoroFreeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value id, ::mlir::Value handle) {
  odsState.addOperands(id);
  odsState.addOperands(handle);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoroFreeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CoroFreeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoroFreeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CoroFreeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand idRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> idOperands(idRawOperands);  ::llvm::SMLoc idOperandsLoc;
  (void)idOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;

  idOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(idRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(handleRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroIdType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::async::CoroHandleType>();
  if (parser.resolveOperands(idOperands, odsBuildableType0, idOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(handleOperands, odsBuildableType1, handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoroFreeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getId();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CoroFreeOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CoroIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoroIdOpGenericAdaptorBase::CoroIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.coro.id", odsAttrs.getContext());
}

CoroIdOpGenericAdaptorBase::CoroIdOpGenericAdaptorBase(CoroIdOp op) : CoroIdOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoroIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoroIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoroIdOpAdaptor::CoroIdOpAdaptor(CoroIdOp op) : CoroIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoroIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoroIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoroIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CoroIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoroIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroIdType> CoroIdOp::getId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroIdType>>(*getODSResults(0).begin());
}

void CoroIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type id) {
  odsState.addTypes(id);
}

void CoroIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CoroIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CoroIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoroIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CoroIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CoroIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CoroIdOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoroIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CoroIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getType<::mlir::async::CoroIdType>();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CoroIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroIdType>();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void CoroIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CoroIdOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CoroSaveOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoroSaveOpGenericAdaptorBase::CoroSaveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.coro.save", odsAttrs.getContext());
}

CoroSaveOpGenericAdaptorBase::CoroSaveOpGenericAdaptorBase(CoroSaveOp op) : CoroSaveOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoroSaveOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoroSaveOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoroSaveOpAdaptor::CoroSaveOpAdaptor(CoroSaveOp op) : CoroSaveOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoroSaveOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoroSaveOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoroSaveOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroHandleType> CoroSaveOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroHandleType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CoroSaveOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CoroSaveOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoroSaveOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroStateType> CoroSaveOp::getState() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroStateType>>(*getODSResults(0).begin());
}

void CoroSaveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type state, ::mlir::Value handle) {
  odsState.addOperands(handle);
  odsState.addTypes(state);
}

void CoroSaveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value handle) {
  odsState.addOperands(handle);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CoroSaveOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CoroSaveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value handle) {
  odsState.addOperands(handle);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoroSaveOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CoroSaveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CoroSaveOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CoroSaveOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoroSaveOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CoroSaveOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getType<::mlir::async::CoroStateType>();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CoroSaveOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;

  handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(handleRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroStateType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::async::CoroHandleType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(handleOperands, odsBuildableType1, handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoroSaveOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CoroSaveOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CoroSuspendOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CoroSuspendOpGenericAdaptorBase::CoroSuspendOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.coro.suspend", odsAttrs.getContext());
}

CoroSuspendOpGenericAdaptorBase::CoroSuspendOpGenericAdaptorBase(CoroSuspendOp op) : CoroSuspendOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CoroSuspendOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CoroSuspendOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CoroSuspendOpAdaptor::CoroSuspendOpAdaptor(CoroSuspendOp op) : CoroSuspendOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CoroSuspendOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CoroSuspendOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoroSuspendOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroStateType> CoroSuspendOp::getState() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroStateType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CoroSuspendOp::getStateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CoroSuspendOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoroSuspendOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Block *CoroSuspendOp::getSuspendDest() {
  return (*this)->getSuccessor(0);
}

::mlir::Block *CoroSuspendOp::getResumeDest() {
  return (*this)->getSuccessor(1);
}

::mlir::Block *CoroSuspendOp::getCleanupDest() {
  return (*this)->getSuccessor(2);
}

void CoroSuspendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value state, ::mlir::Block *suspendDest, ::mlir::Block *resumeDest, ::mlir::Block *cleanupDest) {
  odsState.addOperands(state);
  odsState.addSuccessors(suspendDest);
  odsState.addSuccessors(resumeDest);
  odsState.addSuccessors(cleanupDest);
}

void CoroSuspendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value state, ::mlir::Block *suspendDest, ::mlir::Block *resumeDest, ::mlir::Block *cleanupDest) {
  odsState.addOperands(state);
  odsState.addSuccessors(suspendDest);
  odsState.addSuccessors(resumeDest);
  odsState.addSuccessors(cleanupDest);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoroSuspendOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CoroSuspendOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

::mlir::LogicalResult CoroSuspendOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CoroSuspendOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand stateRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> stateOperands(stateRawOperands);  ::llvm::SMLoc stateOperandsLoc;
  (void)stateOperandsLoc;
  ::mlir::Block *suspendDestSuccessor = nullptr;
  ::mlir::Block *resumeDestSuccessor = nullptr;
  ::mlir::Block *cleanupDestSuccessor = nullptr;

  stateOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(stateRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseSuccessor(suspendDestSuccessor))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseSuccessor(resumeDestSuccessor))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseSuccessor(cleanupDestSuccessor))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addSuccessors(suspendDestSuccessor);
  result.addSuccessors(resumeDestSuccessor);
  result.addSuccessors(cleanupDestSuccessor);
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroStateType>();
  if (parser.resolveOperands(stateOperands, odsBuildableType0, stateOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoroSuspendOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getState();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSuspendDest();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getResumeDest();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCleanupDest();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CoroSuspendOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::CreateGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateGroupOpGenericAdaptorBase::CreateGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.create_group", odsAttrs.getContext());
}

CreateGroupOpGenericAdaptorBase::CreateGroupOpGenericAdaptorBase(CreateGroupOp op) : CreateGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CreateGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateGroupOpAdaptor::CreateGroupOpAdaptor(CreateGroupOp op) : CreateGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CreateGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CreateGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> CreateGroupOp::getSize() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CreateGroupOp::getSizeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CreateGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::GroupType> CreateGroupOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::GroupType>>(*getODSResults(0).begin());
}

void CreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value size) {
  odsState.addOperands(size);
  odsState.addTypes(result);
}

void CreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value size) {
  odsState.addOperands(size);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CreateGroupOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value size) {
  odsState.addOperands(size);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CreateGroupOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CreateGroupOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void CreateGroupOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::LogicalResult CreateGroupOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getType<::mlir::async::GroupType>();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CreateGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sizeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sizeOperands(sizeRawOperands);  ::llvm::SMLoc sizeOperandsLoc;
  (void)sizeOperandsLoc;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  sizeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sizeRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::async::GroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sizeOperands, odsBuildableType0, sizeOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSize();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::async::GroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void CreateGroupOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::CreateGroupOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::ExecuteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExecuteOpGenericAdaptorBase::ExecuteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.execute", odsAttrs.getContext());
}

ExecuteOpGenericAdaptorBase::ExecuteOpGenericAdaptorBase(ExecuteOp op) : ExecuteOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExecuteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ExecuteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ExecuteOpGenericAdaptorBase::getBodyRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ExecuteOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ExecuteOpAdaptor::ExecuteOpAdaptor(ExecuteOp op) : ExecuteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExecuteOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ExecuteOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "token");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "bodyResults");
}

std::pair<unsigned, unsigned> ExecuteOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ExecuteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ExecuteOp::getDependencies() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range ExecuteOp::getBodyOperands() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ExecuteOp::getDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ExecuteOp::getBodyOperandsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> ExecuteOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range ExecuteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::TokenType> ExecuteOp::getToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::TokenType>>(*getODSResults(0).begin());
}

::mlir::Operation::result_range ExecuteOp::getBodyResults() {
  return getODSResults(1);
}

::mlir::Region &ExecuteOp::getBodyRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult ExecuteOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
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

::mlir::Attribute ExecuteOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExecuteOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> ExecuteOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void ExecuteOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void ExecuteOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult ExecuteOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult ExecuteOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

void ExecuteOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

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

::mlir::LogicalResult ExecuteOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_AsyncOps0(*this, region, "bodyRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExecuteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::ExecuteOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::FuncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuncOpGenericAdaptorBase::FuncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.func", odsAttrs.getContext());
}

FuncOpGenericAdaptorBase::FuncOpGenericAdaptorBase(FuncOp op) : FuncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FuncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr FuncOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef FuncOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr FuncOpGenericAdaptorBase::getFunctionTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
  return attr;
}

::mlir::FunctionType FuncOpGenericAdaptorBase::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::StringAttr FuncOpGenericAdaptorBase::getSymVisibilityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
  return attr;
}

::std::optional< ::llvm::StringRef > FuncOpGenericAdaptorBase::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::ArrayAttr FuncOpGenericAdaptorBase::getArgAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > FuncOpGenericAdaptorBase::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr FuncOpGenericAdaptorBase::getResAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > FuncOpGenericAdaptorBase::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Region &FuncOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange FuncOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
FuncOpAdaptor::FuncOpAdaptor(FuncOp op) : FuncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FuncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitError(loc, "'async.func' op ""requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'async.func' op ""requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'async.func' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_function_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_function_type))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue())))))
    return emitError(loc, "'async.func' op ""attribute 'function_type' failed to satisfy constraint: type attribute of function type");

  if (tblgen_sym_visibility && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_visibility))))
    return emitError(loc, "'async.func' op ""attribute 'sym_visibility' failed to satisfy constraint: string attribute");

  if (tblgen_arg_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_arg_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_arg_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'async.func' op ""attribute 'arg_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_res_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_res_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_res_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'async.func' op ""attribute 'res_attrs' failed to satisfy constraint: Array of dictionary attributes");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FuncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> FuncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &FuncOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult FuncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.arg_attrs;
       auto attr = dict.get("arg_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for arg_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `arg_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.function_type;
       auto attr = dict.get("function_type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for function_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `function_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.res_attrs;
       auto attr = dict.get("res_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for res_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `res_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sym_name;
       auto attr = dict.get("sym_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for sym_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sym_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sym_visibility;
       auto attr = dict.get("sym_visibility");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for sym_visibility in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sym_visibility` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FuncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.arg_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("arg_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.function_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("function_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.res_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("res_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_visibility;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_visibility",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FuncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.arg_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.res_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_visibility.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FuncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "arg_attrs")
      return prop.arg_attrs;

    if (name == "function_type")
      return prop.function_type;

    if (name == "res_attrs")
      return prop.res_attrs;

    if (name == "sym_name")
      return prop.sym_name;

    if (name == "sym_visibility")
      return prop.sym_visibility;
  return std::nullopt;
}

void FuncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "arg_attrs") {
       prop.arg_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.arg_attrs)>>(value);
       return;
    }

    if (name == "function_type") {
       prop.function_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_type)>>(value);
       return;
    }

    if (name == "res_attrs") {
       prop.res_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.res_attrs)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }

    if (name == "sym_visibility") {
       prop.sym_visibility = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_visibility)>>(value);
       return;
    }
}

void FuncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.arg_attrs) attrs.append("arg_attrs", prop.arg_attrs);

    if (prop.function_type) attrs.append("function_type", prop.function_type);

    if (prop.res_attrs) attrs.append("res_attrs", prop.res_attrs);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);

    if (prop.sym_visibility) attrs.append("sym_visibility", prop.sym_visibility);
}

::mlir::LogicalResult FuncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getArgAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps3(attr, "arg_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps2(attr, "function_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getResAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps3(attr, "res_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps1(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymVisibilityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps1(attr, "sym_visibility", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FuncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.arg_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.function_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.res_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sym_visibility)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.arg_attrs);
  writer.writeAttribute(prop.function_type);

  writer.writeOptionalAttribute(prop.res_attrs);
  writer.writeAttribute(prop.sym_name);

  writer.writeOptionalAttribute(prop.sym_visibility);
}

::mlir::StringAttr FuncOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef FuncOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr FuncOp::getFunctionTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
}

::mlir::FunctionType FuncOp::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::StringAttr FuncOp::getSymVisibilityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
}

::std::optional< ::llvm::StringRef > FuncOp::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::ArrayAttr FuncOp::getArgAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
}

::std::optional< ::mlir::ArrayAttr > FuncOp::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr FuncOp::getResAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
}

::std::optional< ::mlir::ArrayAttr > FuncOp::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void FuncOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void FuncOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void FuncOp::setFunctionTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFunctionTypeAttrName(), attr);
}

void FuncOp::setFunctionType(::mlir::FunctionType attrValue) {
  (*this)->setAttr(getFunctionTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void FuncOp::setSymVisibilityAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymVisibilityAttrName(), attr);
}

void FuncOp::setSymVisibility(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSymVisibilityAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getSymVisibilityAttrName());
}

void FuncOp::setArgAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getArgAttrsAttrName(), attr);
}

void FuncOp::setResAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getResAttrsAttrName(), attr);
}

::mlir::Attribute FuncOp::removeSymVisibilityAttr() {
    auto &attr = getProperties().sym_visibility;
    attr = {};
    return attr;
}

::mlir::Attribute FuncOp::removeArgAttrsAttr() {
    auto &attr = getProperties().arg_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute FuncOp::removeResAttrsAttr() {
    auto &attr = getProperties().res_attrs;
    attr = {};
    return attr;
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().function_type = function_type;
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  (void)odsState.addRegion();
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().function_type = function_type;
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::FunctionType function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().function_type = ::mlir::TypeAttr::get(function_type);
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  (void)odsState.addRegion();
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::FunctionType function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().function_type = ::mlir::TypeAttr::get(function_type);
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FuncOp::verifyInvariantsImpl() {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitOpError("requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps1(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps2(*this, tblgen_function_type, "function_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps1(*this, tblgen_sym_visibility, "sym_visibility")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps3(*this, tblgen_arg_attrs, "arg_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps3(*this, tblgen_res_attrs, "res_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_AsyncOps1(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::FuncOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::ReturnOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReturnOpGenericAdaptorBase::ReturnOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.return", odsAttrs.getContext());
}

ReturnOpGenericAdaptorBase::ReturnOpGenericAdaptorBase(ReturnOp op) : ReturnOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReturnOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ReturnOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReturnOpAdaptor::ReturnOpAdaptor(ReturnOp op) : ReturnOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReturnOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReturnOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ReturnOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ReturnOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ReturnOp::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReturnOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReturnOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReturnOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
build(odsBuilder, odsState, std::nullopt);
}

void ReturnOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
}

void ReturnOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReturnOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReturnOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReturnOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ReturnOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void ReturnOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange ReturnOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::ReturnOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeAddRefOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeAddRefOpGenericAdaptorBase::RuntimeAddRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.add_ref", odsAttrs.getContext());
}

RuntimeAddRefOpGenericAdaptorBase::RuntimeAddRefOpGenericAdaptorBase(RuntimeAddRefOp op) : RuntimeAddRefOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeAddRefOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeAddRefOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr RuntimeAddRefOpGenericAdaptorBase::getCountAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().count);
  return attr;
}

uint64_t RuntimeAddRefOpGenericAdaptorBase::getCount() {
  auto attr = getCountAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
RuntimeAddRefOpAdaptor::RuntimeAddRefOpAdaptor(RuntimeAddRefOp op) : RuntimeAddRefOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeAddRefOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_count = getProperties().count; (void)tblgen_count;
  if (!tblgen_count) return emitError(loc, "'async.runtime.add_ref' op ""requires attribute 'count'");

  if (tblgen_count && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_count))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_count).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_count).getValue().isStrictlyPositive()))))
    return emitError(loc, "'async.runtime.add_ref' op ""attribute 'count' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeAddRefOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeAddRefOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeAddRefOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeAddRefOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeAddRefOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeAddRefOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RuntimeAddRefOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.count;
       auto attr = dict.get("count");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for count in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `count` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RuntimeAddRefOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.count;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("count",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RuntimeAddRefOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.count.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RuntimeAddRefOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "count")
      return prop.count;
  return std::nullopt;
}

void RuntimeAddRefOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "count") {
       prop.count = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.count)>>(value);
       return;
    }
}

void RuntimeAddRefOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.count) attrs.append("count", prop.count);
}

::mlir::LogicalResult RuntimeAddRefOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getCountAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps4(attr, "count", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RuntimeAddRefOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.count)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeAddRefOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.count);
}

::mlir::IntegerAttr RuntimeAddRefOp::getCountAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().count);
}

uint64_t RuntimeAddRefOp::getCount() {
  auto attr = getCountAttr();
  return attr.getValue().getZExtValue();
}

void RuntimeAddRefOp::setCountAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getCountAttrName(), attr);
}

void RuntimeAddRefOp::setCount(uint64_t attrValue) {
  (*this)->setAttr(getCountAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void RuntimeAddRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::IntegerAttr count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = count;
}

void RuntimeAddRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::IntegerAttr count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = count;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeAddRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, uint64_t count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), count);
}

void RuntimeAddRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, uint64_t count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), count);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeAddRefOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeAddRefOp::verifyInvariantsImpl() {
  auto tblgen_count = getProperties().count; (void)tblgen_count;
  if (!tblgen_count) return emitOpError("requires attribute 'count'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps4(*this, tblgen_count, "count")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeAddRefOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeAddRefOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
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
    operandRawTypes[0] = type;
  }
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeAddRefOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeAddRefOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeAddToGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeAddToGroupOpGenericAdaptorBase::RuntimeAddToGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.add_to_group", odsAttrs.getContext());
}

RuntimeAddToGroupOpGenericAdaptorBase::RuntimeAddToGroupOpGenericAdaptorBase(RuntimeAddToGroupOp op) : RuntimeAddToGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeAddToGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeAddToGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeAddToGroupOpAdaptor::RuntimeAddToGroupOpAdaptor(RuntimeAddToGroupOp op) : RuntimeAddToGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeAddToGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeAddToGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeAddToGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeAddToGroupOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::async::GroupType> RuntimeAddToGroupOp::getGroup() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::GroupType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RuntimeAddToGroupOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RuntimeAddToGroupOp::getGroupMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeAddToGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeAddToGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> RuntimeAddToGroupOp::getRank() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void RuntimeAddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type rank, ::mlir::Value operand, ::mlir::Value group) {
  odsState.addOperands(operand);
  odsState.addOperands(group);
  odsState.addTypes(rank);
}

void RuntimeAddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value group) {
  odsState.addOperands(operand);
  odsState.addOperands(group);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RuntimeAddToGroupOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RuntimeAddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value group) {
  odsState.addOperands(operand);
  odsState.addOperands(group);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeAddToGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RuntimeAddToGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RuntimeAddToGroupOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RuntimeAddToGroupOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeAddToGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RuntimeAddToGroupOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RuntimeAddToGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand groupRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> groupOperands(groupRawOperands);  ::llvm::SMLoc groupOperandsLoc;
  (void)groupOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  groupOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(groupRawOperands[0]))
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::async::GroupType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(groupOperands, odsBuildableType1, groupOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeAddToGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getGroup();
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeAddToGroupOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeAwaitAndResumeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeAwaitAndResumeOpGenericAdaptorBase::RuntimeAwaitAndResumeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.await_and_resume", odsAttrs.getContext());
}

RuntimeAwaitAndResumeOpGenericAdaptorBase::RuntimeAwaitAndResumeOpGenericAdaptorBase(RuntimeAwaitAndResumeOp op) : RuntimeAwaitAndResumeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeAwaitAndResumeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeAwaitAndResumeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeAwaitAndResumeOpAdaptor::RuntimeAwaitAndResumeOpAdaptor(RuntimeAwaitAndResumeOp op) : RuntimeAwaitAndResumeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeAwaitAndResumeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeAwaitAndResumeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeAwaitAndResumeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeAwaitAndResumeOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::async::CoroHandleType> RuntimeAwaitAndResumeOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroHandleType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RuntimeAwaitAndResumeOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RuntimeAwaitAndResumeOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeAwaitAndResumeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeAwaitAndResumeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RuntimeAwaitAndResumeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value handle) {
  odsState.addOperands(operand);
  odsState.addOperands(handle);
}

void RuntimeAwaitAndResumeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value handle) {
  odsState.addOperands(operand);
  odsState.addOperands(handle);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeAwaitAndResumeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeAwaitAndResumeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeAwaitAndResumeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeAwaitAndResumeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(handleRawOperands[0]))
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroHandleType>();
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(handleOperands, odsBuildableType0, handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeAwaitAndResumeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeAwaitAndResumeOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeAwaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeAwaitOpGenericAdaptorBase::RuntimeAwaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.await", odsAttrs.getContext());
}

RuntimeAwaitOpGenericAdaptorBase::RuntimeAwaitOpGenericAdaptorBase(RuntimeAwaitOp op) : RuntimeAwaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeAwaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeAwaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeAwaitOpAdaptor::RuntimeAwaitOpAdaptor(RuntimeAwaitOp op) : RuntimeAwaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeAwaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeAwaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeAwaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeAwaitOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeAwaitOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeAwaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeAwaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RuntimeAwaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
}

void RuntimeAwaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeAwaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeAwaitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeAwaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeAwaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

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
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeAwaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeAwaitOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeCreateGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeCreateGroupOpGenericAdaptorBase::RuntimeCreateGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.create_group", odsAttrs.getContext());
}

RuntimeCreateGroupOpGenericAdaptorBase::RuntimeCreateGroupOpGenericAdaptorBase(RuntimeCreateGroupOp op) : RuntimeCreateGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeCreateGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeCreateGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeCreateGroupOpAdaptor::RuntimeCreateGroupOpAdaptor(RuntimeCreateGroupOp op) : RuntimeCreateGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeCreateGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeCreateGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeCreateGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> RuntimeCreateGroupOp::getSize() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeCreateGroupOp::getSizeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeCreateGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeCreateGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::GroupType> RuntimeCreateGroupOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::GroupType>>(*getODSResults(0).begin());
}

void RuntimeCreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value size) {
  odsState.addOperands(size);
  odsState.addTypes(result);
}

void RuntimeCreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value size) {
  odsState.addOperands(size);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RuntimeCreateGroupOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RuntimeCreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value size) {
  odsState.addOperands(size);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeCreateGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RuntimeCreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RuntimeCreateGroupOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RuntimeCreateGroupOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeCreateGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RuntimeCreateGroupOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getType<::mlir::async::GroupType>();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RuntimeCreateGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sizeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sizeOperands(sizeRawOperands);  ::llvm::SMLoc sizeOperandsLoc;
  (void)sizeOperandsLoc;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  sizeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sizeRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::async::GroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sizeOperands, odsBuildableType0, sizeOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeCreateGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSize();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::async::GroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeCreateGroupOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeCreateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeCreateOpGenericAdaptorBase::RuntimeCreateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.create", odsAttrs.getContext());
}

RuntimeCreateOpGenericAdaptorBase::RuntimeCreateOpGenericAdaptorBase(RuntimeCreateOp op) : RuntimeCreateOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeCreateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeCreateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeCreateOpAdaptor::RuntimeCreateOpAdaptor(RuntimeCreateOp op) : RuntimeCreateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeCreateOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeCreateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeCreateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> RuntimeCreateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeCreateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeCreateOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RuntimeCreateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void RuntimeCreateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeCreateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeCreateOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeCreateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeCreateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
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
  return ::mlir::success();
}

void RuntimeCreateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeCreateOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeDropRefOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeDropRefOpGenericAdaptorBase::RuntimeDropRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.drop_ref", odsAttrs.getContext());
}

RuntimeDropRefOpGenericAdaptorBase::RuntimeDropRefOpGenericAdaptorBase(RuntimeDropRefOp op) : RuntimeDropRefOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeDropRefOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeDropRefOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr RuntimeDropRefOpGenericAdaptorBase::getCountAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().count);
  return attr;
}

uint64_t RuntimeDropRefOpGenericAdaptorBase::getCount() {
  auto attr = getCountAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
RuntimeDropRefOpAdaptor::RuntimeDropRefOpAdaptor(RuntimeDropRefOp op) : RuntimeDropRefOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeDropRefOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_count = getProperties().count; (void)tblgen_count;
  if (!tblgen_count) return emitError(loc, "'async.runtime.drop_ref' op ""requires attribute 'count'");

  if (tblgen_count && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_count))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_count).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_count).getValue().isStrictlyPositive()))))
    return emitError(loc, "'async.runtime.drop_ref' op ""attribute 'count' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeDropRefOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeDropRefOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeDropRefOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeDropRefOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeDropRefOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeDropRefOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RuntimeDropRefOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.count;
       auto attr = dict.get("count");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for count in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `count` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RuntimeDropRefOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.count;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("count",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RuntimeDropRefOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.count.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RuntimeDropRefOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "count")
      return prop.count;
  return std::nullopt;
}

void RuntimeDropRefOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "count") {
       prop.count = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.count)>>(value);
       return;
    }
}

void RuntimeDropRefOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.count) attrs.append("count", prop.count);
}

::mlir::LogicalResult RuntimeDropRefOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getCountAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps4(attr, "count", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RuntimeDropRefOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.count)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeDropRefOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.count);
}

::mlir::IntegerAttr RuntimeDropRefOp::getCountAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().count);
}

uint64_t RuntimeDropRefOp::getCount() {
  auto attr = getCountAttr();
  return attr.getValue().getZExtValue();
}

void RuntimeDropRefOp::setCountAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getCountAttrName(), attr);
}

void RuntimeDropRefOp::setCount(uint64_t attrValue) {
  (*this)->setAttr(getCountAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void RuntimeDropRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::IntegerAttr count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = count;
}

void RuntimeDropRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::IntegerAttr count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = count;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeDropRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, uint64_t count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), count);
}

void RuntimeDropRefOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, uint64_t count) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().count = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), count);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeDropRefOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeDropRefOp::verifyInvariantsImpl() {
  auto tblgen_count = getProperties().count; (void)tblgen_count;
  if (!tblgen_count) return emitOpError("requires attribute 'count'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AsyncOps4(*this, tblgen_count, "count")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeDropRefOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeDropRefOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
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
    operandRawTypes[0] = type;
  }
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeDropRefOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeDropRefOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeIsErrorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeIsErrorOpGenericAdaptorBase::RuntimeIsErrorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.is_error", odsAttrs.getContext());
}

RuntimeIsErrorOpGenericAdaptorBase::RuntimeIsErrorOpGenericAdaptorBase(RuntimeIsErrorOp op) : RuntimeIsErrorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeIsErrorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeIsErrorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeIsErrorOpAdaptor::RuntimeIsErrorOpAdaptor(RuntimeIsErrorOp op) : RuntimeIsErrorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeIsErrorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeIsErrorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeIsErrorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeIsErrorOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeIsErrorOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeIsErrorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeIsErrorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> RuntimeIsErrorOp::getIsError() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void RuntimeIsErrorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type is_error, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(is_error);
}

void RuntimeIsErrorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RuntimeIsErrorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RuntimeIsErrorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeIsErrorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RuntimeIsErrorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RuntimeIsErrorOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RuntimeIsErrorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeIsErrorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RuntimeIsErrorOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIntegerType(1);
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RuntimeIsErrorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeIsErrorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeIsErrorOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeLoadOpGenericAdaptorBase::RuntimeLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.load", odsAttrs.getContext());
}

RuntimeLoadOpGenericAdaptorBase::RuntimeLoadOpGenericAdaptorBase(RuntimeLoadOp op) : RuntimeLoadOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeLoadOpAdaptor::RuntimeLoadOpAdaptor(RuntimeLoadOp op) : RuntimeLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::ValueType> RuntimeLoadOp::getStorage() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::ValueType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeLoadOp::getStorageMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeLoadOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RuntimeLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value storage) {
  odsState.addOperands(storage);
  odsState.addTypes(result);
}

void RuntimeLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value storage) {
  odsState.addOperands(storage);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RuntimeLoadOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RuntimeLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value storage) {
  odsState.addOperands(storage);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RuntimeLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RuntimeLoadOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RuntimeLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ValueType>((*this->getODSOperands(0).begin()).getType()).getValueType(), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that type of 'value' matches element type of 'storage'");
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RuntimeLoadOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::llvm::cast<ValueType>(operands[0].getType()).getValueType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RuntimeLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand storageRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> storageOperands(storageRawOperands);  ::llvm::SMLoc storageOperandsLoc;
  (void)storageOperandsLoc;
  ::mlir::Type storageRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> storageTypes(storageRawTypes);

  storageOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(storageRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::async::ValueType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    storageRawTypes[0] = type;
  }
  for (::mlir::Type type : storageTypes) {
    (void)type;
    if (!((::llvm::isa<::mlir::async::ValueType>(type)))) {
      return parser.emitError(parser.getNameLoc()) << "'storage' must be async value type, but got " << type;
    }
  }
  result.addTypes(::llvm::cast<ValueType>(storageTypes[0]).getValueType());
  if (parser.resolveOperands(storageOperands, storageTypes, storageOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getStorage();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getStorage().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::async::ValueType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeLoadOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeNumWorkerThreadsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeNumWorkerThreadsOpGenericAdaptorBase::RuntimeNumWorkerThreadsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.num_worker_threads", odsAttrs.getContext());
}

RuntimeNumWorkerThreadsOpGenericAdaptorBase::RuntimeNumWorkerThreadsOpGenericAdaptorBase(RuntimeNumWorkerThreadsOp op) : RuntimeNumWorkerThreadsOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeNumWorkerThreadsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeNumWorkerThreadsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeNumWorkerThreadsOpAdaptor::RuntimeNumWorkerThreadsOpAdaptor(RuntimeNumWorkerThreadsOp op) : RuntimeNumWorkerThreadsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeNumWorkerThreadsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeNumWorkerThreadsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeNumWorkerThreadsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> RuntimeNumWorkerThreadsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeNumWorkerThreadsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> RuntimeNumWorkerThreadsOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void RuntimeNumWorkerThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void RuntimeNumWorkerThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RuntimeNumWorkerThreadsOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RuntimeNumWorkerThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeNumWorkerThreadsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RuntimeNumWorkerThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RuntimeNumWorkerThreadsOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RuntimeNumWorkerThreadsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeNumWorkerThreadsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RuntimeNumWorkerThreadsOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RuntimeNumWorkerThreadsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
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

void RuntimeNumWorkerThreadsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
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

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeNumWorkerThreadsOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeResumeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeResumeOpGenericAdaptorBase::RuntimeResumeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.resume", odsAttrs.getContext());
}

RuntimeResumeOpGenericAdaptorBase::RuntimeResumeOpGenericAdaptorBase(RuntimeResumeOp op) : RuntimeResumeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeResumeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeResumeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeResumeOpAdaptor::RuntimeResumeOpAdaptor(RuntimeResumeOp op) : RuntimeResumeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeResumeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeResumeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeResumeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::async::CoroHandleType> RuntimeResumeOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::CoroHandleType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeResumeOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeResumeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeResumeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RuntimeResumeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value handle) {
  odsState.addOperands(handle);
}

void RuntimeResumeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value handle) {
  odsState.addOperands(handle);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeResumeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeResumeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeResumeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeResumeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;

  handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(handleRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::async::CoroHandleType>();
  if (parser.resolveOperands(handleOperands, odsBuildableType0, handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeResumeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeResumeOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeSetAvailableOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeSetAvailableOpGenericAdaptorBase::RuntimeSetAvailableOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.set_available", odsAttrs.getContext());
}

RuntimeSetAvailableOpGenericAdaptorBase::RuntimeSetAvailableOpGenericAdaptorBase(RuntimeSetAvailableOp op) : RuntimeSetAvailableOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeSetAvailableOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeSetAvailableOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeSetAvailableOpAdaptor::RuntimeSetAvailableOpAdaptor(RuntimeSetAvailableOp op) : RuntimeSetAvailableOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeSetAvailableOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeSetAvailableOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeSetAvailableOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeSetAvailableOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeSetAvailableOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeSetAvailableOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeSetAvailableOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RuntimeSetAvailableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
}

void RuntimeSetAvailableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeSetAvailableOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeSetAvailableOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeSetAvailableOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeSetAvailableOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

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
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeSetAvailableOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeSetAvailableOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeSetErrorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeSetErrorOpGenericAdaptorBase::RuntimeSetErrorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.set_error", odsAttrs.getContext());
}

RuntimeSetErrorOpGenericAdaptorBase::RuntimeSetErrorOpGenericAdaptorBase(RuntimeSetErrorOp op) : RuntimeSetErrorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeSetErrorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeSetErrorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeSetErrorOpAdaptor::RuntimeSetErrorOpAdaptor(RuntimeSetErrorOp op) : RuntimeSetErrorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeSetErrorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeSetErrorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeSetErrorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeSetErrorOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &RuntimeSetErrorOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeSetErrorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeSetErrorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RuntimeSetErrorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
}

void RuntimeSetErrorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeSetErrorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeSetErrorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeSetErrorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeSetErrorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);

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
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeSetErrorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeSetErrorOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::RuntimeStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RuntimeStoreOpGenericAdaptorBase::RuntimeStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.runtime.store", odsAttrs.getContext());
}

RuntimeStoreOpGenericAdaptorBase::RuntimeStoreOpGenericAdaptorBase(RuntimeStoreOp op) : RuntimeStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RuntimeStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RuntimeStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RuntimeStoreOpAdaptor::RuntimeStoreOpAdaptor(RuntimeStoreOp op) : RuntimeStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RuntimeStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RuntimeStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RuntimeStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RuntimeStoreOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::async::ValueType> RuntimeStoreOp::getStorage() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::async::ValueType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RuntimeStoreOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RuntimeStoreOp::getStorageMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RuntimeStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RuntimeStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RuntimeStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value storage) {
  odsState.addOperands(value);
  odsState.addOperands(storage);
}

void RuntimeStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value storage) {
  odsState.addOperands(value);
  odsState.addOperands(storage);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RuntimeStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RuntimeStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<ValueType>((*this->getODSOperands(1).begin()).getType()).getValueType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that type of 'value' matches element type of 'storage'");
  return ::mlir::success();
}

::mlir::LogicalResult RuntimeStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RuntimeStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand storageRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> storageOperands(storageRawOperands);  ::llvm::SMLoc storageOperandsLoc;
  (void)storageOperandsLoc;
  ::mlir::Type storageRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> storageTypes(storageRawTypes);

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  storageOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(storageRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::async::ValueType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    storageRawTypes[0] = type;
  }
  for (::mlir::Type type : storageTypes) {
    (void)type;
    if (!((::llvm::isa<::mlir::async::ValueType>(type)))) {
      return parser.emitError(parser.getNameLoc()) << "'storage' must be async value type, but got " << type;
    }
  }
  if (parser.resolveOperands(valueOperands, ::llvm::cast<ValueType>(storageTypes[0]).getValueType(), valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(storageOperands, storageTypes, storageOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RuntimeStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getStorage();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getStorage().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::async::ValueType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::RuntimeStoreOp)

namespace mlir {
namespace async {

//===----------------------------------------------------------------------===//
// ::mlir::async::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("async.yield", odsAttrs.getContext());
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_AsyncOps4(*this, v.getType(), "operand", index++)))
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

  operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(operandsOperands))
    return ::mlir::failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(operandsTypes))
    return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (!getOperands().empty()) {
    _odsPrinter << ' ';
    _odsPrinter << getOperands();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getOperands().getTypes();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange YieldOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace async
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::async::YieldOp)


#endif  // GET_OP_CLASSES

