/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSMEIntrinsicOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::arm_sme::aarch64_sme_cntsb,
::mlir::arm_sme::aarch64_sme_cntsd,
::mlir::arm_sme::aarch64_sme_cntsh,
::mlir::arm_sme::aarch64_sme_cntsw,
::mlir::arm_sme::aarch64_sme_ld1b_horiz,
::mlir::arm_sme::aarch64_sme_ld1b_vert,
::mlir::arm_sme::aarch64_sme_ld1d_horiz,
::mlir::arm_sme::aarch64_sme_ld1d_vert,
::mlir::arm_sme::aarch64_sme_ld1h_horiz,
::mlir::arm_sme::aarch64_sme_ld1h_vert,
::mlir::arm_sme::aarch64_sme_ld1q_horiz,
::mlir::arm_sme::aarch64_sme_ld1q_vert,
::mlir::arm_sme::aarch64_sme_ld1w_horiz,
::mlir::arm_sme::aarch64_sme_ld1w_vert,
::mlir::arm_sme::aarch64_sme_mopa,
::mlir::arm_sme::aarch64_sme_mopa_wide,
::mlir::arm_sme::aarch64_sme_mops,
::mlir::arm_sme::aarch64_sme_mops_wide,
::mlir::arm_sme::aarch64_sme_read_horiz,
::mlir::arm_sme::aarch64_sme_read_vert,
::mlir::arm_sme::aarch64_sme_smopa_wide,
::mlir::arm_sme::aarch64_sme_smopa_za32,
::mlir::arm_sme::aarch64_sme_smops_wide,
::mlir::arm_sme::aarch64_sme_smops_za32,
::mlir::arm_sme::aarch64_sme_st1b_horiz,
::mlir::arm_sme::aarch64_sme_st1b_vert,
::mlir::arm_sme::aarch64_sme_st1d_horiz,
::mlir::arm_sme::aarch64_sme_st1d_vert,
::mlir::arm_sme::aarch64_sme_st1h_horiz,
::mlir::arm_sme::aarch64_sme_st1h_vert,
::mlir::arm_sme::aarch64_sme_st1q_horiz,
::mlir::arm_sme::aarch64_sme_st1q_vert,
::mlir::arm_sme::aarch64_sme_st1w_horiz,
::mlir::arm_sme::aarch64_sme_st1w_vert,
::mlir::arm_sme::aarch64_sme_str,
::mlir::arm_sme::aarch64_sme_sumopa_wide,
::mlir::arm_sme::aarch64_sme_sumops_wide,
::mlir::arm_sme::aarch64_sme_umopa_wide,
::mlir::arm_sme::aarch64_sme_umopa_za32,
::mlir::arm_sme::aarch64_sme_umops_wide,
::mlir::arm_sme::aarch64_sme_umops_za32,
::mlir::arm_sme::aarch64_sme_usmopa_wide,
::mlir::arm_sme::aarch64_sme_usmops_wide,
::mlir::arm_sme::aarch64_sme_write_horiz,
::mlir::arm_sme::aarch64_sme_write_vert,
::mlir::arm_sme::aarch64_sme_zero
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_sme {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(
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
        << " must be a vector type that matches the size of a SVE predicate, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(
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
                           == 2)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector type that is a supported predicate for the SME MOP instructions, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isBF16())) || ((elementType.isF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector type that is a supported input for the SME MOP instructions, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ArmSMEIntrinsicOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))) || ((elementType.isSignlessInteger(128))) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                  ::llvm::cast<VectorType>(type).isScalable())) && (((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 16)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 8)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 4)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2)) || ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 1)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be a vector type that matches the size of a SVE vector, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_cntsb definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_cntsbGenericAdaptorBase::aarch64_sme_cntsbGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.cntsb", odsAttrs.getContext());
}

aarch64_sme_cntsbGenericAdaptorBase::aarch64_sme_cntsbGenericAdaptorBase(aarch64_sme_cntsb op) : aarch64_sme_cntsbGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_cntsbGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_cntsbGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
aarch64_sme_cntsbAdaptor::aarch64_sme_cntsbAdaptor(aarch64_sme_cntsb op) : aarch64_sme_cntsbGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_cntsbAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_cntsb::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_cntsb::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> aarch64_sme_cntsb::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_cntsb::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value aarch64_sme_cntsb::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void aarch64_sme_cntsb::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void aarch64_sme_cntsb::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_cntsb::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_cntsb::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().isSignlessInteger(64))))
    return emitOpError("failed to verify that `res` is i64");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_cntsb::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_cntsb)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_cntsd definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_cntsdGenericAdaptorBase::aarch64_sme_cntsdGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.cntsd", odsAttrs.getContext());
}

aarch64_sme_cntsdGenericAdaptorBase::aarch64_sme_cntsdGenericAdaptorBase(aarch64_sme_cntsd op) : aarch64_sme_cntsdGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_cntsdGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_cntsdGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
aarch64_sme_cntsdAdaptor::aarch64_sme_cntsdAdaptor(aarch64_sme_cntsd op) : aarch64_sme_cntsdGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_cntsdAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_cntsd::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_cntsd::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> aarch64_sme_cntsd::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_cntsd::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value aarch64_sme_cntsd::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void aarch64_sme_cntsd::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void aarch64_sme_cntsd::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_cntsd::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_cntsd::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().isSignlessInteger(64))))
    return emitOpError("failed to verify that `res` is i64");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_cntsd::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_cntsd)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_cntsh definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_cntshGenericAdaptorBase::aarch64_sme_cntshGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.cntsh", odsAttrs.getContext());
}

aarch64_sme_cntshGenericAdaptorBase::aarch64_sme_cntshGenericAdaptorBase(aarch64_sme_cntsh op) : aarch64_sme_cntshGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_cntshGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_cntshGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
aarch64_sme_cntshAdaptor::aarch64_sme_cntshAdaptor(aarch64_sme_cntsh op) : aarch64_sme_cntshGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_cntshAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_cntsh::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_cntsh::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> aarch64_sme_cntsh::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_cntsh::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value aarch64_sme_cntsh::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void aarch64_sme_cntsh::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void aarch64_sme_cntsh::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_cntsh::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_cntsh::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().isSignlessInteger(64))))
    return emitOpError("failed to verify that `res` is i64");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_cntsh::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_cntsh)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_cntsw definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_cntswGenericAdaptorBase::aarch64_sme_cntswGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.cntsw", odsAttrs.getContext());
}

