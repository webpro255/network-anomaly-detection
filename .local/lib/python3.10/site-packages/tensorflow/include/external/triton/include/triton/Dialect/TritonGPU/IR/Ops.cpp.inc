/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonGPUOps.td                                                      *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::triton::gpu::AllocTensorOp,
::mlir::triton::gpu::AsyncBulkCommitGroupOp,
::mlir::triton::gpu::AsyncBulkWaitOp,
::mlir::triton::gpu::AsyncCommitGroupOp,
::mlir::triton::gpu::AsyncWaitOp,
::mlir::triton::gpu::ConvertLayoutOp,
::mlir::triton::gpu::DeallocTensorOp,
::mlir::triton::gpu::ExtractSliceOp,
::mlir::triton::gpu::InsertSliceAsyncOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace triton {
namespace gpu {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(1))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return (true); }(elementType.cast<::mlir::triton::PointerType>().getPointeeType())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of floating-point values or tensor of integer values or tensor of ptr values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be ranked tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return (true); }(type.cast<::mlir::triton::PointerType>().getPointeeType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return (true); }(elementType.cast<::mlir::triton::PointerType>().getPointeeType())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be ptr or tensor of ptr values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be tensor of 1-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TritonGPUOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((type.isFloat8E4M3FNUZ())) || ((type.isFloat8E4M3FN())) || ((type.isFloat8E4M3B11FNUZ())) || ((type.isFloat8E5M2())) || ((type.isF16())) || ((type.isBF16())) || ((type.isF32())) || ((type.isF64()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((((type.isSignlessInteger(1))) || ((type.isSignlessInteger(8))) || ((type.isSignlessInteger(16))) || ((type.isSignlessInteger(32))) || ((type.isSignlessInteger(64)))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(1))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((((type.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return (true); }(type.cast<::mlir::triton::PointerType>().getPointeeType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return (true); }(elementType.cast<::mlir::triton::PointerType>().getPointeeType())); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || (((type.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return ((((::llvm::isa<::mlir::TensorType>(pointeeType))) && ([](::mlir::Type elementType) { return ((elementType.isFloat8E4M3FNUZ())) || ((elementType.isFloat8E4M3FN())) || ((elementType.isFloat8E4M3B11FNUZ())) || ((elementType.isFloat8E5M2())) || ((elementType.isF16())) || ((elementType.isBF16())) || ((elementType.isF32())) || ((elementType.isF64())); }(::llvm::cast<::mlir::ShapedType>(pointeeType).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(pointeeType))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(1))) || ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(16))) || ((elementType.isSignlessInteger(32))) || ((elementType.isSignlessInteger(64))); }(::llvm::cast<::mlir::ShapedType>(pointeeType).getElementType())))) || (((::llvm::isa<::mlir::TensorType>(pointeeType))) && ([](::mlir::Type elementType) { return ((elementType.isa<::mlir::triton::PointerType>())) && ([](::mlir::Type pointeeType) { return (true); }(elementType.cast<::mlir::triton::PointerType>().getPointeeType())); }(::llvm::cast<::mlir::ShapedType>(pointeeType).getElementType()))); }(type.cast<::mlir::triton::PointerType>().getPointeeType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be floating-point or tensor of floating-point values or integer or tensor of integer values or ptr or tensor of ptr values or ptr, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TritonGPUOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TritonGPUOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::triton::CacheModifierAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TritonGPUOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::triton::EvictionPolicyAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: allowed 32-bit signless integer cases: 1, 2, 3";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TritonGPUOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TritonGPUOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TritonGPUOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AllocTensorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllocTensorOpGenericAdaptorBase::AllocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.alloc_tensor", odsAttrs.getContext());
}

AllocTensorOpGenericAdaptorBase::AllocTensorOpGenericAdaptorBase(AllocTensorOp op) : AllocTensorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllocTensorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllocTensorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AllocTensorOpAdaptor::AllocTensorOpAdaptor(AllocTensorOp op) : AllocTensorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllocTensorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllocTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllocTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AllocTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllocTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllocTensorOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void AllocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void AllocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllocTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllocTensorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllocTensorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AllocTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void AllocTensorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void AllocTensorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Allocate::get(), 0, false, ::mlir::triton::gpu::SharedMemory::get());
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AllocTensorOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncBulkCommitGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsyncBulkCommitGroupOpGenericAdaptorBase::AsyncBulkCommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.async_bulk_commit_group", odsAttrs.getContext());
}

