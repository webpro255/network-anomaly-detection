/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TransformOps.td                                                      *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::AlternativesOp,
::mlir::transform::AnnotateOp,
::mlir::transform::ApplyCanonicalizationPatternsOp,
::mlir::transform::ApplyCommonSubexpressionEliminationOp,
::mlir::transform::ApplyConversionPatternsOp,
::mlir::transform::ApplyDeadCodeEliminationOp,
::mlir::transform::ApplyLoopInvariantCodeMotionOp,
::mlir::transform::ApplyPatternsOp,
::mlir::transform::ApplyRegisteredPassOp,
::mlir::transform::ApplyToLLVMConversionPatternsOp,
::mlir::transform::CastOp,
::mlir::transform::CollectMatchingOp,
::mlir::transform::ForeachMatchOp,
::mlir::transform::ForeachOp,
::mlir::transform::GetConsumersOfResult,
::mlir::transform::GetDefiningOp,
::mlir::transform::GetOperandOp,
::mlir::transform::GetParentOp,
::mlir::transform::GetProducerOfOperand,
::mlir::transform::GetResultOp,
::mlir::transform::GetTypeOp,
::mlir::transform::IncludeOp,
::mlir::transform::MatchOperationEmptyOp,
::mlir::transform::MatchOperationNameOp,
::mlir::transform::MatchParamCmpIOp,
::mlir::transform::MergeHandlesOp,
::mlir::transform::NamedSequenceOp,
::mlir::transform::NumAssociationsOp,
::mlir::transform::ParamConstantOp,
::mlir::transform::PrintOp,
::mlir::transform::ReplicateOp,
::mlir::transform::SelectOp,
::mlir::transform::SequenceOp,
::mlir::transform::SplitHandleOp,
::mlir::transform::VerifyOp,
::mlir::transform::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformParamTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TransformOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any transform handle or parameter, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TransformOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformValueHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TransformOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any transform handle or parameter, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::SymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol ref array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Silenceable error propagation policy";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::transform::MatchCmpIPredicateAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: allowed 32-bit signless integer cases: 0, 1, 2, 3, 4, 5";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: function type attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Array of dictionary attributes";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((true)))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TransformOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TransformOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_TransformOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_TransformOps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItemsOrLess(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with at most 1 blocks";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::AlternativesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AlternativesOpGenericAdaptorBase::AlternativesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.alternatives", odsAttrs.getContext());
}

AlternativesOpGenericAdaptorBase::AlternativesOpGenericAdaptorBase(AlternativesOp op) : AlternativesOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AlternativesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr AlternativesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::RegionRange AlternativesOpGenericAdaptorBase::getAlternatives() {
  return odsRegions.drop_front(0);
}

::mlir::RegionRange AlternativesOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
AlternativesOpAdaptor::AlternativesOpAdaptor(AlternativesOp op) : AlternativesOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AlternativesOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AlternativesOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range AlternativesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> AlternativesOp::getScope() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
}

::mlir::MutableOperandRange AlternativesOp::getScopeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AlternativesOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range AlternativesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range AlternativesOp::getResults() {
  return getODSResults(0);
}

::mlir::MutableArrayRef<::mlir::Region> AlternativesOp::getAlternatives() {
  return (*this)->getRegions().drop_front(0);
}

void AlternativesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, /*optional*/::mlir::Value scope, unsigned alternativesCount) {
  if (scope)
    odsState.addOperands(scope);
  for (unsigned i = 0; i < alternativesCount; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(results);
}

void AlternativesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes, unsigned numRegions) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != numRegions; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AlternativesOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : getAlternatives())
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps0(*this, region, "alternatives", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult AlternativesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AlternativesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> scopeOperands;
  ::llvm::SMLoc scopeOperandsLoc;
  (void)scopeOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> scopeTypes;
  ::llvm::SmallVector<::mlir::Type, 1> resultsTypes;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;

  {
    scopeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      scopeOperands.push_back(operand);
    }
  }
  if (!scopeOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      scopeTypes.push_back(optionalType);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalArrow())) {

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
  }

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      fullRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        fullRegions.emplace_back(std::move(region));
      }
    }
  }

  for (auto &region : fullRegions)
    ensureTerminator(*region, parser.getBuilder(), result.location);
  result.addRegions(fullRegions);
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(scopeOperands, scopeTypes, scopeOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AlternativesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getScope()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getScope())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getScope() ? ::llvm::ArrayRef<::mlir::Type>(getScope().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
  if (!getResults().empty()) {
    _odsPrinter << ' ' << "->";
    _odsPrinter << ' ';
    _odsPrinter << getResults().getTypes();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {

  {
    bool printTerminator = true;
    if (auto *term = region.empty() ? nullptr : region.begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(region, /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
    });
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::AlternativesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::AnnotateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AnnotateOpGenericAdaptorBase::AnnotateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.annotate", odsAttrs.getContext());
}

AnnotateOpGenericAdaptorBase::AnnotateOpGenericAdaptorBase(AnnotateOp op) : AnnotateOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AnnotateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr AnnotateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr AnnotateOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().name);
  return attr;
}

::llvm::StringRef AnnotateOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

} // namespace detail
AnnotateOpAdaptor::AnnotateOpAdaptor(AnnotateOp op) : AnnotateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AnnotateOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitError(loc, "'transform.annotate' op ""requires attribute 'name'");

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'transform.annotate' op ""attribute 'name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AnnotateOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range AnnotateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> AnnotateOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> AnnotateOp::getParam() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*operands.begin());
}

::mlir::OpOperand &AnnotateOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange AnnotateOp::getParamMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AnnotateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AnnotateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult AnnotateOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AnnotateOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AnnotateOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AnnotateOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "name")
      return prop.name;
  return std::nullopt;
}

void AnnotateOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }
}

void AnnotateOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.name) attrs.append("name", prop.name);
}

::mlir::LogicalResult AnnotateOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AnnotateOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AnnotateOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.name);
}

::mlir::StringAttr AnnotateOp::getNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().name);
}

::llvm::StringRef AnnotateOp::getName() {
  auto attr = getNameAttr();
  return attr.getValue();
}

void AnnotateOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void AnnotateOp::setName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void AnnotateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::StringAttr name, /*optional*/::mlir::Value param) {
  odsState.addOperands(target);
  if (param)
    odsState.addOperands(param);
  odsState.getOrAddProperties<Properties>().name = name;
}

void AnnotateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr name, /*optional*/::mlir::Value param) {
  odsState.addOperands(target);
  if (param)
    odsState.addOperands(param);
  odsState.getOrAddProperties<Properties>().name = name;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AnnotateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::llvm::StringRef name, /*optional*/::mlir::Value param) {
  odsState.addOperands(target);
  if (param)
    odsState.addOperands(param);
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
}

void AnnotateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef name, /*optional*/::mlir::Value param) {
  odsState.addOperands(target);
  if (param)
    odsState.addOperands(param);
  odsState.getOrAddProperties<Properties>().name = odsBuilder.getStringAttr(name);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AnnotateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AnnotateOp::verifyInvariantsImpl() {
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  if (!tblgen_name) return emitOpError("requires attribute 'name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AnnotateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AnnotateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::StringAttr nameAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> paramOperands;
  ::llvm::SMLoc paramOperandsLoc;
  (void)paramOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> paramTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(nameAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (nameAttr) result.getOrAddProperties<AnnotateOp::Properties>().name = nameAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalEqual())) {

  {
    paramOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      paramOperands.push_back(operand);
    }
  }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      paramTypes.push_back(optionalType);
    }
  }
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(paramOperands, paramTypes, paramOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AnnotateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getNameAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (getParam()) {
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getParam())
      _odsPrinter << value;
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (getParam()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << (getParam() ? ::llvm::ArrayRef<::mlir::Type>(getParam().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::AnnotateOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyCanonicalizationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyCanonicalizationPatternsOpGenericAdaptorBase::ApplyCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.canonicalization", odsAttrs.getContext());
}

ApplyCanonicalizationPatternsOpGenericAdaptorBase::ApplyCanonicalizationPatternsOpGenericAdaptorBase(ApplyCanonicalizationPatternsOp op) : ApplyCanonicalizationPatternsOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyCanonicalizationPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyCanonicalizationPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyCanonicalizationPatternsOpAdaptor::ApplyCanonicalizationPatternsOpAdaptor(ApplyCanonicalizationPatternsOp op) : ApplyCanonicalizationPatternsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyCanonicalizationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyCanonicalizationPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyCanonicalizationPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyCanonicalizationPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyCanonicalizationPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyCanonicalizationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyCanonicalizationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyCanonicalizationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyCanonicalizationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyCanonicalizationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyCommonSubexpressionEliminationOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyCommonSubexpressionEliminationOpGenericAdaptorBase::ApplyCommonSubexpressionEliminationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_cse", odsAttrs.getContext());
}

ApplyCommonSubexpressionEliminationOpGenericAdaptorBase::ApplyCommonSubexpressionEliminationOpGenericAdaptorBase(ApplyCommonSubexpressionEliminationOp op) : ApplyCommonSubexpressionEliminationOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyCommonSubexpressionEliminationOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyCommonSubexpressionEliminationOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyCommonSubexpressionEliminationOpAdaptor::ApplyCommonSubexpressionEliminationOpAdaptor(ApplyCommonSubexpressionEliminationOp op) : ApplyCommonSubexpressionEliminationOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyCommonSubexpressionEliminationOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyCommonSubexpressionEliminationOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyCommonSubexpressionEliminationOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyCommonSubexpressionEliminationOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ApplyCommonSubexpressionEliminationOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyCommonSubexpressionEliminationOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyCommonSubexpressionEliminationOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyCommonSubexpressionEliminationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void ApplyCommonSubexpressionEliminationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyCommonSubexpressionEliminationOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyCommonSubexpressionEliminationOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyCommonSubexpressionEliminationOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyCommonSubexpressionEliminationOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyCommonSubexpressionEliminationOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCommonSubexpressionEliminationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyConversionPatternsOpGenericAdaptorBase::ApplyConversionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_conversion_patterns", odsAttrs.getContext());
}

ApplyConversionPatternsOpGenericAdaptorBase::ApplyConversionPatternsOpGenericAdaptorBase(ApplyConversionPatternsOp op) : ApplyConversionPatternsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyConversionPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyConversionPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ApplyConversionPatternsOpGenericAdaptorBase::getLegalOpsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().legal_ops);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOpGenericAdaptorBase::getLegalOps() {
  auto attr = getLegalOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr ApplyConversionPatternsOpGenericAdaptorBase::getIllegalOpsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().illegal_ops);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOpGenericAdaptorBase::getIllegalOps() {
  auto attr = getIllegalOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr ApplyConversionPatternsOpGenericAdaptorBase::getLegalDialectsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().legal_dialects);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOpGenericAdaptorBase::getLegalDialects() {
  auto attr = getLegalDialectsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr ApplyConversionPatternsOpGenericAdaptorBase::getIllegalDialectsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().illegal_dialects);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOpGenericAdaptorBase::getIllegalDialects() {
  auto attr = getIllegalDialectsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::UnitAttr ApplyConversionPatternsOpGenericAdaptorBase::getPartialConversionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().partial_conversion);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ApplyConversionPatternsOpGenericAdaptorBase::getPartialConversion() {
  auto attr = getPartialConversionAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &ApplyConversionPatternsOpGenericAdaptorBase::getPatterns() {
  return *odsRegions[0];
}

::mlir::RegionRange ApplyConversionPatternsOpGenericAdaptorBase::getDefaultTypeConverterRegion() {
  return odsRegions.drop_front(1);
}

::mlir::RegionRange ApplyConversionPatternsOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ApplyConversionPatternsOpAdaptor::ApplyConversionPatternsOpAdaptor(ApplyConversionPatternsOp op) : ApplyConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_illegal_dialects = getProperties().illegal_dialects; (void)tblgen_illegal_dialects;
  auto tblgen_illegal_ops = getProperties().illegal_ops; (void)tblgen_illegal_ops;
  auto tblgen_legal_dialects = getProperties().legal_dialects; (void)tblgen_legal_dialects;
  auto tblgen_legal_ops = getProperties().legal_ops; (void)tblgen_legal_ops;
  auto tblgen_partial_conversion = getProperties().partial_conversion; (void)tblgen_partial_conversion;

  if (tblgen_legal_ops && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_legal_ops))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_legal_ops), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.apply_conversion_patterns' op ""attribute 'legal_ops' failed to satisfy constraint: string array attribute");

  if (tblgen_illegal_ops && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_illegal_ops))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_illegal_ops), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.apply_conversion_patterns' op ""attribute 'illegal_ops' failed to satisfy constraint: string array attribute");

  if (tblgen_legal_dialects && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_legal_dialects))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_legal_dialects), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.apply_conversion_patterns' op ""attribute 'legal_dialects' failed to satisfy constraint: string array attribute");

  if (tblgen_illegal_dialects && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_illegal_dialects))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_illegal_dialects), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.apply_conversion_patterns' op ""attribute 'illegal_dialects' failed to satisfy constraint: string array attribute");

  if (tblgen_partial_conversion && !((::llvm::isa<::mlir::UnitAttr>(tblgen_partial_conversion))))
    return emitError(loc, "'transform.apply_conversion_patterns' op ""attribute 'partial_conversion' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyConversionPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyConversionPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyConversionPatternsOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ApplyConversionPatternsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyConversionPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyConversionPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ApplyConversionPatternsOp::getPatterns() {
  return (*this)->getRegion(0);
}

::mlir::MutableArrayRef<::mlir::Region> ApplyConversionPatternsOp::getDefaultTypeConverterRegion() {
  return (*this)->getRegions().drop_front(1);
}

::mlir::LogicalResult ApplyConversionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.illegal_dialects;
       auto attr = dict.get("illegal_dialects");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for illegal_dialects in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `illegal_dialects` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.illegal_ops;
       auto attr = dict.get("illegal_ops");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for illegal_ops in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `illegal_ops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.legal_dialects;
       auto attr = dict.get("legal_dialects");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for legal_dialects in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `legal_dialects` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.legal_ops;
       auto attr = dict.get("legal_ops");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for legal_ops in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `legal_ops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.partial_conversion;
       auto attr = dict.get("partial_conversion");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for partial_conversion in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `partial_conversion` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyConversionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.illegal_dialects;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("illegal_dialects",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.illegal_ops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("illegal_ops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.legal_dialects;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("legal_dialects",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.legal_ops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("legal_ops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.partial_conversion;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("partial_conversion",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyConversionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.illegal_dialects.getAsOpaquePointer()), 
    llvm::hash_value(prop.illegal_ops.getAsOpaquePointer()), 
    llvm::hash_value(prop.legal_dialects.getAsOpaquePointer()), 
    llvm::hash_value(prop.legal_ops.getAsOpaquePointer()), 
    llvm::hash_value(prop.partial_conversion.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyConversionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "illegal_dialects")
      return prop.illegal_dialects;

    if (name == "illegal_ops")
      return prop.illegal_ops;

    if (name == "legal_dialects")
      return prop.legal_dialects;

    if (name == "legal_ops")
      return prop.legal_ops;

    if (name == "partial_conversion")
      return prop.partial_conversion;
  return std::nullopt;
}

void ApplyConversionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "illegal_dialects") {
       prop.illegal_dialects = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.illegal_dialects)>>(value);
       return;
    }

    if (name == "illegal_ops") {
       prop.illegal_ops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.illegal_ops)>>(value);
       return;
    }

    if (name == "legal_dialects") {
       prop.legal_dialects = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.legal_dialects)>>(value);
       return;
    }

    if (name == "legal_ops") {
       prop.legal_ops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.legal_ops)>>(value);
       return;
    }

    if (name == "partial_conversion") {
       prop.partial_conversion = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.partial_conversion)>>(value);
       return;
    }
}

void ApplyConversionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.illegal_dialects) attrs.append("illegal_dialects", prop.illegal_dialects);

    if (prop.illegal_ops) attrs.append("illegal_ops", prop.illegal_ops);

    if (prop.legal_dialects) attrs.append("legal_dialects", prop.legal_dialects);

    if (prop.legal_ops) attrs.append("legal_ops", prop.legal_ops);

    if (prop.partial_conversion) attrs.append("partial_conversion", prop.partial_conversion);
}

::mlir::LogicalResult ApplyConversionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIllegalDialectsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(attr, "illegal_dialects", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIllegalOpsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(attr, "illegal_ops", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLegalDialectsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(attr, "legal_dialects", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLegalOpsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(attr, "legal_ops", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPartialConversionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "partial_conversion", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyConversionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.illegal_dialects)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.illegal_ops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.legal_dialects)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.legal_ops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.partial_conversion)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyConversionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.illegal_dialects);

  writer.writeOptionalAttribute(prop.illegal_ops);

  writer.writeOptionalAttribute(prop.legal_dialects);

  writer.writeOptionalAttribute(prop.legal_ops);

  writer.writeOptionalAttribute(prop.partial_conversion);
}

::mlir::ArrayAttr ApplyConversionPatternsOp::getLegalOpsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().legal_ops);
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOp::getLegalOps() {
  auto attr = getLegalOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr ApplyConversionPatternsOp::getIllegalOpsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().illegal_ops);
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOp::getIllegalOps() {
  auto attr = getIllegalOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr ApplyConversionPatternsOp::getLegalDialectsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().legal_dialects);
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOp::getLegalDialects() {
  auto attr = getLegalDialectsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr ApplyConversionPatternsOp::getIllegalDialectsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().illegal_dialects);
}