aarch64_sme_cntswGenericAdaptorBase::aarch64_sme_cntswGenericAdaptorBase(aarch64_sme_cntsw op) : aarch64_sme_cntswGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_cntswGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_cntswGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
aarch64_sme_cntswAdaptor::aarch64_sme_cntswAdaptor(aarch64_sme_cntsw op) : aarch64_sme_cntswGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_cntswAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_cntsw::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_cntsw::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> aarch64_sme_cntsw::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_cntsw::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value aarch64_sme_cntsw::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void aarch64_sme_cntsw::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void aarch64_sme_cntsw::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_cntsw::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_cntsw::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().isSignlessInteger(64))))
    return emitOpError("failed to verify that `res` is i64");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_cntsw::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_cntsw)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1b_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1b_horizGenericAdaptorBase::aarch64_sme_ld1b_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1b.horiz", odsAttrs.getContext());
}

aarch64_sme_ld1b_horizGenericAdaptorBase::aarch64_sme_ld1b_horizGenericAdaptorBase(aarch64_sme_ld1b_horiz op) : aarch64_sme_ld1b_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1b_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1b_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1b_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1b_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1b_horizAdaptor::aarch64_sme_ld1b_horizAdaptor(aarch64_sme_ld1b_horiz op) : aarch64_sme_ld1b_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1b_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1b.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1b.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1b_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1b_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1b_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1b_horiz::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1b_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1b_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1b_horiz::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1b_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1b_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1b_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1b_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1b_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1b_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1b_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1b_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1b_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1b_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1b_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1b_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1b_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1b_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1b_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1b_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1b_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1b_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1b_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1b_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1b_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1b_vertGenericAdaptorBase::aarch64_sme_ld1b_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1b.vert", odsAttrs.getContext());
}

aarch64_sme_ld1b_vertGenericAdaptorBase::aarch64_sme_ld1b_vertGenericAdaptorBase(aarch64_sme_ld1b_vert op) : aarch64_sme_ld1b_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1b_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1b_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1b_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1b_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1b_vertAdaptor::aarch64_sme_ld1b_vertAdaptor(aarch64_sme_ld1b_vert op) : aarch64_sme_ld1b_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1b_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1b.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1b.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1b_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1b_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1b_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1b_vert::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1b_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1b_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1b_vert::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1b_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1b_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1b_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1b_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1b_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1b_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1b_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1b_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1b_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1b_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1b_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1b_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1b_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1b_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1b_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1b_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1b_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1b_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1b_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1b_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1d_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1d_horizGenericAdaptorBase::aarch64_sme_ld1d_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1d.horiz", odsAttrs.getContext());
}

aarch64_sme_ld1d_horizGenericAdaptorBase::aarch64_sme_ld1d_horizGenericAdaptorBase(aarch64_sme_ld1d_horiz op) : aarch64_sme_ld1d_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1d_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1d_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1d_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1d_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1d_horizAdaptor::aarch64_sme_ld1d_horizAdaptor(aarch64_sme_ld1d_horiz op) : aarch64_sme_ld1d_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1d_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1d.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1d.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1d_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1d_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1d_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1d_horiz::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1d_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1d_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1d_horiz::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1d_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1d_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1d_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1d_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1d_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1d_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1d_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1d_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1d_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1d_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1d_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1d_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1d_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1d_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1d_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1d_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1d_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1d_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1d_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1d_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1d_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1d_vertGenericAdaptorBase::aarch64_sme_ld1d_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1d.vert", odsAttrs.getContext());
}

aarch64_sme_ld1d_vertGenericAdaptorBase::aarch64_sme_ld1d_vertGenericAdaptorBase(aarch64_sme_ld1d_vert op) : aarch64_sme_ld1d_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1d_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1d_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1d_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1d_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1d_vertAdaptor::aarch64_sme_ld1d_vertAdaptor(aarch64_sme_ld1d_vert op) : aarch64_sme_ld1d_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1d_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1d.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1d.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1d_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1d_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1d_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1d_vert::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1d_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1d_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1d_vert::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1d_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1d_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1d_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1d_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1d_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1d_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1d_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1d_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1d_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1d_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1d_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1d_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1d_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1d_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1d_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1d_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1d_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1d_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1d_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1d_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1h_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1h_horizGenericAdaptorBase::aarch64_sme_ld1h_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1h.horiz", odsAttrs.getContext());
}

aarch64_sme_ld1h_horizGenericAdaptorBase::aarch64_sme_ld1h_horizGenericAdaptorBase(aarch64_sme_ld1h_horiz op) : aarch64_sme_ld1h_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1h_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1h_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1h_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1h_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1h_horizAdaptor::aarch64_sme_ld1h_horizAdaptor(aarch64_sme_ld1h_horiz op) : aarch64_sme_ld1h_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1h_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1h.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1h.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1h_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1h_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1h_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1h_horiz::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1h_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1h_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1h_horiz::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1h_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1h_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1h_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1h_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1h_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1h_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1h_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1h_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1h_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1h_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1h_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1h_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1h_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1h_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1h_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1h_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1h_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1h_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1h_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1h_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1h_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1h_vertGenericAdaptorBase::aarch64_sme_ld1h_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1h.vert", odsAttrs.getContext());
}

aarch64_sme_ld1h_vertGenericAdaptorBase::aarch64_sme_ld1h_vertGenericAdaptorBase(aarch64_sme_ld1h_vert op) : aarch64_sme_ld1h_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1h_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1h_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1h_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1h_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1h_vertAdaptor::aarch64_sme_ld1h_vertAdaptor(aarch64_sme_ld1h_vert op) : aarch64_sme_ld1h_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1h_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1h.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1h.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1h_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1h_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1h_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1h_vert::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1h_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1h_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1h_vert::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1h_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1h_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1h_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1h_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1h_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1h_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1h_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1h_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1h_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1h_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1h_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1h_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1h_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1h_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1h_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1h_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1h_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1h_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1h_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1h_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1q_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1q_horizGenericAdaptorBase::aarch64_sme_ld1q_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1q.horiz", odsAttrs.getContext());
}

aarch64_sme_ld1q_horizGenericAdaptorBase::aarch64_sme_ld1q_horizGenericAdaptorBase(aarch64_sme_ld1q_horiz op) : aarch64_sme_ld1q_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1q_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1q_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1q_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1q_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1q_horizAdaptor::aarch64_sme_ld1q_horizAdaptor(aarch64_sme_ld1q_horiz op) : aarch64_sme_ld1q_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1q_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1q.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1q.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1q_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1q_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1q_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1q_horiz::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1q_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1q_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1q_horiz::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1q_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1q_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1q_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1q_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1q_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1q_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1q_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1q_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1q_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1q_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1q_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1q_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1q_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1q_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1q_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1q_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1q_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1q_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1q_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1q_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1q_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1q_vertGenericAdaptorBase::aarch64_sme_ld1q_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1q.vert", odsAttrs.getContext());
}