AsyncBulkCommitGroupOpGenericAdaptorBase::AsyncBulkCommitGroupOpGenericAdaptorBase(AsyncBulkCommitGroupOp op) : AsyncBulkCommitGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsyncBulkCommitGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsyncBulkCommitGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AsyncBulkCommitGroupOpAdaptor::AsyncBulkCommitGroupOpAdaptor(AsyncBulkCommitGroupOp op) : AsyncBulkCommitGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsyncBulkCommitGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsyncBulkCommitGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsyncBulkCommitGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AsyncBulkCommitGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsyncBulkCommitGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AsyncBulkCommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void AsyncBulkCommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsyncBulkCommitGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AsyncBulkCommitGroupOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult AsyncBulkCommitGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsyncBulkCommitGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void AsyncBulkCommitGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncBulkCommitGroupOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncBulkWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsyncBulkWaitOpGenericAdaptorBase::AsyncBulkWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.async_bulk_wait", odsAttrs.getContext());
}

AsyncBulkWaitOpGenericAdaptorBase::AsyncBulkWaitOpGenericAdaptorBase(AsyncBulkWaitOp op) : AsyncBulkWaitOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsyncBulkWaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsyncBulkWaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AsyncBulkWaitOpGenericAdaptorBase::getNumAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num);
  return attr;
}

uint32_t AsyncBulkWaitOpGenericAdaptorBase::getNum() {
  auto attr = getNumAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
AsyncBulkWaitOpAdaptor::AsyncBulkWaitOpAdaptor(AsyncBulkWaitOp op) : AsyncBulkWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsyncBulkWaitOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num = getProperties().num; (void)tblgen_num;
  if (!tblgen_num) return emitError(loc, "'triton_gpu.async_bulk_wait' op ""requires attribute 'num'");

  if (tblgen_num && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num).getType().isSignlessInteger(32)))))
    return emitError(loc, "'triton_gpu.async_bulk_wait' op ""attribute 'num' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsyncBulkWaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsyncBulkWaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AsyncBulkWaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsyncBulkWaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult AsyncBulkWaitOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.num;
       auto attr = dict.get("num");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for num in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `num` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AsyncBulkWaitOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.num;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AsyncBulkWaitOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AsyncBulkWaitOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num")
      return prop.num;
  return std::nullopt;
}

void AsyncBulkWaitOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num") {
       prop.num = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num)>>(value);
       return;
    }
}

void AsyncBulkWaitOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num) attrs.append("num", prop.num);
}

::mlir::LogicalResult AsyncBulkWaitOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps0(attr, "num", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AsyncBulkWaitOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsyncBulkWaitOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num);
}

::mlir::IntegerAttr AsyncBulkWaitOp::getNumAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num);
}

uint32_t AsyncBulkWaitOp::getNum() {
  auto attr = getNumAttr();
  return attr.getValue().getZExtValue();
}

void AsyncBulkWaitOp::setNumAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumAttrName(), attr);
}

void AsyncBulkWaitOp::setNum(uint32_t attrValue) {
  (*this)->setAttr(getNumAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void AsyncBulkWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr num) {
  odsState.getOrAddProperties<Properties>().num = num;
}

void AsyncBulkWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr num) {
  odsState.getOrAddProperties<Properties>().num = num;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsyncBulkWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t num) {
  odsState.getOrAddProperties<Properties>().num = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), num);
}

void AsyncBulkWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t num) {
  odsState.getOrAddProperties<Properties>().num = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), num);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsyncBulkWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AsyncBulkWaitOp::verifyInvariantsImpl() {
  auto tblgen_num = getProperties().num; (void)tblgen_num;
  if (!tblgen_num) return emitOpError("requires attribute 'num'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps0(*this, tblgen_num, "num")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult AsyncBulkWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsyncBulkWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void AsyncBulkWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncBulkWaitOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncCommitGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsyncCommitGroupOpGenericAdaptorBase::AsyncCommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.async_commit_group", odsAttrs.getContext());
}

AsyncCommitGroupOpGenericAdaptorBase::AsyncCommitGroupOpGenericAdaptorBase(AsyncCommitGroupOp op) : AsyncCommitGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsyncCommitGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsyncCommitGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AsyncCommitGroupOpAdaptor::AsyncCommitGroupOpAdaptor(AsyncCommitGroupOp op) : AsyncCommitGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsyncCommitGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsyncCommitGroupOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsyncCommitGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AsyncCommitGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsyncCommitGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AsyncCommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void AsyncCommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsyncCommitGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AsyncCommitGroupOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult AsyncCommitGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsyncCommitGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void AsyncCommitGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncCommitGroupOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsyncWaitOpGenericAdaptorBase::AsyncWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.async_wait", odsAttrs.getContext());
}

AsyncWaitOpGenericAdaptorBase::AsyncWaitOpGenericAdaptorBase(AsyncWaitOp op) : AsyncWaitOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AsyncWaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AsyncWaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AsyncWaitOpGenericAdaptorBase::getNumAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num);
  return attr;
}

