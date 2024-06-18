/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArithOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::arith::AddFOp,
::mlir::arith::AddIOp,
::mlir::arith::AddUIExtendedOp,
::mlir::arith::AndIOp,
::mlir::arith::BitcastOp,
::mlir::arith::CeilDivSIOp,
::mlir::arith::CeilDivUIOp,
::mlir::arith::CmpFOp,
::mlir::arith::CmpIOp,
::mlir::arith::ConstantOp,
::mlir::arith::DivFOp,
::mlir::arith::DivSIOp,
::mlir::arith::DivUIOp,
::mlir::arith::ExtFOp,
::mlir::arith::ExtSIOp,
::mlir::arith::ExtUIOp,
::mlir::arith::FPToSIOp,
::mlir::arith::FPToUIOp,
::mlir::arith::FloorDivSIOp,
::mlir::arith::IndexCastOp,
::mlir::arith::IndexCastUIOp,
::mlir::arith::MaxNumFOp,
::mlir::arith::MaxSIOp,
::mlir::arith::MaxUIOp,
::mlir::arith::MaximumFOp,
::mlir::arith::MinNumFOp,
::mlir::arith::MinSIOp,
::mlir::arith::MinUIOp,
::mlir::arith::MinimumFOp,
::mlir::arith::MulFOp,
::mlir::arith::MulIOp,
::mlir::arith::MulSIExtendedOp,
::mlir::arith::MulUIExtendedOp,
::mlir::arith::NegFOp,
::mlir::arith::OrIOp,
::mlir::arith::RemFOp,
::mlir::arith::RemSIOp,
::mlir::arith::RemUIOp,
::mlir::arith::SIToFPOp,
::mlir::arith::ShLIOp,
::mlir::arith::ShRSIOp,
::mlir::arith::ShRUIOp,
::mlir::arith::SubFOp,
::mlir::arith::SubIOp,
::mlir::arith::TruncFOp,
::mlir::arith::TruncIOp,
::mlir::arith::UIToFPOp,
::mlir::arith::XOrIOp,
::mlir::arith::SelectOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arith {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::FloatType>(type))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be floating-point-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(1))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be bool-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || (((::llvm::isa<::mlir::FloatType>(type))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) || (((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger())) || ((::llvm::isa<::mlir::IndexType>(elementType))) || ((::llvm::isa<::mlir::FloatType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-or-float-like or memref of signless-integer or float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessIntOrIndex())) || (((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(1))) || (((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be bool-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger())) || (((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-fixed-width-integer-like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArithOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || (((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger())) || ((::llvm::isa<::mlir::IndexType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be signless-integer-like or memref of signless-integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Floating point fast math flags";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArithOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::IntegerOverflowFlagsAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Integer overflow arith flags";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArithOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::CmpFPredicateAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArithOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::arith::CmpIPredicateAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArithOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::TypedAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: TypedAttr instance";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArithOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArithOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace arith
} // namespace mlir
namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::AddFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddFOpGenericAdaptorBase::AddFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.addf", odsAttrs.getContext());
}

AddFOpGenericAdaptorBase::AddFOpGenericAdaptorBase(AddFOp op) : AddFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr AddFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags AddFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
AddFOpAdaptor::AddFOpAdaptor(AddFOp op) : AddFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.addf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AddFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AddFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AddFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AddFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute AddFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code AddFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AddFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void AddFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void AddFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult AddFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AddFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AddFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr AddFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags AddFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void AddFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void AddFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AddFOp::inferReturnTypes(odsBuilder.getContext(),
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

void AddFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult AddFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AddFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AddFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AddFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<AddFOp::Properties>().fastmath = fastmathAttr;
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

void AddFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void AddFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::AddFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::AddIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddIOpGenericAdaptorBase::AddIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.addi", odsAttrs.getContext());
}

AddIOpGenericAdaptorBase::AddIOpGenericAdaptorBase(AddIOp op) : AddIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::IntegerOverflowFlagsAttr AddIOpGenericAdaptorBase::getOverflowFlagsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
  return attr;
}

::mlir::arith::IntegerOverflowFlags AddIOpGenericAdaptorBase::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

} // namespace detail
AddIOpAdaptor::AddIOpAdaptor(AddIOp op) : AddIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (tblgen_overflowFlags && !((::llvm::isa<::mlir::arith::IntegerOverflowFlagsAttr>(tblgen_overflowFlags))))
    return emitError(loc, "'arith.addi' op ""attribute 'overflowFlags' failed to satisfy constraint: Integer overflow arith flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AddIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AddIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AddIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult AddIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.overflowFlags;
       auto attr = dict.get("overflowFlags");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for overflowFlags in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `overflowFlags` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AddIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.overflowFlags;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("overflowFlags",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AddIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.overflowFlags.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AddIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "overflowFlags")
      return prop.overflowFlags;
  return std::nullopt;
}

void AddIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "overflowFlags") {
       prop.overflowFlags = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.overflowFlags)>>(value);
       return;
    }
}

void AddIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.overflowFlags) attrs.append("overflowFlags", prop.overflowFlags);
}

::mlir::LogicalResult AddIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOverflowFlagsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(attr, "overflowFlags", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AddIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.overflowFlags)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AddIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.overflowFlags);
}

::mlir::arith::IntegerOverflowFlagsAttr AddIOp::getOverflowFlagsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
}

::mlir::arith::IntegerOverflowFlags AddIOp::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

void AddIOp::setOverflowFlagsAttr(::mlir::arith::IntegerOverflowFlagsAttr attr) {
  (*this)->setAttr(getOverflowFlagsAttrName(), attr);
}

void AddIOp::setOverflowFlags(::mlir::arith::IntegerOverflowFlags attrValue) {
  (*this)->setAttr(getOverflowFlagsAttrName(), ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  odsState.addTypes(result);
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  odsState.addTypes(result);
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AddIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AddIOp::inferReturnTypes(odsBuilder.getContext(),
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

void AddIOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.overflowFlags)
    properties.overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none);
}

::mlir::LogicalResult AddIOp::verifyInvariantsImpl() {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(*this, tblgen_overflowFlags, "overflowFlags")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AddIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AddIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AddIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::IntegerOverflowFlagsAttr overflowFlagsAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("overflow"))) {

  if (parser.parseCustomAttributeWithFallback(overflowFlagsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (overflowFlagsAttr) result.getOrAddProperties<AddIOp::Properties>().overflowFlags = overflowFlagsAttr;
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

void AddIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getOverflowFlagsAttr() && getOverflowFlagsAttr() != ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::IntegerOverflowFlags::none)) {
    _odsPrinter << ' ' << "overflow";
  _odsPrinter.printStrippedAttrOrType(getOverflowFlagsAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("overflowFlags");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOverflowFlagsAttr();
     if(attr && (attr == ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none)))
       elidedAttrs.push_back("overflowFlags");
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

void AddIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::AddIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::AddUIExtendedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AddUIExtendedOpGenericAdaptorBase::AddUIExtendedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.addui_extended", odsAttrs.getContext());
}

AddUIExtendedOpGenericAdaptorBase::AddUIExtendedOpGenericAdaptorBase(AddUIExtendedOp op) : AddUIExtendedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AddUIExtendedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AddUIExtendedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AddUIExtendedOpAdaptor::AddUIExtendedOpAdaptor(AddUIExtendedOp op) : AddUIExtendedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AddUIExtendedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void AddUIExtendedOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "sum");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "overflow");
}

std::pair<unsigned, unsigned> AddUIExtendedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddUIExtendedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddUIExtendedOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AddUIExtendedOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AddUIExtendedOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AddUIExtendedOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AddUIExtendedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddUIExtendedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddUIExtendedOp::getSum() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value AddUIExtendedOp::getOverflow() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

void AddUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value lhs, Value rhs) {
      build(odsBuilder, odsState, lhs.getType(), ::getI1SameShape(lhs.getType()),
            lhs, rhs);
    
}

void AddUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type sum, ::mlir::Type overflow, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(sum);
  odsState.addTypes(overflow);
}

void AddUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddUIExtendedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AddUIExtendedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs, sum} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult AddUIExtendedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AddUIExtendedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type sumRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sumTypes(sumRawTypes);
  ::mlir::Type overflowRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> overflowTypes(overflowRawTypes);

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
    sumRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    overflowRawTypes[0] = type;
  }
  result.addTypes(sumTypes);
  result.addTypes(overflowTypes);
  if (parser.resolveOperands(lhsOperands, sumTypes[0], lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, sumTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AddUIExtendedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    auto type = getSum().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOverflow().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AddUIExtendedOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::AddUIExtendedOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::AndIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AndIOpGenericAdaptorBase::AndIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.andi", odsAttrs.getContext());
}

AndIOpGenericAdaptorBase::AndIOpGenericAdaptorBase(AndIOp op) : AndIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AndIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AndIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AndIOpAdaptor::AndIOpAdaptor(AndIOp op) : AndIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AndIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AndIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AndIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AndIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AndIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AndIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AndIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AndIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AndIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AndIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AndIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void AndIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AndIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AndIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AndIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AndIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AndIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AndIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AndIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AndIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AndIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void AndIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void AndIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::AndIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::BitcastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BitcastOpGenericAdaptorBase::BitcastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.bitcast", odsAttrs.getContext());
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

::mlir::Value BitcastOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &BitcastOp::getInMutable() {
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

::mlir::Value BitcastOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BitcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void BitcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BitcastOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BitcastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BitcastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BitcastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::BitcastOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::CeilDivSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CeilDivSIOpGenericAdaptorBase::CeilDivSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.ceildivsi", odsAttrs.getContext());
}

CeilDivSIOpGenericAdaptorBase::CeilDivSIOpGenericAdaptorBase(CeilDivSIOp op) : CeilDivSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CeilDivSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CeilDivSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CeilDivSIOpAdaptor::CeilDivSIOpAdaptor(CeilDivSIOp op) : CeilDivSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CeilDivSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CeilDivSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CeilDivSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilDivSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CeilDivSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CeilDivSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CeilDivSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CeilDivSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CeilDivSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilDivSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CeilDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void CeilDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CeilDivSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CeilDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilDivSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CeilDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CeilDivSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CeilDivSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CeilDivSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CeilDivSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CeilDivSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void CeilDivSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void CeilDivSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::CeilDivSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::CeilDivUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CeilDivUIOpGenericAdaptorBase::CeilDivUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.ceildivui", odsAttrs.getContext());
}

CeilDivUIOpGenericAdaptorBase::CeilDivUIOpGenericAdaptorBase(CeilDivUIOp op) : CeilDivUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CeilDivUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CeilDivUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CeilDivUIOpAdaptor::CeilDivUIOpAdaptor(CeilDivUIOp op) : CeilDivUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CeilDivUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CeilDivUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CeilDivUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilDivUIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CeilDivUIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CeilDivUIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CeilDivUIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CeilDivUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CeilDivUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilDivUIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CeilDivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void CeilDivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CeilDivUIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CeilDivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilDivUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CeilDivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CeilDivUIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CeilDivUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CeilDivUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CeilDivUIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CeilDivUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void CeilDivUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void CeilDivUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::CeilDivUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::CmpFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CmpFOpGenericAdaptorBase::CmpFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.cmpf", odsAttrs.getContext());
}

CmpFOpGenericAdaptorBase::CmpFOpGenericAdaptorBase(CmpFOp op) : CmpFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CmpFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CmpFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::CmpFPredicateAttr CmpFOpGenericAdaptorBase::getPredicateAttr() {
  auto attr = ::llvm::cast<::mlir::arith::CmpFPredicateAttr>(getProperties().predicate);
  return attr;
}

::mlir::arith::CmpFPredicate CmpFOpGenericAdaptorBase::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

::mlir::arith::FastMathFlagsAttr CmpFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags CmpFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
CmpFOpAdaptor::CmpFOpAdaptor(CmpFOp op) : CmpFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CmpFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;
  auto tblgen_predicate = getProperties().predicate; (void)tblgen_predicate;
  if (!tblgen_predicate) return emitError(loc, "'arith.cmpf' op ""requires attribute 'predicate'");

  if (tblgen_predicate && !((::llvm::isa<::mlir::arith::CmpFPredicateAttr>(tblgen_predicate))))
    return emitError(loc, "'arith.cmpf' op ""attribute 'predicate' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15");

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.cmpf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CmpFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CmpFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CmpFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CmpFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CmpFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CmpFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CmpFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CmpFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CmpFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CmpFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute CmpFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fastmath;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fastmath",
                                       propStorage));
    }

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

llvm::hash_code CmpFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()), 
    llvm::hash_value(prop.predicate.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CmpFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;

    if (name == "predicate")
      return prop.predicate;
  return std::nullopt;
}

void CmpFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }

    if (name == "predicate") {
       prop.predicate = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.predicate)>>(value);
       return;
    }
}

void CmpFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);

    if (prop.predicate) attrs.append("predicate", prop.predicate);
}

::mlir::LogicalResult CmpFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPredicateAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps2(attr, "predicate", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CmpFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.predicate)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CmpFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
  writer.writeAttribute(prop.predicate);
}

::mlir::arith::CmpFPredicateAttr CmpFOp::getPredicateAttr() {
  return ::llvm::cast<::mlir::arith::CmpFPredicateAttr>(getProperties().predicate);
}

::mlir::arith::CmpFPredicate CmpFOp::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

::mlir::arith::FastMathFlagsAttr CmpFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags CmpFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void CmpFOp::setPredicateAttr(::mlir::arith::CmpFPredicateAttr attr) {
  (*this)->setAttr(getPredicateAttrName(), attr);
}

void CmpFOp::setPredicate(::mlir::arith::CmpFPredicate attrValue) {
  (*this)->setAttr(getPredicateAttrName(), ::mlir::arith::CmpFPredicateAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CmpFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void CmpFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arith::CmpFPredicateAttr predicate, Value lhs, Value rhs) {
      build(odsBuilder, odsState, predicate, lhs, rhs,
          mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(),
              mlir::arith::FastMathFlags::none));
    
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::arith::CmpFPredicateAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arith::CmpFPredicateAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CmpFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arith::CmpFPredicateAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::arith::CmpFPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::arith::CmpFPredicateAttr::get(odsBuilder.getContext(), predicate);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arith::CmpFPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::arith::CmpFPredicateAttr::get(odsBuilder.getContext(), predicate);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CmpFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arith::CmpFPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::arith::CmpFPredicateAttr::get(odsBuilder.getContext(), predicate);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CmpFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CmpFOp::inferReturnTypes(odsBuilder.getContext(),
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

void CmpFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult CmpFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;
  auto tblgen_predicate = getProperties().predicate; (void)tblgen_predicate;
  if (!tblgen_predicate) return emitOpError("requires attribute 'predicate'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps2(*this, tblgen_predicate, "predicate")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::getI1SameShape((*this->getODSOperands(0).begin()).getType()), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that result type has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult CmpFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CmpFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::getI1SameShape(operands[0].getType());
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CmpFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::arith::CmpFPredicateAttr predicateAttr;
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::FastMathFlagsAttr fastmathAttr;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"false","oeq","ogt","oge","olt","ole","one","ord","ueq","ugt","uge","ult","ule","une","uno","true"})) {
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
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'predicate' [false, oeq, ogt, oge, olt, ole, one, ord, ueq, ugt, uge, ult, ule, une, uno, true]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::arith::symbolizeCmpFPredicate(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "predicate attribute specification: \"" << attrStr << '"';;

      predicateAttr = ::mlir::arith::CmpFPredicateAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<CmpFOp::Properties>().predicate = predicateAttr;
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

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
  if (fastmathAttr) result.getOrAddProperties<CmpFOp::Properties>().fastmath = fastmathAttr;
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
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((::llvm::isa<::mlir::FloatType>(type))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be floating-point-like, but got " << type;
    }
  }
  result.addTypes(::getI1SameShape(lhsTypes[0]));
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CmpFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';

  {
    auto caseValue = getPredicate();
    auto caseValueStr = stringifyCmpFPredicate(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ",";
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
  elidedAttrs.push_back("predicate");
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
}

void CmpFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::CmpFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::CmpIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CmpIOpGenericAdaptorBase::CmpIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.cmpi", odsAttrs.getContext());
}

CmpIOpGenericAdaptorBase::CmpIOpGenericAdaptorBase(CmpIOp op) : CmpIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CmpIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CmpIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::CmpIPredicateAttr CmpIOpGenericAdaptorBase::getPredicateAttr() {
  auto attr = ::llvm::cast<::mlir::arith::CmpIPredicateAttr>(getProperties().predicate);
  return attr;
}

::mlir::arith::CmpIPredicate CmpIOpGenericAdaptorBase::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

} // namespace detail
CmpIOpAdaptor::CmpIOpAdaptor(CmpIOp op) : CmpIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CmpIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_predicate = getProperties().predicate; (void)tblgen_predicate;
  if (!tblgen_predicate) return emitError(loc, "'arith.cmpi' op ""requires attribute 'predicate'");

  if (tblgen_predicate && !((::llvm::isa<::mlir::arith::CmpIPredicateAttr>(tblgen_predicate))))
    return emitError(loc, "'arith.cmpi' op ""attribute 'predicate' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CmpIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CmpIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CmpIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CmpIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CmpIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CmpIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CmpIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CmpIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CmpIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult CmpIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute CmpIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code CmpIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.predicate.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CmpIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "predicate")
      return prop.predicate;
  return std::nullopt;
}

void CmpIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "predicate") {
       prop.predicate = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.predicate)>>(value);
       return;
    }
}

void CmpIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.predicate) attrs.append("predicate", prop.predicate);
}

::mlir::LogicalResult CmpIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPredicateAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps3(attr, "predicate", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CmpIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.predicate)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CmpIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.predicate);
}

::mlir::arith::CmpIPredicateAttr CmpIOp::getPredicateAttr() {
  return ::llvm::cast<::mlir::arith::CmpIPredicateAttr>(getProperties().predicate);
}

::mlir::arith::CmpIPredicate CmpIOp::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

void CmpIOp::setPredicateAttr(::mlir::arith::CmpIPredicateAttr attr) {
  (*this)->setAttr(getPredicateAttrName(), attr);
}

void CmpIOp::setPredicate(::mlir::arith::CmpIPredicate attrValue) {
  (*this)->setAttr(getPredicateAttrName(), ::mlir::arith::CmpIPredicateAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::arith::CmpIPredicateAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
  odsState.addTypes(result);
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arith::CmpIPredicateAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = predicate;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CmpIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arith::CmpIPredicateAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = predicate;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::arith::CmpIPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::arith::CmpIPredicateAttr::get(odsBuilder.getContext(), predicate);
  odsState.addTypes(result);
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arith::CmpIPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::arith::CmpIPredicateAttr::get(odsBuilder.getContext(), predicate);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(CmpIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arith::CmpIPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().predicate = ::mlir::arith::CmpIPredicateAttr::get(odsBuilder.getContext(), predicate);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CmpIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(CmpIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult CmpIOp::verifyInvariantsImpl() {
  auto tblgen_predicate = getProperties().predicate; (void)tblgen_predicate;
  if (!tblgen_predicate) return emitOpError("requires attribute 'predicate'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps3(*this, tblgen_predicate, "predicate")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::getI1SameShape((*this->getODSOperands(0).begin()).getType()), (*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that result type has i1 element type and same shape as operands");
  return ::mlir::success();
}

::mlir::LogicalResult CmpIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult CmpIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = ::getI1SameShape(operands[0].getType());
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult CmpIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::arith::CmpIPredicateAttr predicateAttr;
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"eq","ne","slt","sle","sgt","sge","ult","ule","ugt","uge"})) {
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
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'predicate' [eq, ne, slt, sle, sgt, sge, ult, ule, ugt, uge]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::arith::symbolizeCmpIPredicate(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "predicate attribute specification: \"" << attrStr << '"';;

      predicateAttr = ::mlir::arith::CmpIPredicateAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<CmpIOp::Properties>().predicate = predicateAttr;
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

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
  for (::mlir::Type type : lhsTypes) {
    (void)type;
    if (!(((type.isSignlessIntOrIndex())) || (((::llvm::isa<::mlir::VectorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be signless-integer-like, but got " << type;
    }
  }
  result.addTypes(::getI1SameShape(lhsTypes[0]));
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CmpIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';

  {
    auto caseValue = getPredicate();
    auto caseValueStr = stringifyCmpIPredicate(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("predicate");
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
}

void CmpIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::CmpIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ConstantOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConstantOpGenericAdaptorBase::ConstantOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.constant", odsAttrs.getContext());
}

ConstantOpGenericAdaptorBase::ConstantOpGenericAdaptorBase(ConstantOp op) : ConstantOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConstantOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConstantOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::TypedAttr ConstantOpGenericAdaptorBase::getValueAttr() {
  auto attr = ::llvm::cast<::mlir::TypedAttr>(getProperties().value);
  return attr;
}

::mlir::TypedAttr ConstantOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
ConstantOpAdaptor::ConstantOpAdaptor(ConstantOp op) : ConstantOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConstantOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitError(loc, "'arith.constant' op ""requires attribute 'value'");

  if (tblgen_value && !((::llvm::isa<::mlir::TypedAttr>(tblgen_value))))
    return emitError(loc, "'arith.constant' op ""attribute 'value' failed to satisfy constraint: TypedAttr instance");
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

::mlir::Value ConstantOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
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
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps4(attr, "value", emitError)))
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

::mlir::TypedAttr ConstantOp::getValueAttr() {
  return ::llvm::cast<::mlir::TypedAttr>(getProperties().value);
}

::mlir::TypedAttr ConstantOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void ConstantOp::setValueAttr(::mlir::TypedAttr attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::TypedAttr value) {
  odsState.getOrAddProperties<Properties>().value = value;
  odsState.addTypes(result);
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypedAttr value) {
  odsState.getOrAddProperties<Properties>().value = value;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ConstantOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::TypedAttr value) {
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

void ConstantOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ConstantOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ConstantOp::verifyInvariantsImpl() {
  auto tblgen_value = getProperties().value; (void)tblgen_value;
  if (!tblgen_value) return emitOpError("requires attribute 'value'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps4(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getValue().getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == (getValue().getType()))))
    return emitOpError("failed to verify that all of {value, result} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult ConstantOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult ConstantOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::TypedAttr odsInferredTypeAttr0 = (properties ? properties.as<Properties *>()->value : ::llvm::dyn_cast_or_null<::mlir::TypedAttr>(attributes.get("value")));
  if (!odsInferredTypeAttr0) return ::mlir::failure();
  ::mlir::Type odsInferredType0 = odsInferredTypeAttr0.getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ConstantOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::TypedAttr valueAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  if (parser.parseCustomAttributeWithFallback(valueAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (valueAttr) result.getOrAddProperties<ConstantOp::Properties>().value = valueAttr;
  result.addTypes(valueAttr.getType());
  return ::mlir::success();
}

void ConstantOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("value");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getValueAttr());
}

void ConstantOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ConstantOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::DivFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DivFOpGenericAdaptorBase::DivFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.divf", odsAttrs.getContext());
}

DivFOpGenericAdaptorBase::DivFOpGenericAdaptorBase(DivFOp op) : DivFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DivFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DivFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr DivFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags DivFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
DivFOpAdaptor::DivFOpAdaptor(DivFOp op) : DivFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DivFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.divf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DivFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DivFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DivFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DivFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DivFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DivFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DivFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult DivFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute DivFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code DivFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> DivFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void DivFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void DivFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult DivFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DivFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void DivFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr DivFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags DivFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void DivFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void DivFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DivFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DivFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DivFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DivFOp::inferReturnTypes(odsBuilder.getContext(),
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

void DivFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult DivFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DivFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult DivFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult DivFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<DivFOp::Properties>().fastmath = fastmathAttr;
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

void DivFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void DivFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::DivFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::DivSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DivSIOpGenericAdaptorBase::DivSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.divsi", odsAttrs.getContext());
}

DivSIOpGenericAdaptorBase::DivSIOpGenericAdaptorBase(DivSIOp op) : DivSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DivSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DivSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DivSIOpAdaptor::DivSIOpAdaptor(DivSIOp op) : DivSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DivSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DivSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DivSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DivSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DivSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DivSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DivSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DivSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void DivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void DivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DivSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DivSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult DivSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DivSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult DivSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult DivSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void DivSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void DivSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::DivSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::DivUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DivUIOpGenericAdaptorBase::DivUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.divui", odsAttrs.getContext());
}

DivUIOpGenericAdaptorBase::DivUIOpGenericAdaptorBase(DivUIOp op) : DivUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DivUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DivUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DivUIOpAdaptor::DivUIOpAdaptor(DivUIOp op) : DivUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DivUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DivUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DivUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivUIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DivUIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DivUIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DivUIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DivUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DivUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivUIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void DivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void DivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(DivUIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void DivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DivUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(DivUIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult DivUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DivUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult DivUIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult DivUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void DivUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void DivUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::DivUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ExtFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtFOpGenericAdaptorBase::ExtFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.extf", odsAttrs.getContext());
}

ExtFOpGenericAdaptorBase::ExtFOpGenericAdaptorBase(ExtFOp op) : ExtFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExtFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExtFOpAdaptor::ExtFOpAdaptor(ExtFOp op) : ExtFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtFOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExtFOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExtFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtFOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ExtFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void ExtFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExtFOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExtFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExtFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ExtFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ExtSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtSIOpGenericAdaptorBase::ExtSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.extsi", odsAttrs.getContext());
}

ExtSIOpGenericAdaptorBase::ExtSIOpGenericAdaptorBase(ExtSIOp op) : ExtSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExtSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExtSIOpAdaptor::ExtSIOpAdaptor(ExtSIOp op) : ExtSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtSIOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExtSIOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExtSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtSIOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ExtSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void ExtSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExtSIOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExtSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExtSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ExtSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ExtUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtUIOpGenericAdaptorBase::ExtUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.extui", odsAttrs.getContext());
}

ExtUIOpGenericAdaptorBase::ExtUIOpGenericAdaptorBase(ExtUIOp op) : ExtUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ExtUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ExtUIOpAdaptor::ExtUIOpAdaptor(ExtUIOp op) : ExtUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtUIOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ExtUIOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ExtUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtUIOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ExtUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void ExtUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExtUIOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExtUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExtUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ExtUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::FPToSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FPToSIOpGenericAdaptorBase::FPToSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.fptosi", odsAttrs.getContext());
}

FPToSIOpGenericAdaptorBase::FPToSIOpGenericAdaptorBase(FPToSIOp op) : FPToSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FPToSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FPToSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FPToSIOpAdaptor::FPToSIOpAdaptor(FPToSIOp op) : FPToSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FPToSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FPToSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FPToSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FPToSIOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FPToSIOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FPToSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FPToSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FPToSIOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void FPToSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void FPToSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPToSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FPToSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FPToSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FPToSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FPToSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void FPToSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::FPToSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::FPToUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FPToUIOpGenericAdaptorBase::FPToUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.fptoui", odsAttrs.getContext());
}

FPToUIOpGenericAdaptorBase::FPToUIOpGenericAdaptorBase(FPToUIOp op) : FPToUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FPToUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FPToUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FPToUIOpAdaptor::FPToUIOpAdaptor(FPToUIOp op) : FPToUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FPToUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FPToUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FPToUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FPToUIOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &FPToUIOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FPToUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FPToUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FPToUIOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void FPToUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void FPToUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPToUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FPToUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FPToUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FPToUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FPToUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void FPToUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::FPToUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::FloorDivSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FloorDivSIOpGenericAdaptorBase::FloorDivSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.floordivsi", odsAttrs.getContext());
}

FloorDivSIOpGenericAdaptorBase::FloorDivSIOpGenericAdaptorBase(FloorDivSIOp op) : FloorDivSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FloorDivSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FloorDivSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FloorDivSIOpAdaptor::FloorDivSIOpAdaptor(FloorDivSIOp op) : FloorDivSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FloorDivSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FloorDivSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FloorDivSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FloorDivSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value FloorDivSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &FloorDivSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &FloorDivSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> FloorDivSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FloorDivSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FloorDivSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void FloorDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void FloorDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(FloorDivSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FloorDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FloorDivSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FloorDivSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(FloorDivSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult FloorDivSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FloorDivSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult FloorDivSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult FloorDivSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void FloorDivSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void FloorDivSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::FloorDivSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::IndexCastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IndexCastOpGenericAdaptorBase::IndexCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.index_cast", odsAttrs.getContext());
}

IndexCastOpGenericAdaptorBase::IndexCastOpGenericAdaptorBase(IndexCastOp op) : IndexCastOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IndexCastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IndexCastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IndexCastOpAdaptor::IndexCastOpAdaptor(IndexCastOp op) : IndexCastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IndexCastOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IndexCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IndexCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexCastOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IndexCastOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IndexCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IndexCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexCastOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void IndexCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void IndexCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexCastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IndexCastOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IndexCastOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IndexCastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IndexCastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void IndexCastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::IndexCastOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::IndexCastUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
IndexCastUIOpGenericAdaptorBase::IndexCastUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.index_castui", odsAttrs.getContext());
}

IndexCastUIOpGenericAdaptorBase::IndexCastUIOpGenericAdaptorBase(IndexCastUIOp op) : IndexCastUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> IndexCastUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr IndexCastUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
IndexCastUIOpAdaptor::IndexCastUIOpAdaptor(IndexCastUIOp op) : IndexCastUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult IndexCastUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> IndexCastUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IndexCastUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexCastUIOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &IndexCastUIOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> IndexCastUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IndexCastUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexCastUIOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void IndexCastUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void IndexCastUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexCastUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IndexCastUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult IndexCastUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult IndexCastUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IndexCastUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void IndexCastUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::IndexCastUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MaxNumFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaxNumFOpGenericAdaptorBase::MaxNumFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.maxnumf", odsAttrs.getContext());
}

MaxNumFOpGenericAdaptorBase::MaxNumFOpGenericAdaptorBase(MaxNumFOp op) : MaxNumFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaxNumFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaxNumFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MaxNumFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags MaxNumFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MaxNumFOpAdaptor::MaxNumFOpAdaptor(MaxNumFOp op) : MaxNumFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaxNumFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.maxnumf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaxNumFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaxNumFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxNumFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MaxNumFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MaxNumFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaxNumFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaxNumFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaxNumFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxNumFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MaxNumFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MaxNumFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MaxNumFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MaxNumFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void MaxNumFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void MaxNumFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult MaxNumFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MaxNumFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaxNumFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr MaxNumFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags MaxNumFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MaxNumFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MaxNumFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaxNumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaxNumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxNumFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaxNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaxNumFOp::inferReturnTypes(odsBuilder.getContext(),
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

void MaxNumFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult MaxNumFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaxNumFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaxNumFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaxNumFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<MaxNumFOp::Properties>().fastmath = fastmathAttr;
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

void MaxNumFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MaxNumFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MaxNumFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MaxSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaxSIOpGenericAdaptorBase::MaxSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.maxsi", odsAttrs.getContext());
}

MaxSIOpGenericAdaptorBase::MaxSIOpGenericAdaptorBase(MaxSIOp op) : MaxSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaxSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaxSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaxSIOpAdaptor::MaxSIOpAdaptor(MaxSIOp op) : MaxSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaxSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaxSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaxSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MaxSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MaxSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaxSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaxSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaxSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaxSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MaxSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaxSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaxSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaxSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaxSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaxSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaxSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaxSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaxSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MaxSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MaxSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MaxSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MaxUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaxUIOpGenericAdaptorBase::MaxUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.maxui", odsAttrs.getContext());
}