aarch64_sme_ld1q_vertGenericAdaptorBase::aarch64_sme_ld1q_vertGenericAdaptorBase(aarch64_sme_ld1q_vert op) : aarch64_sme_ld1q_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1q_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1q_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1q_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1q_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1q_vertAdaptor::aarch64_sme_ld1q_vertAdaptor(aarch64_sme_ld1q_vert op) : aarch64_sme_ld1q_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1q_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1q.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1q.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1q_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1q_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1q_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1q_vert::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1q_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1q_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1q_vert::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1q_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1q_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1q_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1q_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1q_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1q_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1q_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1q_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1q_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1q_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1q_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1q_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1q_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1q_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1q_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1q_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1q_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1q_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1q_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1q_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1w_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1w_horizGenericAdaptorBase::aarch64_sme_ld1w_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1w.horiz", odsAttrs.getContext());
}

aarch64_sme_ld1w_horizGenericAdaptorBase::aarch64_sme_ld1w_horizGenericAdaptorBase(aarch64_sme_ld1w_horiz op) : aarch64_sme_ld1w_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1w_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1w_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1w_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1w_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1w_horizAdaptor::aarch64_sme_ld1w_horizAdaptor(aarch64_sme_ld1w_horiz op) : aarch64_sme_ld1w_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1w_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1w.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1w.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1w_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1w_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1w_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1w_horiz::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1w_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1w_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1w_horiz::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1w_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1w_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1w_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1w_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1w_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1w_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1w_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1w_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1w_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1w_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1w_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1w_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1w_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1w_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1w_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1w_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1w_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1w_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1w_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1w_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_ld1w_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_ld1w_vertGenericAdaptorBase::aarch64_sme_ld1w_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.ld1w.vert", odsAttrs.getContext());
}

aarch64_sme_ld1w_vertGenericAdaptorBase::aarch64_sme_ld1w_vertGenericAdaptorBase(aarch64_sme_ld1w_vert op) : aarch64_sme_ld1w_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_ld1w_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_ld1w_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_ld1w_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_ld1w_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_ld1w_vertAdaptor::aarch64_sme_ld1w_vertAdaptor(aarch64_sme_ld1w_vert op) : aarch64_sme_ld1w_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_ld1w_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.ld1w.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.ld1w.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_ld1w_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_ld1w_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_ld1w_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_ld1w_vert::getLoadAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_ld1w_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_ld1w_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1w_vert::getLoadAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_ld1w_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_ld1w_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_ld1w_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_ld1w_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_ld1w_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_ld1w_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_ld1w_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_ld1w_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_ld1w_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_ld1w_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1w_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_ld1w_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_ld1w_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_ld1w_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_ld1w_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_ld1w_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_ld1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_ld1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_ld1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value load_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(load_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_ld1w_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_ld1w_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_ld1w_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_ld1w_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_mopa definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_mopaGenericAdaptorBase::aarch64_sme_mopaGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.mopa", odsAttrs.getContext());
}

aarch64_sme_mopaGenericAdaptorBase::aarch64_sme_mopaGenericAdaptorBase(aarch64_sme_mopa op) : aarch64_sme_mopaGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_mopaGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_mopaGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_mopaGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_mopaGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_mopaAdaptor::aarch64_sme_mopaAdaptor(aarch64_sme_mopa op) : aarch64_sme_mopaGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_mopaAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.mopa' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.mopa' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_mopa::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_mopa::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_mopa::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mopa::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mopa::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mopa::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_mopa::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_mopa::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_mopa::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_mopa::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_mopa::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_mopa::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_mopa::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_mopa::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_mopa::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mopa::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_mopa::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_mopa::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_mopa::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_mopa::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_mopa::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_mopa::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_mopa::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mopa::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_mopa::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mopa::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_mopa::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mopa::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_mopa)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_mopa_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_mopa_wideGenericAdaptorBase::aarch64_sme_mopa_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.mopa.wide", odsAttrs.getContext());
}

aarch64_sme_mopa_wideGenericAdaptorBase::aarch64_sme_mopa_wideGenericAdaptorBase(aarch64_sme_mopa_wide op) : aarch64_sme_mopa_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_mopa_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_mopa_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_mopa_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_mopa_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_mopa_wideAdaptor::aarch64_sme_mopa_wideAdaptor(aarch64_sme_mopa_wide op) : aarch64_sme_mopa_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_mopa_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.mopa.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.mopa.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_mopa_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_mopa_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mopa_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_mopa_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mopa_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mopa_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mopa_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_mopa_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_mopa_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_mopa_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_mopa_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_mopa_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_mopa_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_mopa_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_mopa_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_mopa_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mopa_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_mopa_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_mopa_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_mopa_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_mopa_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_mopa_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_mopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_mopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_mopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mopa_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_mopa_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mopa_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_mopa_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_mops definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_mopsGenericAdaptorBase::aarch64_sme_mopsGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.mops", odsAttrs.getContext());
}

aarch64_sme_mopsGenericAdaptorBase::aarch64_sme_mopsGenericAdaptorBase(aarch64_sme_mops op) : aarch64_sme_mopsGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_mopsGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_mopsGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_mopsGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_mopsGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_mopsAdaptor::aarch64_sme_mopsAdaptor(aarch64_sme_mops op) : aarch64_sme_mopsGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_mopsAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.mops' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.mops' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_mops::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_mops::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_mops::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mops::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mops::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mops::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_mops::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_mops::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_mops::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_mops::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_mops::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_mops::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_mops::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_mops::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_mops::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mops::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_mops::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_mops::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_mops::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_mops::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_mops::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_mops::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_mops::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mops::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_mops::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mops::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_mops::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mops::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_mops)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_mops_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_mops_wideGenericAdaptorBase::aarch64_sme_mops_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.mops.wide", odsAttrs.getContext());
}

aarch64_sme_mops_wideGenericAdaptorBase::aarch64_sme_mops_wideGenericAdaptorBase(aarch64_sme_mops_wide op) : aarch64_sme_mops_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_mops_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_mops_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_mops_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_mops_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_mops_wideAdaptor::aarch64_sme_mops_wideAdaptor(aarch64_sme_mops_wide op) : aarch64_sme_mops_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_mops_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.mops.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.mops.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_mops_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_mops_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_mops_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_mops_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mops_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mops_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_mops_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_mops_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_mops_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_mops_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_mops_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_mops_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_mops_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_mops_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_mops_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_mops_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mops_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_mops_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_mops_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_mops_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_mops_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_mops_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_mops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_mops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_mops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_mops_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_mops_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_mops_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_mops_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_read_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_read_horizGenericAdaptorBase::aarch64_sme_read_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.read.horiz", odsAttrs.getContext());
}

aarch64_sme_read_horizGenericAdaptorBase::aarch64_sme_read_horizGenericAdaptorBase(aarch64_sme_read_horiz op) : aarch64_sme_read_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_read_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_read_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_read_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_read_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_read_horizAdaptor::aarch64_sme_read_horizAdaptor(aarch64_sme_read_horiz op) : aarch64_sme_read_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_read_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.read.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.read.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_read_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_read_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_read_horiz::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_read_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_read_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_read_horiz::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_read_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_read_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_read_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_read_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value aarch64_sme_read_horiz::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult aarch64_sme_read_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_read_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_read_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_read_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_read_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_read_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_read_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_read_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_read_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_read_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_read_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_read_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_read_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_read_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value vector, ::mlir::Value predicate, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  odsState.addTypes(res);
}

