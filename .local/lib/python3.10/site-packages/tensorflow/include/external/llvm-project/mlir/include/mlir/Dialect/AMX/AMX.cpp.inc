/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AMX.td                                                               *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::amx::x86_amx_tdpbf16ps,
::mlir::amx::x86_amx_tdpbssd,
::mlir::amx::x86_amx_tdpbsud,
::mlir::amx::x86_amx_tdpbusd,
::mlir::amx::x86_amx_tdpbuud,
::mlir::amx::x86_amx_tileloadd64,
::mlir::amx::x86_amx_tilestored64,
::mlir::amx::x86_amx_tilezero,
::mlir::amx::TileLoadOp,
::mlir::amx::TileMulFOp,
::mlir::amx::TileMulIOp,
::mlir::amx::TileStoreOp,
::mlir::amx::TileZeroOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace amx {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IntegerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isBF16())) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(8))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float or bfloat16 type or 32-bit signless integer or 8-bit signless integer values of ranks 2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isF32())) || ((elementType.isBF16())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit float or bfloat16 type values of ranks 2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AMX7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(8))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 2))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of 32-bit signless integer or 8-bit signless integer values of ranks 2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMX0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AMX0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AMX0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace amx
} // namespace mlir
namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tdpbf16ps definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tdpbf16psGenericAdaptorBase::x86_amx_tdpbf16psGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tdpbf16ps", odsAttrs.getContext());
}

x86_amx_tdpbf16psGenericAdaptorBase::x86_amx_tdpbf16psGenericAdaptorBase(x86_amx_tdpbf16ps op) : x86_amx_tdpbf16psGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tdpbf16psGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tdpbf16psGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tdpbf16psAdaptor::x86_amx_tdpbf16psAdaptor(x86_amx_tdpbf16ps op) : x86_amx_tdpbf16psGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tdpbf16psAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tdpbf16ps::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tdpbf16ps::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tdpbf16ps::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tdpbf16ps::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tdpbf16ps::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tdpbf16ps::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  odsState.addTypes(res);
}

void x86_amx_tdpbf16ps::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tdpbf16ps::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tdpbf16ps::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tdpbf16ps::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tdpbf16ps)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tdpbssd definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tdpbssdGenericAdaptorBase::x86_amx_tdpbssdGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tdpbssd", odsAttrs.getContext());
}

x86_amx_tdpbssdGenericAdaptorBase::x86_amx_tdpbssdGenericAdaptorBase(x86_amx_tdpbssd op) : x86_amx_tdpbssdGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tdpbssdGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tdpbssdGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tdpbssdAdaptor::x86_amx_tdpbssdAdaptor(x86_amx_tdpbssd op) : x86_amx_tdpbssdGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tdpbssdAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tdpbssd::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tdpbssd::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tdpbssd::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tdpbssd::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tdpbssd::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tdpbssd::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  odsState.addTypes(res);
}

void x86_amx_tdpbssd::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tdpbssd::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tdpbssd::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tdpbssd::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tdpbssd)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tdpbsud definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tdpbsudGenericAdaptorBase::x86_amx_tdpbsudGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tdpbsud", odsAttrs.getContext());
}

x86_amx_tdpbsudGenericAdaptorBase::x86_amx_tdpbsudGenericAdaptorBase(x86_amx_tdpbsud op) : x86_amx_tdpbsudGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tdpbsudGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tdpbsudGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tdpbsudAdaptor::x86_amx_tdpbsudAdaptor(x86_amx_tdpbsud op) : x86_amx_tdpbsudGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tdpbsudAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tdpbsud::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tdpbsud::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tdpbsud::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tdpbsud::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tdpbsud::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tdpbsud::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  odsState.addTypes(res);
}

void x86_amx_tdpbsud::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tdpbsud::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tdpbsud::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tdpbsud::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tdpbsud)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tdpbusd definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tdpbusdGenericAdaptorBase::x86_amx_tdpbusdGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tdpbusd", odsAttrs.getContext());
}

x86_amx_tdpbusdGenericAdaptorBase::x86_amx_tdpbusdGenericAdaptorBase(x86_amx_tdpbusd op) : x86_amx_tdpbusdGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tdpbusdGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tdpbusdGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tdpbusdAdaptor::x86_amx_tdpbusdAdaptor(x86_amx_tdpbusd op) : x86_amx_tdpbusdGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tdpbusdAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tdpbusd::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tdpbusd::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tdpbusd::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tdpbusd::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tdpbusd::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tdpbusd::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  odsState.addTypes(res);
}

void x86_amx_tdpbusd::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tdpbusd::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tdpbusd::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tdpbusd::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tdpbusd)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tdpbuud definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tdpbuudGenericAdaptorBase::x86_amx_tdpbuudGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tdpbuud", odsAttrs.getContext());
}