MaxUIOpGenericAdaptorBase::MaxUIOpGenericAdaptorBase(MaxUIOp op) : MaxUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaxUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaxUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MaxUIOpAdaptor::MaxUIOpAdaptor(MaxUIOp op) : MaxUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaxUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaxUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaxUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxUIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MaxUIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MaxUIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaxUIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaxUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaxUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxUIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MaxUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MaxUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaxUIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaxUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaxUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaxUIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MaxUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaxUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaxUIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaxUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MaxUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MaxUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MaxUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MaximumFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaximumFOpGenericAdaptorBase::MaximumFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.maximumf", odsAttrs.getContext());
}

MaximumFOpGenericAdaptorBase::MaximumFOpGenericAdaptorBase(MaximumFOp op) : MaximumFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MaximumFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MaximumFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MaximumFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags MaximumFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MaximumFOpAdaptor::MaximumFOpAdaptor(MaximumFOp op) : MaximumFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MaximumFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.maximumf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaximumFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaximumFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaximumFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MaximumFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MaximumFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MaximumFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MaximumFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaximumFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaximumFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MaximumFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MaximumFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MaximumFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MaximumFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void MaximumFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void MaximumFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult MaximumFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MaximumFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaximumFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr MaximumFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags MaximumFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MaximumFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MaximumFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaximumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MaximumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaximumFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MaximumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MaximumFOp::inferReturnTypes(odsBuilder.getContext(),
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

void MaximumFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult MaximumFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaximumFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MaximumFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MaximumFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<MaximumFOp::Properties>().fastmath = fastmathAttr;
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

void MaximumFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MaximumFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MaximumFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MinNumFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinNumFOpGenericAdaptorBase::MinNumFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.minnumf", odsAttrs.getContext());
}