::std::optional< ::mlir::ArrayAttr > ApplyConversionPatternsOp::getIllegalDialects() {
  auto attr = getIllegalDialectsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::UnitAttr ApplyConversionPatternsOp::getPartialConversionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().partial_conversion);
}

bool ApplyConversionPatternsOp::getPartialConversion() {
  auto attr = getPartialConversionAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void ApplyConversionPatternsOp::setLegalOpsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getLegalOpsAttrName(), attr);
}

void ApplyConversionPatternsOp::setIllegalOpsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getIllegalOpsAttrName(), attr);
}

void ApplyConversionPatternsOp::setLegalDialectsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getLegalDialectsAttrName(), attr);
}

void ApplyConversionPatternsOp::setIllegalDialectsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getIllegalDialectsAttrName(), attr);
}

void ApplyConversionPatternsOp::setPartialConversionAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getPartialConversionAttrName(), attr);
}

void ApplyConversionPatternsOp::setPartialConversion(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getPartialConversionAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getPartialConversionAttrName());
}

::mlir::Attribute ApplyConversionPatternsOp::removeLegalOpsAttr() {
    auto &attr = getProperties().legal_ops;
    attr = {};
    return attr;
}

::mlir::Attribute ApplyConversionPatternsOp::removeIllegalOpsAttr() {
    auto &attr = getProperties().illegal_ops;
    attr = {};
    return attr;
}

::mlir::Attribute ApplyConversionPatternsOp::removeLegalDialectsAttr() {
    auto &attr = getProperties().legal_dialects;
    attr = {};
    return attr;
}

::mlir::Attribute ApplyConversionPatternsOp::removeIllegalDialectsAttr() {
    auto &attr = getProperties().illegal_dialects;
    attr = {};
    return attr;
}

::mlir::Attribute ApplyConversionPatternsOp::removePartialConversionAttr() {
    auto &attr = getProperties().partial_conversion;
    attr = {};
    return attr;
}

::mlir::LogicalResult ApplyConversionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_illegal_dialects = getProperties().illegal_dialects; (void)tblgen_illegal_dialects;
  auto tblgen_illegal_ops = getProperties().illegal_ops; (void)tblgen_illegal_ops;
  auto tblgen_legal_dialects = getProperties().legal_dialects; (void)tblgen_legal_dialects;
  auto tblgen_legal_ops = getProperties().legal_ops; (void)tblgen_legal_ops;
  auto tblgen_partial_conversion = getProperties().partial_conversion; (void)tblgen_partial_conversion;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(*this, tblgen_legal_ops, "legal_ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(*this, tblgen_illegal_ops, "illegal_ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(*this, tblgen_legal_dialects, "legal_dialects")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(*this, tblgen_illegal_dialects, "illegal_dialects")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_partial_conversion, "partial_conversion")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps1(*this, region, "patterns", index++)))
        return ::mlir::failure();

    for (auto &region : getDefaultTypeConverterRegion())
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps1(*this, region, "default_type_converter_region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyConversionPatternsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ApplyConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  std::unique_ptr<::mlir::Region> patternsRegion = std::make_unique<::mlir::Region>();
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> default_type_converter_regionRegions;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();

  if (parser.parseRegion(*patternsRegion))
    return ::mlir::failure();

  if (patternsRegion->empty()) patternsRegion->emplaceBlock();
  if (::mlir::succeeded(parser.parseOptionalKeyword("with"))) {
  if (parser.parseKeyword("type_converter"))
    return ::mlir::failure();

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      default_type_converter_regionRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        default_type_converter_regionRegions.emplace_back(std::move(region));
      }
    }
  }

  for (auto &region : default_type_converter_regionRegions)
    if (region->empty()) region->emplaceBlock();
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
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  result.addRegion(std::move(patternsRegion));
  result.addRegions(default_type_converter_regionRegions);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getPatterns());
  if (!getDefaultTypeConverterRegion().empty()) {
    _odsPrinter << ' ' << "with";
    _odsPrinter << ' ' << "type_converter";
    _odsPrinter << ' ';
      llvm::interleaveComma(getDefaultTypeConverterRegion(), _odsPrinter, [&](::mlir::Region &region) {
          _odsPrinter.printRegion(region);
      });
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPartialConversionAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("partial_conversion");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyDeadCodeEliminationOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyDeadCodeEliminationOpGenericAdaptorBase::ApplyDeadCodeEliminationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_dce", odsAttrs.getContext());
}

ApplyDeadCodeEliminationOpGenericAdaptorBase::ApplyDeadCodeEliminationOpGenericAdaptorBase(ApplyDeadCodeEliminationOp op) : ApplyDeadCodeEliminationOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyDeadCodeEliminationOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyDeadCodeEliminationOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyDeadCodeEliminationOpAdaptor::ApplyDeadCodeEliminationOpAdaptor(ApplyDeadCodeEliminationOp op) : ApplyDeadCodeEliminationOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyDeadCodeEliminationOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyDeadCodeEliminationOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyDeadCodeEliminationOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyDeadCodeEliminationOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ApplyDeadCodeEliminationOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyDeadCodeEliminationOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyDeadCodeEliminationOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyDeadCodeEliminationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void ApplyDeadCodeEliminationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyDeadCodeEliminationOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyDeadCodeEliminationOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyDeadCodeEliminationOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyDeadCodeEliminationOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyDeadCodeEliminationOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyDeadCodeEliminationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLoopInvariantCodeMotionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLoopInvariantCodeMotionOpGenericAdaptorBase::ApplyLoopInvariantCodeMotionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_licm", odsAttrs.getContext());
}

ApplyLoopInvariantCodeMotionOpGenericAdaptorBase::ApplyLoopInvariantCodeMotionOpGenericAdaptorBase(ApplyLoopInvariantCodeMotionOp op) : ApplyLoopInvariantCodeMotionOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyLoopInvariantCodeMotionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLoopInvariantCodeMotionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLoopInvariantCodeMotionOpAdaptor::ApplyLoopInvariantCodeMotionOpAdaptor(ApplyLoopInvariantCodeMotionOp op) : ApplyLoopInvariantCodeMotionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyLoopInvariantCodeMotionOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLoopInvariantCodeMotionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLoopInvariantCodeMotionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyLoopInvariantCodeMotionOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ApplyLoopInvariantCodeMotionOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyLoopInvariantCodeMotionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLoopInvariantCodeMotionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLoopInvariantCodeMotionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void ApplyLoopInvariantCodeMotionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLoopInvariantCodeMotionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLoopInvariantCodeMotionOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLoopInvariantCodeMotionOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLoopInvariantCodeMotionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLoopInvariantCodeMotionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLoopInvariantCodeMotionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyPatternsOpGenericAdaptorBase::ApplyPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns", odsAttrs.getContext());
}

ApplyPatternsOpGenericAdaptorBase::ApplyPatternsOpGenericAdaptorBase(ApplyPatternsOp op) : ApplyPatternsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr ApplyPatternsOpGenericAdaptorBase::getApplyCseAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().apply_cse);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ApplyPatternsOpGenericAdaptorBase::getApplyCse() {
  auto attr = getApplyCseAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &ApplyPatternsOpGenericAdaptorBase::getPatterns() {
  return *odsRegions[0];
}

::mlir::RegionRange ApplyPatternsOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ApplyPatternsOpAdaptor::ApplyPatternsOpAdaptor(ApplyPatternsOp op) : ApplyPatternsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_apply_cse = getProperties().apply_cse; (void)tblgen_apply_cse;

  if (tblgen_apply_cse && !((::llvm::isa<::mlir::UnitAttr>(tblgen_apply_cse))))
    return emitError(loc, "'transform.apply_patterns' op ""attribute 'apply_cse' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyPatternsOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ApplyPatternsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ApplyPatternsOp::getPatterns() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult ApplyPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.apply_cse;
       auto attr = dict.get("apply_cse");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for apply_cse in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `apply_cse` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.apply_cse;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("apply_cse",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.apply_cse.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "apply_cse")
      return prop.apply_cse;
  return std::nullopt;
}

void ApplyPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "apply_cse") {
       prop.apply_cse = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.apply_cse)>>(value);
       return;
    }
}

void ApplyPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.apply_cse) attrs.append("apply_cse", prop.apply_cse);
}

::mlir::LogicalResult ApplyPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getApplyCseAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "apply_cse", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.apply_cse)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.apply_cse);
}

::mlir::UnitAttr ApplyPatternsOp::getApplyCseAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().apply_cse);
}

bool ApplyPatternsOp::getApplyCse() {
  auto attr = getApplyCseAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void ApplyPatternsOp::setApplyCseAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getApplyCseAttrName(), attr);
}

void ApplyPatternsOp::setApplyCse(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getApplyCseAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getApplyCseAttrName());
}

::mlir::Attribute ApplyPatternsOp::removeApplyCseAttr() {
    auto &attr = getProperties().apply_cse;
    attr = {};
    return attr;
}

::mlir::LogicalResult ApplyPatternsOp::verifyInvariantsImpl() {
  auto tblgen_apply_cse = getProperties().apply_cse; (void)tblgen_apply_cse;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_apply_cse, "apply_cse")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps1(*this, region, "patterns", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyPatternsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ApplyPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  std::unique_ptr<::mlir::Region> patternsRegion = std::make_unique<::mlir::Region>();
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();

  if (parser.parseRegion(*patternsRegion))
    return ::mlir::failure();

  if (patternsRegion->empty()) patternsRegion->emplaceBlock();
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
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  result.addRegion(std::move(patternsRegion));
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getPatterns());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getApplyCseAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("apply_cse");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRegisteredPassOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyRegisteredPassOpGenericAdaptorBase::ApplyRegisteredPassOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_registered_pass", odsAttrs.getContext());
}

ApplyRegisteredPassOpGenericAdaptorBase::ApplyRegisteredPassOpGenericAdaptorBase(ApplyRegisteredPassOp op) : ApplyRegisteredPassOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyRegisteredPassOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyRegisteredPassOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr ApplyRegisteredPassOpGenericAdaptorBase::getPassNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().pass_name);
  return attr;
}

::llvm::StringRef ApplyRegisteredPassOpGenericAdaptorBase::getPassName() {
  auto attr = getPassNameAttr();
  return attr.getValue();
}

::mlir::StringAttr ApplyRegisteredPassOpGenericAdaptorBase::getOptionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().options);
  return attr;
}

::llvm::StringRef ApplyRegisteredPassOpGenericAdaptorBase::getOptions() {
  auto attr = getOptionsAttr();
  return attr.getValue();
}

} // namespace detail
ApplyRegisteredPassOpAdaptor::ApplyRegisteredPassOpAdaptor(ApplyRegisteredPassOp op) : ApplyRegisteredPassOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyRegisteredPassOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_options = getProperties().options; (void)tblgen_options;
  auto tblgen_pass_name = getProperties().pass_name; (void)tblgen_pass_name;
  if (!tblgen_pass_name) return emitError(loc, "'transform.apply_registered_pass' op ""requires attribute 'pass_name'");

  if (tblgen_pass_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_pass_name))))
    return emitError(loc, "'transform.apply_registered_pass' op ""attribute 'pass_name' failed to satisfy constraint: string attribute");

  if (tblgen_options && !((::llvm::isa<::mlir::StringAttr>(tblgen_options))))
    return emitError(loc, "'transform.apply_registered_pass' op ""attribute 'options' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyRegisteredPassOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyRegisteredPassOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyRegisteredPassOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ApplyRegisteredPassOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ApplyRegisteredPassOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyRegisteredPassOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ApplyRegisteredPassOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ApplyRegisteredPassOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.options;
       auto attr = dict.get("options");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for options in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `options` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pass_name;
       auto attr = dict.get("pass_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for pass_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pass_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyRegisteredPassOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.options;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("options",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pass_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pass_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyRegisteredPassOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.options.getAsOpaquePointer()), 
    llvm::hash_value(prop.pass_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyRegisteredPassOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "options")
      return prop.options;

    if (name == "pass_name")
      return prop.pass_name;
  return std::nullopt;
}

void ApplyRegisteredPassOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "options") {
       prop.options = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.options)>>(value);
       return;
    }

    if (name == "pass_name") {
       prop.pass_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pass_name)>>(value);
       return;
    }
}

void ApplyRegisteredPassOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.options) attrs.append("options", prop.options);

    if (prop.pass_name) attrs.append("pass_name", prop.pass_name);
}

::mlir::LogicalResult ApplyRegisteredPassOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOptionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "options", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPassNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "pass_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyRegisteredPassOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.options)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.pass_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyRegisteredPassOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.options);
  writer.writeAttribute(prop.pass_name);
}

::mlir::StringAttr ApplyRegisteredPassOp::getPassNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().pass_name);
}

::llvm::StringRef ApplyRegisteredPassOp::getPassName() {
  auto attr = getPassNameAttr();
  return attr.getValue();
}

::mlir::StringAttr ApplyRegisteredPassOp::getOptionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().options);
}

::llvm::StringRef ApplyRegisteredPassOp::getOptions() {
  auto attr = getOptionsAttr();
  return attr.getValue();
}

void ApplyRegisteredPassOp::setPassNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getPassNameAttrName(), attr);
}

void ApplyRegisteredPassOp::setPassName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getPassNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void ApplyRegisteredPassOp::setOptionsAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getOptionsAttrName(), attr);
}

void ApplyRegisteredPassOp::setOptions(::llvm::StringRef attrValue) {
  (*this)->setAttr(getOptionsAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void ApplyRegisteredPassOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::StringAttr pass_name, ::mlir::StringAttr options) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().pass_name = pass_name;
  if (options) {
    odsState.getOrAddProperties<Properties>().options = options;
  }
  odsState.addTypes(result);
}

void ApplyRegisteredPassOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr pass_name, ::mlir::StringAttr options) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().pass_name = pass_name;
  if (options) {
    odsState.getOrAddProperties<Properties>().options = options;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRegisteredPassOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::StringRef pass_name, ::llvm::StringRef options) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().pass_name = odsBuilder.getStringAttr(pass_name);
  odsState.getOrAddProperties<Properties>().options = odsBuilder.getStringAttr(options);
  odsState.addTypes(result);
}

void ApplyRegisteredPassOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef pass_name, ::llvm::StringRef options) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().pass_name = odsBuilder.getStringAttr(pass_name);
  odsState.getOrAddProperties<Properties>().options = odsBuilder.getStringAttr(options);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRegisteredPassOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyRegisteredPassOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.options)
    properties.options = odsBuilder.getStringAttr("");
}

::mlir::LogicalResult ApplyRegisteredPassOp::verifyInvariantsImpl() {
  auto tblgen_options = getProperties().options; (void)tblgen_options;
  auto tblgen_pass_name = getProperties().pass_name; (void)tblgen_pass_name;
  if (!tblgen_pass_name) return emitOpError("requires attribute 'pass_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_pass_name, "pass_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_options, "options")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyRegisteredPassOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyRegisteredPassOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr pass_nameAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  if (parser.parseCustomAttributeWithFallback(pass_nameAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (pass_nameAttr) result.getOrAddProperties<ApplyRegisteredPassOp::Properties>().pass_name = pass_nameAttr;
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyRegisteredPassOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getPassNameAttr());
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("pass_name");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOptionsAttr();
     if(attr && (attr == odsBuilder.getStringAttr("")))
       elidedAttrs.push_back("options");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRegisteredPassOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyToLLVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyToLLVMConversionPatternsOpGenericAdaptorBase::ApplyToLLVMConversionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_conversion_patterns.dialect_to_llvm", odsAttrs.getContext());
}

ApplyToLLVMConversionPatternsOpGenericAdaptorBase::ApplyToLLVMConversionPatternsOpGenericAdaptorBase(ApplyToLLVMConversionPatternsOp op) : ApplyToLLVMConversionPatternsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ApplyToLLVMConversionPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyToLLVMConversionPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr ApplyToLLVMConversionPatternsOpGenericAdaptorBase::getDialectNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().dialect_name);
  return attr;
}

::llvm::StringRef ApplyToLLVMConversionPatternsOpGenericAdaptorBase::getDialectName() {
  auto attr = getDialectNameAttr();
  return attr.getValue();
}

} // namespace detail
ApplyToLLVMConversionPatternsOpAdaptor::ApplyToLLVMConversionPatternsOpAdaptor(ApplyToLLVMConversionPatternsOp op) : ApplyToLLVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ApplyToLLVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dialect_name = getProperties().dialect_name; (void)tblgen_dialect_name;
  if (!tblgen_dialect_name) return emitError(loc, "'transform.apply_conversion_patterns.dialect_to_llvm' op ""requires attribute 'dialect_name'");

  if (tblgen_dialect_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_dialect_name))))
    return emitError(loc, "'transform.apply_conversion_patterns.dialect_to_llvm' op ""attribute 'dialect_name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyToLLVMConversionPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyToLLVMConversionPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyToLLVMConversionPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyToLLVMConversionPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyToLLVMConversionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dialect_name;
       auto attr = dict.get("dialect_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dialect_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dialect_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyToLLVMConversionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dialect_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dialect_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyToLLVMConversionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dialect_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyToLLVMConversionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dialect_name")
      return prop.dialect_name;
  return std::nullopt;
}

void ApplyToLLVMConversionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dialect_name") {
       prop.dialect_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dialect_name)>>(value);
       return;
    }
}

void ApplyToLLVMConversionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dialect_name) attrs.append("dialect_name", prop.dialect_name);
}

::mlir::LogicalResult ApplyToLLVMConversionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDialectNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "dialect_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyToLLVMConversionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dialect_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyToLLVMConversionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dialect_name);
}

::mlir::StringAttr ApplyToLLVMConversionPatternsOp::getDialectNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().dialect_name);
}

::llvm::StringRef ApplyToLLVMConversionPatternsOp::getDialectName() {
  auto attr = getDialectNameAttr();
  return attr.getValue();
}

void ApplyToLLVMConversionPatternsOp::setDialectNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getDialectNameAttrName(), attr);
}

void ApplyToLLVMConversionPatternsOp::setDialectName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getDialectNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void ApplyToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr dialect_name) {
  odsState.getOrAddProperties<Properties>().dialect_name = dialect_name;
}

void ApplyToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr dialect_name) {
  odsState.getOrAddProperties<Properties>().dialect_name = dialect_name;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef dialect_name) {
  odsState.getOrAddProperties<Properties>().dialect_name = odsBuilder.getStringAttr(dialect_name);
}

void ApplyToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef dialect_name) {
  odsState.getOrAddProperties<Properties>().dialect_name = odsBuilder.getStringAttr(dialect_name);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyToLLVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyToLLVMConversionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_dialect_name = getProperties().dialect_name; (void)tblgen_dialect_name;
  if (!tblgen_dialect_name) return emitOpError("requires attribute 'dialect_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_dialect_name, "dialect_name")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyToLLVMConversionPatternsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ApplyToLLVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr dialect_nameAttr;

  if (parser.parseCustomAttributeWithFallback(dialect_nameAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (dialect_nameAttr) result.getOrAddProperties<ApplyToLLVMConversionPatternsOp::Properties>().dialect_name = dialect_nameAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyToLLVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDialectNameAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dialect_name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyToLLVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::CastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CastOpGenericAdaptorBase::CastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.cast", odsAttrs.getContext());
}

CastOpGenericAdaptorBase::CastOpGenericAdaptorBase(CastOp op) : CastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CastOpAdaptor::CastOpAdaptor(CastOp op) : CastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> CastOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CastOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> CastOp::getOutput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void CastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void CastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CastOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type outputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outputTypes(outputRawTypes);

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
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outputRawTypes[0] = type;
  }
  result.addTypes(outputTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOutput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::CastOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::CollectMatchingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CollectMatchingOpGenericAdaptorBase::CollectMatchingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.collect_matching", odsAttrs.getContext());
}

CollectMatchingOpGenericAdaptorBase::CollectMatchingOpGenericAdaptorBase(CollectMatchingOp op) : CollectMatchingOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CollectMatchingOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CollectMatchingOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr CollectMatchingOpGenericAdaptorBase::getMatcherAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().matcher);
  return attr;
}

::mlir::SymbolRefAttr CollectMatchingOpGenericAdaptorBase::getMatcher() {
  auto attr = getMatcherAttr();
  return attr;
}

} // namespace detail
CollectMatchingOpAdaptor::CollectMatchingOpAdaptor(CollectMatchingOp op) : CollectMatchingOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CollectMatchingOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_matcher = getProperties().matcher; (void)tblgen_matcher;
  if (!tblgen_matcher) return emitError(loc, "'transform.collect_matching' op ""requires attribute 'matcher'");

  if (tblgen_matcher && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_matcher))))
    return emitError(loc, "'transform.collect_matching' op ""attribute 'matcher' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CollectMatchingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CollectMatchingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> CollectMatchingOp::getRoot() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &CollectMatchingOp::getRootMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CollectMatchingOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CollectMatchingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range CollectMatchingOp::getResults() {
  return getODSResults(0);
}

::mlir::LogicalResult CollectMatchingOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.matcher;
       auto attr = dict.get("matcher");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for matcher in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `matcher` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CollectMatchingOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.matcher;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("matcher",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CollectMatchingOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.matcher.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CollectMatchingOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "matcher")
      return prop.matcher;
  return std::nullopt;
}

void CollectMatchingOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "matcher") {
       prop.matcher = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.matcher)>>(value);
       return;
    }
}

void CollectMatchingOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.matcher) attrs.append("matcher", prop.matcher);
}

::mlir::LogicalResult CollectMatchingOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMatcherAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps3(attr, "matcher", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CollectMatchingOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.matcher)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CollectMatchingOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.matcher);
}

::mlir::SymbolRefAttr CollectMatchingOp::getMatcherAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().matcher);
}

::mlir::SymbolRefAttr CollectMatchingOp::getMatcher() {
  auto attr = getMatcherAttr();
  return attr;
}

void CollectMatchingOp::setMatcherAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getMatcherAttrName(), attr);
}

void CollectMatchingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value root, ::mlir::SymbolRefAttr matcher) {
  odsState.addOperands(root);
  odsState.getOrAddProperties<Properties>().matcher = matcher;
  odsState.addTypes(results);
}

void CollectMatchingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CollectMatchingOp::verifyInvariantsImpl() {
  auto tblgen_matcher = getProperties().matcher; (void)tblgen_matcher;
  if (!tblgen_matcher) return emitOpError("requires attribute 'matcher'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps3(*this, tblgen_matcher, "matcher")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CollectMatchingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CollectMatchingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr matcherAttr;
  ::mlir::OpAsmParser::UnresolvedOperand rootRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rootOperands(rootRawOperands);  ::llvm::SMLoc rootOperandsLoc;
  (void)rootOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> rootTypes;
  ::llvm::ArrayRef<::mlir::Type> resultsTypes;

  if (parser.parseCustomAttributeWithFallback(matcherAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (matcherAttr) result.getOrAddProperties<CollectMatchingOp::Properties>().matcher = matcherAttr;
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  rootOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rootRawOperands[0]))
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

  ::mlir::FunctionType root__results_functionType;
  if (parser.parseType(root__results_functionType))
    return ::mlir::failure();
  rootTypes = root__results_functionType.getInputs();
  resultsTypes = root__results_functionType.getResults();
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(rootOperands, rootTypes, rootOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CollectMatchingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMatcherAttr());
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getRoot();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("matcher");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getRoot().getType()), getResults().getTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::CollectMatchingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ForeachMatchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ForeachMatchOpGenericAdaptorBase::ForeachMatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.foreach_match", odsAttrs.getContext());
}

ForeachMatchOpGenericAdaptorBase::ForeachMatchOpGenericAdaptorBase(ForeachMatchOp op) : ForeachMatchOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ForeachMatchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ForeachMatchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr ForeachMatchOpGenericAdaptorBase::getRestrictRootAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().restrict_root);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ForeachMatchOpGenericAdaptorBase::getRestrictRoot() {
  auto attr = getRestrictRootAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr ForeachMatchOpGenericAdaptorBase::getMatchersAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().matchers);
  return attr;
}

::mlir::ArrayAttr ForeachMatchOpGenericAdaptorBase::getMatchers() {
  auto attr = getMatchersAttr();
  return attr;
}

::mlir::ArrayAttr ForeachMatchOpGenericAdaptorBase::getActionsAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().actions);
  return attr;
}