uint32_t AsyncWaitOpGenericAdaptorBase::getNum() {
  auto attr = getNumAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
AsyncWaitOpAdaptor::AsyncWaitOpAdaptor(AsyncWaitOp op) : AsyncWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AsyncWaitOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num = getProperties().num; (void)tblgen_num;
  if (!tblgen_num) return emitError(loc, "'triton_gpu.async_wait' op ""requires attribute 'num'");

  if (tblgen_num && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num).getType().isSignlessInteger(32)))))
    return emitError(loc, "'triton_gpu.async_wait' op ""attribute 'num' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsyncWaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsyncWaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AsyncWaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsyncWaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult AsyncWaitOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.num;
       auto attr = dict.get("num");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for num in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `num` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AsyncWaitOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.num;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AsyncWaitOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AsyncWaitOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num")
      return prop.num;
  return std::nullopt;
}

void AsyncWaitOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num") {
       prop.num = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num)>>(value);
       return;
    }
}

void AsyncWaitOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num) attrs.append("num", prop.num);
}

::mlir::LogicalResult AsyncWaitOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps0(attr, "num", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AsyncWaitOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsyncWaitOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num);
}

::mlir::IntegerAttr AsyncWaitOp::getNumAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num);
}

uint32_t AsyncWaitOp::getNum() {
  auto attr = getNumAttr();
  return attr.getValue().getZExtValue();
}

void AsyncWaitOp::setNumAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumAttrName(), attr);
}

void AsyncWaitOp::setNum(uint32_t attrValue) {
  (*this)->setAttr(getNumAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void AsyncWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr num) {
  odsState.getOrAddProperties<Properties>().num = num;
}

void AsyncWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr num) {
  odsState.getOrAddProperties<Properties>().num = num;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsyncWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t num) {
  odsState.getOrAddProperties<Properties>().num = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), num);
}

void AsyncWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t num) {
  odsState.getOrAddProperties<Properties>().num = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), num);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsyncWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AsyncWaitOp::verifyInvariantsImpl() {
  auto tblgen_num = getProperties().num; (void)tblgen_num;
  if (!tblgen_num) return emitOpError("requires attribute 'num'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps0(*this, tblgen_num, "num")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult AsyncWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsyncWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void AsyncWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncWaitOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::ConvertLayoutOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertLayoutOpGenericAdaptorBase::ConvertLayoutOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.convert_layout", odsAttrs.getContext());
}

ConvertLayoutOpGenericAdaptorBase::ConvertLayoutOpGenericAdaptorBase(ConvertLayoutOp op) : ConvertLayoutOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ConvertLayoutOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertLayoutOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertLayoutOpAdaptor::ConvertLayoutOpAdaptor(ConvertLayoutOp op) : ConvertLayoutOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ConvertLayoutOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConvertLayoutOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertLayoutOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertLayoutOp::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ConvertLayoutOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ConvertLayoutOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertLayoutOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertLayoutOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ConvertLayoutOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src) {
  odsState.addOperands(src);
  odsState.addTypes(result);
}

void ConvertLayoutOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src) {
  odsState.addOperands(src);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertLayoutOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertLayoutOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConvertLayoutOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConvertLayoutOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

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

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(srcOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConvertLayoutOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ConvertLayoutOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::ConvertLayoutOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::DeallocTensorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DeallocTensorOpGenericAdaptorBase::DeallocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.dealloc_tensor", odsAttrs.getContext());
}

DeallocTensorOpGenericAdaptorBase::DeallocTensorOpGenericAdaptorBase(DeallocTensorOp op) : DeallocTensorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DeallocTensorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DeallocTensorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DeallocTensorOpAdaptor::DeallocTensorOpAdaptor(DeallocTensorOp op) : DeallocTensorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DeallocTensorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DeallocTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DeallocTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DeallocTensorOp::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &DeallocTensorOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DeallocTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DeallocTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DeallocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src) {
  odsState.addOperands(src);
}

void DeallocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src) {
  odsState.addOperands(src);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DeallocTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DeallocTensorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DeallocTensorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DeallocTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);

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

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcRawTypes[0] = type;
  }
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeallocTensorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void DeallocTensorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Free::get(), 0, false, ::mlir::triton::gpu::SharedMemory::get());
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::DeallocTensorOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::ExtractSliceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExtractSliceOpGenericAdaptorBase::ExtractSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.extract_slice", odsAttrs.getContext());
}

ExtractSliceOpGenericAdaptorBase::ExtractSliceOpGenericAdaptorBase(ExtractSliceOp op) : ExtractSliceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExtractSliceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ExtractSliceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr ExtractSliceOpGenericAdaptorBase::getStaticOffsetsAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_offsets);
  return attr;
}

