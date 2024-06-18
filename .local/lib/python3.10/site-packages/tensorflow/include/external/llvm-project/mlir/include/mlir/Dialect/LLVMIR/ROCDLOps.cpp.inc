/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ROCDLOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::ROCDL::BarrierOp,
::mlir::ROCDL::BlockDimXOp,
::mlir::ROCDL::BlockDimYOp,
::mlir::ROCDL::BlockDimZOp,
::mlir::ROCDL::BlockIdXOp,
::mlir::ROCDL::BlockIdYOp,
::mlir::ROCDL::BlockIdZOp,
::mlir::ROCDL::CvtF32Bf8Op,
::mlir::ROCDL::CvtF32Fp8Op,
::mlir::ROCDL::CvtPkBf8F32Op,
::mlir::ROCDL::CvtPkFp8F32Op,
::mlir::ROCDL::CvtSrBf8F32Op,
::mlir::ROCDL::CvtSrFp8F32Op,
::mlir::ROCDL::DsBpermuteOp,
::mlir::ROCDL::DsSwizzleOp,
::mlir::ROCDL::GridDimXOp,
::mlir::ROCDL::GridDimYOp,
::mlir::ROCDL::GridDimZOp,
::mlir::ROCDL::MakeBufferRsrcOp,
::mlir::ROCDL::MbcntHiOp,
::mlir::ROCDL::MbcntLoOp,
::mlir::ROCDL::MubufLoadOp,
::mlir::ROCDL::MubufStoreOp,
::mlir::ROCDL::RawBufferAtomicCmpSwap,
::mlir::ROCDL::RawBufferAtomicFAddOp,
::mlir::ROCDL::RawBufferAtomicFMaxOp,
::mlir::ROCDL::RawBufferAtomicSMaxOp,
::mlir::ROCDL::RawBufferAtomicUMinOp,
::mlir::ROCDL::RawBufferLoadOp,
::mlir::ROCDL::RawBufferStoreOp,
::mlir::ROCDL::RawPtrBufferAtomicCmpSwap,
::mlir::ROCDL::RawPtrBufferAtomicFaddOp,
::mlir::ROCDL::RawPtrBufferAtomicFmaxOp,
::mlir::ROCDL::RawPtrBufferAtomicSmaxOp,
::mlir::ROCDL::RawPtrBufferAtomicUminOp,
::mlir::ROCDL::RawPtrBufferLoadOp,
::mlir::ROCDL::RawPtrBufferStoreOp,
::mlir::ROCDL::ThreadIdXOp,
::mlir::ROCDL::ThreadIdYOp,
::mlir::ROCDL::ThreadIdZOp,
::mlir::ROCDL::mfma_f32_16x16x16bf16_1k,
::mlir::ROCDL::mfma_f32_16x16x16f16,
::mlir::ROCDL::mfma_f32_16x16x1f32,
::mlir::ROCDL::mfma_f32_16x16x2bf16,
::mlir::ROCDL::mfma_f32_16x16x32_bf8_bf8,
::mlir::ROCDL::mfma_f32_16x16x32_bf8_fp8,
::mlir::ROCDL::mfma_f32_16x16x32_fp8_bf8,
::mlir::ROCDL::mfma_f32_16x16x32_fp8_fp8,
::mlir::ROCDL::mfma_f32_16x16x4bf16_1k,
::mlir::ROCDL::mfma_f32_16x16x4f16,
::mlir::ROCDL::mfma_f32_16x16x4f32,
::mlir::ROCDL::mfma_f32_16x16x8_xf32,
::mlir::ROCDL::mfma_f32_16x16x8bf16,
::mlir::ROCDL::mfma_f32_32x32x16_bf8_bf8,
::mlir::ROCDL::mfma_f32_32x32x16_bf8_fp8,
::mlir::ROCDL::mfma_f32_32x32x16_fp8_bf8,
::mlir::ROCDL::mfma_f32_32x32x16_fp8_fp8,
::mlir::ROCDL::mfma_f32_32x32x1f32,
::mlir::ROCDL::mfma_f32_32x32x2bf16,
::mlir::ROCDL::mfma_f32_32x32x2f32,
::mlir::ROCDL::mfma_f32_32x32x4_xf32,
::mlir::ROCDL::mfma_f32_32x32x4bf16,
::mlir::ROCDL::mfma_f32_32x32x4bf16_1k,
::mlir::ROCDL::mfma_f32_32x32x4f16,
::mlir::ROCDL::mfma_f32_32x32x8bf16_1k,
::mlir::ROCDL::mfma_f32_32x32x8f16,
::mlir::ROCDL::mfma_f32_4x4x1f32,
::mlir::ROCDL::mfma_f32_4x4x2bf16,
::mlir::ROCDL::mfma_f32_4x4x4bf16_1k,
::mlir::ROCDL::mfma_f32_4x4x4f16,
::mlir::ROCDL::mfma_f64_16x16x4f64,
::mlir::ROCDL::mfma_f64_4x4x4f64,
::mlir::ROCDL::mfma_i32_16x16x16i8,
::mlir::ROCDL::mfma_i32_16x16x32_i8,
::mlir::ROCDL::mfma_i32_16x16x4i8,
::mlir::ROCDL::mfma_i32_32x32x16_i8,
::mlir::ROCDL::mfma_i32_32x32x4i8,
::mlir::ROCDL::mfma_i32_32x32x8i8,
::mlir::ROCDL::mfma_i32_4x4x4i8,
::mlir::ROCDL::wmma_bf16_16x16x16_bf16,
::mlir::ROCDL::wmma_f16_16x16x16_f16,
::mlir::ROCDL::wmma_f32_16x16x16_bf16,
::mlir::ROCDL::wmma_f32_16x16x16_f16,
::mlir::ROCDL::wmma_i32_16x16x16_iu4,
::mlir::ROCDL::wmma_i32_16x16x16_iu8
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace ROCDL {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isF32()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(16)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 16-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getAddressSpace() == 8)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer in address space 8, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_ROCDLOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::mlir::LLVM::isCompatibleOuterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of LLVM dialect-compatible type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ROCDLOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: LLVM dialect alias scope array";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ROCDLOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ROCDLOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ROCDLOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: LLVM dialect TBAA tag metadata array";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_ROCDLOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_ROCDLOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BarrierOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BarrierOpGenericAdaptorBase::BarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.barrier", odsAttrs.getContext());
}

BarrierOpGenericAdaptorBase::BarrierOpGenericAdaptorBase(BarrierOp op) : BarrierOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BarrierOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BarrierOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BarrierOpAdaptor::BarrierOpAdaptor(BarrierOp op) : BarrierOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BarrierOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BarrierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BarrierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BarrierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BarrierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void BarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BarrierOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BarrierOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult BarrierOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BarrierOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void BarrierOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BarrierOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockDimXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimXOpGenericAdaptorBase::BlockDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workgroup.dim.x", odsAttrs.getContext());
}

BlockDimXOpGenericAdaptorBase::BlockDimXOpGenericAdaptorBase(BlockDimXOp op) : BlockDimXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockDimXOpAdaptor::BlockDimXOpAdaptor(BlockDimXOp op) : BlockDimXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockDimXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockDimXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockDimXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockDimXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockDimXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockDimXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockDimYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimYOpGenericAdaptorBase::BlockDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workgroup.dim.y", odsAttrs.getContext());
}

BlockDimYOpGenericAdaptorBase::BlockDimYOpGenericAdaptorBase(BlockDimYOp op) : BlockDimYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockDimYOpAdaptor::BlockDimYOpAdaptor(BlockDimYOp op) : BlockDimYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockDimYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockDimYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockDimYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockDimYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockDimYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockDimYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockDimZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimZOpGenericAdaptorBase::BlockDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workgroup.dim.z", odsAttrs.getContext());
}

BlockDimZOpGenericAdaptorBase::BlockDimZOpGenericAdaptorBase(BlockDimZOp op) : BlockDimZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockDimZOpAdaptor::BlockDimZOpAdaptor(BlockDimZOp op) : BlockDimZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockDimZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockDimZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockDimZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockDimZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockDimZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockDimZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockIdXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdXOpGenericAdaptorBase::BlockIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workgroup.id.x", odsAttrs.getContext());
}

BlockIdXOpGenericAdaptorBase::BlockIdXOpGenericAdaptorBase(BlockIdXOp op) : BlockIdXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockIdXOpAdaptor::BlockIdXOpAdaptor(BlockIdXOp op) : BlockIdXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockIdXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockIdXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockIdXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockIdXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockIdXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockIdXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockIdYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdYOpGenericAdaptorBase::BlockIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workgroup.id.y", odsAttrs.getContext());
}

BlockIdYOpGenericAdaptorBase::BlockIdYOpGenericAdaptorBase(BlockIdYOp op) : BlockIdYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockIdYOpAdaptor::BlockIdYOpAdaptor(BlockIdYOp op) : BlockIdYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockIdYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockIdYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockIdYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockIdYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockIdYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockIdYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockIdZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdZOpGenericAdaptorBase::BlockIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workgroup.id.z", odsAttrs.getContext());
}

BlockIdZOpGenericAdaptorBase::BlockIdZOpGenericAdaptorBase(BlockIdZOp op) : BlockIdZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BlockIdZOpAdaptor::BlockIdZOpAdaptor(BlockIdZOp op) : BlockIdZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BlockIdZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void BlockIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void BlockIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BlockIdZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BlockIdZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void BlockIdZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void BlockIdZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockIdZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtF32Bf8Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
CvtF32Bf8OpGenericAdaptorBase::CvtF32Bf8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.cvt.f32.bf8", odsAttrs.getContext());
}

CvtF32Bf8OpGenericAdaptorBase::CvtF32Bf8OpGenericAdaptorBase(CvtF32Bf8Op op) : CvtF32Bf8OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CvtF32Bf8OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CvtF32Bf8OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CvtF32Bf8OpAdaptor::CvtF32Bf8OpAdaptor(CvtF32Bf8Op op) : CvtF32Bf8OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CvtF32Bf8OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CvtF32Bf8Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CvtF32Bf8Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> CvtF32Bf8Op::getSrcA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtF32Bf8Op::getByteSel() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CvtF32Bf8Op::getSrcAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtF32Bf8Op::getByteSelMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CvtF32Bf8Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CvtF32Bf8Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CvtF32Bf8Op::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CvtF32Bf8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(byteSel);
  odsState.addTypes(res);
}