::mlir::ArrayAttr ForeachMatchOpGenericAdaptorBase::getActions() {
  auto attr = getActionsAttr();
  return attr;
}

} // namespace detail
ForeachMatchOpAdaptor::ForeachMatchOpAdaptor(ForeachMatchOp op) : ForeachMatchOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ForeachMatchOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_actions = getProperties().actions; (void)tblgen_actions;
  if (!tblgen_actions) return emitError(loc, "'transform.foreach_match' op ""requires attribute 'actions'");
  auto tblgen_matchers = getProperties().matchers; (void)tblgen_matchers;
  if (!tblgen_matchers) return emitError(loc, "'transform.foreach_match' op ""requires attribute 'matchers'");
  auto tblgen_restrict_root = getProperties().restrict_root; (void)tblgen_restrict_root;

  if (tblgen_restrict_root && !((::llvm::isa<::mlir::UnitAttr>(tblgen_restrict_root))))
    return emitError(loc, "'transform.foreach_match' op ""attribute 'restrict_root' failed to satisfy constraint: unit attribute");

  if (tblgen_matchers && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_matchers))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_matchers), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'transform.foreach_match' op ""attribute 'matchers' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_actions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_actions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_actions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'transform.foreach_match' op ""attribute 'actions' failed to satisfy constraint: symbol ref array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForeachMatchOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ForeachMatchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ForeachMatchOp::getRoot() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ForeachMatchOp::getRootMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ForeachMatchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ForeachMatchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ForeachMatchOp::getUpdated() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ForeachMatchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.actions;
       auto attr = dict.get("actions");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for actions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `actions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.matchers;
       auto attr = dict.get("matchers");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for matchers in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `matchers` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.restrict_root;
       auto attr = dict.get("restrict_root");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for restrict_root in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `restrict_root` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ForeachMatchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.actions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("actions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.matchers;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("matchers",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.restrict_root;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("restrict_root",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ForeachMatchOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.actions.getAsOpaquePointer()), 
    llvm::hash_value(prop.matchers.getAsOpaquePointer()), 
    llvm::hash_value(prop.restrict_root.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ForeachMatchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "actions")
      return prop.actions;

    if (name == "matchers")
      return prop.matchers;

    if (name == "restrict_root")
      return prop.restrict_root;
  return std::nullopt;
}

void ForeachMatchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "actions") {
       prop.actions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.actions)>>(value);
       return;
    }

    if (name == "matchers") {
       prop.matchers = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.matchers)>>(value);
       return;
    }

    if (name == "restrict_root") {
       prop.restrict_root = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.restrict_root)>>(value);
       return;
    }
}

void ForeachMatchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.actions) attrs.append("actions", prop.actions);

    if (prop.matchers) attrs.append("matchers", prop.matchers);

    if (prop.restrict_root) attrs.append("restrict_root", prop.restrict_root);
}

::mlir::LogicalResult ForeachMatchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getActionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps4(attr, "actions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMatchersAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps4(attr, "matchers", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRestrictRootAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "restrict_root", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ForeachMatchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.actions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.matchers)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.restrict_root)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForeachMatchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.actions);
  writer.writeAttribute(prop.matchers);

  writer.writeOptionalAttribute(prop.restrict_root);
}

::mlir::UnitAttr ForeachMatchOp::getRestrictRootAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().restrict_root);
}

bool ForeachMatchOp::getRestrictRoot() {
  auto attr = getRestrictRootAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr ForeachMatchOp::getMatchersAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().matchers);
}

::mlir::ArrayAttr ForeachMatchOp::getMatchers() {
  auto attr = getMatchersAttr();
  return attr;
}

::mlir::ArrayAttr ForeachMatchOp::getActionsAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().actions);
}

::mlir::ArrayAttr ForeachMatchOp::getActions() {
  auto attr = getActionsAttr();
  return attr;
}

void ForeachMatchOp::setRestrictRootAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getRestrictRootAttrName(), attr);
}

void ForeachMatchOp::setRestrictRoot(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getRestrictRootAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getRestrictRootAttrName());
}

void ForeachMatchOp::setMatchersAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMatchersAttrName(), attr);
}

void ForeachMatchOp::setActionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getActionsAttrName(), attr);
}

::mlir::Attribute ForeachMatchOp::removeRestrictRootAttr() {
    auto &attr = getProperties().restrict_root;
    attr = {};
    return attr;
}

void ForeachMatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type updated, ::mlir::Value root, /*optional*/::mlir::UnitAttr restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions) {
  odsState.addOperands(root);
  if (restrict_root) {
    odsState.getOrAddProperties<Properties>().restrict_root = restrict_root;
  }
  odsState.getOrAddProperties<Properties>().matchers = matchers;
  odsState.getOrAddProperties<Properties>().actions = actions;
  odsState.addTypes(updated);
}

void ForeachMatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value root, /*optional*/::mlir::UnitAttr restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions) {
  odsState.addOperands(root);
  if (restrict_root) {
    odsState.getOrAddProperties<Properties>().restrict_root = restrict_root;
  }
  odsState.getOrAddProperties<Properties>().matchers = matchers;
  odsState.getOrAddProperties<Properties>().actions = actions;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ForeachMatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type updated, ::mlir::Value root, /*optional*/bool restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions) {
  odsState.addOperands(root);
  if (restrict_root) {
    odsState.getOrAddProperties<Properties>().restrict_root = ((restrict_root) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().matchers = matchers;
  odsState.getOrAddProperties<Properties>().actions = actions;
  odsState.addTypes(updated);
}

void ForeachMatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value root, /*optional*/bool restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions) {
  odsState.addOperands(root);
  if (restrict_root) {
    odsState.getOrAddProperties<Properties>().restrict_root = ((restrict_root) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().matchers = matchers;
  odsState.getOrAddProperties<Properties>().actions = actions;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ForeachMatchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ForeachMatchOp::verifyInvariantsImpl() {
  auto tblgen_actions = getProperties().actions; (void)tblgen_actions;
  if (!tblgen_actions) return emitOpError("requires attribute 'actions'");
  auto tblgen_matchers = getProperties().matchers; (void)tblgen_matchers;
  if (!tblgen_matchers) return emitOpError("requires attribute 'matchers'");
  auto tblgen_restrict_root = getProperties().restrict_root; (void)tblgen_restrict_root;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_restrict_root, "restrict_root")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps4(*this, tblgen_matchers, "matchers")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps4(*this, tblgen_actions, "actions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ForeachMatchOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ForeachMatchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand rootRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rootOperands(rootRawOperands);  ::llvm::SMLoc rootOperandsLoc;
  (void)rootOperandsLoc;
  ::mlir::ArrayAttr matchersAttr;
  ::mlir::ArrayAttr actionsAttr;
  ::llvm::ArrayRef<::mlir::Type> rootTypes;
  ::llvm::ArrayRef<::mlir::Type> updatedTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("restrict_root"))) {
    result.getOrAddProperties<ForeachMatchOp::Properties>().restrict_root = parser.getBuilder().getUnitAttr();  }
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  rootOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rootRawOperands[0]))
    return ::mlir::failure();
  {
    auto odsResult = parseForeachMatchSymbols(parser, matchersAttr, actionsAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ForeachMatchOp::Properties>().matchers = matchersAttr;
    result.getOrAddProperties<ForeachMatchOp::Properties>().actions = actionsAttr;
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

  ::mlir::FunctionType root__updated_functionType;
  if (parser.parseType(root__updated_functionType))
    return ::mlir::failure();
  rootTypes = root__updated_functionType.getInputs();
  updatedTypes = root__updated_functionType.getResults();
  result.addTypes(updatedTypes);
  if (parser.resolveOperands(rootOperands, rootTypes, rootOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForeachMatchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getRestrictRootAttr()) {
    _odsPrinter << ' ' << "restrict_root";
  }
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getRoot();
  _odsPrinter << ' ';
  printForeachMatchSymbols(_odsPrinter, *this, getMatchersAttr(), getActionsAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("restrict_root");
  elidedAttrs.push_back("matchers");
  elidedAttrs.push_back("actions");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getRestrictRootAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("restrict_root");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getRoot().getType()), ::llvm::ArrayRef<::mlir::Type>(getUpdated().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ForeachMatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ForeachOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ForeachOpGenericAdaptorBase::ForeachOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.foreach", odsAttrs.getContext());
}

ForeachOpGenericAdaptorBase::ForeachOpGenericAdaptorBase(ForeachOp op) : ForeachOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ForeachOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ForeachOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ForeachOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange ForeachOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ForeachOpAdaptor::ForeachOpAdaptor(ForeachOp op) : ForeachOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ForeachOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForeachOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ForeachOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ForeachOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ForeachOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
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

::mlir::Region &ForeachOp::getBody() {
  return (*this)->getRegion(0);
}

void ForeachOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void ForeachOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ForeachOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps0(*this, region, "body", index++)))
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
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> resultsTypes;
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (::mlir::succeeded(parser.parseOptionalArrow())) {

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  }

  if (parser.parseRegion(*bodyRegion))
    return ::mlir::failure();

  ensureTerminator(*bodyRegion, parser.getBuilder(), result.location);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addRegion(std::move(bodyRegion));
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForeachOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (!getResults().empty()) {
    _odsPrinter << ' ' << "->";
    _odsPrinter << ' ';
    _odsPrinter << getResults().getTypes();
  }
  _odsPrinter << ' ';

  {
    bool printTerminator = true;
    if (auto *term = getBody().empty() ? nullptr : getBody().begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(getBody(), /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ForeachOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetConsumersOfResult definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetConsumersOfResultGenericAdaptorBase::GetConsumersOfResultGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_consumers_of_result", odsAttrs.getContext());
}

GetConsumersOfResultGenericAdaptorBase::GetConsumersOfResultGenericAdaptorBase(GetConsumersOfResult op) : GetConsumersOfResultGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetConsumersOfResultGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetConsumersOfResultGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr GetConsumersOfResultGenericAdaptorBase::getResultNumberAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().result_number);
  return attr;
}

uint64_t GetConsumersOfResultGenericAdaptorBase::getResultNumber() {
  auto attr = getResultNumberAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
GetConsumersOfResultAdaptor::GetConsumersOfResultAdaptor(GetConsumersOfResult op) : GetConsumersOfResultGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetConsumersOfResultAdaptor::verify(::mlir::Location loc) {
  auto tblgen_result_number = getProperties().result_number; (void)tblgen_result_number;
  if (!tblgen_result_number) return emitError(loc, "'transform.get_consumers_of_result' op ""requires attribute 'result_number'");

  if (tblgen_result_number && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_result_number))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_result_number).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.get_consumers_of_result' op ""attribute 'result_number' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetConsumersOfResult::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetConsumersOfResult::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetConsumersOfResult::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetConsumersOfResult::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetConsumersOfResult::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetConsumersOfResult::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetConsumersOfResult::getConsumers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetConsumersOfResult::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.result_number;
       auto attr = dict.get("result_number");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for result_number in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `result_number` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetConsumersOfResult::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.result_number;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("result_number",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetConsumersOfResult::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.result_number.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetConsumersOfResult::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "result_number")
      return prop.result_number;
  return std::nullopt;
}

void GetConsumersOfResult::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "result_number") {
       prop.result_number = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.result_number)>>(value);
       return;
    }
}

void GetConsumersOfResult::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.result_number) attrs.append("result_number", prop.result_number);
}

::mlir::LogicalResult GetConsumersOfResult::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getResultNumberAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps5(attr, "result_number", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetConsumersOfResult::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.result_number)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetConsumersOfResult::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.result_number);
}

::mlir::IntegerAttr GetConsumersOfResult::getResultNumberAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().result_number);
}

uint64_t GetConsumersOfResult::getResultNumber() {
  auto attr = getResultNumberAttr();
  return attr.getValue().getZExtValue();
}

void GetConsumersOfResult::setResultNumberAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getResultNumberAttrName(), attr);
}

void GetConsumersOfResult::setResultNumber(uint64_t attrValue) {
  (*this)->setAttr(getResultNumberAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void GetConsumersOfResult::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type consumers, ::mlir::Value target, ::mlir::IntegerAttr result_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().result_number = result_number;
  odsState.addTypes(consumers);
}

void GetConsumersOfResult::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr result_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().result_number = result_number;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetConsumersOfResult::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type consumers, ::mlir::Value target, uint64_t result_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().result_number = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), result_number);
  odsState.addTypes(consumers);
}

void GetConsumersOfResult::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t result_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().result_number = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), result_number);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetConsumersOfResult::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetConsumersOfResult::verifyInvariantsImpl() {
  auto tblgen_result_number = getProperties().result_number; (void)tblgen_result_number;
  if (!tblgen_result_number) return emitOpError("requires attribute 'result_number'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps5(*this, tblgen_result_number, "result_number")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetConsumersOfResult::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetConsumersOfResult::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::IntegerAttr result_numberAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(result_numberAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (result_numberAttr) result.getOrAddProperties<GetConsumersOfResult::Properties>().result_number = result_numberAttr;
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetConsumersOfResult::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getResultNumberAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("result_number");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetConsumersOfResult)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetDefiningOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetDefiningOpGenericAdaptorBase::GetDefiningOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_defining_op", odsAttrs.getContext());
}

GetDefiningOpGenericAdaptorBase::GetDefiningOpGenericAdaptorBase(GetDefiningOp op) : GetDefiningOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetDefiningOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetDefiningOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GetDefiningOpAdaptor::GetDefiningOpAdaptor(GetDefiningOp op) : GetDefiningOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetDefiningOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetDefiningOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetDefiningOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> GetDefiningOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetDefiningOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetDefiningOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetDefiningOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetDefiningOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void GetDefiningOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(result);
}

void GetDefiningOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetDefiningOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetDefiningOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetDefiningOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetDefiningOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetDefiningOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetDefiningOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetOperandOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetOperandOpGenericAdaptorBase::GetOperandOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_operand", odsAttrs.getContext());
}

GetOperandOpGenericAdaptorBase::GetOperandOpGenericAdaptorBase(GetOperandOp op) : GetOperandOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetOperandOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetOperandOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr GetOperandOpGenericAdaptorBase::getRawPositionListAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
  return attr;
}

::llvm::ArrayRef<int64_t> GetOperandOpGenericAdaptorBase::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

::mlir::UnitAttr GetOperandOpGenericAdaptorBase::getIsInvertedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetOperandOpGenericAdaptorBase::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr GetOperandOpGenericAdaptorBase::getIsAllAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetOperandOpGenericAdaptorBase::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
GetOperandOpAdaptor::GetOperandOpAdaptor(GetOperandOp op) : GetOperandOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetOperandOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitError(loc, "'transform.get_operand' op ""requires attribute 'raw_position_list'");

  if (tblgen_raw_position_list && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_raw_position_list))))
    return emitError(loc, "'transform.get_operand' op ""attribute 'raw_position_list' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_is_inverted && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_inverted))))
    return emitError(loc, "'transform.get_operand' op ""attribute 'is_inverted' failed to satisfy constraint: unit attribute");

  if (tblgen_is_all && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_all))))
    return emitError(loc, "'transform.get_operand' op ""attribute 'is_all' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetOperandOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetOperandOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetOperandOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetOperandOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetOperandOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetOperandOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> GetOperandOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetOperandOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.is_all;
       auto attr = dict.get("is_all");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for is_all in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_all` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.is_inverted;
       auto attr = dict.get("is_inverted");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for is_inverted in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_inverted` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.raw_position_list;
       auto attr = dict.get("raw_position_list");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for raw_position_list in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `raw_position_list` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetOperandOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.is_all;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_all",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.is_inverted;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_inverted",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.raw_position_list;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("raw_position_list",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetOperandOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.is_all.getAsOpaquePointer()), 
    llvm::hash_value(prop.is_inverted.getAsOpaquePointer()), 
    llvm::hash_value(prop.raw_position_list.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetOperandOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "is_all")
      return prop.is_all;

    if (name == "is_inverted")
      return prop.is_inverted;

    if (name == "raw_position_list")
      return prop.raw_position_list;
  return std::nullopt;
}

void GetOperandOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "is_all") {
       prop.is_all = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_all)>>(value);
       return;
    }

    if (name == "is_inverted") {
       prop.is_inverted = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_inverted)>>(value);
       return;
    }

    if (name == "raw_position_list") {
       prop.raw_position_list = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.raw_position_list)>>(value);
       return;
    }
}

void GetOperandOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.is_all) attrs.append("is_all", prop.is_all);

    if (prop.is_inverted) attrs.append("is_inverted", prop.is_inverted);

    if (prop.raw_position_list) attrs.append("raw_position_list", prop.raw_position_list);
}

::mlir::LogicalResult GetOperandOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsAllAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "is_all", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsInvertedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "is_inverted", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRawPositionListAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps6(attr, "raw_position_list", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetOperandOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.is_all)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.is_inverted)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.raw_position_list)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetOperandOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.is_all);

  writer.writeOptionalAttribute(prop.is_inverted);
  writer.writeAttribute(prop.raw_position_list);
}

::mlir::DenseI64ArrayAttr GetOperandOp::getRawPositionListAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
}

::llvm::ArrayRef<int64_t> GetOperandOp::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

::mlir::UnitAttr GetOperandOp::getIsInvertedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
}

bool GetOperandOp::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr GetOperandOp::getIsAllAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
}

bool GetOperandOp::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void GetOperandOp::setRawPositionListAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getRawPositionListAttrName(), attr);
}

void GetOperandOp::setRawPositionList(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getRawPositionListAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void GetOperandOp::setIsInvertedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsInvertedAttrName(), attr);
}

void GetOperandOp::setIsInverted(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsInvertedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsInvertedAttrName());
}

void GetOperandOp::setIsAllAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsAllAttrName(), attr);
}

void GetOperandOp::setIsAll(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsAllAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsAllAttrName());
}

::mlir::Attribute GetOperandOp::removeIsInvertedAttr() {
    auto &attr = getProperties().is_inverted;
    attr = {};
    return attr;
}

::mlir::Attribute GetOperandOp::removeIsAllAttr() {
    auto &attr = getProperties().is_all;
    attr = {};
    return attr;
}

void GetOperandOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  odsState.addTypes(result);
}

void GetOperandOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetOperandOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void GetOperandOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetOperandOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetOperandOp::verifyInvariantsImpl() {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitOpError("requires attribute 'raw_position_list'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps6(*this, tblgen_raw_position_list, "raw_position_list")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_is_inverted, "is_inverted")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_is_all, "is_all")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetOperandOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult GetOperandOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr raw_position_listAttr;
  ::mlir::UnitAttr is_invertedAttr;
  ::mlir::UnitAttr is_allAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();
  {
    auto odsResult = parseTransformMatchDims(parser, raw_position_listAttr, is_invertedAttr, is_allAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<GetOperandOp::Properties>().raw_position_list = raw_position_listAttr;
    if (is_invertedAttr)
      result.getOrAddProperties<GetOperandOp::Properties>().is_inverted = is_invertedAttr;
    if (is_allAttr)
      result.getOrAddProperties<GetOperandOp::Properties>().is_all = is_allAttr;
  }
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetOperandOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << "[";
  printTransformMatchDims(_odsPrinter, *this, getRawPositionListAttr(), getIsInvertedAttr(), getIsAllAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("raw_position_list");
  elidedAttrs.push_back("is_inverted");
  elidedAttrs.push_back("is_all");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsInvertedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_inverted");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsAllAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_all");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetOperandOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetParentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetParentOpGenericAdaptorBase::GetParentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_parent_op", odsAttrs.getContext());
}

GetParentOpGenericAdaptorBase::GetParentOpGenericAdaptorBase(GetParentOp op) : GetParentOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetParentOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetParentOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr GetParentOpGenericAdaptorBase::getIsolatedFromAboveAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().isolated_from_above);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetParentOpGenericAdaptorBase::getIsolatedFromAbove() {
  auto attr = getIsolatedFromAboveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr GetParentOpGenericAdaptorBase::getAllowEmptyResultsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().allow_empty_results);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetParentOpGenericAdaptorBase::getAllowEmptyResults() {
  auto attr = getAllowEmptyResultsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::StringAttr GetParentOpGenericAdaptorBase::getOpNameAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().op_name);
  return attr;
}

::std::optional< ::llvm::StringRef > GetParentOpGenericAdaptorBase::getOpName() {
  auto attr = getOpNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr GetParentOpGenericAdaptorBase::getDeduplicateAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().deduplicate);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetParentOpGenericAdaptorBase::getDeduplicate() {
  auto attr = getDeduplicateAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::IntegerAttr GetParentOpGenericAdaptorBase::getNthParentAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().nth_parent);
  return attr;
}

uint64_t GetParentOpGenericAdaptorBase::getNthParent() {
  auto attr = getNthParentAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
GetParentOpAdaptor::GetParentOpAdaptor(GetParentOp op) : GetParentOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetParentOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_allow_empty_results = getProperties().allow_empty_results; (void)tblgen_allow_empty_results;
  auto tblgen_deduplicate = getProperties().deduplicate; (void)tblgen_deduplicate;
  auto tblgen_isolated_from_above = getProperties().isolated_from_above; (void)tblgen_isolated_from_above;
  auto tblgen_nth_parent = getProperties().nth_parent; (void)tblgen_nth_parent;
  auto tblgen_op_name = getProperties().op_name; (void)tblgen_op_name;

  if (tblgen_isolated_from_above && !((::llvm::isa<::mlir::UnitAttr>(tblgen_isolated_from_above))))
    return emitError(loc, "'transform.get_parent_op' op ""attribute 'isolated_from_above' failed to satisfy constraint: unit attribute");

  if (tblgen_allow_empty_results && !((::llvm::isa<::mlir::UnitAttr>(tblgen_allow_empty_results))))
    return emitError(loc, "'transform.get_parent_op' op ""attribute 'allow_empty_results' failed to satisfy constraint: unit attribute");

  if (tblgen_op_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_op_name))))
    return emitError(loc, "'transform.get_parent_op' op ""attribute 'op_name' failed to satisfy constraint: string attribute");

  if (tblgen_deduplicate && !((::llvm::isa<::mlir::UnitAttr>(tblgen_deduplicate))))
    return emitError(loc, "'transform.get_parent_op' op ""attribute 'deduplicate' failed to satisfy constraint: unit attribute");

  if (tblgen_nth_parent && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_nth_parent))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_nth_parent).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_nth_parent).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.get_parent_op' op ""attribute 'nth_parent' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetParentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetParentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetParentOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetParentOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetParentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetParentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetParentOp::getParent() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetParentOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.allow_empty_results;
       auto attr = dict.get("allow_empty_results");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for allow_empty_results in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `allow_empty_results` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.deduplicate;
       auto attr = dict.get("deduplicate");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for deduplicate in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `deduplicate` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.isolated_from_above;
       auto attr = dict.get("isolated_from_above");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for isolated_from_above in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `isolated_from_above` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.nth_parent;
       auto attr = dict.get("nth_parent");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nth_parent in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nth_parent` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.op_name;
       auto attr = dict.get("op_name");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for op_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `op_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetParentOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.allow_empty_results;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("allow_empty_results",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.deduplicate;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("deduplicate",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.isolated_from_above;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("isolated_from_above",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.nth_parent;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nth_parent",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.op_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetParentOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.allow_empty_results.getAsOpaquePointer()), 
    llvm::hash_value(prop.deduplicate.getAsOpaquePointer()), 
    llvm::hash_value(prop.isolated_from_above.getAsOpaquePointer()), 
    llvm::hash_value(prop.nth_parent.getAsOpaquePointer()), 
    llvm::hash_value(prop.op_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetParentOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "allow_empty_results")
      return prop.allow_empty_results;

    if (name == "deduplicate")
      return prop.deduplicate;

    if (name == "isolated_from_above")
      return prop.isolated_from_above;

    if (name == "nth_parent")
      return prop.nth_parent;

    if (name == "op_name")
      return prop.op_name;
  return std::nullopt;
}

void GetParentOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "allow_empty_results") {
       prop.allow_empty_results = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.allow_empty_results)>>(value);
       return;
    }

    if (name == "deduplicate") {
       prop.deduplicate = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.deduplicate)>>(value);
       return;
    }

    if (name == "isolated_from_above") {
       prop.isolated_from_above = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.isolated_from_above)>>(value);
       return;
    }

    if (name == "nth_parent") {
       prop.nth_parent = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nth_parent)>>(value);
       return;
    }

    if (name == "op_name") {
       prop.op_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op_name)>>(value);
       return;
    }
}

void GetParentOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.allow_empty_results) attrs.append("allow_empty_results", prop.allow_empty_results);

    if (prop.deduplicate) attrs.append("deduplicate", prop.deduplicate);

    if (prop.isolated_from_above) attrs.append("isolated_from_above", prop.isolated_from_above);

    if (prop.nth_parent) attrs.append("nth_parent", prop.nth_parent);

    if (prop.op_name) attrs.append("op_name", prop.op_name);
}

::mlir::LogicalResult GetParentOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAllowEmptyResultsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "allow_empty_results", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDeduplicateAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "deduplicate", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsolatedFromAboveAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "isolated_from_above", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNthParentAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps7(attr, "nth_parent", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOpNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "op_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetParentOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.allow_empty_results)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.deduplicate)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.isolated_from_above)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.nth_parent)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.op_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetParentOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.allow_empty_results);

  writer.writeOptionalAttribute(prop.deduplicate);

  writer.writeOptionalAttribute(prop.isolated_from_above);

  writer.writeOptionalAttribute(prop.nth_parent);

  writer.writeOptionalAttribute(prop.op_name);
}

::mlir::UnitAttr GetParentOp::getIsolatedFromAboveAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().isolated_from_above);
}

bool GetParentOp::getIsolatedFromAbove() {
  auto attr = getIsolatedFromAboveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr GetParentOp::getAllowEmptyResultsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().allow_empty_results);
}

bool GetParentOp::getAllowEmptyResults() {
  auto attr = getAllowEmptyResultsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::StringAttr GetParentOp::getOpNameAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().op_name);
}

::std::optional< ::llvm::StringRef > GetParentOp::getOpName() {
  auto attr = getOpNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr GetParentOp::getDeduplicateAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().deduplicate);
}

bool GetParentOp::getDeduplicate() {
  auto attr = getDeduplicateAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::IntegerAttr GetParentOp::getNthParentAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().nth_parent);
}

uint64_t GetParentOp::getNthParent() {
  auto attr = getNthParentAttr();
  return attr.getValue().getZExtValue();
}

void GetParentOp::setIsolatedFromAboveAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsolatedFromAboveAttrName(), attr);
}

void GetParentOp::setIsolatedFromAbove(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsolatedFromAboveAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsolatedFromAboveAttrName());
}

void GetParentOp::setAllowEmptyResultsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getAllowEmptyResultsAttrName(), attr);
}

void GetParentOp::setAllowEmptyResults(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getAllowEmptyResultsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getAllowEmptyResultsAttrName());
}

void GetParentOp::setOpNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getOpNameAttrName(), attr);
}

void GetParentOp::setOpName(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOpNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getOpNameAttrName());
}

void GetParentOp::setDeduplicateAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDeduplicateAttrName(), attr);
}

void GetParentOp::setDeduplicate(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDeduplicateAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDeduplicateAttrName());
}

void GetParentOp::setNthParentAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNthParentAttrName(), attr);
}

void GetParentOp::setNthParent(uint64_t attrValue) {
  (*this)->setAttr(getNthParentAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

::mlir::Attribute GetParentOp::removeIsolatedFromAboveAttr() {
    auto &attr = getProperties().isolated_from_above;
    attr = {};
    return attr;
}

::mlir::Attribute GetParentOp::removeAllowEmptyResultsAttr() {
    auto &attr = getProperties().allow_empty_results;
    attr = {};
    return attr;
}

::mlir::Attribute GetParentOp::removeOpNameAttr() {
    auto &attr = getProperties().op_name;
    attr = {};
    return attr;
}

::mlir::Attribute GetParentOp::removeDeduplicateAttr() {
    auto &attr = getProperties().deduplicate;
    attr = {};
    return attr;
}

void GetParentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, /*optional*/::mlir::UnitAttr isolated_from_above, /*optional*/::mlir::UnitAttr allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/::mlir::UnitAttr deduplicate, ::mlir::IntegerAttr nth_parent) {
  odsState.addOperands(target);
  if (isolated_from_above) {
    odsState.getOrAddProperties<Properties>().isolated_from_above = isolated_from_above;
  }
  if (allow_empty_results) {
    odsState.getOrAddProperties<Properties>().allow_empty_results = allow_empty_results;
  }
  if (op_name) {
    odsState.getOrAddProperties<Properties>().op_name = op_name;
  }
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = deduplicate;
  }
  if (nth_parent) {
    odsState.getOrAddProperties<Properties>().nth_parent = nth_parent;
  }
  odsState.addTypes(parent);
}

void GetParentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr isolated_from_above, /*optional*/::mlir::UnitAttr allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/::mlir::UnitAttr deduplicate, ::mlir::IntegerAttr nth_parent) {
  odsState.addOperands(target);
  if (isolated_from_above) {
    odsState.getOrAddProperties<Properties>().isolated_from_above = isolated_from_above;
  }
  if (allow_empty_results) {
    odsState.getOrAddProperties<Properties>().allow_empty_results = allow_empty_results;
  }
  if (op_name) {
    odsState.getOrAddProperties<Properties>().op_name = op_name;
  }
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = deduplicate;
  }
  if (nth_parent) {
    odsState.getOrAddProperties<Properties>().nth_parent = nth_parent;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetParentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, /*optional*/bool isolated_from_above, /*optional*/bool allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/bool deduplicate, uint64_t nth_parent) {
  odsState.addOperands(target);
  if (isolated_from_above) {
    odsState.getOrAddProperties<Properties>().isolated_from_above = ((isolated_from_above) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (allow_empty_results) {
    odsState.getOrAddProperties<Properties>().allow_empty_results = ((allow_empty_results) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (op_name) {
    odsState.getOrAddProperties<Properties>().op_name = op_name;
  }
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = ((deduplicate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().nth_parent = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), nth_parent);
  odsState.addTypes(parent);
}

void GetParentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool isolated_from_above, /*optional*/bool allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/bool deduplicate, uint64_t nth_parent) {
  odsState.addOperands(target);
  if (isolated_from_above) {
    odsState.getOrAddProperties<Properties>().isolated_from_above = ((isolated_from_above) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (allow_empty_results) {
    odsState.getOrAddProperties<Properties>().allow_empty_results = ((allow_empty_results) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (op_name) {
    odsState.getOrAddProperties<Properties>().op_name = op_name;
  }
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = ((deduplicate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().nth_parent = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), nth_parent);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetParentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetParentOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.nth_parent)
    properties.nth_parent = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
}

::mlir::LogicalResult GetParentOp::verifyInvariantsImpl() {
  auto tblgen_allow_empty_results = getProperties().allow_empty_results; (void)tblgen_allow_empty_results;
  auto tblgen_deduplicate = getProperties().deduplicate; (void)tblgen_deduplicate;
  auto tblgen_isolated_from_above = getProperties().isolated_from_above; (void)tblgen_isolated_from_above;
  auto tblgen_nth_parent = getProperties().nth_parent; (void)tblgen_nth_parent;
  auto tblgen_op_name = getProperties().op_name; (void)tblgen_op_name;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_isolated_from_above, "isolated_from_above")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_allow_empty_results, "allow_empty_results")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_op_name, "op_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_deduplicate, "deduplicate")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps7(*this, tblgen_nth_parent, "nth_parent")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetParentOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetParentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetParentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsolatedFromAboveAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("isolated_from_above");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllowEmptyResultsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("allow_empty_results");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDeduplicateAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("deduplicate");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNthParentAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("nth_parent");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetParentOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetProducerOfOperand definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetProducerOfOperandGenericAdaptorBase::GetProducerOfOperandGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_producer_of_operand", odsAttrs.getContext());
}

GetProducerOfOperandGenericAdaptorBase::GetProducerOfOperandGenericAdaptorBase(GetProducerOfOperand op) : GetProducerOfOperandGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetProducerOfOperandGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetProducerOfOperandGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr GetProducerOfOperandGenericAdaptorBase::getOperandNumberAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().operand_number);
  return attr;
}

uint64_t GetProducerOfOperandGenericAdaptorBase::getOperandNumber() {
  auto attr = getOperandNumberAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
GetProducerOfOperandAdaptor::GetProducerOfOperandAdaptor(GetProducerOfOperand op) : GetProducerOfOperandGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetProducerOfOperandAdaptor::verify(::mlir::Location loc) {
  auto tblgen_operand_number = getProperties().operand_number; (void)tblgen_operand_number;
  if (!tblgen_operand_number) return emitError(loc, "'transform.get_producer_of_operand' op ""requires attribute 'operand_number'");

  if (tblgen_operand_number && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_operand_number))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_operand_number).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.get_producer_of_operand' op ""attribute 'operand_number' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetProducerOfOperand::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetProducerOfOperand::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetProducerOfOperand::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetProducerOfOperand::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetProducerOfOperand::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetProducerOfOperand::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetProducerOfOperand::getProducer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetProducerOfOperand::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.operand_number;
       auto attr = dict.get("operand_number");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for operand_number in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `operand_number` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetProducerOfOperand::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operand_number;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("operand_number",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetProducerOfOperand::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.operand_number.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetProducerOfOperand::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_number")
      return prop.operand_number;
  return std::nullopt;
}

void GetProducerOfOperand::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "operand_number") {
       prop.operand_number = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.operand_number)>>(value);
       return;
    }
}

void GetProducerOfOperand::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.operand_number) attrs.append("operand_number", prop.operand_number);
}

::mlir::LogicalResult GetProducerOfOperand::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOperandNumberAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps5(attr, "operand_number", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetProducerOfOperand::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.operand_number)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetProducerOfOperand::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.operand_number);
}

::mlir::IntegerAttr GetProducerOfOperand::getOperandNumberAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().operand_number);
}

uint64_t GetProducerOfOperand::getOperandNumber() {
  auto attr = getOperandNumberAttr();
  return attr.getValue().getZExtValue();
}

void GetProducerOfOperand::setOperandNumberAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getOperandNumberAttrName(), attr);
}

void GetProducerOfOperand::setOperandNumber(uint64_t attrValue) {
  (*this)->setAttr(getOperandNumberAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void GetProducerOfOperand::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type producer, ::mlir::Value target, ::mlir::IntegerAttr operand_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operand_number = operand_number;
  odsState.addTypes(producer);
}

void GetProducerOfOperand::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr operand_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operand_number = operand_number;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetProducerOfOperand::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type producer, ::mlir::Value target, uint64_t operand_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operand_number = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), operand_number);
  odsState.addTypes(producer);
}

void GetProducerOfOperand::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t operand_number) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operand_number = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), operand_number);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetProducerOfOperand::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetProducerOfOperand::verifyInvariantsImpl() {
  auto tblgen_operand_number = getProperties().operand_number; (void)tblgen_operand_number;
  if (!tblgen_operand_number) return emitOpError("requires attribute 'operand_number'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps5(*this, tblgen_operand_number, "operand_number")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetProducerOfOperand::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetProducerOfOperand::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::IntegerAttr operand_numberAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(operand_numberAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (operand_numberAttr) result.getOrAddProperties<GetProducerOfOperand::Properties>().operand_number = operand_numberAttr;
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetProducerOfOperand::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getOperandNumberAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operand_number");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetProducerOfOperand)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetResultOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetResultOpGenericAdaptorBase::GetResultOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_result", odsAttrs.getContext());
}

GetResultOpGenericAdaptorBase::GetResultOpGenericAdaptorBase(GetResultOp op) : GetResultOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetResultOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetResultOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr GetResultOpGenericAdaptorBase::getRawPositionListAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
  return attr;
}

::llvm::ArrayRef<int64_t> GetResultOpGenericAdaptorBase::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

::mlir::UnitAttr GetResultOpGenericAdaptorBase::getIsInvertedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetResultOpGenericAdaptorBase::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr GetResultOpGenericAdaptorBase::getIsAllAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetResultOpGenericAdaptorBase::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
GetResultOpAdaptor::GetResultOpAdaptor(GetResultOp op) : GetResultOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetResultOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitError(loc, "'transform.get_result' op ""requires attribute 'raw_position_list'");

  if (tblgen_raw_position_list && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_raw_position_list))))
    return emitError(loc, "'transform.get_result' op ""attribute 'raw_position_list' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_is_inverted && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_inverted))))
    return emitError(loc, "'transform.get_result' op ""attribute 'is_inverted' failed to satisfy constraint: unit attribute");

  if (tblgen_is_all && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_all))))
    return emitError(loc, "'transform.get_result' op ""attribute 'is_all' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetResultOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetResultOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetResultOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetResultOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetResultOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetResultOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> GetResultOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetResultOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.is_all;
       auto attr = dict.get("is_all");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for is_all in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_all` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.is_inverted;
       auto attr = dict.get("is_inverted");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for is_inverted in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_inverted` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.raw_position_list;
       auto attr = dict.get("raw_position_list");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for raw_position_list in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `raw_position_list` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetResultOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.is_all;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_all",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.is_inverted;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_inverted",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.raw_position_list;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("raw_position_list",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetResultOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.is_all.getAsOpaquePointer()), 
    llvm::hash_value(prop.is_inverted.getAsOpaquePointer()), 
    llvm::hash_value(prop.raw_position_list.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetResultOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "is_all")
      return prop.is_all;

    if (name == "is_inverted")
      return prop.is_inverted;

    if (name == "raw_position_list")
      return prop.raw_position_list;
  return std::nullopt;
}

void GetResultOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "is_all") {
       prop.is_all = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_all)>>(value);
       return;
    }

    if (name == "is_inverted") {
       prop.is_inverted = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_inverted)>>(value);
       return;
    }

    if (name == "raw_position_list") {
       prop.raw_position_list = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.raw_position_list)>>(value);
       return;
    }
}

void GetResultOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.is_all) attrs.append("is_all", prop.is_all);

    if (prop.is_inverted) attrs.append("is_inverted", prop.is_inverted);

    if (prop.raw_position_list) attrs.append("raw_position_list", prop.raw_position_list);
}

::mlir::LogicalResult GetResultOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsAllAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "is_all", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsInvertedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "is_inverted", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRawPositionListAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps6(attr, "raw_position_list", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetResultOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.is_all)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.is_inverted)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.raw_position_list)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetResultOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.is_all);

  writer.writeOptionalAttribute(prop.is_inverted);
  writer.writeAttribute(prop.raw_position_list);
}

::mlir::DenseI64ArrayAttr GetResultOp::getRawPositionListAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
}

::llvm::ArrayRef<int64_t> GetResultOp::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

::mlir::UnitAttr GetResultOp::getIsInvertedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
}

bool GetResultOp::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr GetResultOp::getIsAllAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
}

bool GetResultOp::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void GetResultOp::setRawPositionListAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getRawPositionListAttrName(), attr);
}

void GetResultOp::setRawPositionList(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getRawPositionListAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void GetResultOp::setIsInvertedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsInvertedAttrName(), attr);
}

void GetResultOp::setIsInverted(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsInvertedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsInvertedAttrName());
}

void GetResultOp::setIsAllAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsAllAttrName(), attr);
}

void GetResultOp::setIsAll(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsAllAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsAllAttrName());
}

::mlir::Attribute GetResultOp::removeIsInvertedAttr() {
    auto &attr = getProperties().is_inverted;
    attr = {};
    return attr;
}

::mlir::Attribute GetResultOp::removeIsAllAttr() {
    auto &attr = getProperties().is_all;
    attr = {};
    return attr;
}

void GetResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  odsState.addTypes(result);
}

void GetResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void GetResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetResultOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetResultOp::verifyInvariantsImpl() {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitOpError("requires attribute 'raw_position_list'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps6(*this, tblgen_raw_position_list, "raw_position_list")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_is_inverted, "is_inverted")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_is_all, "is_all")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetResultOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult GetResultOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr raw_position_listAttr;
  ::mlir::UnitAttr is_invertedAttr;
  ::mlir::UnitAttr is_allAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();
  {
    auto odsResult = parseTransformMatchDims(parser, raw_position_listAttr, is_invertedAttr, is_allAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<GetResultOp::Properties>().raw_position_list = raw_position_listAttr;
    if (is_invertedAttr)
      result.getOrAddProperties<GetResultOp::Properties>().is_inverted = is_invertedAttr;
    if (is_allAttr)
      result.getOrAddProperties<GetResultOp::Properties>().is_all = is_allAttr;
  }
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetResultOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << "[";
  printTransformMatchDims(_odsPrinter, *this, getRawPositionListAttr(), getIsInvertedAttr(), getIsAllAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("raw_position_list");
  elidedAttrs.push_back("is_inverted");
  elidedAttrs.push_back("is_all");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsInvertedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_inverted");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsAllAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_all");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetResultOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetTypeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetTypeOpGenericAdaptorBase::GetTypeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.get_type", odsAttrs.getContext());
}

GetTypeOpGenericAdaptorBase::GetTypeOpGenericAdaptorBase(GetTypeOp op) : GetTypeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GetTypeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetTypeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr GetTypeOpGenericAdaptorBase::getElementalAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().elemental);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GetTypeOpGenericAdaptorBase::getElemental() {
  auto attr = getElementalAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
GetTypeOpAdaptor::GetTypeOpAdaptor(GetTypeOp op) : GetTypeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GetTypeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_elemental = getProperties().elemental; (void)tblgen_elemental;

  if (tblgen_elemental && !((::llvm::isa<::mlir::UnitAttr>(tblgen_elemental))))
    return emitError(loc, "'transform.get_type' op ""attribute 'elemental' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetTypeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetTypeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> GetTypeOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GetTypeOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GetTypeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetTypeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> GetTypeOp::getTypeParam() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetTypeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.elemental;
       auto attr = dict.get("elemental");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for elemental in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `elemental` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GetTypeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.elemental;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("elemental",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GetTypeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.elemental.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetTypeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "elemental")
      return prop.elemental;
  return std::nullopt;
}

void GetTypeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "elemental") {
       prop.elemental = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.elemental)>>(value);
       return;
    }
}

void GetTypeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.elemental) attrs.append("elemental", prop.elemental);
}

::mlir::LogicalResult GetTypeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getElementalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "elemental", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetTypeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.elemental)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetTypeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.elemental);
}

::mlir::UnitAttr GetTypeOp::getElementalAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().elemental);
}

bool GetTypeOp::getElemental() {
  auto attr = getElementalAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void GetTypeOp::setElementalAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getElementalAttrName(), attr);
}

void GetTypeOp::setElemental(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getElementalAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getElementalAttrName());
}

::mlir::Attribute GetTypeOp::removeElementalAttr() {
    auto &attr = getProperties().elemental;
    attr = {};
    return attr;
}

void GetTypeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type type_param, ::mlir::Value value, /*optional*/::mlir::UnitAttr elemental) {
  odsState.addOperands(value);
  if (elemental) {
    odsState.getOrAddProperties<Properties>().elemental = elemental;
  }
  odsState.addTypes(type_param);
}

void GetTypeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, /*optional*/::mlir::UnitAttr elemental) {
  odsState.addOperands(value);
  if (elemental) {
    odsState.getOrAddProperties<Properties>().elemental = elemental;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetTypeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type type_param, ::mlir::Value value, /*optional*/bool elemental) {
  odsState.addOperands(value);
  if (elemental) {
    odsState.getOrAddProperties<Properties>().elemental = ((elemental) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(type_param);
}

void GetTypeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, /*optional*/bool elemental) {
  odsState.addOperands(value);
  if (elemental) {
    odsState.getOrAddProperties<Properties>().elemental = ((elemental) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetTypeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GetTypeOp::verifyInvariantsImpl() {
  auto tblgen_elemental = getProperties().elemental; (void)tblgen_elemental;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_elemental, "elemental")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetTypeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetTypeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("elemental"))) {
    result.getOrAddProperties<GetTypeOp::Properties>().elemental = parser.getBuilder().getUnitAttr();  }

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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(valueOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetTypeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getElementalAttr()) {
    _odsPrinter << ' ' << "elemental";
  }
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("elemental");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getElementalAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("elemental");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetTypeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::IncludeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IncludeOpGenericAdaptorBase::IncludeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.include", odsAttrs.getContext());
}

IncludeOpGenericAdaptorBase::IncludeOpGenericAdaptorBase(IncludeOp op) : IncludeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IncludeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr IncludeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr IncludeOpGenericAdaptorBase::getTargetAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().target);
  return attr;
}

::mlir::SymbolRefAttr IncludeOpGenericAdaptorBase::getTarget() {
  auto attr = getTargetAttr();
  return attr;
}

::mlir::transform::FailurePropagationModeAttr IncludeOpGenericAdaptorBase::getFailurePropagationModeAttr() {
  auto attr = ::llvm::cast<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
  return attr;
}

::mlir::transform::FailurePropagationMode IncludeOpGenericAdaptorBase::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr.getValue();
}

} // namespace detail
IncludeOpAdaptor::IncludeOpAdaptor(IncludeOp op) : IncludeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IncludeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;
  if (!tblgen_failure_propagation_mode) return emitError(loc, "'transform.include' op ""requires attribute 'failure_propagation_mode'");
  auto tblgen_target = getProperties().target; (void)tblgen_target;
  if (!tblgen_target) return emitError(loc, "'transform.include' op ""requires attribute 'target'");

  if (tblgen_target && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_target))))
    return emitError(loc, "'transform.include' op ""attribute 'target' failed to satisfy constraint: symbol reference attribute");

  if (tblgen_failure_propagation_mode && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(tblgen_failure_propagation_mode))))
    return emitError(loc, "'transform.include' op ""attribute 'failure_propagation_mode' failed to satisfy constraint: Silenceable error propagation policy");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IncludeOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range IncludeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range IncludeOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange IncludeOp::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> IncludeOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range IncludeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range IncludeOp::getResults() {
  return getODSResults(0);
}

::mlir::LogicalResult IncludeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.failure_propagation_mode;
       auto attr = dict.get("failure_propagation_mode");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for failure_propagation_mode in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `failure_propagation_mode` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.target;
       auto attr = dict.get("target");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for target in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `target` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute IncludeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.failure_propagation_mode;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("failure_propagation_mode",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.target;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("target",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code IncludeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.failure_propagation_mode.getAsOpaquePointer()), 
    llvm::hash_value(prop.target.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> IncludeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "failure_propagation_mode")
      return prop.failure_propagation_mode;

    if (name == "target")
      return prop.target;
  return std::nullopt;
}

void IncludeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "failure_propagation_mode") {
       prop.failure_propagation_mode = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.failure_propagation_mode)>>(value);
       return;
    }

    if (name == "target") {
       prop.target = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.target)>>(value);
       return;
    }
}

void IncludeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.failure_propagation_mode) attrs.append("failure_propagation_mode", prop.failure_propagation_mode);

    if (prop.target) attrs.append("target", prop.target);
}

::mlir::LogicalResult IncludeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFailurePropagationModeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps8(attr, "failure_propagation_mode", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTargetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps3(attr, "target", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult IncludeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.failure_propagation_mode)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.target)))
    return ::mlir::failure();
  return ::mlir::success();
}

void IncludeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.failure_propagation_mode);
  writer.writeAttribute(prop.target);
}

::mlir::SymbolRefAttr IncludeOp::getTargetAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().target);
}

::mlir::SymbolRefAttr IncludeOp::getTarget() {
  auto attr = getTargetAttr();
  return attr;
}

::mlir::transform::FailurePropagationModeAttr IncludeOp::getFailurePropagationModeAttr() {
  return ::llvm::cast<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
}

::mlir::transform::FailurePropagationMode IncludeOp::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr.getValue();
}

void IncludeOp::setTargetAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getTargetAttrName(), attr);
}

void IncludeOp::setFailurePropagationModeAttr(::mlir::transform::FailurePropagationModeAttr attr) {
  (*this)->setAttr(getFailurePropagationModeAttrName(), attr);
}

void IncludeOp::setFailurePropagationMode(::mlir::transform::FailurePropagationMode attrValue) {
  (*this)->setAttr(getFailurePropagationModeAttrName(), ::mlir::transform::FailurePropagationModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void IncludeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::SymbolRefAttr target, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.getOrAddProperties<Properties>().target = target;
  odsState.getOrAddProperties<Properties>().failure_propagation_mode = failure_propagation_mode;
  odsState.addTypes(results);
}

void IncludeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::SymbolRefAttr target, ::mlir::transform::FailurePropagationMode failure_propagation_mode, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.getOrAddProperties<Properties>().target = target;
  odsState.getOrAddProperties<Properties>().failure_propagation_mode = ::mlir::transform::FailurePropagationModeAttr::get(odsBuilder.getContext(), failure_propagation_mode);
  odsState.addTypes(results);
}

void IncludeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IncludeOp::verifyInvariantsImpl() {
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;
  if (!tblgen_failure_propagation_mode) return emitOpError("requires attribute 'failure_propagation_mode'");
  auto tblgen_target = getProperties().target; (void)tblgen_target;
  if (!tblgen_target) return emitOpError("requires attribute 'target'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps3(*this, tblgen_target, "target")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps8(*this, tblgen_failure_propagation_mode, "failure_propagation_mode")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IncludeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IncludeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr targetAttr;
  ::mlir::transform::FailurePropagationModeAttr failure_propagation_modeAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc;
  (void)operandsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> operandsTypes;
  ::llvm::ArrayRef<::mlir::Type> resultsTypes;

  if (parser.parseCustomAttributeWithFallback(targetAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (targetAttr) result.getOrAddProperties<IncludeOp::Properties>().target = targetAttr;
  if (parser.parseKeyword("failures"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"propagate","suppress"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "failure_propagation_mode", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'failure_propagation_mode' [propagate, suppress]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::transform::symbolizeFailurePropagationMode(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "failure_propagation_mode attribute specification: \"" << attrStr << '"';;

      failure_propagation_modeAttr = ::mlir::transform::FailurePropagationModeAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<IncludeOp::Properties>().failure_propagation_mode = failure_propagation_modeAttr;
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
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

  ::mlir::FunctionType operands__results_functionType;
  if (parser.parseType(operands__results_functionType))
    return ::mlir::failure();
  operandsTypes = operands__results_functionType.getInputs();
  resultsTypes = operands__results_functionType.getResults();
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IncludeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getTargetAttr());
  _odsPrinter << ' ' << "failures";
  _odsPrinter << "(";

  {
    auto caseValue = getFailurePropagationMode();
    auto caseValueStr = stringifyFailurePropagationMode(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "(";
  _odsPrinter << getOperands();
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("target");
  elidedAttrs.push_back("failure_propagation_mode");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperands().getTypes(), getResults().getTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::IncludeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOperationEmptyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchOperationEmptyOpGenericAdaptorBase::MatchOperationEmptyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.match.operation_empty", odsAttrs.getContext());
}

MatchOperationEmptyOpGenericAdaptorBase::MatchOperationEmptyOpGenericAdaptorBase(MatchOperationEmptyOp op) : MatchOperationEmptyOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MatchOperationEmptyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatchOperationEmptyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MatchOperationEmptyOpAdaptor::MatchOperationEmptyOpAdaptor(MatchOperationEmptyOp op) : MatchOperationEmptyOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MatchOperationEmptyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchOperationEmptyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatchOperationEmptyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MatchOperationEmptyOp::getOperandHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MatchOperationEmptyOp::getOperandHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MatchOperationEmptyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatchOperationEmptyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MatchOperationEmptyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
}

void MatchOperationEmptyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchOperationEmptyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatchOperationEmptyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatchOperationEmptyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchOperationEmptyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(operand_handleRawOperands);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::Type operand_handleRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(operand_handleRawTypes);

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operand_handleRawTypes[0] = type;
  }
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOperationEmptyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperandHandle().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOperationEmptyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOperationNameOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchOperationNameOpGenericAdaptorBase::MatchOperationNameOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.match.operation_name", odsAttrs.getContext());
}

MatchOperationNameOpGenericAdaptorBase::MatchOperationNameOpGenericAdaptorBase(MatchOperationNameOp op) : MatchOperationNameOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MatchOperationNameOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatchOperationNameOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr MatchOperationNameOpGenericAdaptorBase::getOpNamesAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().op_names);
  return attr;
}

::mlir::ArrayAttr MatchOperationNameOpGenericAdaptorBase::getOpNames() {
  auto attr = getOpNamesAttr();
  return attr;
}

} // namespace detail
MatchOperationNameOpAdaptor::MatchOperationNameOpAdaptor(MatchOperationNameOp op) : MatchOperationNameOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MatchOperationNameOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_op_names = getProperties().op_names; (void)tblgen_op_names;
  if (!tblgen_op_names) return emitError(loc, "'transform.match.operation_name' op ""requires attribute 'op_names'");

  if (tblgen_op_names && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_op_names))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_op_names), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.match.operation_name' op ""attribute 'op_names' failed to satisfy constraint: string array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchOperationNameOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatchOperationNameOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MatchOperationNameOp::getOperandHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &MatchOperationNameOp::getOperandHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MatchOperationNameOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatchOperationNameOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult MatchOperationNameOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.op_names;
       auto attr = dict.get("op_names");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for op_names in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `op_names` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchOperationNameOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.op_names;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op_names",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchOperationNameOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.op_names.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchOperationNameOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "op_names")
      return prop.op_names;
  return std::nullopt;
}

void MatchOperationNameOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "op_names") {
       prop.op_names = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op_names)>>(value);
       return;
    }
}

void MatchOperationNameOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.op_names) attrs.append("op_names", prop.op_names);
}

::mlir::LogicalResult MatchOperationNameOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOpNamesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(attr, "op_names", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MatchOperationNameOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.op_names)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOperationNameOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.op_names);
}

::mlir::ArrayAttr MatchOperationNameOp::getOpNamesAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().op_names);
}

::mlir::ArrayAttr MatchOperationNameOp::getOpNames() {
  auto attr = getOpNamesAttr();
  return attr;
}

void MatchOperationNameOp::setOpNamesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOpNamesAttrName(), attr);
}

void MatchOperationNameOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle, ::mlir::ArrayAttr op_names) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().op_names = op_names;
}

void MatchOperationNameOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::ArrayAttr op_names) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().op_names = op_names;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchOperationNameOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatchOperationNameOp::verifyInvariantsImpl() {
  auto tblgen_op_names = getProperties().op_names; (void)tblgen_op_names;
  if (!tblgen_op_names) return emitOpError("requires attribute 'op_names'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps1(*this, tblgen_op_names, "op_names")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatchOperationNameOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchOperationNameOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(operand_handleRawOperands);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::ArrayAttr op_namesAttr;
  ::mlir::Type operand_handleRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(operand_handleRawTypes);

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperands[0]))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(op_namesAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (op_namesAttr) result.getOrAddProperties<MatchOperationNameOp::Properties>().op_names = op_namesAttr;
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
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operand_handleRawTypes[0] = type;
  }
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOperationNameOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getOpNamesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("op_names");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperandHandle().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOperationNameOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchParamCmpIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchParamCmpIOpGenericAdaptorBase::MatchParamCmpIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.match.param.cmpi", odsAttrs.getContext());
}

MatchParamCmpIOpGenericAdaptorBase::MatchParamCmpIOpGenericAdaptorBase(MatchParamCmpIOp op) : MatchParamCmpIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MatchParamCmpIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatchParamCmpIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::transform::MatchCmpIPredicateAttr MatchParamCmpIOpGenericAdaptorBase::getPredicateAttr() {
  auto attr = ::llvm::cast<::mlir::transform::MatchCmpIPredicateAttr>(getProperties().predicate);
  return attr;
}

::mlir::transform::MatchCmpIPredicate MatchParamCmpIOpGenericAdaptorBase::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

} // namespace detail
MatchParamCmpIOpAdaptor::MatchParamCmpIOpAdaptor(MatchParamCmpIOp op) : MatchParamCmpIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MatchParamCmpIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_predicate = getProperties().predicate; (void)tblgen_predicate;
  if (!tblgen_predicate) return emitError(loc, "'transform.match.param.cmpi' op ""requires attribute 'predicate'");

  if (tblgen_predicate && !((::llvm::isa<::mlir::transform::MatchCmpIPredicateAttr>(tblgen_predicate))))
    return emitError(loc, "'transform.match.param.cmpi' op ""attribute 'predicate' failed to satisfy constraint: allowed 32-bit signless integer cases: 0, 1, 2, 3, 4, 5");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchParamCmpIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatchParamCmpIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> MatchParamCmpIOp::getParam() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> MatchParamCmpIOp::getReference() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MatchParamCmpIOp::getParamMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MatchParamCmpIOp::getReferenceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MatchParamCmpIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatchParamCmpIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult MatchParamCmpIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.predicate;
       auto attr = dict.get("predicate");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for predicate in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `predicate` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchParamCmpIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.predicate;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("predicate",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchParamCmpIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.predicate.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchParamCmpIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "predicate")
      return prop.predicate;
  return std::nullopt;
}

void MatchParamCmpIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "predicate") {
       prop.predicate = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.predicate)>>(value);
       return;
    }
}

void MatchParamCmpIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.predicate) attrs.append("predicate", prop.predicate);
}

::mlir::LogicalResult MatchParamCmpIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPredicateAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps9(attr, "predicate", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MatchParamCmpIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.predicate)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchParamCmpIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.predicate);
}

::mlir::transform::MatchCmpIPredicateAttr MatchParamCmpIOp::getPredicateAttr() {
  return ::llvm::cast<::mlir::transform::MatchCmpIPredicateAttr>(getProperties().predicate);
}

::mlir::transform::MatchCmpIPredicate MatchParamCmpIOp::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

void MatchParamCmpIOp::setPredicateAttr(::mlir::transform::MatchCmpIPredicateAttr attr) {
  (*this)->setAttr(getPredicateAttrName(), attr);
}

void MatchParamCmpIOp::setPredicate(::mlir::transform::MatchCmpIPredicate attrValue) {
  (*this)->setAttr(getPredicateAttrName(), ::mlir::transform::MatchCmpIPredicateAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MatchParamCmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicateAttr predicate) {
  odsState.addOperands(param);
  odsState.addOperands(reference);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
}

void MatchParamCmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicateAttr predicate) {
  odsState.addOperands(param);
  odsState.addOperands(reference);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchParamCmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicate predicate) {
  odsState.addOperands(param);
  odsState.addOperands(reference);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::transform::MatchCmpIPredicateAttr::get(odsBuilder.getContext(), predicate);
}

void MatchParamCmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicate predicate) {
  odsState.addOperands(param);
  odsState.addOperands(reference);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::transform::MatchCmpIPredicateAttr::get(odsBuilder.getContext(), predicate);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchParamCmpIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatchParamCmpIOp::verifyInvariantsImpl() {
  auto tblgen_predicate = getProperties().predicate; (void)tblgen_predicate;
  if (!tblgen_predicate) return emitOpError("requires attribute 'predicate'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps9(*this, tblgen_predicate, "predicate")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatchParamCmpIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchParamCmpIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::transform::MatchCmpIPredicateAttr predicateAttr;
  ::mlir::OpAsmParser::UnresolvedOperand paramRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> paramOperands(paramRawOperands);  ::llvm::SMLoc paramOperandsLoc;
  (void)paramOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand referenceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> referenceOperands(referenceRawOperands);  ::llvm::SMLoc referenceOperandsLoc;
  (void)referenceOperandsLoc;
  ::mlir::Type paramRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> paramTypes(paramRawTypes);

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"eq","ne","lt","le","gt","ge"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "predicate", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'predicate' [eq, ne, lt, le, gt, ge]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::transform::symbolizeMatchCmpIPredicate(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "predicate attribute specification: \"" << attrStr << '"';;

      predicateAttr = ::mlir::transform::MatchCmpIPredicateAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<MatchParamCmpIOp::Properties>().predicate = predicateAttr;
    }
  }

  paramOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(paramRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  referenceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(referenceRawOperands[0]))
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
    ::mlir::transform::TransformParamTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    paramRawTypes[0] = type;
  }
  if (parser.resolveOperands(paramOperands, paramTypes, paramOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(referenceOperands, paramTypes[0], referenceOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchParamCmpIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';

  {
    auto caseValue = getPredicate();
    auto caseValueStr = stringifyMatchCmpIPredicate(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ' ';
  _odsPrinter << getParam();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getReference();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("predicate");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getParam().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformParamTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchParamCmpIOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MergeHandlesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MergeHandlesOpGenericAdaptorBase::MergeHandlesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.merge_handles", odsAttrs.getContext());
}

MergeHandlesOpGenericAdaptorBase::MergeHandlesOpGenericAdaptorBase(MergeHandlesOp op) : MergeHandlesOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MergeHandlesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr MergeHandlesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr MergeHandlesOpGenericAdaptorBase::getDeduplicateAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().deduplicate);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MergeHandlesOpGenericAdaptorBase::getDeduplicate() {
  auto attr = getDeduplicateAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MergeHandlesOpAdaptor::MergeHandlesOpAdaptor(MergeHandlesOp op) : MergeHandlesOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MergeHandlesOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_deduplicate = getProperties().deduplicate; (void)tblgen_deduplicate;

  if (tblgen_deduplicate && !((::llvm::isa<::mlir::UnitAttr>(tblgen_deduplicate))))
    return emitError(loc, "'transform.merge_handles' op ""attribute 'deduplicate' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MergeHandlesOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MergeHandlesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MergeHandlesOp::getHandles() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MergeHandlesOp::getHandlesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MergeHandlesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MergeHandlesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MergeHandlesOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MergeHandlesOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.deduplicate;
       auto attr = dict.get("deduplicate");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for deduplicate in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `deduplicate` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MergeHandlesOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.deduplicate;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("deduplicate",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MergeHandlesOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.deduplicate.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MergeHandlesOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "deduplicate")
      return prop.deduplicate;
  return std::nullopt;
}

void MergeHandlesOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "deduplicate") {
       prop.deduplicate = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.deduplicate)>>(value);
       return;
    }
}

void MergeHandlesOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.deduplicate) attrs.append("deduplicate", prop.deduplicate);
}

::mlir::LogicalResult MergeHandlesOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDeduplicateAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(attr, "deduplicate", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MergeHandlesOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.deduplicate)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MergeHandlesOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.deduplicate);
}

::mlir::UnitAttr MergeHandlesOp::getDeduplicateAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().deduplicate);
}

bool MergeHandlesOp::getDeduplicate() {
  auto attr = getDeduplicateAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MergeHandlesOp::setDeduplicateAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDeduplicateAttrName(), attr);
}

void MergeHandlesOp::setDeduplicate(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDeduplicateAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDeduplicateAttrName());
}

::mlir::Attribute MergeHandlesOp::removeDeduplicateAttr() {
    auto &attr = getProperties().deduplicate;
    attr = {};
    return attr;
}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange handles, /*optional*/::mlir::UnitAttr deduplicate) {
  odsState.addOperands(handles);
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = deduplicate;
  }
  odsState.addTypes(result);
}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange handles, /*optional*/::mlir::UnitAttr deduplicate) {
  odsState.addOperands(handles);
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = deduplicate;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange handles, /*optional*/bool deduplicate) {
  odsState.addOperands(handles);
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = ((deduplicate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange handles, /*optional*/bool deduplicate) {
  odsState.addOperands(handles);
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = ((deduplicate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MergeHandlesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange handles, /*optional*/::mlir::UnitAttr deduplicate) {
  odsState.addOperands(handles);
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = deduplicate;
  }
  odsState.addTypes({handles.front().getType()});

}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange handles, /*optional*/bool deduplicate) {
  odsState.addOperands(handles);
  if (deduplicate) {
    odsState.getOrAddProperties<Properties>().deduplicate = ((deduplicate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes({handles.front().getType()});

}

void MergeHandlesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult MergeHandlesOp::verifyInvariantsImpl() {
  auto tblgen_deduplicate = getProperties().deduplicate; (void)tblgen_deduplicate;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps2(*this, tblgen_deduplicate, "deduplicate")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MergeHandlesOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MergeHandlesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> handlesOperands;
  ::llvm::SMLoc handlesOperandsLoc;
  (void)handlesOperandsLoc;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  if (::mlir::succeeded(parser.parseOptionalKeyword("deduplicate"))) {
    result.getOrAddProperties<MergeHandlesOp::Properties>().deduplicate = parser.getBuilder().getUnitAttr();  }

  handlesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(handlesOperands))
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
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(handlesOperands, resultTypes[0], handlesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MergeHandlesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getDeduplicateAttr()) {
    _odsPrinter << ' ' << "deduplicate";
  }
  _odsPrinter << ' ';
  _odsPrinter << getHandles();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("deduplicate");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDeduplicateAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("deduplicate");
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

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MergeHandlesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::NamedSequenceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NamedSequenceOpGenericAdaptorBase::NamedSequenceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.named_sequence", odsAttrs.getContext());
}

NamedSequenceOpGenericAdaptorBase::NamedSequenceOpGenericAdaptorBase(NamedSequenceOp op) : NamedSequenceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NamedSequenceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NamedSequenceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr NamedSequenceOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef NamedSequenceOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr NamedSequenceOpGenericAdaptorBase::getFunctionTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
  return attr;
}

::mlir::FunctionType NamedSequenceOpGenericAdaptorBase::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::StringAttr NamedSequenceOpGenericAdaptorBase::getSymVisibilityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
  return attr;
}

::std::optional< ::llvm::StringRef > NamedSequenceOpGenericAdaptorBase::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::ArrayAttr NamedSequenceOpGenericAdaptorBase::getArgAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > NamedSequenceOpGenericAdaptorBase::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr NamedSequenceOpGenericAdaptorBase::getResAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > NamedSequenceOpGenericAdaptorBase::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Region &NamedSequenceOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange NamedSequenceOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
NamedSequenceOpAdaptor::NamedSequenceOpAdaptor(NamedSequenceOp op) : NamedSequenceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NamedSequenceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitError(loc, "'transform.named_sequence' op ""requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'transform.named_sequence' op ""requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'transform.named_sequence' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_function_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_function_type))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue()))) && ((true))))
    return emitError(loc, "'transform.named_sequence' op ""attribute 'function_type' failed to satisfy constraint: function type attribute");

  if (tblgen_sym_visibility && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_visibility))))
    return emitError(loc, "'transform.named_sequence' op ""attribute 'sym_visibility' failed to satisfy constraint: string attribute");

  if (tblgen_arg_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_arg_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_arg_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'transform.named_sequence' op ""attribute 'arg_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_res_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_res_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_res_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'transform.named_sequence' op ""attribute 'res_attrs' failed to satisfy constraint: Array of dictionary attributes");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NamedSequenceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NamedSequenceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> NamedSequenceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NamedSequenceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &NamedSequenceOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult NamedSequenceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute NamedSequenceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code NamedSequenceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.arg_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.res_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_visibility.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> NamedSequenceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
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

void NamedSequenceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
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

void NamedSequenceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.arg_attrs) attrs.append("arg_attrs", prop.arg_attrs);

    if (prop.function_type) attrs.append("function_type", prop.function_type);

    if (prop.res_attrs) attrs.append("res_attrs", prop.res_attrs);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);

    if (prop.sym_visibility) attrs.append("sym_visibility", prop.sym_visibility);
}

::mlir::LogicalResult NamedSequenceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getArgAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps11(attr, "arg_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps10(attr, "function_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getResAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps11(attr, "res_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymVisibilityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "sym_visibility", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult NamedSequenceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

void NamedSequenceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.arg_attrs);
  writer.writeAttribute(prop.function_type);

  writer.writeOptionalAttribute(prop.res_attrs);
  writer.writeAttribute(prop.sym_name);

  writer.writeOptionalAttribute(prop.sym_visibility);
}

::mlir::StringAttr NamedSequenceOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef NamedSequenceOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr NamedSequenceOp::getFunctionTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
}

::mlir::FunctionType NamedSequenceOp::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::StringAttr NamedSequenceOp::getSymVisibilityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
}

::std::optional< ::llvm::StringRef > NamedSequenceOp::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::ArrayAttr NamedSequenceOp::getArgAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
}

::std::optional< ::mlir::ArrayAttr > NamedSequenceOp::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr NamedSequenceOp::getResAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
}

::std::optional< ::mlir::ArrayAttr > NamedSequenceOp::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void NamedSequenceOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void NamedSequenceOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void NamedSequenceOp::setFunctionTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFunctionTypeAttrName(), attr);
}

void NamedSequenceOp::setSymVisibilityAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymVisibilityAttrName(), attr);
}

void NamedSequenceOp::setSymVisibility(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSymVisibilityAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getSymVisibilityAttrName());
}

void NamedSequenceOp::setArgAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getArgAttrsAttrName(), attr);
}

void NamedSequenceOp::setResAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getResAttrsAttrName(), attr);
}

::mlir::Attribute NamedSequenceOp::removeSymVisibilityAttr() {
    auto &attr = getProperties().sym_visibility;
    attr = {};
    return attr;
}

::mlir::Attribute NamedSequenceOp::removeArgAttrsAttr() {
    auto &attr = getProperties().arg_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute NamedSequenceOp::removeResAttrsAttr() {
    auto &attr = getProperties().res_attrs;
    attr = {};
    return attr;
}

void NamedSequenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
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

void NamedSequenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
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

void NamedSequenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
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

void NamedSequenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
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

void NamedSequenceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NamedSequenceOp::verifyInvariantsImpl() {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitOpError("requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps10(*this, tblgen_function_type, "function_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_sym_visibility, "sym_visibility")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps11(*this, tblgen_arg_attrs, "arg_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps11(*this, tblgen_res_attrs, "res_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps1(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult NamedSequenceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::NamedSequenceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::NumAssociationsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NumAssociationsOpGenericAdaptorBase::NumAssociationsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.num_associations", odsAttrs.getContext());
}

NumAssociationsOpGenericAdaptorBase::NumAssociationsOpGenericAdaptorBase(NumAssociationsOp op) : NumAssociationsOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NumAssociationsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NumAssociationsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NumAssociationsOpAdaptor::NumAssociationsOpAdaptor(NumAssociationsOp op) : NumAssociationsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NumAssociationsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NumAssociationsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NumAssociationsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NumAssociationsOp::getHandle() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NumAssociationsOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NumAssociationsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NumAssociationsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> NumAssociationsOp::getNum() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
}

void NumAssociationsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type num, ::mlir::Value handle) {
  odsState.addOperands(handle);
  odsState.addTypes(num);
}

void NumAssociationsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value handle) {
  odsState.addOperands(handle);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NumAssociationsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NumAssociationsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NumAssociationsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult NumAssociationsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NumAssociationsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::NumAssociationsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ParamConstantOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ParamConstantOpGenericAdaptorBase::ParamConstantOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.param.constant", odsAttrs.getContext());
}

ParamConstantOpGenericAdaptorBase::ParamConstantOpGenericAdaptorBase(ParamConstantOp op) : ParamConstantOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ParamConstantOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ParamConstantOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ParamConstantOpGenericAdaptorBase::getValueAttr() {
  auto attr = ::llvm::cast<::mlir::Attribute>(getProperties().value);
  return attr;
}

::mlir::Attribute ParamConstantOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ParamConstantOpAdaptor::ParamConstantOpAdaptor(ParamConstantOp op) : ParamConstantOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ParamConstantOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitError(loc, "'transform.param.constant' op ""requires attribute 'value'");

  if (tblgen_value && !((true)))
    return emitError(loc, "'transform.param.constant' op ""attribute 'value' failed to satisfy constraint: any attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ParamConstantOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ParamConstantOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ParamConstantOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ParamConstantOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> ParamConstantOp::getParam() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ParamConstantOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ParamConstantOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ParamConstantOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.value.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ParamConstantOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "value")
      return prop.value;
  return std::nullopt;
}

void ParamConstantOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "value") {
       prop.value = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.value)>>(value);
       return;
    }
}

void ParamConstantOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.value) attrs.append("value", prop.value);
}

::mlir::LogicalResult ParamConstantOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getValueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps12(attr, "value", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ParamConstantOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.value)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ParamConstantOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.value);
}

::mlir::Attribute ParamConstantOp::getValueAttr() {
  return ::llvm::cast<::mlir::Attribute>(getProperties().value);
}

::mlir::Attribute ParamConstantOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ParamConstantOp::setValueAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ParamConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type param, ::mlir::Attribute value) {
  odsState.getOrAddProperties<Properties>().value = value;
  odsState.addTypes(param);
}

void ParamConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute value) {
  odsState.getOrAddProperties<Properties>().value = value;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ParamConstantOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ParamConstantOp::verifyInvariantsImpl() {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitOpError("requires attribute 'value'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps12(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ParamConstantOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ParamConstantOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Attribute valueAttr;
  ::mlir::Type paramRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> paramTypes(paramRawTypes);

  if (parser.parseAttribute(valueAttr, ::mlir::Type{}))
    return ::mlir::failure();
  if (valueAttr) result.getOrAddProperties<ParamConstantOp::Properties>().value = valueAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformParamTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    paramRawTypes[0] = type;
  }
  result.addTypes(paramTypes);
  return ::mlir::success();
}

void ParamConstantOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttribute(getValueAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("value");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getParam().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformParamTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ParamConstantOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PrintOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PrintOpGenericAdaptorBase::PrintOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.print", odsAttrs.getContext());
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

::mlir::StringAttr PrintOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().name);
  return attr;
}

::std::optional< ::llvm::StringRef > PrintOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
PrintOpAdaptor::PrintOpAdaptor(PrintOp op) : PrintOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PrintOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_name = getProperties().name; (void)tblgen_name;

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'transform.print' op ""attribute 'name' failed to satisfy constraint: string attribute");
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

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PrintOp::getTarget() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
}

::mlir::MutableOperandRange PrintOp::getTargetMutable() {
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
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
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
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PrintOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PrintOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "name")
      return prop.name;
  return std::nullopt;
}

void PrintOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }
}

void PrintOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.name) attrs.append("name", prop.name);
}

::mlir::LogicalResult PrintOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PrintOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PrintOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.name);
}

::mlir::StringAttr PrintOp::getNameAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().name);
}

::std::optional< ::llvm::StringRef > PrintOp::getName() {
  auto attr = getNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void PrintOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void PrintOp::setName(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getNameAttrName());
}

::mlir::Attribute PrintOp::removeNameAttr() {
    auto &attr = getProperties().name;
    attr = {};
    return attr;
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value target, /*optional*/::mlir::StringAttr name) {
  if (target)
    odsState.addOperands(target);
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value target, /*optional*/::mlir::StringAttr name) {
  if (target)
    odsState.addOperands(target);
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
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

::mlir::LogicalResult PrintOp::verifyInvariantsImpl() {
  auto tblgen_name = getProperties().name; (void)tblgen_name;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PrintOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PrintOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> targetOperands;
  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> targetTypes;

  {
    targetOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      targetOperands.push_back(operand);
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
  if (::mlir::succeeded(parser.parseOptionalColon())) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      targetTypes.push_back(optionalType);
    }
  }
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PrintOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  if (::mlir::Value value = getTarget())
    _odsPrinter << value;
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (getTarget()) {
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getTarget() ? ::llvm::ArrayRef<::mlir::Type>(getTarget().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PrintOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplicateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReplicateOpGenericAdaptorBase::ReplicateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.replicate", odsAttrs.getContext());
}

ReplicateOpGenericAdaptorBase::ReplicateOpGenericAdaptorBase(ReplicateOp op) : ReplicateOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReplicateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ReplicateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReplicateOpAdaptor::ReplicateOpAdaptor(ReplicateOp op) : ReplicateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReplicateOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReplicateOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ReplicateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ReplicateOp::getPattern() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ReplicateOp::getHandles() {
  return getODSOperands(1);
}

::mlir::OpOperand &ReplicateOp::getPatternMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ReplicateOp::getHandlesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReplicateOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range ReplicateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ReplicateOp::getReplicated() {
  return getODSResults(0);
}

void ReplicateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange replicated, ::mlir::Value pattern, ::mlir::ValueRange handles) {
  odsState.addOperands(pattern);
  odsState.addOperands(handles);
  odsState.addTypes(replicated);
}

void ReplicateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReplicateOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((this->getODSOperands(1).getType()) == (this->getODSResults(0).getType()) && (this->getODSResults(0).getType()) == (this->getODSOperands(1).getType()))))
    return emitOpError("failed to verify that all of {handles, replicated} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult ReplicateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ReplicateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand patternRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> patternOperands(patternRawOperands);  ::llvm::SMLoc patternOperandsLoc;
  (void)patternOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> handlesOperands;
  ::llvm::SMLoc handlesOperandsLoc;
  (void)handlesOperandsLoc;
  ::mlir::Type patternRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> patternTypes(patternRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> handlesTypes;
  if (parser.parseKeyword("num"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  patternOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(patternRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();

  handlesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(handlesOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    patternRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseTypeList(handlesTypes))
    return ::mlir::failure();
  result.addTypes(handlesTypes);
  if (parser.resolveOperands(patternOperands, patternTypes, patternOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(handlesOperands, handlesTypes, handlesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReplicateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "num";
  _odsPrinter << "(";
  _odsPrinter << getPattern();
  _odsPrinter << ")";
  _odsPrinter << ' ';
  _odsPrinter << getHandles();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getPattern().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getHandles().getTypes();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ReplicateOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SelectOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.select", odsAttrs.getContext());
}

SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(SelectOp op) : SelectOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SelectOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SelectOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr SelectOpGenericAdaptorBase::getOpNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().op_name);
  return attr;
}

::llvm::StringRef SelectOpGenericAdaptorBase::getOpName() {
  auto attr = getOpNameAttr();
  return attr.getValue();
}

} // namespace detail
SelectOpAdaptor::SelectOpAdaptor(SelectOp op) : SelectOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SelectOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_op_name = getProperties().op_name; (void)tblgen_op_name;
  if (!tblgen_op_name) return emitError(loc, "'transform.select' op ""requires attribute 'op_name'");

  if (tblgen_op_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_op_name))))
    return emitError(loc, "'transform.select' op ""attribute 'op_name' failed to satisfy constraint: string attribute");
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

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SelectOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SelectOp::getTargetMutable() {
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

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SelectOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult SelectOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.op_name;
       auto attr = dict.get("op_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for op_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `op_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SelectOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.op_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SelectOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.op_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SelectOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "op_name")
      return prop.op_name;
  return std::nullopt;
}

void SelectOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "op_name") {
       prop.op_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op_name)>>(value);
       return;
    }
}

void SelectOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.op_name) attrs.append("op_name", prop.op_name);
}

::mlir::LogicalResult SelectOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOpNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(attr, "op_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SelectOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.op_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SelectOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.op_name);
}

::mlir::StringAttr SelectOp::getOpNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().op_name);
}

::llvm::StringRef SelectOp::getOpName() {
  auto attr = getOpNameAttr();
  return attr.getValue();
}

void SelectOp::setOpNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getOpNameAttrName(), attr);
}

void SelectOp::setOpName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getOpNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::StringAttr op_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().op_name = op_name;
  odsState.addTypes(result);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr op_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().op_name = op_name;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::StringRef op_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().op_name = odsBuilder.getStringAttr(op_name);
  odsState.addTypes(result);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef op_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().op_name = odsBuilder.getStringAttr(op_name);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SelectOp::verifyInvariantsImpl() {
  auto tblgen_op_name = getProperties().op_name; (void)tblgen_op_name;
  if (!tblgen_op_name) return emitOpError("requires attribute 'op_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps0(*this, tblgen_op_name, "op_name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SelectOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SelectOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr op_nameAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  if (parser.parseCustomAttributeWithFallback(op_nameAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (op_nameAttr) result.getOrAddProperties<SelectOp::Properties>().op_name = op_nameAttr;
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SelectOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getOpNameAttr());
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("op_name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SelectOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SequenceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SequenceOpGenericAdaptorBase::SequenceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.sequence", odsAttrs.getContext());
}

SequenceOpGenericAdaptorBase::SequenceOpGenericAdaptorBase(SequenceOp op) : SequenceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SequenceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SequenceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::transform::FailurePropagationModeAttr SequenceOpGenericAdaptorBase::getFailurePropagationModeAttr() {
  auto attr = ::llvm::cast<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
  return attr;
}

::mlir::transform::FailurePropagationMode SequenceOpGenericAdaptorBase::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr.getValue();
}

::mlir::Region &SequenceOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange SequenceOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SequenceOpAdaptor::SequenceOpAdaptor(SequenceOp op) : SequenceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SequenceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;
  if (!tblgen_failure_propagation_mode) return emitError(loc, "'transform.sequence' op ""requires attribute 'failure_propagation_mode'");

  if (tblgen_failure_propagation_mode && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(tblgen_failure_propagation_mode))))
    return emitError(loc, "'transform.sequence' op ""attribute 'failure_propagation_mode' failed to satisfy constraint: Silenceable error propagation policy");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SequenceOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SequenceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SequenceOp::getRoot() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
}