::llvm::ArrayRef<int64_t> ExtractSliceOpGenericAdaptorBase::getStaticOffsets() {
  auto attr = getStaticOffsetsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ExtractSliceOpGenericAdaptorBase::getStaticSizesAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> ExtractSliceOpGenericAdaptorBase::getStaticSizes() {
  auto attr = getStaticSizesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ExtractSliceOpGenericAdaptorBase::getStaticStridesAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_strides);
  return attr;
}

::llvm::ArrayRef<int64_t> ExtractSliceOpGenericAdaptorBase::getStaticStrides() {
  auto attr = getStaticStridesAttr();
  return attr;
}

} // namespace detail
ExtractSliceOpAdaptor::ExtractSliceOpAdaptor(ExtractSliceOp op) : ExtractSliceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExtractSliceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_static_offsets = getProperties().static_offsets; (void)tblgen_static_offsets;
  if (!tblgen_static_offsets) return emitError(loc, "'triton_gpu.extract_slice' op ""requires attribute 'static_offsets'");
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;
  if (!tblgen_static_sizes) return emitError(loc, "'triton_gpu.extract_slice' op ""requires attribute 'static_sizes'");
  auto tblgen_static_strides = getProperties().static_strides; (void)tblgen_static_strides;
  if (!tblgen_static_strides) return emitError(loc, "'triton_gpu.extract_slice' op ""requires attribute 'static_strides'");

  if (tblgen_static_offsets && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_offsets))))
    return emitError(loc, "'triton_gpu.extract_slice' op ""attribute 'static_offsets' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_static_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_sizes))))
    return emitError(loc, "'triton_gpu.extract_slice' op ""attribute 'static_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_static_strides && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_strides))))
    return emitError(loc, "'triton_gpu.extract_slice' op ""attribute 'static_strides' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExtractSliceOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ExtractSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ExtractSliceOp::getSource() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ExtractSliceOp::getOffsets() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range ExtractSliceOp::getSizes() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range ExtractSliceOp::getStrides() {
  return getODSOperands(3);
}

::mlir::OpOperand &ExtractSliceOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ExtractSliceOp::getOffsetsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ExtractSliceOp::getSizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ExtractSliceOp::getStridesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> ExtractSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ExtractSliceOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ExtractSliceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.static_offsets;
       auto attr = dict.get("static_offsets");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for static_offsets in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_offsets` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_sizes;
       auto attr = dict.get("static_sizes");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for static_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_strides;
       auto attr = dict.get("static_strides");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for static_strides in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_strides` in property conversion: " << attr;
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

::mlir::Attribute ExtractSliceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.static_offsets;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_offsets",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_strides;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_strides",
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

llvm::hash_code ExtractSliceOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.static_offsets.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_strides.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> ExtractSliceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "static_offsets")
      return prop.static_offsets;

    if (name == "static_sizes")
      return prop.static_sizes;

    if (name == "static_strides")
      return prop.static_strides;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void ExtractSliceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "static_offsets") {
       prop.static_offsets = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_offsets)>>(value);
       return;
    }

    if (name == "static_sizes") {
       prop.static_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_sizes)>>(value);
       return;
    }

    if (name == "static_strides") {
       prop.static_strides = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_strides)>>(value);
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

void ExtractSliceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.static_offsets) attrs.append("static_offsets", prop.static_offsets);

    if (prop.static_sizes) attrs.append("static_sizes", prop.static_sizes);

    if (prop.static_strides) attrs.append("static_strides", prop.static_strides);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult ExtractSliceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getStaticOffsetsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps1(attr, "static_offsets", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps1(attr, "static_sizes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticStridesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps1(attr, "static_strides", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExtractSliceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

  if (::mlir::failed(reader.readAttribute(prop.static_offsets)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.static_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.static_strides)))
    return ::mlir::failure();

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

void ExtractSliceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}
  writer.writeAttribute(prop.static_offsets);
  writer.writeAttribute(prop.static_sizes);
  writer.writeAttribute(prop.static_strides);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::DenseI64ArrayAttr ExtractSliceOp::getStaticOffsetsAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_offsets);
}

::llvm::ArrayRef<int64_t> ExtractSliceOp::getStaticOffsets() {
  auto attr = getStaticOffsetsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ExtractSliceOp::getStaticSizesAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
}

::llvm::ArrayRef<int64_t> ExtractSliceOp::getStaticSizes() {
  auto attr = getStaticSizesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr ExtractSliceOp::getStaticStridesAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().static_strides);
}