void CvtF32Bf8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(byteSel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CvtF32Bf8Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CvtF32Bf8Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CvtF32Bf8Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CvtF32Bf8Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcAOperands(srcARawOperands);  ::llvm::SMLoc srcAOperandsLoc;
  (void)srcAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand byteSelRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> byteSelOperands(byteSelRawOperands);  ::llvm::SMLoc byteSelOperandsLoc;
  (void)byteSelOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  srcAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  byteSelOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(byteSelRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcAOperands, odsBuildableType0, srcAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(byteSelOperands, odsBuildableType0, byteSelOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CvtF32Bf8Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrcA();
  _odsPrinter << "[";
  _odsPrinter << getByteSel();
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CvtF32Bf8Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtF32Bf8Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtF32Fp8Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
CvtF32Fp8OpGenericAdaptorBase::CvtF32Fp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.cvt.f32.fp8", odsAttrs.getContext());
}

CvtF32Fp8OpGenericAdaptorBase::CvtF32Fp8OpGenericAdaptorBase(CvtF32Fp8Op op) : CvtF32Fp8OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CvtF32Fp8OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CvtF32Fp8OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CvtF32Fp8OpAdaptor::CvtF32Fp8OpAdaptor(CvtF32Fp8Op op) : CvtF32Fp8OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CvtF32Fp8OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CvtF32Fp8Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CvtF32Fp8Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> CvtF32Fp8Op::getSrcA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtF32Fp8Op::getByteSel() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &CvtF32Fp8Op::getSrcAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtF32Fp8Op::getByteSelMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CvtF32Fp8Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CvtF32Fp8Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CvtF32Fp8Op::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CvtF32Fp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(byteSel);
  odsState.addTypes(res);
}

void CvtF32Fp8Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(byteSel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CvtF32Fp8Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CvtF32Fp8Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CvtF32Fp8Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CvtF32Fp8Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcAOperands(srcARawOperands);  ::llvm::SMLoc srcAOperandsLoc;
  (void)srcAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand byteSelRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> byteSelOperands(byteSelRawOperands);  ::llvm::SMLoc byteSelOperandsLoc;
  (void)byteSelOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  srcAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  byteSelOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(byteSelRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcAOperands, odsBuildableType0, srcAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(byteSelOperands, odsBuildableType0, byteSelOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CvtF32Fp8Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrcA();
  _odsPrinter << "[";
  _odsPrinter << getByteSel();
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CvtF32Fp8Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtF32Fp8Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtPkBf8F32Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
CvtPkBf8F32OpGenericAdaptorBase::CvtPkBf8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.cvt.pk.bf8.f32", odsAttrs.getContext());
}

CvtPkBf8F32OpGenericAdaptorBase::CvtPkBf8F32OpGenericAdaptorBase(CvtPkBf8F32Op op) : CvtPkBf8F32OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CvtPkBf8F32OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CvtPkBf8F32OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CvtPkBf8F32OpAdaptor::CvtPkBf8F32OpAdaptor(CvtPkBf8F32Op op) : CvtPkBf8F32OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CvtPkBf8F32OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CvtPkBf8F32Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CvtPkBf8F32Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> CvtPkBf8F32Op::getSrcA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::FloatType> CvtPkBf8F32Op::getSrcB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtPkBf8F32Op::getOld() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtPkBf8F32Op::getWordSel() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &CvtPkBf8F32Op::getSrcAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtPkBf8F32Op::getSrcBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtPkBf8F32Op::getOldMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtPkBf8F32Op::getWordSelMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CvtPkBf8F32Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CvtPkBf8F32Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CvtPkBf8F32Op::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CvtPkBf8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(wordSel);
  odsState.addTypes(res);
}

void CvtPkBf8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(wordSel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CvtPkBf8F32Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CvtPkBf8F32Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CvtPkBf8F32Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CvtPkBf8F32Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcAOperands(srcARawOperands);  ::llvm::SMLoc srcAOperandsLoc;
  (void)srcAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcBOperands(srcBRawOperands);  ::llvm::SMLoc srcBOperandsLoc;
  (void)srcBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand oldRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> oldOperands(oldRawOperands);  ::llvm::SMLoc oldOperandsLoc;
  (void)oldOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand wordSelRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> wordSelOperands(wordSelRawOperands);  ::llvm::SMLoc wordSelOperandsLoc;
  (void)wordSelOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  srcAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  oldOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(oldRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  wordSelOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(wordSelRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getF32Type();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIntegerType(1);
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcAOperands, odsBuildableType0, srcAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcBOperands, odsBuildableType0, srcBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(oldOperands, odsBuildableType1, oldOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(wordSelOperands, odsBuildableType2, wordSelOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CvtPkBf8F32Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrcA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrcB();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOld();
  _odsPrinter << "[";
  _odsPrinter << getWordSel();
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CvtPkBf8F32Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtPkBf8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtPkFp8F32Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
CvtPkFp8F32OpGenericAdaptorBase::CvtPkFp8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.cvt.pk.fp8.f32", odsAttrs.getContext());
}

CvtPkFp8F32OpGenericAdaptorBase::CvtPkFp8F32OpGenericAdaptorBase(CvtPkFp8F32Op op) : CvtPkFp8F32OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CvtPkFp8F32OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CvtPkFp8F32OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CvtPkFp8F32OpAdaptor::CvtPkFp8F32OpAdaptor(CvtPkFp8F32Op op) : CvtPkFp8F32OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CvtPkFp8F32OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CvtPkFp8F32Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CvtPkFp8F32Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> CvtPkFp8F32Op::getSrcA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::FloatType> CvtPkFp8F32Op::getSrcB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtPkFp8F32Op::getOld() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtPkFp8F32Op::getWordSel() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &CvtPkFp8F32Op::getSrcAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtPkFp8F32Op::getSrcBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtPkFp8F32Op::getOldMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtPkFp8F32Op::getWordSelMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CvtPkFp8F32Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CvtPkFp8F32Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CvtPkFp8F32Op::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CvtPkFp8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(wordSel);
  odsState.addTypes(res);
}

void CvtPkFp8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(wordSel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CvtPkFp8F32Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CvtPkFp8F32Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CvtPkFp8F32Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CvtPkFp8F32Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcAOperands(srcARawOperands);  ::llvm::SMLoc srcAOperandsLoc;
  (void)srcAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcBOperands(srcBRawOperands);  ::llvm::SMLoc srcBOperandsLoc;
  (void)srcBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand oldRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> oldOperands(oldRawOperands);  ::llvm::SMLoc oldOperandsLoc;
  (void)oldOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand wordSelRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> wordSelOperands(wordSelRawOperands);  ::llvm::SMLoc wordSelOperandsLoc;
  (void)wordSelOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  srcAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  oldOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(oldRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  wordSelOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(wordSelRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getF32Type();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIntegerType(1);
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcAOperands, odsBuildableType0, srcAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcBOperands, odsBuildableType0, srcBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(oldOperands, odsBuildableType1, oldOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(wordSelOperands, odsBuildableType2, wordSelOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CvtPkFp8F32Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrcA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrcB();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOld();
  _odsPrinter << "[";
  _odsPrinter << getWordSel();
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CvtPkFp8F32Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtPkFp8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtSrBf8F32Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
CvtSrBf8F32OpGenericAdaptorBase::CvtSrBf8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.cvt.sr.bf8.f32", odsAttrs.getContext());
}

CvtSrBf8F32OpGenericAdaptorBase::CvtSrBf8F32OpGenericAdaptorBase(CvtSrBf8F32Op op) : CvtSrBf8F32OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CvtSrBf8F32OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CvtSrBf8F32OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CvtSrBf8F32OpAdaptor::CvtSrBf8F32OpAdaptor(CvtSrBf8F32Op op) : CvtSrBf8F32OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CvtSrBf8F32OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CvtSrBf8F32Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CvtSrBf8F32Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> CvtSrBf8F32Op::getSrcA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtSrBf8F32Op::getSrcB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtSrBf8F32Op::getOld() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtSrBf8F32Op::getByteSel() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &CvtSrBf8F32Op::getSrcAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtSrBf8F32Op::getSrcBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtSrBf8F32Op::getOldMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtSrBf8F32Op::getByteSelMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CvtSrBf8F32Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CvtSrBf8F32Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CvtSrBf8F32Op::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CvtSrBf8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(byteSel);
  odsState.addTypes(res);
}

void CvtSrBf8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(byteSel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CvtSrBf8F32Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CvtSrBf8F32Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CvtSrBf8F32Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CvtSrBf8F32Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcAOperands(srcARawOperands);  ::llvm::SMLoc srcAOperandsLoc;
  (void)srcAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcBOperands(srcBRawOperands);  ::llvm::SMLoc srcBOperandsLoc;
  (void)srcBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand oldRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> oldOperands(oldRawOperands);  ::llvm::SMLoc oldOperandsLoc;
  (void)oldOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand byteSelRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> byteSelOperands(byteSelRawOperands);  ::llvm::SMLoc byteSelOperandsLoc;
  (void)byteSelOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  srcAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  oldOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(oldRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  byteSelOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(byteSelRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getF32Type();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcAOperands, odsBuildableType0, srcAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcBOperands, odsBuildableType1, srcBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(oldOperands, odsBuildableType1, oldOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(byteSelOperands, odsBuildableType1, byteSelOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CvtSrBf8F32Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrcA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrcB();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOld();
  _odsPrinter << "[";
  _odsPrinter << getByteSel();
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CvtSrBf8F32Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtSrBf8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtSrFp8F32Op definitions
//===----------------------------------------------------------------------===//

namespace detail {
CvtSrFp8F32OpGenericAdaptorBase::CvtSrFp8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.cvt.sr.fp8.f32", odsAttrs.getContext());
}

CvtSrFp8F32OpGenericAdaptorBase::CvtSrFp8F32OpGenericAdaptorBase(CvtSrFp8F32Op op) : CvtSrFp8F32OpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CvtSrFp8F32OpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CvtSrFp8F32OpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CvtSrFp8F32OpAdaptor::CvtSrFp8F32OpAdaptor(CvtSrFp8F32Op op) : CvtSrFp8F32OpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CvtSrFp8F32OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CvtSrFp8F32Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CvtSrFp8F32Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::FloatType> CvtSrFp8F32Op::getSrcA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::FloatType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtSrFp8F32Op::getSrcB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtSrFp8F32Op::getOld() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CvtSrFp8F32Op::getByteSel() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &CvtSrFp8F32Op::getSrcAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtSrFp8F32Op::getSrcBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtSrFp8F32Op::getOldMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CvtSrFp8F32Op::getByteSelMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CvtSrFp8F32Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CvtSrFp8F32Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CvtSrFp8F32Op::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void CvtSrFp8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(byteSel);
  odsState.addTypes(res);
}

void CvtSrFp8F32Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel) {
  odsState.addOperands(srcA);
  odsState.addOperands(srcB);
  odsState.addOperands(old);
  odsState.addOperands(byteSel);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CvtSrFp8F32Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CvtSrFp8F32Op::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CvtSrFp8F32Op::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CvtSrFp8F32Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcAOperands(srcARawOperands);  ::llvm::SMLoc srcAOperandsLoc;
  (void)srcAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcBOperands(srcBRawOperands);  ::llvm::SMLoc srcBOperandsLoc;
  (void)srcBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand oldRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> oldOperands(oldRawOperands);  ::llvm::SMLoc oldOperandsLoc;
  (void)oldOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand byteSelRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> byteSelOperands(byteSelRawOperands);  ::llvm::SMLoc byteSelOperandsLoc;
  (void)byteSelOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  srcAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  oldOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(oldRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  byteSelOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(byteSelRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getF32Type();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcAOperands, odsBuildableType0, srcAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcBOperands, odsBuildableType1, srcBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(oldOperands, odsBuildableType1, oldOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(byteSelOperands, odsBuildableType1, byteSelOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CvtSrFp8F32Op::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getSrcA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrcB();
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  _odsPrinter << getOld();
  _odsPrinter << "[";
  _odsPrinter << getByteSel();
  _odsPrinter << "]";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void CvtSrFp8F32Op::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtSrFp8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::DsBpermuteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DsBpermuteOpGenericAdaptorBase::DsBpermuteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.ds_bpermute", odsAttrs.getContext());
}

DsBpermuteOpGenericAdaptorBase::DsBpermuteOpGenericAdaptorBase(DsBpermuteOp op) : DsBpermuteOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DsBpermuteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DsBpermuteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DsBpermuteOpAdaptor::DsBpermuteOpAdaptor(DsBpermuteOp op) : DsBpermuteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DsBpermuteOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DsBpermuteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DsBpermuteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> DsBpermuteOp::getIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> DsBpermuteOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DsBpermuteOp::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DsBpermuteOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DsBpermuteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DsBpermuteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> DsBpermuteOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void DsBpermuteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value index, ::mlir::Value src) {
  odsState.addOperands(index);
  odsState.addOperands(src);
  odsState.addTypes(res);
}

void DsBpermuteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value index, ::mlir::Value src) {
  odsState.addOperands(index);
  odsState.addOperands(src);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DsBpermuteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DsBpermuteOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DsBpermuteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DsBpermuteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> indexOperands(indexRawOperands);  ::llvm::SMLoc indexOperandsLoc;
  (void)indexOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::Type indexRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> indexTypes(indexRawTypes);
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(indexRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    indexRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(indexOperands, indexTypes, indexOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DsBpermuteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIndex();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getIndex().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::DsBpermuteOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::DsSwizzleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DsSwizzleOpGenericAdaptorBase::DsSwizzleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.ds_swizzle", odsAttrs.getContext());
}

DsSwizzleOpGenericAdaptorBase::DsSwizzleOpGenericAdaptorBase(DsSwizzleOp op) : DsSwizzleOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DsSwizzleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DsSwizzleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DsSwizzleOpAdaptor::DsSwizzleOpAdaptor(DsSwizzleOp op) : DsSwizzleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DsSwizzleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DsSwizzleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DsSwizzleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> DsSwizzleOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> DsSwizzleOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &DsSwizzleOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &DsSwizzleOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DsSwizzleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DsSwizzleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> DsSwizzleOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void DsSwizzleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value offset) {
  odsState.addOperands(src);
  odsState.addOperands(offset);
  odsState.addTypes(res);
}

void DsSwizzleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value offset) {
  odsState.addOperands(src);
  odsState.addOperands(offset);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DsSwizzleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DsSwizzleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DsSwizzleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DsSwizzleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand offsetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> offsetOperands(offsetRawOperands);  ::llvm::SMLoc offsetOperandsLoc;
  (void)offsetOperandsLoc;
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);
  ::mlir::Type offsetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> offsetTypes(offsetRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  offsetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(offsetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    offsetRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(offsetOperands, offsetTypes, offsetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DsSwizzleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOffset();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOffset().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::DsSwizzleOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::GridDimXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimXOpGenericAdaptorBase::GridDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.grid.dim.x", odsAttrs.getContext());
}

GridDimXOpGenericAdaptorBase::GridDimXOpGenericAdaptorBase(GridDimXOp op) : GridDimXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridDimXOpAdaptor::GridDimXOpAdaptor(GridDimXOp op) : GridDimXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridDimXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridDimXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridDimXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridDimXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridDimXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridDimXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::GridDimXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::GridDimYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimYOpGenericAdaptorBase::GridDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.grid.dim.y", odsAttrs.getContext());
}

GridDimYOpGenericAdaptorBase::GridDimYOpGenericAdaptorBase(GridDimYOp op) : GridDimYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridDimYOpAdaptor::GridDimYOpAdaptor(GridDimYOp op) : GridDimYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridDimYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridDimYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridDimYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridDimYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridDimYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridDimYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::GridDimYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::GridDimZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimZOpGenericAdaptorBase::GridDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.grid.dim.z", odsAttrs.getContext());
}

GridDimZOpGenericAdaptorBase::GridDimZOpGenericAdaptorBase(GridDimZOp op) : GridDimZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GridDimZOpAdaptor::GridDimZOpAdaptor(GridDimZOp op) : GridDimZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GridDimZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void GridDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void GridDimZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GridDimZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GridDimZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void GridDimZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void GridDimZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::GridDimZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MakeBufferRsrcOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MakeBufferRsrcOpGenericAdaptorBase::MakeBufferRsrcOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.make.buffer.rsrc", odsAttrs.getContext());
}

MakeBufferRsrcOpGenericAdaptorBase::MakeBufferRsrcOpGenericAdaptorBase(MakeBufferRsrcOp op) : MakeBufferRsrcOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MakeBufferRsrcOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MakeBufferRsrcOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MakeBufferRsrcOpAdaptor::MakeBufferRsrcOpAdaptor(MakeBufferRsrcOp op) : MakeBufferRsrcOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MakeBufferRsrcOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MakeBufferRsrcOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MakeBufferRsrcOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> MakeBufferRsrcOp::getBase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MakeBufferRsrcOp::getStride() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MakeBufferRsrcOp::getNumRecords() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MakeBufferRsrcOp::getFlags() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &MakeBufferRsrcOp::getBaseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MakeBufferRsrcOp::getStrideMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MakeBufferRsrcOp::getNumRecordsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MakeBufferRsrcOp::getFlagsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MakeBufferRsrcOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MakeBufferRsrcOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> MakeBufferRsrcOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSResults(0).begin());
}

void MakeBufferRsrcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value base, ::mlir::Value stride, ::mlir::Value numRecords, ::mlir::Value flags) {
  odsState.addOperands(base);
  odsState.addOperands(stride);
  odsState.addOperands(numRecords);
  odsState.addOperands(flags);
  odsState.addTypes(res);
}

void MakeBufferRsrcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value stride, ::mlir::Value numRecords, ::mlir::Value flags) {
  odsState.addOperands(base);
  odsState.addOperands(stride);
  odsState.addOperands(numRecords);
  odsState.addOperands(flags);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MakeBufferRsrcOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MakeBufferRsrcOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MakeBufferRsrcOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MakeBufferRsrcOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type baseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> baseTypes(baseRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::LLVM::LLVMPointerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    baseRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::LLVM::LLVMPointerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(16);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(baseTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MakeBufferRsrcOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBase().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::LLVM::LLVMPointerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::LLVM::LLVMPointerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MakeBufferRsrcOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MakeBufferRsrcOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MbcntHiOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MbcntHiOpGenericAdaptorBase::MbcntHiOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mbcnt.hi", odsAttrs.getContext());
}

MbcntHiOpGenericAdaptorBase::MbcntHiOpGenericAdaptorBase(MbcntHiOp op) : MbcntHiOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MbcntHiOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MbcntHiOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MbcntHiOpAdaptor::MbcntHiOpAdaptor(MbcntHiOp op) : MbcntHiOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MbcntHiOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MbcntHiOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MbcntHiOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> MbcntHiOp::getIn0() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MbcntHiOp::getIn1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MbcntHiOp::getIn0Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MbcntHiOp::getIn1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MbcntHiOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MbcntHiOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MbcntHiOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MbcntHiOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in0, ::mlir::Value in1) {
  odsState.addOperands(in0);
  odsState.addOperands(in1);
  odsState.addTypes(res);
}

void MbcntHiOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in0, ::mlir::Value in1) {
  odsState.addOperands(in0);
  odsState.addOperands(in1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MbcntHiOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MbcntHiOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MbcntHiOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MbcntHiOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand in0RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> in0Operands(in0RawOperands);  ::llvm::SMLoc in0OperandsLoc;
  (void)in0OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand in1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> in1Operands(in1RawOperands);  ::llvm::SMLoc in1OperandsLoc;
  (void)in1OperandsLoc;
  ::mlir::Type in0RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> in0Types(in0RawTypes);
  ::mlir::Type in1RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> in1Types(in1RawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  in0OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(in0RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  in1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(in1RawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    in0RawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    in1RawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(in0Operands, in0Types, in0OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(in1Operands, in1Types, in1OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MbcntHiOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn0();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIn1();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getIn0().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getIn1().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MbcntHiOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MbcntHiOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MbcntLoOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MbcntLoOpGenericAdaptorBase::MbcntLoOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mbcnt.lo", odsAttrs.getContext());
}

MbcntLoOpGenericAdaptorBase::MbcntLoOpGenericAdaptorBase(MbcntLoOp op) : MbcntLoOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MbcntLoOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MbcntLoOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MbcntLoOpAdaptor::MbcntLoOpAdaptor(MbcntLoOp op) : MbcntLoOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MbcntLoOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MbcntLoOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MbcntLoOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> MbcntLoOp::getIn0() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MbcntLoOp::getIn1() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MbcntLoOp::getIn0Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MbcntLoOp::getIn1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MbcntLoOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MbcntLoOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MbcntLoOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MbcntLoOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in0, ::mlir::Value in1) {
  odsState.addOperands(in0);
  odsState.addOperands(in1);
  odsState.addTypes(res);
}

void MbcntLoOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in0, ::mlir::Value in1) {
  odsState.addOperands(in0);
  odsState.addOperands(in1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MbcntLoOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MbcntLoOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MbcntLoOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MbcntLoOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand in0RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> in0Operands(in0RawOperands);  ::llvm::SMLoc in0OperandsLoc;
  (void)in0OperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand in1RawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> in1Operands(in1RawOperands);  ::llvm::SMLoc in1OperandsLoc;
  (void)in1OperandsLoc;
  ::mlir::Type in0RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> in0Types(in0RawTypes);
  ::mlir::Type in1RawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> in1Types(in1RawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  in0OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(in0RawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  in1OperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(in1RawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    in0RawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::IntegerType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    in1RawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(in0Operands, in0Types, in0OperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(in1Operands, in1Types, in1OperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MbcntLoOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getIn0();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIn1();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getIn0().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getIn1().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IntegerType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MbcntLoOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MbcntLoOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MubufLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MubufLoadOpGenericAdaptorBase::MubufLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.buffer.load", odsAttrs.getContext());
}

MubufLoadOpGenericAdaptorBase::MubufLoadOpGenericAdaptorBase(MubufLoadOp op) : MubufLoadOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MubufLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MubufLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MubufLoadOpAdaptor::MubufLoadOpAdaptor(MubufLoadOp op) : MubufLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MubufLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MubufLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MubufLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MubufLoadOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MubufLoadOp::getVindex() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value MubufLoadOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value MubufLoadOp::getGlc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value MubufLoadOp::getSlc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &MubufLoadOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufLoadOp::getVindexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufLoadOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufLoadOp::getGlcMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufLoadOp::getSlcMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MubufLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MubufLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MubufLoadOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void MubufLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc) {
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
  odsState.addTypes(res);
}

void MubufLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc) {
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MubufLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MubufLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MubufLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MubufLoadOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MubufStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MubufStoreOpGenericAdaptorBase::MubufStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.buffer.store", odsAttrs.getContext());
}

MubufStoreOpGenericAdaptorBase::MubufStoreOpGenericAdaptorBase(MubufStoreOp op) : MubufStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MubufStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MubufStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MubufStoreOpAdaptor::MubufStoreOpAdaptor(MubufStoreOp op) : MubufStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MubufStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MubufStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MubufStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MubufStoreOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MubufStoreOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value MubufStoreOp::getVindex() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value MubufStoreOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value MubufStoreOp::getGlc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::Value MubufStoreOp::getSlc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(5).begin());
}

::mlir::OpOperand &MubufStoreOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufStoreOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufStoreOp::getVindexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufStoreOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufStoreOp::getGlcMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MubufStoreOp::getSlcMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MubufStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MubufStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MubufStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
}

void MubufStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MubufStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MubufStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MubufStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MubufStoreOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicCmpSwap definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicCmpSwapGenericAdaptorBase::RawBufferAtomicCmpSwapGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.atomic.cmpswap", odsAttrs.getContext());
}

RawBufferAtomicCmpSwapGenericAdaptorBase::RawBufferAtomicCmpSwapGenericAdaptorBase(RawBufferAtomicCmpSwap op) : RawBufferAtomicCmpSwapGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicCmpSwapGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferAtomicCmpSwapGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferAtomicCmpSwapAdaptor::RawBufferAtomicCmpSwapAdaptor(RawBufferAtomicCmpSwap op) : RawBufferAtomicCmpSwapGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicCmpSwapAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicCmpSwap::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferAtomicCmpSwap::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicCmpSwap::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferAtomicCmpSwap::getCmp() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferAtomicCmpSwap::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicCmpSwap::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicCmpSwap::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawBufferAtomicCmpSwap::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(5).begin());
}

::mlir::OpOperand &RawBufferAtomicCmpSwap::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpSwap::getCmpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpSwap::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpSwap::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpSwap::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicCmpSwap::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferAtomicCmpSwap::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicCmpSwap::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicCmpSwap::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RawBufferAtomicCmpSwap::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  odsState.addTypes(res);
}

void RawBufferAtomicCmpSwap::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicCmpSwap::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferAtomicCmpSwap::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()) && ((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {res, src, cmp} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicCmpSwap::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawBufferAtomicCmpSwap::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  ::mlir::Type rsrcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rsrcTypes(rsrcRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseLParen())
    return ::mlir::failure();
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rsrcRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(resTypes[0]), ::llvm::ArrayRef<::mlir::Type>(resTypes[0]), ::llvm::ArrayRef<::mlir::Type>(rsrcTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawBufferAtomicCmpSwap::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << "(";
  _odsPrinter << getOperation()->getOperands();
  _odsPrinter << ")";
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRsrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicCmpSwap)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicFAddOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicFAddOpGenericAdaptorBase::RawBufferAtomicFAddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.atomic.fadd", odsAttrs.getContext());
}

RawBufferAtomicFAddOpGenericAdaptorBase::RawBufferAtomicFAddOpGenericAdaptorBase(RawBufferAtomicFAddOp op) : RawBufferAtomicFAddOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicFAddOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferAtomicFAddOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferAtomicFAddOpAdaptor::RawBufferAtomicFAddOpAdaptor(RawBufferAtomicFAddOp op) : RawBufferAtomicFAddOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicFAddOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicFAddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferAtomicFAddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicFAddOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferAtomicFAddOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferAtomicFAddOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RawBufferAtomicFAddOp::getSoffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value RawBufferAtomicFAddOp::getAux() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawBufferAtomicFAddOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFAddOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFAddOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFAddOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFAddOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferAtomicFAddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicFAddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RawBufferAtomicFAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
}

void RawBufferAtomicFAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFAddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferAtomicFAddOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicFAddOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicFAddOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicFMaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicFMaxOpGenericAdaptorBase::RawBufferAtomicFMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.atomic.fmax", odsAttrs.getContext());
}

RawBufferAtomicFMaxOpGenericAdaptorBase::RawBufferAtomicFMaxOpGenericAdaptorBase(RawBufferAtomicFMaxOp op) : RawBufferAtomicFMaxOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicFMaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferAtomicFMaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferAtomicFMaxOpAdaptor::RawBufferAtomicFMaxOpAdaptor(RawBufferAtomicFMaxOp op) : RawBufferAtomicFMaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicFMaxOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicFMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferAtomicFMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicFMaxOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferAtomicFMaxOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferAtomicFMaxOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RawBufferAtomicFMaxOp::getSoffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value RawBufferAtomicFMaxOp::getAux() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawBufferAtomicFMaxOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFMaxOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFMaxOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFMaxOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicFMaxOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferAtomicFMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicFMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RawBufferAtomicFMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
}

void RawBufferAtomicFMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicFMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferAtomicFMaxOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicFMaxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicFMaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicSMaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicSMaxOpGenericAdaptorBase::RawBufferAtomicSMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.atomic.smax", odsAttrs.getContext());
}

RawBufferAtomicSMaxOpGenericAdaptorBase::RawBufferAtomicSMaxOpGenericAdaptorBase(RawBufferAtomicSMaxOp op) : RawBufferAtomicSMaxOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicSMaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferAtomicSMaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferAtomicSMaxOpAdaptor::RawBufferAtomicSMaxOpAdaptor(RawBufferAtomicSMaxOp op) : RawBufferAtomicSMaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicSMaxOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicSMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferAtomicSMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicSMaxOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferAtomicSMaxOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferAtomicSMaxOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RawBufferAtomicSMaxOp::getSoffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value RawBufferAtomicSMaxOp::getAux() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawBufferAtomicSMaxOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicSMaxOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicSMaxOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicSMaxOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicSMaxOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferAtomicSMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicSMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RawBufferAtomicSMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
}

void RawBufferAtomicSMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicSMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferAtomicSMaxOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicSMaxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicSMaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicUMinOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferAtomicUMinOpGenericAdaptorBase::RawBufferAtomicUMinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.atomic.umin", odsAttrs.getContext());
}

RawBufferAtomicUMinOpGenericAdaptorBase::RawBufferAtomicUMinOpGenericAdaptorBase(RawBufferAtomicUMinOp op) : RawBufferAtomicUMinOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferAtomicUMinOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferAtomicUMinOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferAtomicUMinOpAdaptor::RawBufferAtomicUMinOpAdaptor(RawBufferAtomicUMinOp op) : RawBufferAtomicUMinOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferAtomicUMinOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferAtomicUMinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferAtomicUMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferAtomicUMinOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferAtomicUMinOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferAtomicUMinOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RawBufferAtomicUMinOp::getSoffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value RawBufferAtomicUMinOp::getAux() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawBufferAtomicUMinOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicUMinOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicUMinOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicUMinOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferAtomicUMinOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferAtomicUMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferAtomicUMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RawBufferAtomicUMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
}

void RawBufferAtomicUMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferAtomicUMinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferAtomicUMinOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferAtomicUMinOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicUMinOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferLoadOpGenericAdaptorBase::RawBufferLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.load", odsAttrs.getContext());
}

RawBufferLoadOpGenericAdaptorBase::RawBufferLoadOpGenericAdaptorBase(RawBufferLoadOp op) : RawBufferLoadOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferLoadOpAdaptor::RawBufferLoadOpAdaptor(RawBufferLoadOp op) : RawBufferLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferLoadOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferLoadOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferLoadOp::getSoffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RawBufferLoadOp::getAux() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::OpOperand &RawBufferLoadOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferLoadOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferLoadOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferLoadOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferLoadOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void RawBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  odsState.addTypes(res);
}

void RawBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferLoadOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawBufferStoreOpGenericAdaptorBase::RawBufferStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.buffer.store", odsAttrs.getContext());
}

RawBufferStoreOpGenericAdaptorBase::RawBufferStoreOpGenericAdaptorBase(RawBufferStoreOp op) : RawBufferStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawBufferStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawBufferStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RawBufferStoreOpAdaptor::RawBufferStoreOpAdaptor(RawBufferStoreOp op) : RawBufferStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawBufferStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawBufferStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawBufferStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawBufferStoreOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawBufferStoreOp::getRsrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value RawBufferStoreOp::getOffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value RawBufferStoreOp::getSoffset() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value RawBufferStoreOp::getAux() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawBufferStoreOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferStoreOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferStoreOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferStoreOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawBufferStoreOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawBufferStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawBufferStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RawBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
}

void RawBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawBufferStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawBufferStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawBufferStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferStoreOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicCmpSwap definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferAtomicCmpSwapGenericAdaptorBase::RawPtrBufferAtomicCmpSwapGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.atomic.cmpswap", odsAttrs.getContext());
}

RawPtrBufferAtomicCmpSwapGenericAdaptorBase::RawPtrBufferAtomicCmpSwapGenericAdaptorBase(RawPtrBufferAtomicCmpSwap op) : RawPtrBufferAtomicCmpSwapGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicCmpSwapGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferAtomicCmpSwapAdaptor::RawPtrBufferAtomicCmpSwapAdaptor(RawPtrBufferAtomicCmpSwap op) : RawPtrBufferAtomicCmpSwapGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferAtomicCmpSwapAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.cmpswap' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.cmpswap' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.cmpswap' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicCmpSwap::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferAtomicCmpSwap::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferAtomicCmpSwap::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value RawPtrBufferAtomicCmpSwap::getCmp() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferAtomicCmpSwap::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicCmpSwap::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicCmpSwap::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicCmpSwap::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(5).begin());
}