::mlir::Operation::operand_range SequenceOp::getExtraBindings() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange SequenceOp::getRootMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SequenceOp::getExtraBindingsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SequenceOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SequenceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range SequenceOp::getResults() {
  return getODSResults(0);
}

::mlir::Region &SequenceOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult SequenceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.failure_propagation_mode;
       auto attr = dict.get("failure_propagation_mode");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for failure_propagation_mode in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `failure_propagation_mode` in property conversion: " << attr;
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

::mlir::Attribute SequenceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.failure_propagation_mode;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("failure_propagation_mode",
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

llvm::hash_code SequenceOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.failure_propagation_mode.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SequenceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "failure_propagation_mode")
      return prop.failure_propagation_mode;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SequenceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "failure_propagation_mode") {
       prop.failure_propagation_mode = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.failure_propagation_mode)>>(value);
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

void SequenceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.failure_propagation_mode) attrs.append("failure_propagation_mode", prop.failure_propagation_mode);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SequenceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFailurePropagationModeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps8(attr, "failure_propagation_mode", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SequenceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.failure_propagation_mode)))
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

void SequenceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.failure_propagation_mode);

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

::mlir::transform::FailurePropagationModeAttr SequenceOp::getFailurePropagationModeAttr() {
  return ::llvm::cast<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
}