MinNumFOpGenericAdaptorBase::MinNumFOpGenericAdaptorBase(MinNumFOp op) : MinNumFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinNumFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MinNumFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MinNumFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags MinNumFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MinNumFOpAdaptor::MinNumFOpAdaptor(MinNumFOp op) : MinNumFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinNumFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.minnumf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinNumFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinNumFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinNumFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MinNumFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MinNumFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MinNumFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MinNumFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinNumFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinNumFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MinNumFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MinNumFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MinNumFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MinNumFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void MinNumFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void MinNumFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult MinNumFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MinNumFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MinNumFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr MinNumFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags MinNumFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MinNumFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MinNumFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MinNumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MinNumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinNumFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MinNumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MinNumFOp::inferReturnTypes(odsBuilder.getContext(),
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

void MinNumFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult MinNumFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinNumFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MinNumFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MinNumFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<MinNumFOp::Properties>().fastmath = fastmathAttr;
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

void MinNumFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MinNumFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MinNumFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MinSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinSIOpGenericAdaptorBase::MinSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.minsi", odsAttrs.getContext());
}

MinSIOpGenericAdaptorBase::MinSIOpGenericAdaptorBase(MinSIOp op) : MinSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MinSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MinSIOpAdaptor::MinSIOpAdaptor(MinSIOp op) : MinSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MinSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MinSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MinSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MinSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MinSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MinSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MinSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MinSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MinSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MinSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MinSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MinSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MinSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MinSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MinSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MinSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MinUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinUIOpGenericAdaptorBase::MinUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.minui", odsAttrs.getContext());
}

MinUIOpGenericAdaptorBase::MinUIOpGenericAdaptorBase(MinUIOp op) : MinUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MinUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MinUIOpAdaptor::MinUIOpAdaptor(MinUIOp op) : MinUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinUIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MinUIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MinUIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MinUIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MinUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinUIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MinUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MinUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MinUIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MinUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MinUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MinUIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MinUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MinUIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MinUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MinUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MinUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MinUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MinimumFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MinimumFOpGenericAdaptorBase::MinimumFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.minimumf", odsAttrs.getContext());
}

MinimumFOpGenericAdaptorBase::MinimumFOpGenericAdaptorBase(MinimumFOp op) : MinimumFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MinimumFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MinimumFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MinimumFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags MinimumFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MinimumFOpAdaptor::MinimumFOpAdaptor(MinimumFOp op) : MinimumFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MinimumFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.minimumf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MinimumFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinimumFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinimumFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MinimumFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MinimumFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MinimumFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MinimumFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinimumFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinimumFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MinimumFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MinimumFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MinimumFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MinimumFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void MinimumFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void MinimumFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult MinimumFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MinimumFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MinimumFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr MinimumFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags MinimumFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MinimumFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MinimumFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MinimumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MinimumFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinimumFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MinimumFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MinimumFOp::inferReturnTypes(odsBuilder.getContext(),
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

void MinimumFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult MinimumFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MinimumFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MinimumFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MinimumFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<MinimumFOp::Properties>().fastmath = fastmathAttr;
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

void MinimumFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MinimumFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MinimumFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MulFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulFOpGenericAdaptorBase::MulFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.mulf", odsAttrs.getContext());
}

MulFOpGenericAdaptorBase::MulFOpGenericAdaptorBase(MulFOp op) : MulFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MulFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags MulFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MulFOpAdaptor::MulFOpAdaptor(MulFOp op) : MulFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.mulf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MulFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MulFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MulFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MulFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MulFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MulFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MulFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void MulFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void MulFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult MulFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MulFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr MulFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags MulFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MulFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MulFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MulFOp::inferReturnTypes(odsBuilder.getContext(),
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

void MulFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult MulFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MulFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MulFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MulFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<MulFOp::Properties>().fastmath = fastmathAttr;
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

void MulFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void MulFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MulFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MulIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulIOpGenericAdaptorBase::MulIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.muli", odsAttrs.getContext());
}

MulIOpGenericAdaptorBase::MulIOpGenericAdaptorBase(MulIOp op) : MulIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::IntegerOverflowFlagsAttr MulIOpGenericAdaptorBase::getOverflowFlagsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
  return attr;
}

::mlir::arith::IntegerOverflowFlags MulIOpGenericAdaptorBase::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

} // namespace detail
MulIOpAdaptor::MulIOpAdaptor(MulIOp op) : MulIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (tblgen_overflowFlags && !((::llvm::isa<::mlir::arith::IntegerOverflowFlagsAttr>(tblgen_overflowFlags))))
    return emitError(loc, "'arith.muli' op ""attribute 'overflowFlags' failed to satisfy constraint: Integer overflow arith flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MulIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MulIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MulIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult MulIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.overflowFlags;
       auto attr = dict.get("overflowFlags");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for overflowFlags in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `overflowFlags` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MulIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.overflowFlags;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("overflowFlags",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MulIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.overflowFlags.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MulIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "overflowFlags")
      return prop.overflowFlags;
  return std::nullopt;
}

void MulIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "overflowFlags") {
       prop.overflowFlags = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.overflowFlags)>>(value);
       return;
    }
}

void MulIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.overflowFlags) attrs.append("overflowFlags", prop.overflowFlags);
}

::mlir::LogicalResult MulIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOverflowFlagsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(attr, "overflowFlags", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MulIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.overflowFlags)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.overflowFlags);
}

::mlir::arith::IntegerOverflowFlagsAttr MulIOp::getOverflowFlagsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
}

::mlir::arith::IntegerOverflowFlags MulIOp::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

void MulIOp::setOverflowFlagsAttr(::mlir::arith::IntegerOverflowFlagsAttr attr) {
  (*this)->setAttr(getOverflowFlagsAttrName(), attr);
}

void MulIOp::setOverflowFlags(::mlir::arith::IntegerOverflowFlags attrValue) {
  (*this)->setAttr(getOverflowFlagsAttrName(), ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  odsState.addTypes(result);
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  odsState.addTypes(result);
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MulIOp::inferReturnTypes(odsBuilder.getContext(),
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

void MulIOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.overflowFlags)
    properties.overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none);
}