void aarch64_sme_read_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value predicate, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_read_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value vector, ::mlir::Value predicate, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  odsState.addTypes(res);
}

void aarch64_sme_read_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value predicate, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_read_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_read_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {vector, predicate, res} have same shape");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {vector, res} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_read_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_read_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_read_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_read_vertGenericAdaptorBase::aarch64_sme_read_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.read.vert", odsAttrs.getContext());
}

aarch64_sme_read_vertGenericAdaptorBase::aarch64_sme_read_vertGenericAdaptorBase(aarch64_sme_read_vert op) : aarch64_sme_read_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_read_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_read_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_read_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_read_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_read_vertAdaptor::aarch64_sme_read_vertAdaptor(aarch64_sme_read_vert op) : aarch64_sme_read_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_read_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.read.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.read.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_read_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_read_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_read_vert::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_read_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_read_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_read_vert::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_read_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_read_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_read_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_read_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value aarch64_sme_read_vert::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult aarch64_sme_read_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_read_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_read_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_read_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_read_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_read_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_read_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_read_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_read_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_read_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_read_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_read_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_read_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_read_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value vector, ::mlir::Value predicate, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  odsState.addTypes(res);
}

void aarch64_sme_read_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value predicate, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_read_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value vector, ::mlir::Value predicate, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  odsState.addTypes(res);
}

void aarch64_sme_read_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value predicate, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(vector);
  odsState.addOperands(predicate);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_read_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_read_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {vector, predicate, res} have same shape");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {vector, res} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_read_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_read_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_smopa_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_smopa_wideGenericAdaptorBase::aarch64_sme_smopa_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.smopa.wide", odsAttrs.getContext());
}

aarch64_sme_smopa_wideGenericAdaptorBase::aarch64_sme_smopa_wideGenericAdaptorBase(aarch64_sme_smopa_wide op) : aarch64_sme_smopa_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_smopa_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_smopa_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_smopa_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_smopa_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_smopa_wideAdaptor::aarch64_sme_smopa_wideAdaptor(aarch64_sme_smopa_wide op) : aarch64_sme_smopa_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_smopa_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.smopa.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.smopa.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_smopa_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_smopa_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_smopa_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smopa_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smopa_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smopa_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_smopa_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_smopa_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_smopa_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_smopa_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_smopa_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_smopa_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_smopa_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_smopa_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_smopa_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smopa_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_smopa_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_smopa_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_smopa_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_smopa_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_smopa_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_smopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_smopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_smopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smopa_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_smopa_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smopa_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_smopa_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_smopa_za32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_smopa_za32GenericAdaptorBase::aarch64_sme_smopa_za32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.smopa.za32", odsAttrs.getContext());
}

aarch64_sme_smopa_za32GenericAdaptorBase::aarch64_sme_smopa_za32GenericAdaptorBase(aarch64_sme_smopa_za32 op) : aarch64_sme_smopa_za32GenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_smopa_za32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_smopa_za32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_smopa_za32GenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_smopa_za32GenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_smopa_za32Adaptor::aarch64_sme_smopa_za32Adaptor(aarch64_sme_smopa_za32 op) : aarch64_sme_smopa_za32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_smopa_za32Adaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.smopa.za32' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.smopa.za32' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_smopa_za32::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_smopa_za32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_za32::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_za32::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_za32::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smopa_za32::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_smopa_za32::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smopa_za32::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smopa_za32::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smopa_za32::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_smopa_za32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_smopa_za32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_smopa_za32::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_smopa_za32::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_smopa_za32::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_smopa_za32::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_smopa_za32::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_smopa_za32::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_smopa_za32::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smopa_za32::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_smopa_za32::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_smopa_za32::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_smopa_za32::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_smopa_za32::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_smopa_za32::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_smopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_smopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_smopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smopa_za32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_smopa_za32::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smopa_za32::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_smopa_za32)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_smops_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_smops_wideGenericAdaptorBase::aarch64_sme_smops_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.smops.wide", odsAttrs.getContext());
}

aarch64_sme_smops_wideGenericAdaptorBase::aarch64_sme_smops_wideGenericAdaptorBase(aarch64_sme_smops_wide op) : aarch64_sme_smops_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_smops_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_smops_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_smops_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_smops_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_smops_wideAdaptor::aarch64_sme_smops_wideAdaptor(aarch64_sme_smops_wide op) : aarch64_sme_smops_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_smops_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.smops.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.smops.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_smops_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_smops_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_smops_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smops_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smops_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smops_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_smops_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_smops_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_smops_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_smops_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_smops_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_smops_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_smops_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_smops_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_smops_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smops_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_smops_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_smops_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_smops_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_smops_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_smops_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_smops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_smops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_smops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smops_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_smops_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smops_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_smops_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_smops_za32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_smops_za32GenericAdaptorBase::aarch64_sme_smops_za32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.smops.za32", odsAttrs.getContext());
}

aarch64_sme_smops_za32GenericAdaptorBase::aarch64_sme_smops_za32GenericAdaptorBase(aarch64_sme_smops_za32 op) : aarch64_sme_smops_za32GenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_smops_za32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_smops_za32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_smops_za32GenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_smops_za32GenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_smops_za32Adaptor::aarch64_sme_smops_za32Adaptor(aarch64_sme_smops_za32 op) : aarch64_sme_smops_za32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_smops_za32Adaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.smops.za32' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.smops.za32' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_smops_za32::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_smops_za32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_za32::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_za32::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_za32::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_smops_za32::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_smops_za32::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smops_za32::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smops_za32::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_smops_za32::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_smops_za32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_smops_za32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_smops_za32::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_smops_za32::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_smops_za32::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_smops_za32::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_smops_za32::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_smops_za32::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_smops_za32::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smops_za32::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_smops_za32::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_smops_za32::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_smops_za32::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_smops_za32::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_smops_za32::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_smops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_smops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_smops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_smops_za32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_smops_za32::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_smops_za32::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_smops_za32)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1b_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1b_horizGenericAdaptorBase::aarch64_sme_st1b_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1b.horiz", odsAttrs.getContext());
}

aarch64_sme_st1b_horizGenericAdaptorBase::aarch64_sme_st1b_horizGenericAdaptorBase(aarch64_sme_st1b_horiz op) : aarch64_sme_st1b_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1b_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1b_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1b_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1b_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1b_horizAdaptor::aarch64_sme_st1b_horizAdaptor(aarch64_sme_st1b_horiz op) : aarch64_sme_st1b_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1b_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1b.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1b.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1b_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1b_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1b_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1b_horiz::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1b_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1b_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1b_horiz::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1b_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1b_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1b_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1b_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1b_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1b_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1b_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1b_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1b_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1b_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1b_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1b_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1b_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1b_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1b_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1b_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1b_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1b_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1b_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1b_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1b_horiz::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1b_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1b_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1b_vertGenericAdaptorBase::aarch64_sme_st1b_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1b.vert", odsAttrs.getContext());
}