::mlir::transform::FailurePropagationMode SequenceOp::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr.getValue();
}

void SequenceOp::setFailurePropagationModeAttr(::mlir::transform::FailurePropagationModeAttr attr) {
  (*this)->setAttr(getFailurePropagationModeAttrName(), attr);
}

void SequenceOp::setFailurePropagationMode(::mlir::transform::FailurePropagationMode attrValue) {
  (*this)->setAttr(getFailurePropagationModeAttrName(), ::mlir::transform::FailurePropagationModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SequenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode, /*optional*/::mlir::Value root, ::mlir::ValueRange extra_bindings) {
  if (root)
    odsState.addOperands(root);
  odsState.addOperands(extra_bindings);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(root ? 1 : 0), static_cast<int32_t>(extra_bindings.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().failure_propagation_mode = failure_propagation_mode;
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void SequenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::transform::FailurePropagationMode failure_propagation_mode, /*optional*/::mlir::Value root, ::mlir::ValueRange extra_bindings) {
  if (root)
    odsState.addOperands(root);
  odsState.addOperands(extra_bindings);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(root ? 1 : 0), static_cast<int32_t>(extra_bindings.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().failure_propagation_mode = ::mlir::transform::FailurePropagationModeAttr::get(odsBuilder.getContext(), failure_propagation_mode);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void SequenceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SequenceOp::verifyInvariantsImpl() {
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;
  if (!tblgen_failure_propagation_mode) return emitOpError("requires attribute 'failure_propagation_mode'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps8(*this, tblgen_failure_propagation_mode, "failure_propagation_mode")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_TransformOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SequenceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SequenceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rootOperands;
  ::llvm::SMLoc rootOperandsLoc;
  (void)rootOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> rootTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> extra_bindingsOperands;
  ::llvm::SMLoc extra_bindingsOperandsLoc;
  (void)extra_bindingsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> extra_bindingsTypes;
  ::llvm::SmallVector<::mlir::Type, 1> resultsTypes;
  ::mlir::transform::FailurePropagationModeAttr failure_propagation_modeAttr;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;
  {
    rootOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> rootOperand;
    ::mlir::Type rootType;
    extra_bindingsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseSequenceOpOperands(parser, rootOperand, rootType, extra_bindingsOperands, extra_bindingsTypes);
    if (odsResult) return ::mlir::failure();
    if (rootOperand.has_value())
      rootOperands.push_back(*rootOperand);
    if (rootType)
      rootTypes.push_back(rootType);
  }
  if (::mlir::succeeded(parser.parseOptionalArrow())) {

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  }
  if (parser.parseKeyword("failures"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"propagate","suppress"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "failure_propagation_mode", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'failure_propagation_mode' [propagate, suppress]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::transform::symbolizeFailurePropagationMode(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "failure_propagation_mode attribute specification: \"" << attrStr << '"';;

      failure_propagation_modeAttr = ::mlir::transform::FailurePropagationModeAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<SequenceOp::Properties>().failure_propagation_mode = failure_propagation_modeAttr;
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      fullRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        fullRegions.emplace_back(std::move(region));
      }
    }
  }

  for (auto &region : fullRegions)
    ensureTerminator(*region, parser.getBuilder(), result.location);
  result.addRegions(fullRegions);
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(rootOperands.size()), static_cast<int32_t>(extra_bindingsOperands.size())}), result.getOrAddProperties<SequenceOp::Properties>().operandSegmentSizes.begin());
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(rootOperands, rootTypes, rootOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(extra_bindingsOperands, extra_bindingsTypes, extra_bindingsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SequenceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printSequenceOpOperands(_odsPrinter, *this, getRoot(), (getRoot() ? getRoot().getType() : ::mlir::Type()), getExtraBindings(), getExtraBindings().getTypes());
  if (!getResults().empty()) {
    _odsPrinter << ' ' << "->";
    _odsPrinter << ' ';
    _odsPrinter << getResults().getTypes();
  }
  _odsPrinter << ' ' << "failures";
  _odsPrinter << "(";

  {
    auto caseValue = getFailurePropagationMode();
    auto caseValueStr = stringifyFailurePropagationMode(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("failure_propagation_mode");
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {

  {
    bool printTerminator = true;
    if (auto *term = region.empty() ? nullptr : region.begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(region, /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
    });
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SequenceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitHandleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitHandleOpGenericAdaptorBase::SplitHandleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.split_handle", odsAttrs.getContext());
}

SplitHandleOpGenericAdaptorBase::SplitHandleOpGenericAdaptorBase(SplitHandleOp op) : SplitHandleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SplitHandleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SplitHandleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr SplitHandleOpGenericAdaptorBase::getPassThroughEmptyHandleAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().pass_through_empty_handle);
  return attr;
}

bool SplitHandleOpGenericAdaptorBase::getPassThroughEmptyHandle() {
  auto attr = getPassThroughEmptyHandleAttr();
  return attr.getValue();
}

::mlir::BoolAttr SplitHandleOpGenericAdaptorBase::getFailOnPayloadTooSmallAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fail_on_payload_too_small);
  return attr;
}

bool SplitHandleOpGenericAdaptorBase::getFailOnPayloadTooSmall() {
  auto attr = getFailOnPayloadTooSmallAttr();
  return attr.getValue();
}

::mlir::IntegerAttr SplitHandleOpGenericAdaptorBase::getOverflowResultAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().overflow_result);
  return attr;
}

::std::optional<uint64_t> SplitHandleOpGenericAdaptorBase::getOverflowResult() {
  auto attr = getOverflowResultAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
SplitHandleOpAdaptor::SplitHandleOpAdaptor(SplitHandleOp op) : SplitHandleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SplitHandleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fail_on_payload_too_small = getProperties().fail_on_payload_too_small; (void)tblgen_fail_on_payload_too_small;
  auto tblgen_overflow_result = getProperties().overflow_result; (void)tblgen_overflow_result;
  auto tblgen_pass_through_empty_handle = getProperties().pass_through_empty_handle; (void)tblgen_pass_through_empty_handle;

  if (tblgen_pass_through_empty_handle && !((::llvm::isa<::mlir::BoolAttr>(tblgen_pass_through_empty_handle))))
    return emitError(loc, "'transform.split_handle' op ""attribute 'pass_through_empty_handle' failed to satisfy constraint: bool attribute");

  if (tblgen_fail_on_payload_too_small && !((::llvm::isa<::mlir::BoolAttr>(tblgen_fail_on_payload_too_small))))
    return emitError(loc, "'transform.split_handle' op ""attribute 'fail_on_payload_too_small' failed to satisfy constraint: bool attribute");

  if (tblgen_overflow_result && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_overflow_result))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_overflow_result).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.split_handle' op ""attribute 'overflow_result' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SplitHandleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SplitHandleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitHandleOp::getHandle() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SplitHandleOp::getHandleMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SplitHandleOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SplitHandleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range SplitHandleOp::getResults() {
  return getODSResults(0);
}