::llvm::ArrayRef<int64_t> ExtractSliceOp::getStaticStrides() {
  auto attr = getStaticStridesAttr();
  return attr;
}

void ExtractSliceOp::setStaticOffsetsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticOffsetsAttrName(), attr);
}

void ExtractSliceOp::setStaticOffsets(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticOffsetsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ExtractSliceOp::setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticSizesAttrName(), attr);
}

void ExtractSliceOp::setStaticSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ExtractSliceOp::setStaticStridesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticStridesAttrName(), attr);
}

void ExtractSliceOp::setStaticStrides(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticStridesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ExtractSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::mlir::DenseI64ArrayAttr static_offsets, ::mlir::DenseI64ArrayAttr static_sizes, ::mlir::DenseI64ArrayAttr static_strides) {
  odsState.addOperands(source);
  odsState.addOperands(offsets);
  odsState.addOperands(sizes);
  odsState.addOperands(strides);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(offsets.size()), static_cast<int32_t>(sizes.size()), static_cast<int32_t>(strides.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_offsets = static_offsets;
  odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  odsState.getOrAddProperties<Properties>().static_strides = static_strides;
  odsState.addTypes(result);
}

void ExtractSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::mlir::DenseI64ArrayAttr static_offsets, ::mlir::DenseI64ArrayAttr static_sizes, ::mlir::DenseI64ArrayAttr static_strides) {
  odsState.addOperands(source);
  odsState.addOperands(offsets);
  odsState.addOperands(sizes);
  odsState.addOperands(strides);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(offsets.size()), static_cast<int32_t>(sizes.size()), static_cast<int32_t>(strides.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_offsets = static_offsets;
  odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  odsState.getOrAddProperties<Properties>().static_strides = static_strides;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::llvm::ArrayRef<int64_t> static_offsets, ::llvm::ArrayRef<int64_t> static_sizes, ::llvm::ArrayRef<int64_t> static_strides) {
  odsState.addOperands(source);
  odsState.addOperands(offsets);
  odsState.addOperands(sizes);
  odsState.addOperands(strides);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(offsets.size()), static_cast<int32_t>(sizes.size()), static_cast<int32_t>(strides.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_offsets = odsBuilder.getDenseI64ArrayAttr(static_offsets);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().static_strides = odsBuilder.getDenseI64ArrayAttr(static_strides);
  odsState.addTypes(result);
}

void ExtractSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::llvm::ArrayRef<int64_t> static_offsets, ::llvm::ArrayRef<int64_t> static_sizes, ::llvm::ArrayRef<int64_t> static_strides) {
  odsState.addOperands(source);
  odsState.addOperands(offsets);
  odsState.addOperands(sizes);
  odsState.addOperands(strides);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(offsets.size()), static_cast<int32_t>(sizes.size()), static_cast<int32_t>(strides.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_offsets = odsBuilder.getDenseI64ArrayAttr(static_offsets);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().static_strides = odsBuilder.getDenseI64ArrayAttr(static_strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtractSliceOp::verifyInvariantsImpl() {
  auto tblgen_static_offsets = getProperties().static_offsets; (void)tblgen_static_offsets;
  if (!tblgen_static_offsets) return emitOpError("requires attribute 'static_offsets'");
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;
  if (!tblgen_static_sizes) return emitOpError("requires attribute 'static_sizes'");
  auto tblgen_static_strides = getProperties().static_strides; (void)tblgen_static_strides;
  if (!tblgen_static_strides) return emitOpError("requires attribute 'static_strides'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps1(*this, tblgen_static_offsets, "static_offsets")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps1(*this, tblgen_static_sizes, "static_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps1(*this, tblgen_static_strides, "static_strides")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExtractSliceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ExtractSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> offsetsOperands;
  ::llvm::SMLoc offsetsOperandsLoc;
  (void)offsetsOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_offsetsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sizesOperands;
  ::llvm::SMLoc sizesOperandsLoc;
  (void)sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_sizesAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> stridesOperands;
  ::llvm::SMLoc stridesOperandsLoc;
  (void)stridesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_stridesAttr;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  {
    offsetsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, offsetsOperands, static_offsetsAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ExtractSliceOp::Properties>().static_offsets = static_offsetsAttr;
  }
  {
    sizesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, sizesOperands, static_sizesAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ExtractSliceOp::Properties>().static_sizes = static_sizesAttr;
  }
  {
    stridesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, stridesOperands, static_stridesAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ExtractSliceOp::Properties>().static_strides = static_stridesAttr;
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
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sourceRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(offsetsOperands.size()), static_cast<int32_t>(sizesOperands.size()), static_cast<int32_t>(stridesOperands.size())}), result.getOrAddProperties<ExtractSliceOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(offsetsOperands, odsBuildableType0, offsetsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sizesOperands, odsBuildableType0, sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(stridesOperands, odsBuildableType0, stridesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExtractSliceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  printDynamicIndexList(_odsPrinter, *this, getOffsets(), getStaticOffsetsAttr());
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getSizes(), getStaticSizesAttr());
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getStrides(), getStaticStridesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("static_offsets");
  elidedAttrs.push_back("static_sizes");
  elidedAttrs.push_back("static_strides");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSource().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ExtractSliceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::ExtractSliceOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::InsertSliceAsyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InsertSliceAsyncOpGenericAdaptorBase::InsertSliceAsyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("triton_gpu.insert_slice_async", odsAttrs.getContext());
}

InsertSliceAsyncOpGenericAdaptorBase::InsertSliceAsyncOpGenericAdaptorBase(InsertSliceAsyncOp op) : InsertSliceAsyncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> InsertSliceAsyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr InsertSliceAsyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::triton::CacheModifierAttr InsertSliceAsyncOpGenericAdaptorBase::getCacheAttr() {
  auto attr = ::llvm::cast<::mlir::triton::CacheModifierAttr>(getProperties().cache);
  return attr;
}

::mlir::triton::CacheModifier InsertSliceAsyncOpGenericAdaptorBase::getCache() {
  auto attr = getCacheAttr();
  return attr.getValue();
}

::mlir::triton::EvictionPolicyAttr InsertSliceAsyncOpGenericAdaptorBase::getEvictAttr() {
  auto attr = ::llvm::cast<::mlir::triton::EvictionPolicyAttr>(getProperties().evict);
  return attr;
}

::mlir::triton::EvictionPolicy InsertSliceAsyncOpGenericAdaptorBase::getEvict() {
  auto attr = getEvictAttr();
  return attr.getValue();
}

::mlir::BoolAttr InsertSliceAsyncOpGenericAdaptorBase::getIsVolatileAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().isVolatile);
  return attr;
}

bool InsertSliceAsyncOpGenericAdaptorBase::getIsVolatile() {
  auto attr = getIsVolatileAttr();
  return attr.getValue();
}

::mlir::IntegerAttr InsertSliceAsyncOpGenericAdaptorBase::getAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
  return attr;
}

uint32_t InsertSliceAsyncOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
InsertSliceAsyncOpAdaptor::InsertSliceAsyncOpAdaptor(InsertSliceAsyncOp op) : InsertSliceAsyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult InsertSliceAsyncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitError(loc, "'triton_gpu.insert_slice_async' op ""requires attribute 'axis'");
  auto tblgen_cache = getProperties().cache; (void)tblgen_cache;
  if (!tblgen_cache) return emitError(loc, "'triton_gpu.insert_slice_async' op ""requires attribute 'cache'");
  auto tblgen_evict = getProperties().evict; (void)tblgen_evict;
  if (!tblgen_evict) return emitError(loc, "'triton_gpu.insert_slice_async' op ""requires attribute 'evict'");
  auto tblgen_isVolatile = getProperties().isVolatile; (void)tblgen_isVolatile;
  if (!tblgen_isVolatile) return emitError(loc, "'triton_gpu.insert_slice_async' op ""requires attribute 'isVolatile'");

  if (tblgen_cache && !((::llvm::isa<::mlir::triton::CacheModifierAttr>(tblgen_cache))))
    return emitError(loc, "'triton_gpu.insert_slice_async' op ""attribute 'cache' failed to satisfy constraint: allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6");

  if (tblgen_evict && !((::llvm::isa<::mlir::triton::EvictionPolicyAttr>(tblgen_evict))))
    return emitError(loc, "'triton_gpu.insert_slice_async' op ""attribute 'evict' failed to satisfy constraint: allowed 32-bit signless integer cases: 1, 2, 3");

  if (tblgen_isVolatile && !((::llvm::isa<::mlir::BoolAttr>(tblgen_isVolatile))))
    return emitError(loc, "'triton_gpu.insert_slice_async' op ""attribute 'isVolatile' failed to satisfy constraint: bool attribute");

  if (tblgen_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_axis))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_axis).getType().isSignlessInteger(32)))))
    return emitError(loc, "'triton_gpu.insert_slice_async' op ""attribute 'axis' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InsertSliceAsyncOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range InsertSliceAsyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertSliceAsyncOp::getSrc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value InsertSliceAsyncOp::getDst() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> InsertSliceAsyncOp::getIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::TensorType> InsertSliceAsyncOp::getMask() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::TensorType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*operands.begin());
}