aarch64_sme_st1b_vertGenericAdaptorBase::aarch64_sme_st1b_vertGenericAdaptorBase(aarch64_sme_st1b_vert op) : aarch64_sme_st1b_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1b_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1b_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1b_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1b_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1b_vertAdaptor::aarch64_sme_st1b_vertAdaptor(aarch64_sme_st1b_vert op) : aarch64_sme_st1b_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1b_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1b.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1b.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1b_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1b_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1b_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1b_vert::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1b_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1b_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1b_vert::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1b_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1b_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1b_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1b_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1b_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1b_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1b_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1b_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1b_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1b_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1b_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1b_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1b_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1b_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1b_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1b_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1b_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1b_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1b_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1b_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1b_vert::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1b_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1d_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1d_horizGenericAdaptorBase::aarch64_sme_st1d_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1d.horiz", odsAttrs.getContext());
}

aarch64_sme_st1d_horizGenericAdaptorBase::aarch64_sme_st1d_horizGenericAdaptorBase(aarch64_sme_st1d_horiz op) : aarch64_sme_st1d_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1d_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1d_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1d_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1d_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1d_horizAdaptor::aarch64_sme_st1d_horizAdaptor(aarch64_sme_st1d_horiz op) : aarch64_sme_st1d_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1d_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1d.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1d.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1d_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1d_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1d_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1d_horiz::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1d_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1d_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1d_horiz::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1d_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1d_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1d_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1d_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1d_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1d_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1d_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1d_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1d_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1d_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1d_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1d_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1d_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1d_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1d_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1d_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1d_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1d_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1d_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1d_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1d_horiz::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1d_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1d_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1d_vertGenericAdaptorBase::aarch64_sme_st1d_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1d.vert", odsAttrs.getContext());
}

aarch64_sme_st1d_vertGenericAdaptorBase::aarch64_sme_st1d_vertGenericAdaptorBase(aarch64_sme_st1d_vert op) : aarch64_sme_st1d_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1d_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1d_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1d_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1d_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1d_vertAdaptor::aarch64_sme_st1d_vertAdaptor(aarch64_sme_st1d_vert op) : aarch64_sme_st1d_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1d_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1d.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1d.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1d_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1d_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1d_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1d_vert::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1d_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1d_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1d_vert::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1d_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1d_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1d_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1d_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1d_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1d_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1d_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1d_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1d_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1d_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1d_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1d_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1d_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1d_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1d_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1d_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1d_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1d_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1d_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1d_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1d_vert::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1d_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1h_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1h_horizGenericAdaptorBase::aarch64_sme_st1h_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1h.horiz", odsAttrs.getContext());
}

aarch64_sme_st1h_horizGenericAdaptorBase::aarch64_sme_st1h_horizGenericAdaptorBase(aarch64_sme_st1h_horiz op) : aarch64_sme_st1h_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1h_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1h_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1h_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1h_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1h_horizAdaptor::aarch64_sme_st1h_horizAdaptor(aarch64_sme_st1h_horiz op) : aarch64_sme_st1h_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1h_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1h.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1h.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1h_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1h_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1h_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1h_horiz::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1h_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1h_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1h_horiz::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1h_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1h_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1h_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1h_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1h_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1h_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1h_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1h_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1h_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1h_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1h_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1h_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1h_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1h_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1h_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1h_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1h_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1h_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1h_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1h_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1h_horiz::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1h_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1h_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1h_vertGenericAdaptorBase::aarch64_sme_st1h_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1h.vert", odsAttrs.getContext());
}

aarch64_sme_st1h_vertGenericAdaptorBase::aarch64_sme_st1h_vertGenericAdaptorBase(aarch64_sme_st1h_vert op) : aarch64_sme_st1h_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1h_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1h_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1h_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1h_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1h_vertAdaptor::aarch64_sme_st1h_vertAdaptor(aarch64_sme_st1h_vert op) : aarch64_sme_st1h_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1h_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1h.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1h.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1h_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1h_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1h_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1h_vert::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1h_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1h_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1h_vert::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1h_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1h_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1h_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1h_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1h_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1h_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1h_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1h_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1h_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1h_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1h_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1h_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1h_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1h_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1h_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1h_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1h_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1h_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1h_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1h_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1h_vert::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1h_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1q_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1q_horizGenericAdaptorBase::aarch64_sme_st1q_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1q.horiz", odsAttrs.getContext());
}

aarch64_sme_st1q_horizGenericAdaptorBase::aarch64_sme_st1q_horizGenericAdaptorBase(aarch64_sme_st1q_horiz op) : aarch64_sme_st1q_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1q_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1q_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1q_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1q_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1q_horizAdaptor::aarch64_sme_st1q_horizAdaptor(aarch64_sme_st1q_horiz op) : aarch64_sme_st1q_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1q_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1q.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1q.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1q_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1q_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1q_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1q_horiz::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1q_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1q_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1q_horiz::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1q_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1q_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1q_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1q_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1q_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1q_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1q_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1q_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1q_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1q_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1q_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1q_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1q_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1q_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1q_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1q_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1q_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1q_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1q_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1q_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1q_horiz::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1q_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1q_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1q_vertGenericAdaptorBase::aarch64_sme_st1q_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1q.vert", odsAttrs.getContext());
}

aarch64_sme_st1q_vertGenericAdaptorBase::aarch64_sme_st1q_vertGenericAdaptorBase(aarch64_sme_st1q_vert op) : aarch64_sme_st1q_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1q_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1q_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1q_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1q_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1q_vertAdaptor::aarch64_sme_st1q_vertAdaptor(aarch64_sme_st1q_vert op) : aarch64_sme_st1q_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1q_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1q.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1q.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1q_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1q_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1q_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1q_vert::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1q_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1q_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1q_vert::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1q_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1q_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1q_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1q_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1q_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1q_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1q_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1q_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1q_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1q_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1q_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1q_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1q_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1q_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1q_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1q_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1q_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1q_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1q_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1q_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1q_vert::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1q_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1w_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1w_horizGenericAdaptorBase::aarch64_sme_st1w_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1w.horiz", odsAttrs.getContext());
}