::mlir::LogicalResult MulIOp::verifyInvariantsImpl() {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(*this, tblgen_overflowFlags, "overflowFlags")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MulIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MulIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult MulIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::IntegerOverflowFlagsAttr overflowFlagsAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("overflow"))) {

  if (parser.parseCustomAttributeWithFallback(overflowFlagsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (overflowFlagsAttr) result.getOrAddProperties<MulIOp::Properties>().overflowFlags = overflowFlagsAttr;
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

void MulIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getOverflowFlagsAttr() && getOverflowFlagsAttr() != ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::IntegerOverflowFlags::none)) {
    _odsPrinter << ' ' << "overflow";
  _odsPrinter.printStrippedAttrOrType(getOverflowFlagsAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("overflowFlags");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOverflowFlagsAttr();
     if(attr && (attr == ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none)))
       elidedAttrs.push_back("overflowFlags");
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

void MulIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MulIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MulSIExtendedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulSIExtendedOpGenericAdaptorBase::MulSIExtendedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.mulsi_extended", odsAttrs.getContext());
}

MulSIExtendedOpGenericAdaptorBase::MulSIExtendedOpGenericAdaptorBase(MulSIExtendedOp op) : MulSIExtendedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulSIExtendedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulSIExtendedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MulSIExtendedOpAdaptor::MulSIExtendedOpAdaptor(MulSIExtendedOp op) : MulSIExtendedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulSIExtendedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MulSIExtendedOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "low");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "high");
}

std::pair<unsigned, unsigned> MulSIExtendedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulSIExtendedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulSIExtendedOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MulSIExtendedOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulSIExtendedOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulSIExtendedOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MulSIExtendedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulSIExtendedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulSIExtendedOp::getLow() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value MulSIExtendedOp::getHigh() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

void MulSIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low, ::mlir::Type high, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(low);
  odsState.addTypes(high);
}

void MulSIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulSIExtendedOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulSIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulSIExtendedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulSIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MulSIExtendedOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MulSIExtendedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSResults(1).begin()).getType()) && ((*this->getODSResults(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs, low, high} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MulSIExtendedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MulSIExtendedOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  ::mlir::Type odsInferredType1 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  inferredReturnTypes[1] = odsInferredType1;
  return ::mlir::success();
}

::mlir::ParseResult MulSIExtendedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  result.addTypes(lhsTypes[0]);
  result.addTypes(lhsTypes[0]);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulSIExtendedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MulSIExtendedOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MulSIExtendedOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::MulUIExtendedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MulUIExtendedOpGenericAdaptorBase::MulUIExtendedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.mului_extended", odsAttrs.getContext());
}

MulUIExtendedOpGenericAdaptorBase::MulUIExtendedOpGenericAdaptorBase(MulUIExtendedOp op) : MulUIExtendedOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MulUIExtendedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MulUIExtendedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MulUIExtendedOpAdaptor::MulUIExtendedOpAdaptor(MulUIExtendedOp op) : MulUIExtendedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MulUIExtendedOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MulUIExtendedOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "low");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "high");
}

std::pair<unsigned, unsigned> MulUIExtendedOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulUIExtendedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulUIExtendedOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MulUIExtendedOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MulUIExtendedOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MulUIExtendedOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MulUIExtendedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulUIExtendedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulUIExtendedOp::getLow() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value MulUIExtendedOp::getHigh() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

void MulUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low, ::mlir::Type high, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(low);
  odsState.addTypes(high);
}

void MulUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(MulUIExtendedOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void MulUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulUIExtendedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulUIExtendedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(MulUIExtendedOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult MulUIExtendedOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSResults(1).begin()).getType()) && ((*this->getODSResults(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {lhs, rhs, low, high} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult MulUIExtendedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult MulUIExtendedOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[1].getType();
  ::mlir::Type odsInferredType1 = operands[1].getType();
  inferredReturnTypes[0] = odsInferredType0;
  inferredReturnTypes[1] = odsInferredType1;
  return ::mlir::success();
}

::mlir::ParseResult MulUIExtendedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  result.addTypes(lhsTypes[0]);
  result.addTypes(lhsTypes[0]);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MulUIExtendedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MulUIExtendedOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::MulUIExtendedOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::NegFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NegFOpGenericAdaptorBase::NegFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.negf", odsAttrs.getContext());
}

NegFOpGenericAdaptorBase::NegFOpGenericAdaptorBase(NegFOp op) : NegFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NegFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NegFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr NegFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags NegFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
NegFOpAdaptor::NegFOpAdaptor(NegFOp op) : NegFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NegFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.negf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NegFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NegFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NegFOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &NegFOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> NegFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NegFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NegFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult NegFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute NegFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code NegFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> NegFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void NegFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void NegFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult NegFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult NegFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void NegFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr NegFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags NegFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void NegFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void NegFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NegFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(operand);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NegFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(operand);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NegFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NegFOp::inferReturnTypes(odsBuilder.getContext(),
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

void NegFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult NegFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NegFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult NegFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult NegFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<NegFOp::Properties>().fastmath = fastmathAttr;
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

void NegFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void NegFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::NegFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::OrIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OrIOpGenericAdaptorBase::OrIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.ori", odsAttrs.getContext());
}

OrIOpGenericAdaptorBase::OrIOpGenericAdaptorBase(OrIOp op) : OrIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OrIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr OrIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
OrIOpAdaptor::OrIOpAdaptor(OrIOp op) : OrIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OrIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OrIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OrIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OrIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value OrIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &OrIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &OrIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> OrIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OrIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void OrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void OrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(OrIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void OrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void OrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(OrIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult OrIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OrIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult OrIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult OrIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void OrIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void OrIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::OrIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::RemFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RemFOpGenericAdaptorBase::RemFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.remf", odsAttrs.getContext());
}

RemFOpGenericAdaptorBase::RemFOpGenericAdaptorBase(RemFOp op) : RemFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RemFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RemFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr RemFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags RemFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
RemFOpAdaptor::RemFOpAdaptor(RemFOp op) : RemFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RemFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.remf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RemFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RemFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RemFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RemFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RemFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RemFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RemFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RemFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute RemFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code RemFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RemFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void RemFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void RemFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult RemFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RemFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RemFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr RemFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags RemFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void RemFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void RemFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RemFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RemFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RemFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RemFOp::inferReturnTypes(odsBuilder.getContext(),
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

void RemFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult RemFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RemFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RemFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RemFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<RemFOp::Properties>().fastmath = fastmathAttr;
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

void RemFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void RemFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::RemFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::RemSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RemSIOpGenericAdaptorBase::RemSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.remsi", odsAttrs.getContext());
}

RemSIOpGenericAdaptorBase::RemSIOpGenericAdaptorBase(RemSIOp op) : RemSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RemSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RemSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RemSIOpAdaptor::RemSIOpAdaptor(RemSIOp op) : RemSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RemSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RemSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RemSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RemSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RemSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RemSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RemSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RemSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RemSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void RemSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RemSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RemSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RemSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RemSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RemSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RemSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RemSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RemSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void RemSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void RemSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::RemSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::RemUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RemUIOpGenericAdaptorBase::RemUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.remui", odsAttrs.getContext());
}

RemUIOpGenericAdaptorBase::RemUIOpGenericAdaptorBase(RemUIOp op) : RemUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RemUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RemUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RemUIOpAdaptor::RemUIOpAdaptor(RemUIOp op) : RemUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RemUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RemUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RemUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemUIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RemUIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &RemUIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RemUIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RemUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RemUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemUIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RemUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void RemUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(RemUIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RemUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RemUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(RemUIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult RemUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RemUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult RemUIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult RemUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void RemUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void RemUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::RemUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::SIToFPOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SIToFPOpGenericAdaptorBase::SIToFPOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.sitofp", odsAttrs.getContext());
}

SIToFPOpGenericAdaptorBase::SIToFPOpGenericAdaptorBase(SIToFPOp op) : SIToFPOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SIToFPOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SIToFPOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SIToFPOpAdaptor::SIToFPOpAdaptor(SIToFPOp op) : SIToFPOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SIToFPOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SIToFPOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SIToFPOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SIToFPOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SIToFPOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SIToFPOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SIToFPOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SIToFPOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SIToFPOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void SIToFPOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SIToFPOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SIToFPOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SIToFPOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SIToFPOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SIToFPOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SIToFPOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::SIToFPOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ShLIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShLIOpGenericAdaptorBase::ShLIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.shli", odsAttrs.getContext());
}

ShLIOpGenericAdaptorBase::ShLIOpGenericAdaptorBase(ShLIOp op) : ShLIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShLIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShLIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::IntegerOverflowFlagsAttr ShLIOpGenericAdaptorBase::getOverflowFlagsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
  return attr;
}