::mlir::LogicalResult SplitHandleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fail_on_payload_too_small;
       auto attr = dict.get("fail_on_payload_too_small");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for fail_on_payload_too_small in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `fail_on_payload_too_small` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.overflow_result;
       auto attr = dict.get("overflow_result");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for overflow_result in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `overflow_result` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pass_through_empty_handle;
       auto attr = dict.get("pass_through_empty_handle");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for pass_through_empty_handle in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pass_through_empty_handle` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SplitHandleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fail_on_payload_too_small;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fail_on_payload_too_small",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.overflow_result;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("overflow_result",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pass_through_empty_handle;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pass_through_empty_handle",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SplitHandleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fail_on_payload_too_small.getAsOpaquePointer()), 
    llvm::hash_value(prop.overflow_result.getAsOpaquePointer()), 
    llvm::hash_value(prop.pass_through_empty_handle.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SplitHandleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fail_on_payload_too_small")
      return prop.fail_on_payload_too_small;

    if (name == "overflow_result")
      return prop.overflow_result;

    if (name == "pass_through_empty_handle")
      return prop.pass_through_empty_handle;
  return std::nullopt;
}

void SplitHandleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fail_on_payload_too_small") {
       prop.fail_on_payload_too_small = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fail_on_payload_too_small)>>(value);
       return;
    }

    if (name == "overflow_result") {
       prop.overflow_result = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.overflow_result)>>(value);
       return;
    }

    if (name == "pass_through_empty_handle") {
       prop.pass_through_empty_handle = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pass_through_empty_handle)>>(value);
       return;
    }
}

void SplitHandleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fail_on_payload_too_small) attrs.append("fail_on_payload_too_small", prop.fail_on_payload_too_small);

    if (prop.overflow_result) attrs.append("overflow_result", prop.overflow_result);

    if (prop.pass_through_empty_handle) attrs.append("pass_through_empty_handle", prop.pass_through_empty_handle);
}

::mlir::LogicalResult SplitHandleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFailOnPayloadTooSmallAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps13(attr, "fail_on_payload_too_small", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOverflowResultAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps5(attr, "overflow_result", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPassThroughEmptyHandleAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps13(attr, "pass_through_empty_handle", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SplitHandleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fail_on_payload_too_small)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.overflow_result)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.pass_through_empty_handle)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitHandleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fail_on_payload_too_small);

  writer.writeOptionalAttribute(prop.overflow_result);

  writer.writeOptionalAttribute(prop.pass_through_empty_handle);
}

::mlir::BoolAttr SplitHandleOp::getPassThroughEmptyHandleAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().pass_through_empty_handle);
}

bool SplitHandleOp::getPassThroughEmptyHandle() {
  auto attr = getPassThroughEmptyHandleAttr();
  return attr.getValue();
}

::mlir::BoolAttr SplitHandleOp::getFailOnPayloadTooSmallAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fail_on_payload_too_small);
}

bool SplitHandleOp::getFailOnPayloadTooSmall() {
  auto attr = getFailOnPayloadTooSmallAttr();
  return attr.getValue();
}

::mlir::IntegerAttr SplitHandleOp::getOverflowResultAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().overflow_result);
}

::std::optional<uint64_t> SplitHandleOp::getOverflowResult() {
  auto attr = getOverflowResultAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void SplitHandleOp::setPassThroughEmptyHandleAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getPassThroughEmptyHandleAttrName(), attr);
}

void SplitHandleOp::setPassThroughEmptyHandle(bool attrValue) {
  (*this)->setAttr(getPassThroughEmptyHandleAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void SplitHandleOp::setFailOnPayloadTooSmallAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getFailOnPayloadTooSmallAttrName(), attr);
}

void SplitHandleOp::setFailOnPayloadTooSmall(bool attrValue) {
  (*this)->setAttr(getFailOnPayloadTooSmallAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void SplitHandleOp::setOverflowResultAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getOverflowResultAttrName(), attr);
}

void SplitHandleOp::setOverflowResult(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOverflowResultAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getOverflowResultAttrName());
}

::mlir::Attribute SplitHandleOp::removeOverflowResultAttr() {
    auto &attr = getProperties().overflow_result;
    attr = {};
    return attr;
}

void SplitHandleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value handle, ::mlir::BoolAttr pass_through_empty_handle, ::mlir::BoolAttr fail_on_payload_too_small, /*optional*/::mlir::IntegerAttr overflow_result) {
  odsState.addOperands(handle);
  if (pass_through_empty_handle) {
    odsState.getOrAddProperties<Properties>().pass_through_empty_handle = pass_through_empty_handle;
  }
  if (fail_on_payload_too_small) {
    odsState.getOrAddProperties<Properties>().fail_on_payload_too_small = fail_on_payload_too_small;
  }
  if (overflow_result) {
    odsState.getOrAddProperties<Properties>().overflow_result = overflow_result;
  }
  odsState.addTypes(results);
}

void SplitHandleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value handle, bool pass_through_empty_handle, bool fail_on_payload_too_small, /*optional*/::mlir::IntegerAttr overflow_result) {
  odsState.addOperands(handle);
  odsState.getOrAddProperties<Properties>().pass_through_empty_handle = odsBuilder.getBoolAttr(pass_through_empty_handle);
  odsState.getOrAddProperties<Properties>().fail_on_payload_too_small = odsBuilder.getBoolAttr(fail_on_payload_too_small);
  if (overflow_result) {
    odsState.getOrAddProperties<Properties>().overflow_result = overflow_result;
  }
  odsState.addTypes(results);
}

void SplitHandleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void SplitHandleOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.pass_through_empty_handle)
    properties.pass_through_empty_handle = odsBuilder.getBoolAttr(true);
  if (!properties.fail_on_payload_too_small)
    properties.fail_on_payload_too_small = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult SplitHandleOp::verifyInvariantsImpl() {
  auto tblgen_fail_on_payload_too_small = getProperties().fail_on_payload_too_small; (void)tblgen_fail_on_payload_too_small;
  auto tblgen_overflow_result = getProperties().overflow_result; (void)tblgen_overflow_result;
  auto tblgen_pass_through_empty_handle = getProperties().pass_through_empty_handle; (void)tblgen_pass_through_empty_handle;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps13(*this, tblgen_pass_through_empty_handle, "pass_through_empty_handle")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps13(*this, tblgen_fail_on_payload_too_small, "fail_on_payload_too_small")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TransformOps5(*this, tblgen_overflow_result, "overflow_result")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SplitHandleOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SplitHandleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand handleRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> handleOperands(handleRawOperands);  ::llvm::SMLoc handleOperandsLoc;
  (void)handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(handleRawOperands[0]))
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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitHandleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPassThroughEmptyHandleAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("pass_through_empty_handle");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFailOnPayloadTooSmallAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("fail_on_payload_too_small");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitHandleOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VerifyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VerifyOpGenericAdaptorBase::VerifyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.verify", odsAttrs.getContext());
}

VerifyOpGenericAdaptorBase::VerifyOpGenericAdaptorBase(VerifyOp op) : VerifyOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> VerifyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VerifyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
VerifyOpAdaptor::VerifyOpAdaptor(VerifyOp op) : VerifyOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult VerifyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VerifyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VerifyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> VerifyOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &VerifyOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> VerifyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VerifyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void VerifyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void VerifyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VerifyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VerifyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VerifyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VerifyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void VerifyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::VerifyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.yield", odsAttrs.getContext());
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
      return build(odsBuilder, odsState, ::mlir::ValueRange());
    
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_TransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::SmallVector<::mlir::Type, 1> operandsTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalColon())) {

  if (parser.parseTypeList(operandsTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(allOperands, operandsTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getOperands().empty()) {
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getOperands().getTypes();
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::YieldOp)


#endif  // GET_OP_CLASSES