::mlir::Value InsertSliceAsyncOp::getOther() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::OpOperand &InsertSliceAsyncOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &InsertSliceAsyncOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &InsertSliceAsyncOp::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange InsertSliceAsyncOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange InsertSliceAsyncOp::getOtherMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> InsertSliceAsyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertSliceAsyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertSliceAsyncOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult InsertSliceAsyncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axis;
       auto attr = dict.get("axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.cache;
       auto attr = dict.get("cache");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for cache in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `cache` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.evict;
       auto attr = dict.get("evict");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for evict in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `evict` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.isVolatile;
       auto attr = dict.get("isVolatile");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for isVolatile in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `isVolatile` in property conversion: " << attr;
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

::mlir::Attribute InsertSliceAsyncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axis",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.cache;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("cache",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.evict;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("evict",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.isVolatile;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("isVolatile",
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

llvm::hash_code InsertSliceAsyncOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.axis.getAsOpaquePointer()), 
    llvm::hash_value(prop.cache.getAsOpaquePointer()), 
    llvm::hash_value(prop.evict.getAsOpaquePointer()), 
    llvm::hash_value(prop.isVolatile.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> InsertSliceAsyncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axis")
      return prop.axis;

    if (name == "cache")
      return prop.cache;

    if (name == "evict")
      return prop.evict;

    if (name == "isVolatile")
      return prop.isVolatile;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void InsertSliceAsyncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axis") {
       prop.axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axis)>>(value);
       return;
    }

    if (name == "cache") {
       prop.cache = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.cache)>>(value);
       return;
    }

    if (name == "evict") {
       prop.evict = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.evict)>>(value);
       return;
    }

    if (name == "isVolatile") {
       prop.isVolatile = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.isVolatile)>>(value);
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

void InsertSliceAsyncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axis) attrs.append("axis", prop.axis);

    if (prop.cache) attrs.append("cache", prop.cache);

    if (prop.evict) attrs.append("evict", prop.evict);

    if (prop.isVolatile) attrs.append("isVolatile", prop.isVolatile);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult InsertSliceAsyncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps0(attr, "axis", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getCacheAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps2(attr, "cache", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEvictAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps3(attr, "evict", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsVolatileAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps4(attr, "isVolatile", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult InsertSliceAsyncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.axis)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.cache)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.evict)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.isVolatile)))
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

void InsertSliceAsyncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.axis);
  writer.writeAttribute(prop.cache);
  writer.writeAttribute(prop.evict);
  writer.writeAttribute(prop.isVolatile);

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

::mlir::triton::CacheModifierAttr InsertSliceAsyncOp::getCacheAttr() {
  return ::llvm::cast<::mlir::triton::CacheModifierAttr>(getProperties().cache);
}

::mlir::triton::CacheModifier InsertSliceAsyncOp::getCache() {
  auto attr = getCacheAttr();
  return attr.getValue();
}

::mlir::triton::EvictionPolicyAttr InsertSliceAsyncOp::getEvictAttr() {
  return ::llvm::cast<::mlir::triton::EvictionPolicyAttr>(getProperties().evict);
}

::mlir::triton::EvictionPolicy InsertSliceAsyncOp::getEvict() {
  auto attr = getEvictAttr();
  return attr.getValue();
}

::mlir::BoolAttr InsertSliceAsyncOp::getIsVolatileAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().isVolatile);
}

bool InsertSliceAsyncOp::getIsVolatile() {
  auto attr = getIsVolatileAttr();
  return attr.getValue();
}

::mlir::IntegerAttr InsertSliceAsyncOp::getAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().axis);
}

uint32_t InsertSliceAsyncOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getZExtValue();
}

void InsertSliceAsyncOp::setCacheAttr(::mlir::triton::CacheModifierAttr attr) {
  (*this)->setAttr(getCacheAttrName(), attr);
}