::mlir::arith::IntegerOverflowFlags ShLIOpGenericAdaptorBase::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

} // namespace detail
ShLIOpAdaptor::ShLIOpAdaptor(ShLIOp op) : ShLIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShLIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (tblgen_overflowFlags && !((::llvm::isa<::mlir::arith::IntegerOverflowFlagsAttr>(tblgen_overflowFlags))))
    return emitError(loc, "'arith.shli' op ""attribute 'overflowFlags' failed to satisfy constraint: Integer overflow arith flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShLIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShLIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShLIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ShLIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShLIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShLIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShLIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShLIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShLIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult ShLIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.overflowFlags;
       auto attr = dict.get("overflowFlags");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for overflowFlags in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `overflowFlags` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ShLIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.overflowFlags;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("overflowFlags",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ShLIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.overflowFlags.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ShLIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "overflowFlags")
      return prop.overflowFlags;
  return std::nullopt;
}

void ShLIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "overflowFlags") {
       prop.overflowFlags = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.overflowFlags)>>(value);
       return;
    }
}

void ShLIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.overflowFlags) attrs.append("overflowFlags", prop.overflowFlags);
}

::mlir::LogicalResult ShLIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOverflowFlagsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(attr, "overflowFlags", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ShLIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.overflowFlags)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShLIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.overflowFlags);
}

::mlir::arith::IntegerOverflowFlagsAttr ShLIOp::getOverflowFlagsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
}

::mlir::arith::IntegerOverflowFlags ShLIOp::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

void ShLIOp::setOverflowFlagsAttr(::mlir::arith::IntegerOverflowFlagsAttr attr) {
  (*this)->setAttr(getOverflowFlagsAttrName(), attr);
}

void ShLIOp::setOverflowFlags(::mlir::arith::IntegerOverflowFlags attrValue) {
  (*this)->setAttr(getOverflowFlagsAttrName(), ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  odsState.addTypes(result);
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShLIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  odsState.addTypes(result);
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShLIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShLIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShLIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ShLIOp::inferReturnTypes(odsBuilder.getContext(),
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

void ShLIOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.overflowFlags)
    properties.overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none);
}

::mlir::LogicalResult ShLIOp::verifyInvariantsImpl() {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(*this, tblgen_overflowFlags, "overflowFlags")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShLIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ShLIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ShLIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::IntegerOverflowFlagsAttr overflowFlagsAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("overflow"))) {

  if (parser.parseCustomAttributeWithFallback(overflowFlagsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (overflowFlagsAttr) result.getOrAddProperties<ShLIOp::Properties>().overflowFlags = overflowFlagsAttr;
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

void ShLIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getOverflowFlagsAttr() && getOverflowFlagsAttr() != ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::IntegerOverflowFlags::none)) {
    _odsPrinter << ' ' << "overflow";
  _odsPrinter.printStrippedAttrOrType(getOverflowFlagsAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("overflowFlags");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOverflowFlagsAttr();
     if(attr && (attr == ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none)))
       elidedAttrs.push_back("overflowFlags");
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

void ShLIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ShLIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ShRSIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShRSIOpGenericAdaptorBase::ShRSIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.shrsi", odsAttrs.getContext());
}

ShRSIOpGenericAdaptorBase::ShRSIOpGenericAdaptorBase(ShRSIOp op) : ShRSIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShRSIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShRSIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShRSIOpAdaptor::ShRSIOpAdaptor(ShRSIOp op) : ShRSIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShRSIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShRSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShRSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShRSIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ShRSIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShRSIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShRSIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShRSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShRSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShRSIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ShRSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ShRSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShRSIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShRSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShRSIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShRSIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ShRSIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ShRSIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShRSIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ShRSIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ShRSIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ShRSIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void ShRSIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ShRSIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::ShRUIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShRUIOpGenericAdaptorBase::ShRUIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.shrui", odsAttrs.getContext());
}

ShRUIOpGenericAdaptorBase::ShRUIOpGenericAdaptorBase(ShRUIOp op) : ShRUIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShRUIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShRUIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShRUIOpAdaptor::ShRUIOpAdaptor(ShRUIOp op) : ShRUIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShRUIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShRUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShRUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShRUIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ShRUIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ShRUIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShRUIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShRUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShRUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShRUIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ShRUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ShRUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShRUIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShRUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShRUIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShRUIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ShRUIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ShRUIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShRUIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ShRUIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ShRUIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ShRUIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void ShRUIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::ShRUIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::SubFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubFOpGenericAdaptorBase::SubFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.subf", odsAttrs.getContext());
}

SubFOpGenericAdaptorBase::SubFOpGenericAdaptorBase(SubFOp op) : SubFOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SubFOpGenericAdaptorBase::getFastmathAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
  return attr;
}

::mlir::arith::FastMathFlags SubFOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SubFOpAdaptor::SubFOpAdaptor(SubFOp op) : SubFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubFOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'arith.subf' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubFOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SubFOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SubFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubFOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubFOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute SubFOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code SubFOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fastmath.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubFOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fastmath")
      return prop.fastmath;
  return std::nullopt;
}

void SubFOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fastmath") {
       prop.fastmath = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fastmath)>>(value);
       return;
    }
}

void SubFOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fastmath) attrs.append("fastmath", prop.fastmath);
}

::mlir::LogicalResult SubFOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFastmathAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(attr, "fastmath", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubFOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fastmath)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubFOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fastmath);
}

::mlir::arith::FastMathFlagsAttr SubFOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(getProperties().fastmath);
}

::mlir::arith::FastMathFlags SubFOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SubFOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SubFOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  odsState.addTypes(result);
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.getOrAddProperties<Properties>().fastmath = fastmath;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  odsState.addTypes(result);
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubFOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubFOp::inferReturnTypes(odsBuilder.getContext(),
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

void SubFOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fastmath)
    properties.fastmath = ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none);
}

::mlir::LogicalResult SubFOp::verifyInvariantsImpl() {
  auto tblgen_fastmath = getProperties().fastmath; (void)tblgen_fastmath;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps0(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubFOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SubFOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  if (fastmathAttr) result.getOrAddProperties<SubFOp::Properties>().fastmath = fastmathAttr;
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

void SubFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void SubFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::SubFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::SubIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubIOpGenericAdaptorBase::SubIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.subi", odsAttrs.getContext());
}

SubIOpGenericAdaptorBase::SubIOpGenericAdaptorBase(SubIOp op) : SubIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::IntegerOverflowFlagsAttr SubIOpGenericAdaptorBase::getOverflowFlagsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
  return attr;
}