aarch64_sme_st1w_horizGenericAdaptorBase::aarch64_sme_st1w_horizGenericAdaptorBase(aarch64_sme_st1w_horiz op) : aarch64_sme_st1w_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1w_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1w_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1w_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1w_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1w_horizAdaptor::aarch64_sme_st1w_horizAdaptor(aarch64_sme_st1w_horiz op) : aarch64_sme_st1w_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1w_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1w.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1w.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1w_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1w_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1w_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1w_horiz::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1w_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1w_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1w_horiz::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1w_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1w_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1w_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1w_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1w_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1w_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1w_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1w_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1w_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1w_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1w_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1w_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1w_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1w_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1w_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1w_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1w_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1w_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1w_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1w_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1w_horiz::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1w_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_st1w_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_st1w_vertGenericAdaptorBase::aarch64_sme_st1w_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.st1w.vert", odsAttrs.getContext());
}

aarch64_sme_st1w_vertGenericAdaptorBase::aarch64_sme_st1w_vertGenericAdaptorBase(aarch64_sme_st1w_vert op) : aarch64_sme_st1w_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_st1w_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_st1w_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_st1w_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_st1w_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_st1w_vertAdaptor::aarch64_sme_st1w_vertAdaptor(aarch64_sme_st1w_vert op) : aarch64_sme_st1w_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_st1w_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.st1w.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.st1w.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_st1w_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_st1w_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_st1w_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_st1w_vert::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_st1w_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_st1w_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1w_vert::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_st1w_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_st1w_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_st1w_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_st1w_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_st1w_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_st1w_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_st1w_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_st1w_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_st1w_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_st1w_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1w_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_st1w_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_st1w_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_st1w_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_st1w_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_st1w_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_st1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_st1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_st1w_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value predicate, ::mlir::Value store_address, uint32_t tile_id, ::mlir::Value tile_slice_index) {
  odsState.addOperands(predicate);
  odsState.addOperands(store_address);
  odsState.addOperands(tile_slice_index);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_st1w_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_st1w_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_st1w_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_st1w_vert::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_st1w_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_str definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_strGenericAdaptorBase::aarch64_sme_strGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.str", odsAttrs.getContext());
}

aarch64_sme_strGenericAdaptorBase::aarch64_sme_strGenericAdaptorBase(aarch64_sme_str op) : aarch64_sme_strGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_strGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_strGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
aarch64_sme_strAdaptor::aarch64_sme_strAdaptor(aarch64_sme_str op) : aarch64_sme_strGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_strAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_str::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_str::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_str::getIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> aarch64_sme_str::getStoreAddress() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_str::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_str::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_str::getStoreAddressMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_str::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_str::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_str::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void aarch64_sme_str::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value index, ::mlir::Value store_address, ::mlir::Value offset) {
  odsState.addOperands(index);
  odsState.addOperands(store_address);
  odsState.addOperands(offset);
}

void aarch64_sme_str::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value index, ::mlir::Value store_address, ::mlir::Value offset) {
  odsState.addOperands(index);
  odsState.addOperands(store_address);
  odsState.addOperands(offset);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_str::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_str::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_str::verifyInvariants() {
  return verifyInvariantsImpl();
}

void aarch64_sme_str::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_str)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_sumopa_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_sumopa_wideGenericAdaptorBase::aarch64_sme_sumopa_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.sumopa.wide", odsAttrs.getContext());
}

aarch64_sme_sumopa_wideGenericAdaptorBase::aarch64_sme_sumopa_wideGenericAdaptorBase(aarch64_sme_sumopa_wide op) : aarch64_sme_sumopa_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_sumopa_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_sumopa_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_sumopa_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_sumopa_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_sumopa_wideAdaptor::aarch64_sme_sumopa_wideAdaptor(aarch64_sme_sumopa_wide op) : aarch64_sme_sumopa_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_sumopa_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.sumopa.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.sumopa.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_sumopa_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_sumopa_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumopa_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumopa_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumopa_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumopa_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_sumopa_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_sumopa_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_sumopa_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_sumopa_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_sumopa_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_sumopa_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_sumopa_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_sumopa_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_sumopa_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_sumopa_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_sumopa_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_sumopa_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_sumopa_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_sumopa_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_sumopa_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_sumopa_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_sumopa_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_sumopa_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_sumopa_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_sumopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_sumopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_sumopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_sumopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_sumopa_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_sumopa_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_sumopa_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_sumopa_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_sumops_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_sumops_wideGenericAdaptorBase::aarch64_sme_sumops_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.sumops.wide", odsAttrs.getContext());
}

aarch64_sme_sumops_wideGenericAdaptorBase::aarch64_sme_sumops_wideGenericAdaptorBase(aarch64_sme_sumops_wide op) : aarch64_sme_sumops_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_sumops_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_sumops_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_sumops_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_sumops_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_sumops_wideAdaptor::aarch64_sme_sumops_wideAdaptor(aarch64_sme_sumops_wide op) : aarch64_sme_sumops_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_sumops_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.sumops.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.sumops.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_sumops_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_sumops_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumops_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumops_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumops_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_sumops_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_sumops_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_sumops_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_sumops_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_sumops_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_sumops_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_sumops_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_sumops_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_sumops_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_sumops_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_sumops_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_sumops_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_sumops_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_sumops_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_sumops_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_sumops_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_sumops_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_sumops_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_sumops_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_sumops_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_sumops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_sumops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_sumops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_sumops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_sumops_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_sumops_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_sumops_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_sumops_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_umopa_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_umopa_wideGenericAdaptorBase::aarch64_sme_umopa_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.umopa.wide", odsAttrs.getContext());
}

aarch64_sme_umopa_wideGenericAdaptorBase::aarch64_sme_umopa_wideGenericAdaptorBase(aarch64_sme_umopa_wide op) : aarch64_sme_umopa_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_umopa_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_umopa_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_umopa_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_umopa_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_umopa_wideAdaptor::aarch64_sme_umopa_wideAdaptor(aarch64_sme_umopa_wide op) : aarch64_sme_umopa_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_umopa_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.umopa.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.umopa.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_umopa_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_umopa_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_umopa_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umopa_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umopa_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umopa_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_umopa_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_umopa_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_umopa_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_umopa_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_umopa_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_umopa_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_umopa_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_umopa_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_umopa_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umopa_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_umopa_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_umopa_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_umopa_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_umopa_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_umopa_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_umopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_umopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_umopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umopa_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_umopa_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umopa_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_umopa_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_umopa_za32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_umopa_za32GenericAdaptorBase::aarch64_sme_umopa_za32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.umopa.za32", odsAttrs.getContext());
}