x86_amx_tdpbuudGenericAdaptorBase::x86_amx_tdpbuudGenericAdaptorBase(x86_amx_tdpbuud op) : x86_amx_tdpbuudGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tdpbuudGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tdpbuudGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tdpbuudAdaptor::x86_amx_tdpbuudAdaptor(x86_amx_tdpbuud op) : x86_amx_tdpbuudGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tdpbuudAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tdpbuud::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tdpbuud::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tdpbuud::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tdpbuud::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tdpbuud::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tdpbuud::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  odsState.addTypes(res);
}

void x86_amx_tdpbuud::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4, ::mlir::Value odsArg_5) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addOperands(odsArg_5);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tdpbuud::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tdpbuud::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tdpbuud::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tdpbuud)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tileloadd64 definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tileloadd64GenericAdaptorBase::x86_amx_tileloadd64GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tileloadd64", odsAttrs.getContext());
}

x86_amx_tileloadd64GenericAdaptorBase::x86_amx_tileloadd64GenericAdaptorBase(x86_amx_tileloadd64 op) : x86_amx_tileloadd64GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tileloadd64GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tileloadd64GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tileloadd64Adaptor::x86_amx_tileloadd64Adaptor(x86_amx_tileloadd64 op) : x86_amx_tileloadd64GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tileloadd64Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tileloadd64::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tileloadd64::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tileloadd64::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tileloadd64::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tileloadd64::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tileloadd64::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addTypes(res);
}

void x86_amx_tileloadd64::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tileloadd64::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tileloadd64::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tileloadd64::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tileloadd64)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tilestored64 definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tilestored64GenericAdaptorBase::x86_amx_tilestored64GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tilestored64", odsAttrs.getContext());
}

x86_amx_tilestored64GenericAdaptorBase::x86_amx_tilestored64GenericAdaptorBase(x86_amx_tilestored64 op) : x86_amx_tilestored64GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tilestored64GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tilestored64GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tilestored64Adaptor::x86_amx_tilestored64Adaptor(x86_amx_tilestored64 op) : x86_amx_tilestored64GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tilestored64Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tilestored64::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tilestored64::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tilestored64::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tilestored64::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void x86_amx_tilestored64::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
}

void x86_amx_tilestored64::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tilestored64::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tilestored64::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tilestored64::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tilestored64)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::x86_amx_tilezero definitions
//===----------------------------------------------------------------------===//

namespace detail {
x86_amx_tilezeroGenericAdaptorBase::x86_amx_tilezeroGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tilezero", odsAttrs.getContext());
}

x86_amx_tilezeroGenericAdaptorBase::x86_amx_tilezeroGenericAdaptorBase(x86_amx_tilezero op) : x86_amx_tilezeroGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> x86_amx_tilezeroGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr x86_amx_tilezeroGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
x86_amx_tilezeroAdaptor::x86_amx_tilezeroAdaptor(x86_amx_tilezero op) : x86_amx_tilezeroGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult x86_amx_tilezeroAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> x86_amx_tilezero::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range x86_amx_tilezero::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_amx_tilezero::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range x86_amx_tilezero::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value x86_amx_tilezero::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void x86_amx_tilezero::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addTypes(res);
}

void x86_amx_tilezero::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_amx_tilezero::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult x86_amx_tilezero::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult x86_amx_tilezero::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::x86_amx_tilezero)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::TileLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileLoadOpGenericAdaptorBase::TileLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tile_load", odsAttrs.getContext());
}

TileLoadOpGenericAdaptorBase::TileLoadOpGenericAdaptorBase(TileLoadOp op) : TileLoadOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr TileLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TileLoadOpAdaptor::TileLoadOpAdaptor(TileLoadOp op) : TileLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileLoadOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range TileLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TileLoadOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileLoadOp::getIndices() {
  return getODSOperands(1);
}

::mlir::OpOperand &TileLoadOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TileLoadOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TileLoadOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value base, ::mlir::ValueRange indices) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addTypes(res);
}

void TileLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileLoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resTypes);
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::TileLoadOp)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::TileMulFOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileMulFOpGenericAdaptorBase::TileMulFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tile_mulf", odsAttrs.getContext());
}

TileMulFOpGenericAdaptorBase::TileMulFOpGenericAdaptorBase(TileMulFOp op) : TileMulFOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileMulFOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileMulFOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TileMulFOpAdaptor::TileMulFOpAdaptor(TileMulFOp op) : TileMulFOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileMulFOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileMulFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileMulFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TileMulFOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> TileMulFOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> TileMulFOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &TileMulFOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TileMulFOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TileMulFOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TileMulFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileMulFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TileMulFOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void TileMulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addTypes(res);
}

void TileMulFOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileMulFOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileMulFOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult TileMulFOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileMulFOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type accRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> accTypes(accRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
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
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    accRawTypes[0] = type;
  }
  result.addTypes(accTypes[0]);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, accTypes, accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileMulFOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getAcc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileMulFOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::TileMulFOp)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::TileMulIOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileMulIOpGenericAdaptorBase::TileMulIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tile_muli", odsAttrs.getContext());
}

TileMulIOpGenericAdaptorBase::TileMulIOpGenericAdaptorBase(TileMulIOp op) : TileMulIOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileMulIOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileMulIOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr TileMulIOpGenericAdaptorBase::getIsZextLhsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().isZextLhs);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TileMulIOpGenericAdaptorBase::getIsZextLhs() {
  auto attr = getIsZextLhsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TileMulIOpGenericAdaptorBase::getIsZextRhsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().isZextRhs);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TileMulIOpGenericAdaptorBase::getIsZextRhs() {
  auto attr = getIsZextRhsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
TileMulIOpAdaptor::TileMulIOpAdaptor(TileMulIOp op) : TileMulIOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileMulIOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_isZextLhs = getProperties().isZextLhs; (void)tblgen_isZextLhs;
  auto tblgen_isZextRhs = getProperties().isZextRhs; (void)tblgen_isZextRhs;

  if (tblgen_isZextLhs && !((::llvm::isa<::mlir::UnitAttr>(tblgen_isZextLhs))))
    return emitError(loc, "'amx.tile_muli' op ""attribute 'isZextLhs' failed to satisfy constraint: unit attribute");

  if (tblgen_isZextRhs && !((::llvm::isa<::mlir::UnitAttr>(tblgen_isZextRhs))))
    return emitError(loc, "'amx.tile_muli' op ""attribute 'isZextRhs' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileMulIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileMulIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TileMulIOp::getLhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> TileMulIOp::getRhs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> TileMulIOp::getAcc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &TileMulIOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TileMulIOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TileMulIOp::getAccMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TileMulIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileMulIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TileMulIOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult TileMulIOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.isZextLhs;
       auto attr = dict.get("isZextLhs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for isZextLhs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `isZextLhs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.isZextRhs;
       auto attr = dict.get("isZextRhs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for isZextRhs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `isZextRhs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileMulIOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.isZextLhs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("isZextLhs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.isZextRhs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("isZextRhs",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileMulIOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.isZextLhs.getAsOpaquePointer()), 
    llvm::hash_value(prop.isZextRhs.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileMulIOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "isZextLhs")
      return prop.isZextLhs;

    if (name == "isZextRhs")
      return prop.isZextRhs;
  return std::nullopt;
}

void TileMulIOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "isZextLhs") {
       prop.isZextLhs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.isZextLhs)>>(value);
       return;
    }

    if (name == "isZextRhs") {
       prop.isZextRhs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.isZextRhs)>>(value);
       return;
    }
}

void TileMulIOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.isZextLhs) attrs.append("isZextLhs", prop.isZextLhs);

    if (prop.isZextRhs) attrs.append("isZextRhs", prop.isZextRhs);
}

::mlir::LogicalResult TileMulIOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsZextLhsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMX0(attr, "isZextLhs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsZextRhsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AMX0(attr, "isZextRhs", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileMulIOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.isZextLhs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.isZextRhs)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileMulIOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.isZextLhs);

  writer.writeOptionalAttribute(prop.isZextRhs);
}

::mlir::UnitAttr TileMulIOp::getIsZextLhsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().isZextLhs);
}

bool TileMulIOp::getIsZextLhs() {
  auto attr = getIsZextLhsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TileMulIOp::getIsZextRhsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().isZextRhs);
}

bool TileMulIOp::getIsZextRhs() {
  auto attr = getIsZextRhsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void TileMulIOp::setIsZextLhsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsZextLhsAttrName(), attr);
}

void TileMulIOp::setIsZextLhs(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsZextLhsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsZextLhsAttrName());
}

void TileMulIOp::setIsZextRhsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsZextRhsAttrName(), attr);
}

void TileMulIOp::setIsZextRhs(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsZextRhsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsZextRhsAttrName());
}

::mlir::Attribute TileMulIOp::removeIsZextLhsAttr() {
    auto &attr = getProperties().isZextLhs;
    attr = {};
    return attr;
}

::mlir::Attribute TileMulIOp::removeIsZextRhsAttr() {
    auto &attr = getProperties().isZextRhs;
    attr = {};
    return attr;
}

void TileMulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, /*optional*/::mlir::UnitAttr isZextLhs, /*optional*/::mlir::UnitAttr isZextRhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  if (isZextLhs) {
    odsState.getOrAddProperties<Properties>().isZextLhs = isZextLhs;
  }
  if (isZextRhs) {
    odsState.getOrAddProperties<Properties>().isZextRhs = isZextRhs;
  }
  odsState.addTypes(res);
}

void TileMulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, /*optional*/::mlir::UnitAttr isZextLhs, /*optional*/::mlir::UnitAttr isZextRhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  if (isZextLhs) {
    odsState.getOrAddProperties<Properties>().isZextLhs = isZextLhs;
  }
  if (isZextRhs) {
    odsState.getOrAddProperties<Properties>().isZextRhs = isZextRhs;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileMulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, /*optional*/bool isZextLhs, /*optional*/bool isZextRhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  if (isZextLhs) {
    odsState.getOrAddProperties<Properties>().isZextLhs = ((isZextLhs) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (isZextRhs) {
    odsState.getOrAddProperties<Properties>().isZextRhs = ((isZextRhs) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(res);
}

void TileMulIOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, /*optional*/bool isZextLhs, /*optional*/bool isZextRhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  if (isZextLhs) {
    odsState.getOrAddProperties<Properties>().isZextLhs = ((isZextLhs) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (isZextRhs) {
    odsState.getOrAddProperties<Properties>().isZextRhs = ((isZextRhs) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileMulIOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileMulIOp::verifyInvariantsImpl() {
  auto tblgen_isZextLhs = getProperties().isZextLhs; (void)tblgen_isZextLhs;
  auto tblgen_isZextRhs = getProperties().isZextRhs; (void)tblgen_isZextRhs;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMX0(*this, tblgen_isZextLhs, "isZextLhs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AMX0(*this, tblgen_isZextRhs, "isZextRhs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that all of {acc, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult TileMulIOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileMulIOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc;
  (void)accOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type accRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> accTypes(accRawTypes);

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("zext"))) {
    result.getOrAddProperties<TileMulIOp::Properties>().isZextLhs = parser.getBuilder().getUnitAttr();  }
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("zext"))) {
    result.getOrAddProperties<TileMulIOp::Properties>().isZextRhs = parser.getBuilder().getUnitAttr();  }
  if (parser.parseComma())
    return ::mlir::failure();

  accOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accRawOperands[0]))
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
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    lhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rhsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    accRawTypes[0] = type;
  }
  result.addTypes(accTypes[0]);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accOperands, accTypes, accOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileMulIOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  if (getIsZextLhsAttr()) {
    _odsPrinter << ' ' << "zext";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  if (getIsZextRhsAttr()) {
    _odsPrinter << ' ' << "zext";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getAcc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("isZextLhs");
  elidedAttrs.push_back("isZextRhs");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsZextLhsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("isZextLhs");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsZextRhsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("isZextRhs");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getLhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRhs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getAcc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileMulIOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::TileMulIOp)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::TileStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileStoreOpGenericAdaptorBase::TileStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tile_store", odsAttrs.getContext());
}

TileStoreOpGenericAdaptorBase::TileStoreOpGenericAdaptorBase(TileStoreOp op) : TileStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true, false};
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

::mlir::DictionaryAttr TileStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TileStoreOpAdaptor::TileStoreOpAdaptor(TileStoreOp op) : TileStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileStoreOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
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

::mlir::Operation::operand_range TileStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TileStoreOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileStoreOp::getIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::VectorType> TileStoreOp::getVal() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &TileStoreOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TileStoreOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &TileStoreOp::getValMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> TileStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value val) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(val);
}

void TileStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::Value val) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addOperands(val);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand baseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> baseOperands(baseRawOperands);  ::llvm::SMLoc baseOperandsLoc;
  (void)baseOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valOperands(valRawOperands);  ::llvm::SMLoc valOperandsLoc;
  (void)valOperandsLoc;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type valRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valTypes(valRawTypes);

  baseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(baseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(baseOperands, baseTypes, baseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valOperands, valTypes, valOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBase();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getVal();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getVal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TileStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::TileStoreOp)

namespace mlir {
namespace amx {

//===----------------------------------------------------------------------===//
// ::mlir::amx::TileZeroOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileZeroOpGenericAdaptorBase::TileZeroOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("amx.tile_zero", odsAttrs.getContext());
}

TileZeroOpGenericAdaptorBase::TileZeroOpGenericAdaptorBase(TileZeroOp op) : TileZeroOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TileZeroOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileZeroOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TileZeroOpAdaptor::TileZeroOpAdaptor(TileZeroOp op) : TileZeroOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TileZeroOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TileZeroOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileZeroOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TileZeroOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileZeroOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> TileZeroOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

void TileZeroOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void TileZeroOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileZeroOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileZeroOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AMX5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileZeroOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileZeroOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
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
  return ::mlir::success();
}

void TileZeroOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void TileZeroOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace amx
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amx::TileZeroOp)


#endif  // GET_OP_CLASSES