::mlir::arith::IntegerOverflowFlags SubIOpGenericAdaptorBase::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

} // namespace detail
SubIOpAdaptor::SubIOpAdaptor(SubIOp op) : SubIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (tblgen_overflowFlags && !((::llvm::isa<::mlir::arith::IntegerOverflowFlagsAttr>(tblgen_overflowFlags))))
    return emitError(loc, "'arith.subi' op ""attribute 'overflowFlags' failed to satisfy constraint: Integer overflow arith flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SubIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &SubIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.overflowFlags;
       auto attr = dict.get("overflowFlags");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for overflowFlags in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `overflowFlags` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SubIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.overflowFlags;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("overflowFlags",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SubIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.overflowFlags.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "overflowFlags")
      return prop.overflowFlags;
  return std::nullopt;
}

void SubIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "overflowFlags") {
       prop.overflowFlags = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.overflowFlags)>>(value);
       return;
    }
}

void SubIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.overflowFlags) attrs.append("overflowFlags", prop.overflowFlags);
}

::mlir::LogicalResult SubIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOverflowFlagsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(attr, "overflowFlags", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.overflowFlags)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.overflowFlags);
}

::mlir::arith::IntegerOverflowFlagsAttr SubIOp::getOverflowFlagsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::IntegerOverflowFlagsAttr>(getProperties().overflowFlags);
}

::mlir::arith::IntegerOverflowFlags SubIOp::getOverflowFlags() {
  auto attr = getOverflowFlagsAttr();
  return attr.getValue();
}

void SubIOp::setOverflowFlagsAttr(::mlir::arith::IntegerOverflowFlagsAttr attr) {
  (*this)->setAttr(getOverflowFlagsAttrName(), attr);
}

void SubIOp::setOverflowFlags(::mlir::arith::IntegerOverflowFlags attrValue) {
  (*this)->setAttr(getOverflowFlagsAttrName(), ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  odsState.addTypes(result);
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlagsAttr overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (overflowFlags) {
    odsState.getOrAddProperties<Properties>().overflowFlags = overflowFlags;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  odsState.addTypes(result);
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::IntegerOverflowFlags overflowFlags) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.getOrAddProperties<Properties>().overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), overflowFlags);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubIOp::inferReturnTypes(odsBuilder.getContext(),
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

void SubIOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.overflowFlags)
    properties.overflowFlags = ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none);
}

::mlir::LogicalResult SubIOp::verifyInvariantsImpl() {
  auto tblgen_overflowFlags = getProperties().overflowFlags; (void)tblgen_overflowFlags;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArithOps1(*this, tblgen_overflowFlags, "overflowFlags")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SubIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::arith::IntegerOverflowFlagsAttr overflowFlagsAttr;
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
  if (::mlir::succeeded(parser.parseOptionalKeyword("overflow"))) {

  if (parser.parseCustomAttributeWithFallback(overflowFlagsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (overflowFlagsAttr) result.getOrAddProperties<SubIOp::Properties>().overflowFlags = overflowFlagsAttr;
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

void SubIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getOverflowFlagsAttr() && getOverflowFlagsAttr() != ::mlir::arith::IntegerOverflowFlagsAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::arith::IntegerOverflowFlags::none)) {
    _odsPrinter << ' ' << "overflow";
  _odsPrinter.printStrippedAttrOrType(getOverflowFlagsAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("overflowFlags");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOverflowFlagsAttr();
     if(attr && (attr == ::mlir::arith::IntegerOverflowFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::IntegerOverflowFlags::none)))
       elidedAttrs.push_back("overflowFlags");
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

void SubIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::SubIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::TruncFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TruncFOpGenericAdaptorBase::TruncFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.truncf", odsAttrs.getContext());
}

TruncFOpGenericAdaptorBase::TruncFOpGenericAdaptorBase(TruncFOp op) : TruncFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TruncFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TruncFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TruncFOpAdaptor::TruncFOpAdaptor(TruncFOp op) : TruncFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TruncFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TruncFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TruncFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TruncFOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TruncFOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TruncFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TruncFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TruncFOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void TruncFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void TruncFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TruncFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TruncFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TruncFOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TruncFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TruncFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TruncFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::TruncFOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::TruncIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TruncIOpGenericAdaptorBase::TruncIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.trunci", odsAttrs.getContext());
}

TruncIOpGenericAdaptorBase::TruncIOpGenericAdaptorBase(TruncIOp op) : TruncIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TruncIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TruncIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TruncIOpAdaptor::TruncIOpAdaptor(TruncIOp op) : TruncIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TruncIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TruncIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TruncIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TruncIOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &TruncIOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TruncIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TruncIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TruncIOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void TruncIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void TruncIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TruncIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TruncIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TruncIOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TruncIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TruncIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TruncIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::TruncIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::UIToFPOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UIToFPOpGenericAdaptorBase::UIToFPOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.uitofp", odsAttrs.getContext());
}

UIToFPOpGenericAdaptorBase::UIToFPOpGenericAdaptorBase(UIToFPOp op) : UIToFPOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UIToFPOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr UIToFPOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
UIToFPOpAdaptor::UIToFPOpAdaptor(UIToFPOp op) : UIToFPOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UIToFPOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UIToFPOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range UIToFPOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UIToFPOp::getIn() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &UIToFPOp::getInMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> UIToFPOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UIToFPOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value UIToFPOp::getOut() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void UIToFPOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type out, ::mlir::Value in) {
  odsState.addOperands(in);
  odsState.addTypes(out);
}

void UIToFPOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UIToFPOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UIToFPOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UIToFPOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult UIToFPOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inOperands(inRawOperands);  ::llvm::SMLoc inOperandsLoc;
  (void)inOperandsLoc;
  ::mlir::Type inRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inTypes(inRawTypes);
  ::mlir::Type outRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> outTypes(outRawTypes);

  inOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inRawOperands[0]))
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
    inRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    outRawTypes[0] = type;
  }
  result.addTypes(outTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UIToFPOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIn().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getOut().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void UIToFPOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::UIToFPOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::XOrIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
XOrIOpGenericAdaptorBase::XOrIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.xori", odsAttrs.getContext());
}

XOrIOpGenericAdaptorBase::XOrIOpGenericAdaptorBase(XOrIOp op) : XOrIOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> XOrIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr XOrIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
XOrIOpAdaptor::XOrIOpAdaptor(XOrIOp op) : XOrIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult XOrIOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> XOrIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range XOrIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XOrIOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value XOrIOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &XOrIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &XOrIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> XOrIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range XOrIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XOrIOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void XOrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void XOrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(XOrIOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void XOrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XOrIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void XOrIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(XOrIOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult XOrIOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult XOrIOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult XOrIOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult XOrIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void XOrIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void XOrIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::XOrIOp)

namespace mlir {
namespace arith {

//===----------------------------------------------------------------------===//
// ::mlir::arith::SelectOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arith.select", odsAttrs.getContext());
}

SelectOpGenericAdaptorBase::SelectOpGenericAdaptorBase(SelectOp op) : SelectOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SelectOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SelectOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
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

::mlir::Value SelectOp::getCondition() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SelectOp::getTrueValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SelectOp::getFalseValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SelectOp::getConditionMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectOp::getTrueValueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SelectOp::getFalseValueMutable() {
  auto range = getODSOperandIndexAndLength(2);
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

::mlir::Value SelectOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value condition, ::mlir::Value true_value, ::mlir::Value false_value) {
  odsState.addOperands(condition);
  odsState.addOperands(true_value);
  odsState.addOperands(false_value);
  odsState.addTypes(result);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value condition, ::mlir::Value true_value, ::mlir::Value false_value) {
  odsState.addOperands(condition);
  odsState.addOperands(true_value);
  odsState.addOperands(false_value);

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

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value condition, ::mlir::Value true_value, ::mlir::Value false_value) {
  odsState.addOperands(condition);
  odsState.addOperands(true_value);
  odsState.addOperands(false_value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

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
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArithOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {true_value, false_value, result} have same type");
  if (!(((((*this->getODSOperands(0).begin()).getType().isSignlessInteger(1)))) || (((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape())))))
    return emitOpError("failed to verify that condition is scalar or has matching shape");
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
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

void SelectOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace arith
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arith::SelectOp)


#endif  // GET_OP_CLASSES