aarch64_sme_umopa_za32GenericAdaptorBase::aarch64_sme_umopa_za32GenericAdaptorBase(aarch64_sme_umopa_za32 op) : aarch64_sme_umopa_za32GenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_umopa_za32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_umopa_za32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_umopa_za32GenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_umopa_za32GenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_umopa_za32Adaptor::aarch64_sme_umopa_za32Adaptor(aarch64_sme_umopa_za32 op) : aarch64_sme_umopa_za32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_umopa_za32Adaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.umopa.za32' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.umopa.za32' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_umopa_za32::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_umopa_za32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_za32::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_za32::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_za32::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umopa_za32::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_umopa_za32::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umopa_za32::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umopa_za32::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umopa_za32::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_umopa_za32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_umopa_za32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_umopa_za32::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_umopa_za32::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_umopa_za32::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_umopa_za32::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_umopa_za32::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_umopa_za32::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_umopa_za32::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umopa_za32::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_umopa_za32::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_umopa_za32::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_umopa_za32::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_umopa_za32::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_umopa_za32::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_umopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_umopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_umopa_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umopa_za32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_umopa_za32::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umopa_za32::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_umopa_za32)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_umops_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_umops_wideGenericAdaptorBase::aarch64_sme_umops_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.umops.wide", odsAttrs.getContext());
}

aarch64_sme_umops_wideGenericAdaptorBase::aarch64_sme_umops_wideGenericAdaptorBase(aarch64_sme_umops_wide op) : aarch64_sme_umops_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_umops_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_umops_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_umops_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_umops_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_umops_wideAdaptor::aarch64_sme_umops_wideAdaptor(aarch64_sme_umops_wide op) : aarch64_sme_umops_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_umops_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.umops.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.umops.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_umops_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_umops_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_umops_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umops_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umops_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umops_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_umops_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_umops_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_umops_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_umops_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_umops_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_umops_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_umops_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_umops_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_umops_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umops_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_umops_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_umops_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_umops_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_umops_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_umops_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_umops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_umops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_umops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umops_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_umops_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umops_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_umops_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_umops_za32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_umops_za32GenericAdaptorBase::aarch64_sme_umops_za32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.umops.za32", odsAttrs.getContext());
}

aarch64_sme_umops_za32GenericAdaptorBase::aarch64_sme_umops_za32GenericAdaptorBase(aarch64_sme_umops_za32 op) : aarch64_sme_umops_za32GenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_umops_za32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_umops_za32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_umops_za32GenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_umops_za32GenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_umops_za32Adaptor::aarch64_sme_umops_za32Adaptor(aarch64_sme_umops_za32 op) : aarch64_sme_umops_za32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_umops_za32Adaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.umops.za32' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.umops.za32' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_umops_za32::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_umops_za32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_za32::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_za32::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_za32::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_umops_za32::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_umops_za32::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umops_za32::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umops_za32::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_umops_za32::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_umops_za32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_umops_za32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_umops_za32::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_umops_za32::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_umops_za32::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_umops_za32::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_umops_za32::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_umops_za32::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_umops_za32::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umops_za32::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_umops_za32::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_umops_za32::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_umops_za32::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_umops_za32::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_umops_za32::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_umops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_umops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_umops_za32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_umops_za32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_umops_za32::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_umops_za32::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_umops_za32)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_usmopa_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_usmopa_wideGenericAdaptorBase::aarch64_sme_usmopa_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.usmopa.wide", odsAttrs.getContext());
}

aarch64_sme_usmopa_wideGenericAdaptorBase::aarch64_sme_usmopa_wideGenericAdaptorBase(aarch64_sme_usmopa_wide op) : aarch64_sme_usmopa_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_usmopa_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_usmopa_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_usmopa_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_usmopa_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_usmopa_wideAdaptor::aarch64_sme_usmopa_wideAdaptor(aarch64_sme_usmopa_wide op) : aarch64_sme_usmopa_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_usmopa_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.usmopa.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.usmopa.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_usmopa_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_usmopa_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmopa_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmopa_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmopa_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmopa_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_usmopa_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_usmopa_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_usmopa_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_usmopa_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_usmopa_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_usmopa_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_usmopa_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_usmopa_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_usmopa_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_usmopa_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_usmopa_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_usmopa_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_usmopa_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_usmopa_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_usmopa_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_usmopa_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_usmopa_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_usmopa_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_usmopa_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_usmopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_usmopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_usmopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_usmopa_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_usmopa_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_usmopa_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_usmopa_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_usmopa_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_usmops_wide definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_usmops_wideGenericAdaptorBase::aarch64_sme_usmops_wideGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.usmops.wide", odsAttrs.getContext());
}

aarch64_sme_usmops_wideGenericAdaptorBase::aarch64_sme_usmops_wideGenericAdaptorBase(aarch64_sme_usmops_wide op) : aarch64_sme_usmops_wideGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_usmops_wideGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_usmops_wideGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_usmops_wideGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_usmops_wideGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_usmops_wideAdaptor::aarch64_sme_usmops_wideAdaptor(aarch64_sme_usmops_wide op) : aarch64_sme_usmops_wideGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_usmops_wideAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.usmops.wide' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.usmops.wide' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_usmops_wide::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_usmops_wide::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmops_wide::getLhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmops_wide::getRhsPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmops_wide::getLhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_usmops_wide::getRhsVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &aarch64_sme_usmops_wide::getLhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_usmops_wide::getRhsPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_usmops_wide::getLhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_usmops_wide::getRhsVectorMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_usmops_wide::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_usmops_wide::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_usmops_wide::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_usmops_wide::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_usmops_wide::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_usmops_wide::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_usmops_wide::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_usmops_wide::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_usmops_wide::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_usmops_wide::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_usmops_wide::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_usmops_wide::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_usmops_wide::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_usmops_wide::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_usmops_wide::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_usmops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_usmops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_usmops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_usmops_wide::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value lhs_predicate, ::mlir::Value rhs_predicate, ::mlir::Value lhs_vector, ::mlir::Value rhs_vector) {
  odsState.addOperands(lhs_predicate);
  odsState.addOperands(rhs_predicate);
  odsState.addOperands(lhs_vector);
  odsState.addOperands(rhs_vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_usmops_wide::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_usmops_wide::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_usmops_wide::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_usmops_wide)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_write_horiz definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_write_horizGenericAdaptorBase::aarch64_sme_write_horizGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.write.horiz", odsAttrs.getContext());
}

aarch64_sme_write_horizGenericAdaptorBase::aarch64_sme_write_horizGenericAdaptorBase(aarch64_sme_write_horiz op) : aarch64_sme_write_horizGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_write_horizGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_write_horizGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_write_horizGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_write_horizGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_write_horizAdaptor::aarch64_sme_write_horizAdaptor(aarch64_sme_write_horiz op) : aarch64_sme_write_horizGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_write_horizAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.write.horiz' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.write.horiz' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_write_horiz::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_write_horiz::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_write_horiz::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_write_horiz::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_write_horiz::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_write_horiz::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_write_horiz::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_write_horiz::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_write_horiz::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_write_horiz::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_write_horiz::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_write_horiz::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_write_horiz::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_write_horiz::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_write_horiz::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_write_horiz::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_write_horiz::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_write_horiz::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_write_horiz::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_write_horiz::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_write_horiz::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_write_horiz::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_write_horiz::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_write_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_write_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_write_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_write_horiz::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_write_horiz::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_write_horiz::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(2).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(2).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {predicate, vector} have same shape");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_write_horiz::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_write_horiz)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_write_vert definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_write_vertGenericAdaptorBase::aarch64_sme_write_vertGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.write.vert", odsAttrs.getContext());
}