::mlir::OpOperand &RawPtrBufferAtomicCmpSwap::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicCmpSwap::getCmpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicCmpSwap::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicCmpSwap::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicCmpSwap::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicCmpSwap::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicCmpSwap::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferAtomicCmpSwap::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferAtomicCmpSwap::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RawPtrBufferAtomicCmpSwap::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferAtomicCmpSwap::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferAtomicCmpSwap::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferAtomicCmpSwap::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferAtomicCmpSwap::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferAtomicCmpSwap::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferAtomicCmpSwap::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicCmpSwap::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicCmpSwap::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferAtomicCmpSwap::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicCmpSwap::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicCmpSwap::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicCmpSwap::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicCmpSwap::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicCmpSwap::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferAtomicCmpSwap::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicCmpSwap::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicCmpSwap::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferAtomicCmpSwap::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicCmpSwap::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicCmpSwap::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferAtomicCmpSwap::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  odsState.addTypes(res);
}

void RawPtrBufferAtomicCmpSwap::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(src);
  odsState.addOperands(cmp);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferAtomicCmpSwap::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferAtomicCmpSwap::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()) && ((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {res, src, cmp} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicCmpSwap::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferAtomicCmpSwap::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(resTypes[0]), ::llvm::ArrayRef<::mlir::Type>(resTypes[0]), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicCmpSwap::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferAtomicCmpSwap::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferAtomicCmpSwap::getAccessedOperands() {
  return {getRsrc()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicCmpSwap)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicFaddOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferAtomicFaddOpGenericAdaptorBase::RawPtrBufferAtomicFaddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.atomic.fadd", odsAttrs.getContext());
}

RawPtrBufferAtomicFaddOpGenericAdaptorBase::RawPtrBufferAtomicFaddOpGenericAdaptorBase(RawPtrBufferAtomicFaddOp op) : RawPtrBufferAtomicFaddOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferAtomicFaddOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferAtomicFaddOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferAtomicFaddOpGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFaddOpGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFaddOpGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFaddOpGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFaddOpGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFaddOpGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferAtomicFaddOpAdaptor::RawPtrBufferAtomicFaddOpAdaptor(RawPtrBufferAtomicFaddOp op) : RawPtrBufferAtomicFaddOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferAtomicFaddOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.fadd' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.fadd' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.fadd' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicFaddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferAtomicFaddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferAtomicFaddOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferAtomicFaddOp::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicFaddOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicFaddOp::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicFaddOp::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawPtrBufferAtomicFaddOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFaddOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFaddOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFaddOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFaddOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicFaddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferAtomicFaddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawPtrBufferAtomicFaddOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferAtomicFaddOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferAtomicFaddOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferAtomicFaddOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferAtomicFaddOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferAtomicFaddOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferAtomicFaddOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicFaddOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicFaddOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferAtomicFaddOp::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFaddOp::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFaddOp::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFaddOp::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFaddOp::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFaddOp::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferAtomicFaddOp::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicFaddOp::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicFaddOp::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferAtomicFaddOp::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicFaddOp::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicFaddOp::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferAtomicFaddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
}

void RawPtrBufferAtomicFaddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferAtomicFaddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferAtomicFaddOp::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicFaddOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferAtomicFaddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type vdataRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vdataTypes(vdataRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    vdataRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(vdataTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicFaddOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVdata().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferAtomicFaddOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferAtomicFaddOp::getAccessedOperands() {
  return {getRsrc()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicFaddOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicFmaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferAtomicFmaxOpGenericAdaptorBase::RawPtrBufferAtomicFmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.atomic.fmax", odsAttrs.getContext());
}

RawPtrBufferAtomicFmaxOpGenericAdaptorBase::RawPtrBufferAtomicFmaxOpGenericAdaptorBase(RawPtrBufferAtomicFmaxOp op) : RawPtrBufferAtomicFmaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFmaxOpGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferAtomicFmaxOpAdaptor::RawPtrBufferAtomicFmaxOpAdaptor(RawPtrBufferAtomicFmaxOp op) : RawPtrBufferAtomicFmaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferAtomicFmaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.fmax' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.fmax' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.fmax' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicFmaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferAtomicFmaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferAtomicFmaxOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferAtomicFmaxOp::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicFmaxOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicFmaxOp::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicFmaxOp::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawPtrBufferAtomicFmaxOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFmaxOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFmaxOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFmaxOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicFmaxOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicFmaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferAtomicFmaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawPtrBufferAtomicFmaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferAtomicFmaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferAtomicFmaxOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferAtomicFmaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferAtomicFmaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferAtomicFmaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferAtomicFmaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicFmaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicFmaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferAtomicFmaxOp::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFmaxOp::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFmaxOp::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFmaxOp::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicFmaxOp::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicFmaxOp::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferAtomicFmaxOp::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicFmaxOp::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicFmaxOp::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferAtomicFmaxOp::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicFmaxOp::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicFmaxOp::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferAtomicFmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
}

void RawPtrBufferAtomicFmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferAtomicFmaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferAtomicFmaxOp::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicFmaxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferAtomicFmaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type vdataRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vdataTypes(vdataRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    vdataRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(vdataTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicFmaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVdata().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferAtomicFmaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferAtomicFmaxOp::getAccessedOperands() {
  return {getRsrc()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicFmaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicSmaxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferAtomicSmaxOpGenericAdaptorBase::RawPtrBufferAtomicSmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.atomic.smax", odsAttrs.getContext());
}

RawPtrBufferAtomicSmaxOpGenericAdaptorBase::RawPtrBufferAtomicSmaxOpGenericAdaptorBase(RawPtrBufferAtomicSmaxOp op) : RawPtrBufferAtomicSmaxOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicSmaxOpGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferAtomicSmaxOpAdaptor::RawPtrBufferAtomicSmaxOpAdaptor(RawPtrBufferAtomicSmaxOp op) : RawPtrBufferAtomicSmaxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferAtomicSmaxOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.smax' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.smax' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.smax' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicSmaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferAtomicSmaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferAtomicSmaxOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferAtomicSmaxOp::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicSmaxOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicSmaxOp::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicSmaxOp::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawPtrBufferAtomicSmaxOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicSmaxOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicSmaxOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicSmaxOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicSmaxOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicSmaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferAtomicSmaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawPtrBufferAtomicSmaxOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferAtomicSmaxOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferAtomicSmaxOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferAtomicSmaxOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferAtomicSmaxOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferAtomicSmaxOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferAtomicSmaxOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicSmaxOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicSmaxOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferAtomicSmaxOp::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicSmaxOp::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicSmaxOp::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicSmaxOp::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicSmaxOp::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicSmaxOp::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferAtomicSmaxOp::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicSmaxOp::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicSmaxOp::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferAtomicSmaxOp::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicSmaxOp::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicSmaxOp::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferAtomicSmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
}

void RawPtrBufferAtomicSmaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferAtomicSmaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferAtomicSmaxOp::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicSmaxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferAtomicSmaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type vdataRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vdataTypes(vdataRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    vdataRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(vdataTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicSmaxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVdata().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferAtomicSmaxOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferAtomicSmaxOp::getAccessedOperands() {
  return {getRsrc()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicSmaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicUminOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferAtomicUminOpGenericAdaptorBase::RawPtrBufferAtomicUminOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.atomic.umin", odsAttrs.getContext());
}

RawPtrBufferAtomicUminOpGenericAdaptorBase::RawPtrBufferAtomicUminOpGenericAdaptorBase(RawPtrBufferAtomicUminOp op) : RawPtrBufferAtomicUminOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferAtomicUminOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferAtomicUminOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferAtomicUminOpGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicUminOpGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicUminOpGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicUminOpGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicUminOpGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicUminOpGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferAtomicUminOpAdaptor::RawPtrBufferAtomicUminOpAdaptor(RawPtrBufferAtomicUminOp op) : RawPtrBufferAtomicUminOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferAtomicUminOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.umin' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.umin' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.atomic.umin' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicUminOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferAtomicUminOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferAtomicUminOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferAtomicUminOp::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicUminOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicUminOp::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferAtomicUminOp::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawPtrBufferAtomicUminOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicUminOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicUminOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicUminOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferAtomicUminOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferAtomicUminOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferAtomicUminOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawPtrBufferAtomicUminOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferAtomicUminOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferAtomicUminOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferAtomicUminOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferAtomicUminOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferAtomicUminOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferAtomicUminOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicUminOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicUminOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferAtomicUminOp::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicUminOp::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicUminOp::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicUminOp::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferAtomicUminOp::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferAtomicUminOp::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferAtomicUminOp::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicUminOp::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferAtomicUminOp::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferAtomicUminOp::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicUminOp::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferAtomicUminOp::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferAtomicUminOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
}

void RawPtrBufferAtomicUminOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferAtomicUminOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferAtomicUminOp::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferAtomicUminOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferAtomicUminOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type vdataRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vdataTypes(vdataRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    vdataRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(vdataTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferAtomicUminOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVdata().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferAtomicUminOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferAtomicUminOp::getAccessedOperands() {
  return {getRsrc()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicUminOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferLoadOpGenericAdaptorBase::RawPtrBufferLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.load", odsAttrs.getContext());
}

RawPtrBufferLoadOpGenericAdaptorBase::RawPtrBufferLoadOpGenericAdaptorBase(RawPtrBufferLoadOp op) : RawPtrBufferLoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferLoadOpGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferLoadOpGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferLoadOpGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferLoadOpGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferLoadOpGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferLoadOpGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferLoadOpAdaptor::RawPtrBufferLoadOpAdaptor(RawPtrBufferLoadOp op) : RawPtrBufferLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferLoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.load' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.load' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.load' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferLoadOp::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferLoadOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferLoadOp::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferLoadOp::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &RawPtrBufferLoadOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferLoadOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferLoadOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferLoadOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferLoadOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult RawPtrBufferLoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferLoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferLoadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferLoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferLoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferLoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferLoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferLoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferLoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferLoadOp::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferLoadOp::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferLoadOp::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferLoadOp::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferLoadOp::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferLoadOp::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferLoadOp::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferLoadOp::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferLoadOp::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferLoadOp::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferLoadOp::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferLoadOp::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  odsState.addTypes(res);
}

void RawPtrBufferLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferLoadOp::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resTypes);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferLoadOp::getAccessedOperands() {
  return {getRes()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferLoadOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RawPtrBufferStoreOpGenericAdaptorBase::RawPtrBufferStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.raw.ptr.buffer.store", odsAttrs.getContext());
}

RawPtrBufferStoreOpGenericAdaptorBase::RawPtrBufferStoreOpGenericAdaptorBase(RawPtrBufferStoreOp op) : RawPtrBufferStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RawPtrBufferStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RawPtrBufferStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr RawPtrBufferStoreOpGenericAdaptorBase::getAliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferStoreOpGenericAdaptorBase::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferStoreOpGenericAdaptorBase::getNoaliasScopesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferStoreOpGenericAdaptorBase::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferStoreOpGenericAdaptorBase::getTbaaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferStoreOpGenericAdaptorBase::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
RawPtrBufferStoreOpAdaptor::RawPtrBufferStoreOpAdaptor(RawPtrBufferStoreOp op) : RawPtrBufferStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RawPtrBufferStoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (tblgen_alias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.store' op ""attribute 'alias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_noalias_scopes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_noalias_scopes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_noalias_scopes), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::AliasScopeAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.store' op ""attribute 'noalias_scopes' failed to satisfy constraint: LLVM dialect alias scope array");

  if (tblgen_tbaa && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tbaa))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tbaa), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::LLVM::TBAATagAttr>(attr))); }))))
    return emitError(loc, "'rocdl.raw.ptr.buffer.store' op ""attribute 'tbaa' failed to satisfy constraint: LLVM dialect TBAA tag metadata array");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RawPtrBufferStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RawPtrBufferStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RawPtrBufferStoreOp::getVdata() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> RawPtrBufferStoreOp::getRsrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferStoreOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferStoreOp::getSoffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IntegerType> RawPtrBufferStoreOp::getAux() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(4).begin());
}