void InsertSliceAsyncOp::setCache(::mlir::triton::CacheModifier attrValue) {
  (*this)->setAttr(getCacheAttrName(), ::mlir::triton::CacheModifierAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void InsertSliceAsyncOp::setEvictAttr(::mlir::triton::EvictionPolicyAttr attr) {
  (*this)->setAttr(getEvictAttrName(), attr);
}

void InsertSliceAsyncOp::setEvict(::mlir::triton::EvictionPolicy attrValue) {
  (*this)->setAttr(getEvictAttrName(), ::mlir::triton::EvictionPolicyAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void InsertSliceAsyncOp::setIsVolatileAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getIsVolatileAttrName(), attr);
}

void InsertSliceAsyncOp::setIsVolatile(bool attrValue) {
  (*this)->setAttr(getIsVolatileAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void InsertSliceAsyncOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void InsertSliceAsyncOp::setAxis(uint32_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void InsertSliceAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifierAttr cache, ::mlir::triton::EvictionPolicyAttr evict, ::mlir::BoolAttr isVolatile, ::mlir::IntegerAttr axis) {
  odsState.addOperands(src);
  odsState.addOperands(dst);
  odsState.addOperands(index);
  if (mask)
    odsState.addOperands(mask);
  if (other)
    odsState.addOperands(other);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, (mask ? 1 : 0), (other ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().cache = cache;
  odsState.getOrAddProperties<Properties>().evict = evict;
  odsState.getOrAddProperties<Properties>().isVolatile = isVolatile;
  odsState.getOrAddProperties<Properties>().axis = axis;
  odsState.addTypes(result);
}

void InsertSliceAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifierAttr cache, ::mlir::triton::EvictionPolicyAttr evict, ::mlir::BoolAttr isVolatile, ::mlir::IntegerAttr axis) {
  odsState.addOperands(src);
  odsState.addOperands(dst);
  odsState.addOperands(index);
  if (mask)
    odsState.addOperands(mask);
  if (other)
    odsState.addOperands(other);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, (mask ? 1 : 0), (other ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().cache = cache;
  odsState.getOrAddProperties<Properties>().evict = evict;
  odsState.getOrAddProperties<Properties>().isVolatile = isVolatile;
  odsState.getOrAddProperties<Properties>().axis = axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertSliceAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifier cache, ::mlir::triton::EvictionPolicy evict, bool isVolatile, uint32_t axis) {
  odsState.addOperands(src);
  odsState.addOperands(dst);
  odsState.addOperands(index);
  if (mask)
    odsState.addOperands(mask);
  if (other)
    odsState.addOperands(other);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, (mask ? 1 : 0), (other ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().cache = ::mlir::triton::CacheModifierAttr::get(odsBuilder.getContext(), cache);
  odsState.getOrAddProperties<Properties>().evict = ::mlir::triton::EvictionPolicyAttr::get(odsBuilder.getContext(), evict);
  odsState.getOrAddProperties<Properties>().isVolatile = odsBuilder.getBoolAttr(isVolatile);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  odsState.addTypes(result);
}

void InsertSliceAsyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifier cache, ::mlir::triton::EvictionPolicy evict, bool isVolatile, uint32_t axis) {
  odsState.addOperands(src);
  odsState.addOperands(dst);
  odsState.addOperands(index);
  if (mask)
    odsState.addOperands(mask);
  if (other)
    odsState.addOperands(other);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, (mask ? 1 : 0), (other ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().cache = ::mlir::triton::CacheModifierAttr::get(odsBuilder.getContext(), cache);
  odsState.getOrAddProperties<Properties>().evict = ::mlir::triton::EvictionPolicyAttr::get(odsBuilder.getContext(), evict);
  odsState.getOrAddProperties<Properties>().isVolatile = odsBuilder.getBoolAttr(isVolatile);
  odsState.getOrAddProperties<Properties>().axis = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertSliceAsyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InsertSliceAsyncOp::verifyInvariantsImpl() {
  auto tblgen_axis = getProperties().axis; (void)tblgen_axis;
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");
  auto tblgen_cache = getProperties().cache; (void)tblgen_cache;
  if (!tblgen_cache) return emitOpError("requires attribute 'cache'");
  auto tblgen_evict = getProperties().evict; (void)tblgen_evict;
  if (!tblgen_evict) return emitOpError("requires attribute 'evict'");
  auto tblgen_isVolatile = getProperties().isVolatile; (void)tblgen_isVolatile;
  if (!tblgen_isVolatile) return emitOpError("requires attribute 'isVolatile'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps2(*this, tblgen_cache, "cache")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps3(*this, tblgen_evict, "evict")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps4(*this, tblgen_isVolatile, "isVolatile")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TritonGPUOps0(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TritonGPUOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getOperation()).getOperands().size() <= 3) || std::equal_to<>()(getI1SameShape((*this->getODSOperands(0).begin()).getType()), (*this->getODSOperands(3).begin()).getType()))))
    return emitOpError("failed to verify that infer mask type from src type");
  if (!((((*this->getOperation()).getOperands().size() <= 4) || std::equal_to<>()(getPointeeType((*this->getODSOperands(0).begin()).getType()), (*this->getODSOperands(4).begin()).getType()))))
    return emitOpError("failed to verify that infer other type from src type");
  return ::mlir::success();
}

::mlir::LogicalResult InsertSliceAsyncOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void InsertSliceAsyncOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), 0, false, ::mlir::triton::GlobalMemory::get());
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::triton::gpu::SharedMemory::get());
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::InsertSliceAsyncOp)


#endif  // GET_OP_CLASSES