aarch64_sme_write_vertGenericAdaptorBase::aarch64_sme_write_vertGenericAdaptorBase(aarch64_sme_write_vert op) : aarch64_sme_write_vertGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_write_vertGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_write_vertGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_write_vertGenericAdaptorBase::getTileIdAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
  return attr;
}

uint32_t aarch64_sme_write_vertGenericAdaptorBase::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_write_vertAdaptor::aarch64_sme_write_vertAdaptor(aarch64_sme_write_vert op) : aarch64_sme_write_vertGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_write_vertAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitError(loc, "'arm_sme.intr.write.vert' op ""requires attribute 'tile_id'");

  if (tblgen_tile_id && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_id))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_id).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.write.vert' op ""attribute 'tile_id' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_write_vert::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_write_vert::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> aarch64_sme_write_vert::getTileSliceIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_write_vert::getPredicate() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> aarch64_sme_write_vert::getVector() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &aarch64_sme_write_vert::getTileSliceIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_write_vert::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &aarch64_sme_write_vert::getVectorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> aarch64_sme_write_vert::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_write_vert::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_write_vert::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_id;
       auto attr = dict.get("tile_id");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_id in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_id` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_write_vert::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_id;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_id",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_write_vert::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_id.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_write_vert::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_id")
      return prop.tile_id;
  return std::nullopt;
}

void aarch64_sme_write_vert::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_id") {
       prop.tile_id = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_id)>>(value);
       return;
    }
}

void aarch64_sme_write_vert::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_id) attrs.append("tile_id", prop.tile_id);
}

::mlir::LogicalResult aarch64_sme_write_vert::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileIdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_id", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_write_vert::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_id)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_write_vert::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_id);
}

::mlir::IntegerAttr aarch64_sme_write_vert::getTileIdAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_id);
}

uint32_t aarch64_sme_write_vert::getTileId() {
  auto attr = getTileIdAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_write_vert::setTileIdAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileIdAttrName(), attr);
}

void aarch64_sme_write_vert::setTileId(uint32_t attrValue) {
  (*this)->setAttr(getTileIdAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_write_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
}

void aarch64_sme_write_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = tile_id;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_write_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
}

void aarch64_sme_write_vert::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_id, ::mlir::Value tile_slice_index, ::mlir::Value predicate, ::mlir::Value vector) {
  odsState.addOperands(tile_slice_index);
  odsState.addOperands(predicate);
  odsState.addOperands(vector);
  odsState.getOrAddProperties<Properties>().tile_id = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_id);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_write_vert::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_write_vert::verifyInvariantsImpl() {
  auto tblgen_tile_id = getProperties().tile_id; (void)tblgen_tile_id;
  if (!tblgen_tile_id) return emitOpError("requires attribute 'tile_id'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_id, "tile_id")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ArmSMEIntrinsicOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(2).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(2).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(1).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {predicate, vector} have same shape");
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_write_vert::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_write_vert)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::aarch64_sme_zero definitions
//===----------------------------------------------------------------------===//

namespace detail {
aarch64_sme_zeroGenericAdaptorBase::aarch64_sme_zeroGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("arm_sme.intr.zero", odsAttrs.getContext());
}

aarch64_sme_zeroGenericAdaptorBase::aarch64_sme_zeroGenericAdaptorBase(aarch64_sme_zero op) : aarch64_sme_zeroGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> aarch64_sme_zeroGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr aarch64_sme_zeroGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr aarch64_sme_zeroGenericAdaptorBase::getTileMaskAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_mask);
  return attr;
}

uint32_t aarch64_sme_zeroGenericAdaptorBase::getTileMask() {
  auto attr = getTileMaskAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
aarch64_sme_zeroAdaptor::aarch64_sme_zeroAdaptor(aarch64_sme_zero op) : aarch64_sme_zeroGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult aarch64_sme_zeroAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_mask = getProperties().tile_mask; (void)tblgen_tile_mask;
  if (!tblgen_tile_mask) return emitError(loc, "'arm_sme.intr.zero' op ""requires attribute 'tile_mask'");

  if (tblgen_tile_mask && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_tile_mask))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_tile_mask).getType().isSignlessInteger(32)))))
    return emitError(loc, "'arm_sme.intr.zero' op ""attribute 'tile_mask' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> aarch64_sme_zero::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range aarch64_sme_zero::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> aarch64_sme_zero::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range aarch64_sme_zero::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult aarch64_sme_zero::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_mask;
       auto attr = dict.get("tile_mask");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for tile_mask in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_mask` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute aarch64_sme_zero::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_mask;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_mask",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code aarch64_sme_zero::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_mask.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> aarch64_sme_zero::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_mask")
      return prop.tile_mask;
  return std::nullopt;
}

void aarch64_sme_zero::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_mask") {
       prop.tile_mask = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_mask)>>(value);
       return;
    }
}

void aarch64_sme_zero::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_mask) attrs.append("tile_mask", prop.tile_mask);
}

::mlir::LogicalResult aarch64_sme_zero::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileMaskAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(attr, "tile_mask", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_zero::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.tile_mask)))
    return ::mlir::failure();
  return ::mlir::success();
}

void aarch64_sme_zero::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.tile_mask);
}

::mlir::IntegerAttr aarch64_sme_zero::getTileMaskAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().tile_mask);
}

uint32_t aarch64_sme_zero::getTileMask() {
  auto attr = getTileMaskAttr();
  return attr.getValue().getZExtValue();
}

void aarch64_sme_zero::setTileMaskAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTileMaskAttrName(), attr);
}

void aarch64_sme_zero::setTileMask(uint32_t attrValue) {
  (*this)->setAttr(getTileMaskAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void aarch64_sme_zero::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr tile_mask) {
  odsState.getOrAddProperties<Properties>().tile_mask = tile_mask;
}

void aarch64_sme_zero::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr tile_mask) {
  odsState.getOrAddProperties<Properties>().tile_mask = tile_mask;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_zero::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t tile_mask) {
  odsState.getOrAddProperties<Properties>().tile_mask = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_mask);
}

void aarch64_sme_zero::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t tile_mask) {
  odsState.getOrAddProperties<Properties>().tile_mask = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), tile_mask);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void aarch64_sme_zero::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult aarch64_sme_zero::verifyInvariantsImpl() {
  auto tblgen_tile_mask = getProperties().tile_mask; (void)tblgen_tile_mask;
  if (!tblgen_tile_mask) return emitOpError("requires attribute 'tile_mask'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ArmSMEIntrinsicOps0(*this, tblgen_tile_mask, "tile_mask")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult aarch64_sme_zero::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::aarch64_sme_zero)


#endif  // GET_OP_CLASSES