::mlir::OpOperand &RawPtrBufferStoreOp::getVdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferStoreOp::getRsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferStoreOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferStoreOp::getSoffsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &RawPtrBufferStoreOp::getAuxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> RawPtrBufferStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RawPtrBufferStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult RawPtrBufferStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alias_scopes;
       auto attr = dict.get("alias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.noalias_scopes;
       auto attr = dict.get("noalias_scopes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for noalias_scopes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `noalias_scopes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tbaa;
       auto attr = dict.get("tbaa");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tbaa in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tbaa` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RawPtrBufferStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.noalias_scopes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("noalias_scopes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tbaa;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tbaa",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RawPtrBufferStoreOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.noalias_scopes.getAsOpaquePointer()), 
    llvm::hash_value(prop.tbaa.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RawPtrBufferStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alias_scopes")
      return prop.alias_scopes;

    if (name == "noalias_scopes")
      return prop.noalias_scopes;

    if (name == "tbaa")
      return prop.tbaa;
  return std::nullopt;
}

void RawPtrBufferStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alias_scopes") {
       prop.alias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alias_scopes)>>(value);
       return;
    }

    if (name == "noalias_scopes") {
       prop.noalias_scopes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.noalias_scopes)>>(value);
       return;
    }

    if (name == "tbaa") {
       prop.tbaa = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tbaa)>>(value);
       return;
    }
}

void RawPtrBufferStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alias_scopes) attrs.append("alias_scopes", prop.alias_scopes);

    if (prop.noalias_scopes) attrs.append("noalias_scopes", prop.noalias_scopes);

    if (prop.tbaa) attrs.append("tbaa", prop.tbaa);
}

::mlir::LogicalResult RawPtrBufferStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "alias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNoaliasScopesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(attr, "noalias_scopes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTbaaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(attr, "tbaa", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.noalias_scopes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tbaa)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alias_scopes);

  writer.writeOptionalAttribute(prop.noalias_scopes);

  writer.writeOptionalAttribute(prop.tbaa);
}

::mlir::ArrayAttr RawPtrBufferStoreOp::getAliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferStoreOp::getAliasScopes() {
  auto attr = getAliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferStoreOp::getNoaliasScopesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().noalias_scopes);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferStoreOp::getNoaliasScopes() {
  auto attr = getNoaliasScopesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr RawPtrBufferStoreOp::getTbaaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tbaa);
}

::std::optional< ::mlir::ArrayAttr > RawPtrBufferStoreOp::getTbaa() {
  auto attr = getTbaaAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void RawPtrBufferStoreOp::setAliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAliasScopesAttrName(), attr);
}

void RawPtrBufferStoreOp::setNoaliasScopesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getNoaliasScopesAttrName(), attr);
}

void RawPtrBufferStoreOp::setTbaaAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTbaaAttrName(), attr);
}

::mlir::Attribute RawPtrBufferStoreOp::removeAliasScopesAttr() {
    auto &attr = getProperties().alias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferStoreOp::removeNoaliasScopesAttr() {
    auto &attr = getProperties().noalias_scopes;
    attr = {};
    return attr;
}

::mlir::Attribute RawPtrBufferStoreOp::removeTbaaAttr() {
    auto &attr = getProperties().tbaa;
    attr = {};
    return attr;
}

void RawPtrBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
}

void RawPtrBufferStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(offset);
  odsState.addOperands(soffset);
  odsState.addOperands(aux);
  if (alias_scopes) {
    odsState.getOrAddProperties<Properties>().alias_scopes = alias_scopes;
  }
  if (noalias_scopes) {
    odsState.getOrAddProperties<Properties>().noalias_scopes = noalias_scopes;
  }
  if (tbaa) {
    odsState.getOrAddProperties<Properties>().tbaa = tbaa;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RawPtrBufferStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RawPtrBufferStoreOp::verifyInvariantsImpl() {
  auto tblgen_alias_scopes = getProperties().alias_scopes; (void)tblgen_alias_scopes;
  auto tblgen_noalias_scopes = getProperties().noalias_scopes; (void)tblgen_noalias_scopes;
  auto tblgen_tbaa = getProperties().tbaa; (void)tblgen_tbaa;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_alias_scopes, "alias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps0(*this, tblgen_noalias_scopes, "noalias_scopes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_ROCDLOps1(*this, tblgen_tbaa, "tbaa")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RawPtrBufferStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RawPtrBufferStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::mlir::Type vdataRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vdataTypes(vdataRawTypes);
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
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
    vdataRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::LLVM::LLVMPointerType>(8);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(allOperands, ::llvm::concat<const ::mlir::Type>(::llvm::ArrayRef<::mlir::Type>(vdataTypes), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType0), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1), ::llvm::ArrayRef<::mlir::Type>(odsBuildableType1)), allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RawPtrBufferStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVdata().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void RawPtrBufferStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

::llvm::SmallVector<::mlir::Value> RawPtrBufferStoreOp::getAccessedOperands() {
  return {getRsrc()};
}
} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferStoreOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::ThreadIdXOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdXOpGenericAdaptorBase::ThreadIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workitem.id.x", odsAttrs.getContext());
}

ThreadIdXOpGenericAdaptorBase::ThreadIdXOpGenericAdaptorBase(ThreadIdXOp op) : ThreadIdXOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdXOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdXOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadIdXOpAdaptor::ThreadIdXOpAdaptor(ThreadIdXOp op) : ThreadIdXOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdXOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ThreadIdXOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ThreadIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ThreadIdXOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdXOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadIdXOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdXOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadIdXOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ThreadIdXOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ThreadIdXOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ThreadIdXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::ThreadIdYOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdYOpGenericAdaptorBase::ThreadIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workitem.id.y", odsAttrs.getContext());
}

ThreadIdYOpGenericAdaptorBase::ThreadIdYOpGenericAdaptorBase(ThreadIdYOp op) : ThreadIdYOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdYOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdYOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadIdYOpAdaptor::ThreadIdYOpAdaptor(ThreadIdYOp op) : ThreadIdYOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdYOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ThreadIdYOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ThreadIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ThreadIdYOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdYOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadIdYOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdYOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadIdYOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ThreadIdYOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ThreadIdYOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ThreadIdYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::ThreadIdZOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdZOpGenericAdaptorBase::ThreadIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.workitem.id.z", odsAttrs.getContext());
}

ThreadIdZOpGenericAdaptorBase::ThreadIdZOpGenericAdaptorBase(ThreadIdZOp op) : ThreadIdZOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdZOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdZOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadIdZOpAdaptor::ThreadIdZOpAdaptor(ThreadIdZOp op) : ThreadIdZOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdZOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ThreadIdZOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ThreadIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res) {
  odsState.addTypes(res);
}

void ThreadIdZOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdZOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadIdZOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdZOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadIdZOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  return ::mlir::success();
}

void ThreadIdZOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ThreadIdZOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ThreadIdZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x16bf16_1k definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x16bf16_1kGenericAdaptorBase::mfma_f32_16x16x16bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x16bf16.1k", odsAttrs.getContext());
}

mfma_f32_16x16x16bf16_1kGenericAdaptorBase::mfma_f32_16x16x16bf16_1kGenericAdaptorBase(mfma_f32_16x16x16bf16_1k op) : mfma_f32_16x16x16bf16_1kGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x16bf16_1kGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x16bf16_1kGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x16bf16_1kAdaptor::mfma_f32_16x16x16bf16_1kAdaptor(mfma_f32_16x16x16bf16_1k op) : mfma_f32_16x16x16bf16_1kGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x16bf16_1kAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x16bf16_1k::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x16bf16_1k::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x16bf16_1k::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x16bf16_1k::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x16bf16_1k::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x16bf16_1k::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x16bf16_1k::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x16bf16_1k::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x16bf16_1k::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x16bf16_1k::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x16bf16_1k::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x16bf16_1k::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x16bf16_1k::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x16bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x16f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x16f16GenericAdaptorBase::mfma_f32_16x16x16f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x16f16", odsAttrs.getContext());
}

mfma_f32_16x16x16f16GenericAdaptorBase::mfma_f32_16x16x16f16GenericAdaptorBase(mfma_f32_16x16x16f16 op) : mfma_f32_16x16x16f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x16f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x16f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x16f16Adaptor::mfma_f32_16x16x16f16Adaptor(mfma_f32_16x16x16f16 op) : mfma_f32_16x16x16f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x16f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x16f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x16f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x16f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x16f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x16f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x16f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x16f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x16f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x16f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x16f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x16f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x16f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x16f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x16f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x1f32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x1f32GenericAdaptorBase::mfma_f32_16x16x1f32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x1f32", odsAttrs.getContext());
}

mfma_f32_16x16x1f32GenericAdaptorBase::mfma_f32_16x16x1f32GenericAdaptorBase(mfma_f32_16x16x1f32 op) : mfma_f32_16x16x1f32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x1f32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x1f32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x1f32Adaptor::mfma_f32_16x16x1f32Adaptor(mfma_f32_16x16x1f32 op) : mfma_f32_16x16x1f32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x1f32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x1f32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x1f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x1f32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x1f32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x1f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x1f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x1f32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x1f32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x1f32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x1f32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x1f32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x1f32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x1f32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x1f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x2bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x2bf16GenericAdaptorBase::mfma_f32_16x16x2bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x2bf16", odsAttrs.getContext());
}

mfma_f32_16x16x2bf16GenericAdaptorBase::mfma_f32_16x16x2bf16GenericAdaptorBase(mfma_f32_16x16x2bf16 op) : mfma_f32_16x16x2bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x2bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x2bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x2bf16Adaptor::mfma_f32_16x16x2bf16Adaptor(mfma_f32_16x16x2bf16 op) : mfma_f32_16x16x2bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x2bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x2bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x2bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x2bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x2bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x2bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x2bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x2bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x2bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x2bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x2bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x2bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x2bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x2bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x2bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_bf8_bf8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase::mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x32.bf8.bf8", odsAttrs.getContext());
}

mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase::mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase(mfma_f32_16x16x32_bf8_bf8 op) : mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x32_bf8_bf8Adaptor::mfma_f32_16x16x32_bf8_bf8Adaptor(mfma_f32_16x16x32_bf8_bf8 op) : mfma_f32_16x16x32_bf8_bf8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x32_bf8_bf8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_bf8_bf8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x32_bf8_bf8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x32_bf8_bf8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x32_bf8_bf8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_bf8_bf8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x32_bf8_bf8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x32_bf8_bf8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x32_bf8_bf8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x32_bf8_bf8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x32_bf8_bf8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x32_bf8_bf8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x32_bf8_bf8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x32_bf8_bf8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_bf8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_bf8_fp8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase::mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x32.bf8.fp8", odsAttrs.getContext());
}

mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase::mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase(mfma_f32_16x16x32_bf8_fp8 op) : mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x32_bf8_fp8Adaptor::mfma_f32_16x16x32_bf8_fp8Adaptor(mfma_f32_16x16x32_bf8_fp8 op) : mfma_f32_16x16x32_bf8_fp8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x32_bf8_fp8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_bf8_fp8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x32_bf8_fp8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x32_bf8_fp8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x32_bf8_fp8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_bf8_fp8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x32_bf8_fp8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x32_bf8_fp8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x32_bf8_fp8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x32_bf8_fp8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x32_bf8_fp8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x32_bf8_fp8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x32_bf8_fp8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x32_bf8_fp8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_bf8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_fp8_bf8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase::mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x32.fp8.bf8", odsAttrs.getContext());
}

mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase::mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase(mfma_f32_16x16x32_fp8_bf8 op) : mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x32_fp8_bf8Adaptor::mfma_f32_16x16x32_fp8_bf8Adaptor(mfma_f32_16x16x32_fp8_bf8 op) : mfma_f32_16x16x32_fp8_bf8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x32_fp8_bf8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_fp8_bf8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x32_fp8_bf8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x32_fp8_bf8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x32_fp8_bf8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_fp8_bf8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x32_fp8_bf8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x32_fp8_bf8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x32_fp8_bf8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x32_fp8_bf8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x32_fp8_bf8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x32_fp8_bf8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x32_fp8_bf8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x32_fp8_bf8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_fp8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_fp8_fp8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase::mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x32.fp8.fp8", odsAttrs.getContext());
}

mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase::mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase(mfma_f32_16x16x32_fp8_fp8 op) : mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x32_fp8_fp8Adaptor::mfma_f32_16x16x32_fp8_fp8Adaptor(mfma_f32_16x16x32_fp8_fp8 op) : mfma_f32_16x16x32_fp8_fp8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x32_fp8_fp8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_fp8_fp8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x32_fp8_fp8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x32_fp8_fp8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x32_fp8_fp8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x32_fp8_fp8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x32_fp8_fp8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x32_fp8_fp8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x32_fp8_fp8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x32_fp8_fp8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x32_fp8_fp8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x32_fp8_fp8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x32_fp8_fp8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x32_fp8_fp8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_fp8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x4bf16_1k definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x4bf16_1kGenericAdaptorBase::mfma_f32_16x16x4bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x4bf16.1k", odsAttrs.getContext());
}

mfma_f32_16x16x4bf16_1kGenericAdaptorBase::mfma_f32_16x16x4bf16_1kGenericAdaptorBase(mfma_f32_16x16x4bf16_1k op) : mfma_f32_16x16x4bf16_1kGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x4bf16_1kGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x4bf16_1kGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x4bf16_1kAdaptor::mfma_f32_16x16x4bf16_1kAdaptor(mfma_f32_16x16x4bf16_1k op) : mfma_f32_16x16x4bf16_1kGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x4bf16_1kAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4bf16_1k::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x4bf16_1k::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x4bf16_1k::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x4bf16_1k::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4bf16_1k::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x4bf16_1k::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x4bf16_1k::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x4bf16_1k::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x4bf16_1k::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x4bf16_1k::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x4bf16_1k::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x4bf16_1k::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x4bf16_1k::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x4bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x4f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x4f16GenericAdaptorBase::mfma_f32_16x16x4f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x4f16", odsAttrs.getContext());
}

mfma_f32_16x16x4f16GenericAdaptorBase::mfma_f32_16x16x4f16GenericAdaptorBase(mfma_f32_16x16x4f16 op) : mfma_f32_16x16x4f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x4f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x4f16Adaptor::mfma_f32_16x16x4f16Adaptor(mfma_f32_16x16x4f16 op) : mfma_f32_16x16x4f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x4f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x4f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x4f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x4f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x4f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x4f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x4f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x4f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x4f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x4f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x4f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x4f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x4f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x4f32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x4f32GenericAdaptorBase::mfma_f32_16x16x4f32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x4f32", odsAttrs.getContext());
}

mfma_f32_16x16x4f32GenericAdaptorBase::mfma_f32_16x16x4f32GenericAdaptorBase(mfma_f32_16x16x4f32 op) : mfma_f32_16x16x4f32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x4f32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x4f32Adaptor::mfma_f32_16x16x4f32Adaptor(mfma_f32_16x16x4f32 op) : mfma_f32_16x16x4f32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x4f32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x4f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x4f32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x4f32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x4f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x4f32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x4f32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x4f32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x4f32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x4f32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x4f32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x4f32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x4f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x8_xf32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x8_xf32GenericAdaptorBase::mfma_f32_16x16x8_xf32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x8.xf32", odsAttrs.getContext());
}

mfma_f32_16x16x8_xf32GenericAdaptorBase::mfma_f32_16x16x8_xf32GenericAdaptorBase(mfma_f32_16x16x8_xf32 op) : mfma_f32_16x16x8_xf32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x8_xf32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x8_xf32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x8_xf32Adaptor::mfma_f32_16x16x8_xf32Adaptor(mfma_f32_16x16x8_xf32 op) : mfma_f32_16x16x8_xf32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x8_xf32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x8_xf32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x8_xf32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x8_xf32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x8_xf32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x8_xf32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x8_xf32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x8_xf32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x8_xf32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x8_xf32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x8_xf32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x8_xf32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x8_xf32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x8_xf32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x8_xf32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x8bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_16x16x8bf16GenericAdaptorBase::mfma_f32_16x16x8bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.16x16x8bf16", odsAttrs.getContext());
}

mfma_f32_16x16x8bf16GenericAdaptorBase::mfma_f32_16x16x8bf16GenericAdaptorBase(mfma_f32_16x16x8bf16 op) : mfma_f32_16x16x8bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_16x16x8bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_16x16x8bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_16x16x8bf16Adaptor::mfma_f32_16x16x8bf16Adaptor(mfma_f32_16x16x8bf16 op) : mfma_f32_16x16x8bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_16x16x8bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_16x16x8bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_16x16x8bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_16x16x8bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x8bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_16x16x8bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_16x16x8bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_16x16x8bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_16x16x8bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x8bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_16x16x8bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_16x16x8bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_16x16x8bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_16x16x8bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x8bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_bf8_bf8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase::mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x16.bf8.bf8", odsAttrs.getContext());
}

mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase::mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase(mfma_f32_32x32x16_bf8_bf8 op) : mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x16_bf8_bf8Adaptor::mfma_f32_32x32x16_bf8_bf8Adaptor(mfma_f32_32x32x16_bf8_bf8 op) : mfma_f32_32x32x16_bf8_bf8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x16_bf8_bf8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_bf8_bf8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x16_bf8_bf8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x16_bf8_bf8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x16_bf8_bf8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_bf8_bf8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x16_bf8_bf8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x16_bf8_bf8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x16_bf8_bf8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x16_bf8_bf8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x16_bf8_bf8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x16_bf8_bf8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x16_bf8_bf8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x16_bf8_bf8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_bf8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_bf8_fp8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase::mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x16.bf8.fp8", odsAttrs.getContext());
}

mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase::mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase(mfma_f32_32x32x16_bf8_fp8 op) : mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x16_bf8_fp8Adaptor::mfma_f32_32x32x16_bf8_fp8Adaptor(mfma_f32_32x32x16_bf8_fp8 op) : mfma_f32_32x32x16_bf8_fp8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x16_bf8_fp8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_bf8_fp8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x16_bf8_fp8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x16_bf8_fp8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x16_bf8_fp8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_bf8_fp8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x16_bf8_fp8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x16_bf8_fp8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x16_bf8_fp8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x16_bf8_fp8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x16_bf8_fp8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x16_bf8_fp8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x16_bf8_fp8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x16_bf8_fp8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_bf8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_fp8_bf8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase::mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x16.fp8.bf8", odsAttrs.getContext());
}

mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase::mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase(mfma_f32_32x32x16_fp8_bf8 op) : mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x16_fp8_bf8Adaptor::mfma_f32_32x32x16_fp8_bf8Adaptor(mfma_f32_32x32x16_fp8_bf8 op) : mfma_f32_32x32x16_fp8_bf8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x16_fp8_bf8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_fp8_bf8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x16_fp8_bf8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x16_fp8_bf8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x16_fp8_bf8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_fp8_bf8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x16_fp8_bf8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x16_fp8_bf8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x16_fp8_bf8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x16_fp8_bf8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x16_fp8_bf8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x16_fp8_bf8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x16_fp8_bf8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x16_fp8_bf8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_fp8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_fp8_fp8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase::mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x16.fp8.fp8", odsAttrs.getContext());
}

mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase::mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase(mfma_f32_32x32x16_fp8_fp8 op) : mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x16_fp8_fp8Adaptor::mfma_f32_32x32x16_fp8_fp8Adaptor(mfma_f32_32x32x16_fp8_fp8 op) : mfma_f32_32x32x16_fp8_fp8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x16_fp8_fp8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_fp8_fp8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x16_fp8_fp8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x16_fp8_fp8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x16_fp8_fp8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x16_fp8_fp8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x16_fp8_fp8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x16_fp8_fp8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x16_fp8_fp8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x16_fp8_fp8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x16_fp8_fp8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x16_fp8_fp8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x16_fp8_fp8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x16_fp8_fp8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_fp8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x1f32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x1f32GenericAdaptorBase::mfma_f32_32x32x1f32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x1f32", odsAttrs.getContext());
}

mfma_f32_32x32x1f32GenericAdaptorBase::mfma_f32_32x32x1f32GenericAdaptorBase(mfma_f32_32x32x1f32 op) : mfma_f32_32x32x1f32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x1f32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x1f32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x1f32Adaptor::mfma_f32_32x32x1f32Adaptor(mfma_f32_32x32x1f32 op) : mfma_f32_32x32x1f32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x1f32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x1f32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x1f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x1f32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x1f32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x1f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x1f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x1f32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x1f32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x1f32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x1f32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x1f32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x1f32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x1f32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x1f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x2bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x2bf16GenericAdaptorBase::mfma_f32_32x32x2bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x2bf16", odsAttrs.getContext());
}

mfma_f32_32x32x2bf16GenericAdaptorBase::mfma_f32_32x32x2bf16GenericAdaptorBase(mfma_f32_32x32x2bf16 op) : mfma_f32_32x32x2bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x2bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x2bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x2bf16Adaptor::mfma_f32_32x32x2bf16Adaptor(mfma_f32_32x32x2bf16 op) : mfma_f32_32x32x2bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x2bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x2bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x2bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x2bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x2bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x2bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x2bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x2bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x2bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x2bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x2bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x2bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x2bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x2f32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x2f32GenericAdaptorBase::mfma_f32_32x32x2f32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x2f32", odsAttrs.getContext());
}

mfma_f32_32x32x2f32GenericAdaptorBase::mfma_f32_32x32x2f32GenericAdaptorBase(mfma_f32_32x32x2f32 op) : mfma_f32_32x32x2f32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x2f32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x2f32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x2f32Adaptor::mfma_f32_32x32x2f32Adaptor(mfma_f32_32x32x2f32 op) : mfma_f32_32x32x2f32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x2f32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2f32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x2f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x2f32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x2f32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x2f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x2f32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x2f32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x2f32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x2f32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x2f32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x2f32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x2f32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x2f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4_xf32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x4_xf32GenericAdaptorBase::mfma_f32_32x32x4_xf32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x4.xf32", odsAttrs.getContext());
}

mfma_f32_32x32x4_xf32GenericAdaptorBase::mfma_f32_32x32x4_xf32GenericAdaptorBase(mfma_f32_32x32x4_xf32 op) : mfma_f32_32x32x4_xf32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x4_xf32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x4_xf32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x4_xf32Adaptor::mfma_f32_32x32x4_xf32Adaptor(mfma_f32_32x32x4_xf32 op) : mfma_f32_32x32x4_xf32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x4_xf32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4_xf32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x4_xf32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x4_xf32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x4_xf32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4_xf32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x4_xf32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x4_xf32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x4_xf32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x4_xf32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x4_xf32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x4_xf32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x4_xf32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x4_xf32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4_xf32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x4bf16GenericAdaptorBase::mfma_f32_32x32x4bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x4bf16", odsAttrs.getContext());
}

mfma_f32_32x32x4bf16GenericAdaptorBase::mfma_f32_32x32x4bf16GenericAdaptorBase(mfma_f32_32x32x4bf16 op) : mfma_f32_32x32x4bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x4bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x4bf16Adaptor::mfma_f32_32x32x4bf16Adaptor(mfma_f32_32x32x4bf16 op) : mfma_f32_32x32x4bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x4bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x4bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x4bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x4bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x4bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x4bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x4bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x4bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x4bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x4bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x4bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x4bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4bf16_1k definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x4bf16_1kGenericAdaptorBase::mfma_f32_32x32x4bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x4bf16.1k", odsAttrs.getContext());
}

mfma_f32_32x32x4bf16_1kGenericAdaptorBase::mfma_f32_32x32x4bf16_1kGenericAdaptorBase(mfma_f32_32x32x4bf16_1k op) : mfma_f32_32x32x4bf16_1kGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16_1kGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x4bf16_1kGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x4bf16_1kAdaptor::mfma_f32_32x32x4bf16_1kAdaptor(mfma_f32_32x32x4bf16_1k op) : mfma_f32_32x32x4bf16_1kGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x4bf16_1kAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16_1k::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x4bf16_1k::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x4bf16_1k::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x4bf16_1k::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16_1k::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x4bf16_1k::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x4bf16_1k::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x4bf16_1k::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x4bf16_1k::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x4bf16_1k::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x4bf16_1k::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x4bf16_1k::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x4bf16_1k::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x4f16GenericAdaptorBase::mfma_f32_32x32x4f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x4f16", odsAttrs.getContext());
}

mfma_f32_32x32x4f16GenericAdaptorBase::mfma_f32_32x32x4f16GenericAdaptorBase(mfma_f32_32x32x4f16 op) : mfma_f32_32x32x4f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x4f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x4f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x4f16Adaptor::mfma_f32_32x32x4f16Adaptor(mfma_f32_32x32x4f16 op) : mfma_f32_32x32x4f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x4f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x4f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x4f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x4f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x4f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x4f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x4f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x4f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x4f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x4f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x4f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x4f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x8bf16_1k definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x8bf16_1kGenericAdaptorBase::mfma_f32_32x32x8bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x8bf16.1k", odsAttrs.getContext());
}

mfma_f32_32x32x8bf16_1kGenericAdaptorBase::mfma_f32_32x32x8bf16_1kGenericAdaptorBase(mfma_f32_32x32x8bf16_1k op) : mfma_f32_32x32x8bf16_1kGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x8bf16_1kGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x8bf16_1kGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x8bf16_1kAdaptor::mfma_f32_32x32x8bf16_1kAdaptor(mfma_f32_32x32x8bf16_1k op) : mfma_f32_32x32x8bf16_1kGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x8bf16_1kAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x8bf16_1k::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x8bf16_1k::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x8bf16_1k::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x8bf16_1k::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x8bf16_1k::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x8bf16_1k::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x8bf16_1k::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x8bf16_1k::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x8bf16_1k::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x8bf16_1k::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x8bf16_1k::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x8bf16_1k::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x8bf16_1k::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x8bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x8f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_32x32x8f16GenericAdaptorBase::mfma_f32_32x32x8f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.32x32x8f16", odsAttrs.getContext());
}

mfma_f32_32x32x8f16GenericAdaptorBase::mfma_f32_32x32x8f16GenericAdaptorBase(mfma_f32_32x32x8f16 op) : mfma_f32_32x32x8f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_32x32x8f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_32x32x8f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_32x32x8f16Adaptor::mfma_f32_32x32x8f16Adaptor(mfma_f32_32x32x8f16 op) : mfma_f32_32x32x8f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_32x32x8f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_32x32x8f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_32x32x8f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_32x32x8f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x8f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_32x32x8f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_32x32x8f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_32x32x8f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_32x32x8f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x8f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_32x32x8f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_32x32x8f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_32x32x8f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_32x32x8f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x8f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x1f32 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_4x4x1f32GenericAdaptorBase::mfma_f32_4x4x1f32GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.4x4x1f32", odsAttrs.getContext());
}

mfma_f32_4x4x1f32GenericAdaptorBase::mfma_f32_4x4x1f32GenericAdaptorBase(mfma_f32_4x4x1f32 op) : mfma_f32_4x4x1f32GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_4x4x1f32GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_4x4x1f32GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_4x4x1f32Adaptor::mfma_f32_4x4x1f32Adaptor(mfma_f32_4x4x1f32 op) : mfma_f32_4x4x1f32GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_4x4x1f32Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_4x4x1f32::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_4x4x1f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_4x4x1f32::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x1f32::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_4x4x1f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_4x4x1f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_4x4x1f32::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_4x4x1f32::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x1f32::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_4x4x1f32::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_4x4x1f32::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_4x4x1f32::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_4x4x1f32::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x1f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x2bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_4x4x2bf16GenericAdaptorBase::mfma_f32_4x4x2bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.4x4x2bf16", odsAttrs.getContext());
}

mfma_f32_4x4x2bf16GenericAdaptorBase::mfma_f32_4x4x2bf16GenericAdaptorBase(mfma_f32_4x4x2bf16 op) : mfma_f32_4x4x2bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_4x4x2bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_4x4x2bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_4x4x2bf16Adaptor::mfma_f32_4x4x2bf16Adaptor(mfma_f32_4x4x2bf16 op) : mfma_f32_4x4x2bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_4x4x2bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_4x4x2bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_4x4x2bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_4x4x2bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x2bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_4x4x2bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_4x4x2bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_4x4x2bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_4x4x2bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x2bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_4x4x2bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_4x4x2bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_4x4x2bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_4x4x2bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x2bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x4bf16_1k definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_4x4x4bf16_1kGenericAdaptorBase::mfma_f32_4x4x4bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.4x4x4bf16.1k", odsAttrs.getContext());
}

mfma_f32_4x4x4bf16_1kGenericAdaptorBase::mfma_f32_4x4x4bf16_1kGenericAdaptorBase(mfma_f32_4x4x4bf16_1k op) : mfma_f32_4x4x4bf16_1kGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_4x4x4bf16_1kGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_4x4x4bf16_1kGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_4x4x4bf16_1kAdaptor::mfma_f32_4x4x4bf16_1kAdaptor(mfma_f32_4x4x4bf16_1k op) : mfma_f32_4x4x4bf16_1kGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_4x4x4bf16_1kAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_4x4x4bf16_1k::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_4x4x4bf16_1k::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_4x4x4bf16_1k::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x4bf16_1k::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_4x4x4bf16_1k::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_4x4x4bf16_1k::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_4x4x4bf16_1k::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_4x4x4bf16_1k::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x4bf16_1k::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_4x4x4bf16_1k::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_4x4x4bf16_1k::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_4x4x4bf16_1k::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_4x4x4bf16_1k::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x4bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x4f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f32_4x4x4f16GenericAdaptorBase::mfma_f32_4x4x4f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f32.4x4x4f16", odsAttrs.getContext());
}

mfma_f32_4x4x4f16GenericAdaptorBase::mfma_f32_4x4x4f16GenericAdaptorBase(mfma_f32_4x4x4f16 op) : mfma_f32_4x4x4f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f32_4x4x4f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f32_4x4x4f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f32_4x4x4f16Adaptor::mfma_f32_4x4x4f16Adaptor(mfma_f32_4x4x4f16 op) : mfma_f32_4x4x4f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f32_4x4x4f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f32_4x4x4f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f32_4x4x4f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f32_4x4x4f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x4f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f32_4x4x4f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f32_4x4x4f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f32_4x4x4f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f32_4x4x4f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x4f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f32_4x4x4f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f32_4x4x4f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f32_4x4x4f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f32_4x4x4f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x4f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f64_16x16x4f64 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f64_16x16x4f64GenericAdaptorBase::mfma_f64_16x16x4f64GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f64.16x16x4f64", odsAttrs.getContext());
}

mfma_f64_16x16x4f64GenericAdaptorBase::mfma_f64_16x16x4f64GenericAdaptorBase(mfma_f64_16x16x4f64 op) : mfma_f64_16x16x4f64GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f64_16x16x4f64GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f64_16x16x4f64GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f64_16x16x4f64Adaptor::mfma_f64_16x16x4f64Adaptor(mfma_f64_16x16x4f64 op) : mfma_f64_16x16x4f64GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f64_16x16x4f64Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f64_16x16x4f64::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f64_16x16x4f64::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f64_16x16x4f64::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f64_16x16x4f64::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f64_16x16x4f64::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f64_16x16x4f64::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f64_16x16x4f64::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f64_16x16x4f64::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f64_16x16x4f64::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f64_16x16x4f64::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f64_16x16x4f64::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f64_16x16x4f64::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f64_16x16x4f64::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f64_16x16x4f64)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f64_4x4x4f64 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_f64_4x4x4f64GenericAdaptorBase::mfma_f64_4x4x4f64GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.f64.4x4x4f64", odsAttrs.getContext());
}

mfma_f64_4x4x4f64GenericAdaptorBase::mfma_f64_4x4x4f64GenericAdaptorBase(mfma_f64_4x4x4f64 op) : mfma_f64_4x4x4f64GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_f64_4x4x4f64GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_f64_4x4x4f64GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_f64_4x4x4f64Adaptor::mfma_f64_4x4x4f64Adaptor(mfma_f64_4x4x4f64 op) : mfma_f64_4x4x4f64GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_f64_4x4x4f64Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_f64_4x4x4f64::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_f64_4x4x4f64::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_f64_4x4x4f64::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f64_4x4x4f64::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_f64_4x4x4f64::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_f64_4x4x4f64::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_f64_4x4x4f64::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_f64_4x4x4f64::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f64_4x4x4f64::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_f64_4x4x4f64::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_f64_4x4x4f64::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_f64_4x4x4f64::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_f64_4x4x4f64::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f64_4x4x4f64)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_16x16x16i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_16x16x16i8GenericAdaptorBase::mfma_i32_16x16x16i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.16x16x16i8", odsAttrs.getContext());
}

mfma_i32_16x16x16i8GenericAdaptorBase::mfma_i32_16x16x16i8GenericAdaptorBase(mfma_i32_16x16x16i8 op) : mfma_i32_16x16x16i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_16x16x16i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_16x16x16i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_16x16x16i8Adaptor::mfma_i32_16x16x16i8Adaptor(mfma_i32_16x16x16i8 op) : mfma_i32_16x16x16i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_16x16x16i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_16x16x16i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_16x16x16i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_16x16x16i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_16x16x16i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_16x16x16i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_16x16x16i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_16x16x16i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_16x16x16i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_16x16x16i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_16x16x16i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_16x16x16i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_16x16x16i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_16x16x16i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_16x16x16i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_16x16x32_i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_16x16x32_i8GenericAdaptorBase::mfma_i32_16x16x32_i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.16x16x32.i8", odsAttrs.getContext());
}

mfma_i32_16x16x32_i8GenericAdaptorBase::mfma_i32_16x16x32_i8GenericAdaptorBase(mfma_i32_16x16x32_i8 op) : mfma_i32_16x16x32_i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_16x16x32_i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_16x16x32_i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_16x16x32_i8Adaptor::mfma_i32_16x16x32_i8Adaptor(mfma_i32_16x16x32_i8 op) : mfma_i32_16x16x32_i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_16x16x32_i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_16x16x32_i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_16x16x32_i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_16x16x32_i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_16x16x32_i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_16x16x32_i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_16x16x32_i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_16x16x32_i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_16x16x32_i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_16x16x32_i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_16x16x32_i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_16x16x32_i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_16x16x32_i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_16x16x32_i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_16x16x32_i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_16x16x4i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_16x16x4i8GenericAdaptorBase::mfma_i32_16x16x4i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.16x16x4i8", odsAttrs.getContext());
}

mfma_i32_16x16x4i8GenericAdaptorBase::mfma_i32_16x16x4i8GenericAdaptorBase(mfma_i32_16x16x4i8 op) : mfma_i32_16x16x4i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_16x16x4i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_16x16x4i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_16x16x4i8Adaptor::mfma_i32_16x16x4i8Adaptor(mfma_i32_16x16x4i8 op) : mfma_i32_16x16x4i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_16x16x4i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_16x16x4i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_16x16x4i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_16x16x4i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_16x16x4i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_16x16x4i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_16x16x4i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_16x16x4i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_16x16x4i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_16x16x4i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_16x16x4i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_16x16x4i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_16x16x4i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_16x16x4i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_16x16x4i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_32x32x16_i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_32x32x16_i8GenericAdaptorBase::mfma_i32_32x32x16_i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.32x32x16.i8", odsAttrs.getContext());
}

mfma_i32_32x32x16_i8GenericAdaptorBase::mfma_i32_32x32x16_i8GenericAdaptorBase(mfma_i32_32x32x16_i8 op) : mfma_i32_32x32x16_i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_32x32x16_i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_32x32x16_i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_32x32x16_i8Adaptor::mfma_i32_32x32x16_i8Adaptor(mfma_i32_32x32x16_i8 op) : mfma_i32_32x32x16_i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_32x32x16_i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_32x32x16_i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_32x32x16_i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_32x32x16_i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_32x32x16_i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_32x32x16_i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_32x32x16_i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_32x32x16_i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_32x32x16_i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_32x32x16_i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_32x32x16_i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_32x32x16_i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_32x32x16_i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_32x32x16_i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_32x32x16_i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_32x32x4i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_32x32x4i8GenericAdaptorBase::mfma_i32_32x32x4i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.32x32x4i8", odsAttrs.getContext());
}

mfma_i32_32x32x4i8GenericAdaptorBase::mfma_i32_32x32x4i8GenericAdaptorBase(mfma_i32_32x32x4i8 op) : mfma_i32_32x32x4i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_32x32x4i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_32x32x4i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_32x32x4i8Adaptor::mfma_i32_32x32x4i8Adaptor(mfma_i32_32x32x4i8 op) : mfma_i32_32x32x4i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_32x32x4i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_32x32x4i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_32x32x4i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_32x32x4i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_32x32x4i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_32x32x4i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_32x32x4i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_32x32x4i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_32x32x4i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_32x32x4i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_32x32x4i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_32x32x4i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_32x32x4i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_32x32x4i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_32x32x4i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_32x32x8i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_32x32x8i8GenericAdaptorBase::mfma_i32_32x32x8i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.32x32x8i8", odsAttrs.getContext());
}

mfma_i32_32x32x8i8GenericAdaptorBase::mfma_i32_32x32x8i8GenericAdaptorBase(mfma_i32_32x32x8i8 op) : mfma_i32_32x32x8i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_32x32x8i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_32x32x8i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_32x32x8i8Adaptor::mfma_i32_32x32x8i8Adaptor(mfma_i32_32x32x8i8 op) : mfma_i32_32x32x8i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_32x32x8i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_32x32x8i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_32x32x8i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_32x32x8i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_32x32x8i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_32x32x8i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_32x32x8i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_32x32x8i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_32x32x8i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_32x32x8i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_32x32x8i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_32x32x8i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_32x32x8i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_32x32x8i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_32x32x8i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_4x4x4i8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
mfma_i32_4x4x4i8GenericAdaptorBase::mfma_i32_4x4x4i8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.mfma.i32.4x4x4i8", odsAttrs.getContext());
}

mfma_i32_4x4x4i8GenericAdaptorBase::mfma_i32_4x4x4i8GenericAdaptorBase(mfma_i32_4x4x4i8 op) : mfma_i32_4x4x4i8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> mfma_i32_4x4x4i8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr mfma_i32_4x4x4i8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
mfma_i32_4x4x4i8Adaptor::mfma_i32_4x4x4i8Adaptor(mfma_i32_4x4x4i8 op) : mfma_i32_4x4x4i8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult mfma_i32_4x4x4i8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> mfma_i32_4x4x4i8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range mfma_i32_4x4x4i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range mfma_i32_4x4x4i8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_4x4x4i8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> mfma_i32_4x4x4i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range mfma_i32_4x4x4i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value mfma_i32_4x4x4i8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void mfma_i32_4x4x4i8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_4x4x4i8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult mfma_i32_4x4x4i8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult mfma_i32_4x4x4i8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult mfma_i32_4x4x4i8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void mfma_i32_4x4x4i8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_4x4x4i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_bf16_16x16x16_bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
wmma_bf16_16x16x16_bf16GenericAdaptorBase::wmma_bf16_16x16x16_bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.wmma.bf16.16x16x16.bf16", odsAttrs.getContext());
}

wmma_bf16_16x16x16_bf16GenericAdaptorBase::wmma_bf16_16x16x16_bf16GenericAdaptorBase(wmma_bf16_16x16x16_bf16 op) : wmma_bf16_16x16x16_bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> wmma_bf16_16x16x16_bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr wmma_bf16_16x16x16_bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
wmma_bf16_16x16x16_bf16Adaptor::wmma_bf16_16x16x16_bf16Adaptor(wmma_bf16_16x16x16_bf16 op) : wmma_bf16_16x16x16_bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult wmma_bf16_16x16x16_bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> wmma_bf16_16x16x16_bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range wmma_bf16_16x16x16_bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range wmma_bf16_16x16x16_bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange wmma_bf16_16x16x16_bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> wmma_bf16_16x16x16_bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range wmma_bf16_16x16x16_bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value wmma_bf16_16x16x16_bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void wmma_bf16_16x16x16_bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void wmma_bf16_16x16x16_bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult wmma_bf16_16x16x16_bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult wmma_bf16_16x16x16_bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult wmma_bf16_16x16x16_bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void wmma_bf16_16x16x16_bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_bf16_16x16x16_bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_f16_16x16x16_f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
wmma_f16_16x16x16_f16GenericAdaptorBase::wmma_f16_16x16x16_f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.wmma.f16.16x16x16.f16", odsAttrs.getContext());
}

wmma_f16_16x16x16_f16GenericAdaptorBase::wmma_f16_16x16x16_f16GenericAdaptorBase(wmma_f16_16x16x16_f16 op) : wmma_f16_16x16x16_f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> wmma_f16_16x16x16_f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr wmma_f16_16x16x16_f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
wmma_f16_16x16x16_f16Adaptor::wmma_f16_16x16x16_f16Adaptor(wmma_f16_16x16x16_f16 op) : wmma_f16_16x16x16_f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult wmma_f16_16x16x16_f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> wmma_f16_16x16x16_f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range wmma_f16_16x16x16_f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range wmma_f16_16x16x16_f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange wmma_f16_16x16x16_f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> wmma_f16_16x16x16_f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range wmma_f16_16x16x16_f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value wmma_f16_16x16x16_f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void wmma_f16_16x16x16_f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void wmma_f16_16x16x16_f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult wmma_f16_16x16x16_f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult wmma_f16_16x16x16_f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult wmma_f16_16x16x16_f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void wmma_f16_16x16x16_f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_f16_16x16x16_f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_f32_16x16x16_bf16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
wmma_f32_16x16x16_bf16GenericAdaptorBase::wmma_f32_16x16x16_bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.wmma.f32.16x16x16.bf16", odsAttrs.getContext());
}

wmma_f32_16x16x16_bf16GenericAdaptorBase::wmma_f32_16x16x16_bf16GenericAdaptorBase(wmma_f32_16x16x16_bf16 op) : wmma_f32_16x16x16_bf16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> wmma_f32_16x16x16_bf16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr wmma_f32_16x16x16_bf16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
wmma_f32_16x16x16_bf16Adaptor::wmma_f32_16x16x16_bf16Adaptor(wmma_f32_16x16x16_bf16 op) : wmma_f32_16x16x16_bf16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult wmma_f32_16x16x16_bf16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> wmma_f32_16x16x16_bf16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range wmma_f32_16x16x16_bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range wmma_f32_16x16x16_bf16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange wmma_f32_16x16x16_bf16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> wmma_f32_16x16x16_bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range wmma_f32_16x16x16_bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value wmma_f32_16x16x16_bf16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void wmma_f32_16x16x16_bf16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void wmma_f32_16x16x16_bf16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult wmma_f32_16x16x16_bf16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult wmma_f32_16x16x16_bf16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult wmma_f32_16x16x16_bf16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void wmma_f32_16x16x16_bf16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_f32_16x16x16_bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_f32_16x16x16_f16 definitions
//===----------------------------------------------------------------------===//

namespace detail {
wmma_f32_16x16x16_f16GenericAdaptorBase::wmma_f32_16x16x16_f16GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.wmma.f32.16x16x16.f16", odsAttrs.getContext());
}

wmma_f32_16x16x16_f16GenericAdaptorBase::wmma_f32_16x16x16_f16GenericAdaptorBase(wmma_f32_16x16x16_f16 op) : wmma_f32_16x16x16_f16GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> wmma_f32_16x16x16_f16GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr wmma_f32_16x16x16_f16GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
wmma_f32_16x16x16_f16Adaptor::wmma_f32_16x16x16_f16Adaptor(wmma_f32_16x16x16_f16 op) : wmma_f32_16x16x16_f16GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult wmma_f32_16x16x16_f16Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> wmma_f32_16x16x16_f16::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range wmma_f32_16x16x16_f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range wmma_f32_16x16x16_f16::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange wmma_f32_16x16x16_f16::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> wmma_f32_16x16x16_f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range wmma_f32_16x16x16_f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value wmma_f32_16x16x16_f16::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void wmma_f32_16x16x16_f16::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void wmma_f32_16x16x16_f16::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult wmma_f32_16x16x16_f16::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult wmma_f32_16x16x16_f16::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult wmma_f32_16x16x16_f16::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void wmma_f32_16x16x16_f16::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_f32_16x16x16_f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_i32_16x16x16_iu4 definitions
//===----------------------------------------------------------------------===//

namespace detail {
wmma_i32_16x16x16_iu4GenericAdaptorBase::wmma_i32_16x16x16_iu4GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.wmma.i32.16x16x16.iu4", odsAttrs.getContext());
}

wmma_i32_16x16x16_iu4GenericAdaptorBase::wmma_i32_16x16x16_iu4GenericAdaptorBase(wmma_i32_16x16x16_iu4 op) : wmma_i32_16x16x16_iu4GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> wmma_i32_16x16x16_iu4GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr wmma_i32_16x16x16_iu4GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
wmma_i32_16x16x16_iu4Adaptor::wmma_i32_16x16x16_iu4Adaptor(wmma_i32_16x16x16_iu4 op) : wmma_i32_16x16x16_iu4GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult wmma_i32_16x16x16_iu4Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> wmma_i32_16x16x16_iu4::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range wmma_i32_16x16x16_iu4::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range wmma_i32_16x16x16_iu4::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange wmma_i32_16x16x16_iu4::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> wmma_i32_16x16x16_iu4::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range wmma_i32_16x16x16_iu4::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value wmma_i32_16x16x16_iu4::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void wmma_i32_16x16x16_iu4::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void wmma_i32_16x16x16_iu4::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult wmma_i32_16x16x16_iu4::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult wmma_i32_16x16x16_iu4::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult wmma_i32_16x16x16_iu4::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void wmma_i32_16x16x16_iu4::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_i32_16x16x16_iu4)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_i32_16x16x16_iu8 definitions
//===----------------------------------------------------------------------===//

namespace detail {
wmma_i32_16x16x16_iu8GenericAdaptorBase::wmma_i32_16x16x16_iu8GenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("rocdl.wmma.i32.16x16x16.iu8", odsAttrs.getContext());
}

wmma_i32_16x16x16_iu8GenericAdaptorBase::wmma_i32_16x16x16_iu8GenericAdaptorBase(wmma_i32_16x16x16_iu8 op) : wmma_i32_16x16x16_iu8GenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> wmma_i32_16x16x16_iu8GenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr wmma_i32_16x16x16_iu8GenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
wmma_i32_16x16x16_iu8Adaptor::wmma_i32_16x16x16_iu8Adaptor(wmma_i32_16x16x16_iu8 op) : wmma_i32_16x16x16_iu8GenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult wmma_i32_16x16x16_iu8Adaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> wmma_i32_16x16x16_iu8::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range wmma_i32_16x16x16_iu8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range wmma_i32_16x16x16_iu8::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange wmma_i32_16x16x16_iu8::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> wmma_i32_16x16x16_iu8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range wmma_i32_16x16x16_iu8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value wmma_i32_16x16x16_iu8::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void wmma_i32_16x16x16_iu8::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void wmma_i32_16x16x16_iu8::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult wmma_i32_16x16x16_iu8::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_ROCDLOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult wmma_i32_16x16x16_iu8::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult wmma_i32_16x16x16_iu8::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return ::mlir::failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void wmma_i32_16x16x16_iu8::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_i32_16x16x16_iu8)


#endif  // GET_OP_CLASSES

