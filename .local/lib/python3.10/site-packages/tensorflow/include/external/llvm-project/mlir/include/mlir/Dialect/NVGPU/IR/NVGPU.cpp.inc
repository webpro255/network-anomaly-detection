/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPU.td                                                             *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::nvgpu::DeviceAsyncCopyOp,
::mlir::nvgpu::DeviceAsyncCreateGroupOp,
::mlir::nvgpu::DeviceAsyncWaitOp,
::mlir::nvgpu::LdMatrixOp,
::mlir::nvgpu::MBarrierArriveExpectTxOp,
::mlir::nvgpu::MBarrierArriveNoCompleteOp,
::mlir::nvgpu::MBarrierArriveOp,
::mlir::nvgpu::MBarrierCreateOp,
::mlir::nvgpu::MBarrierInitOp,
::mlir::nvgpu::MBarrierTestWaitOp,
::mlir::nvgpu::MBarrierTryWaitParityOp,
::mlir::nvgpu::MmaSparseSyncOp,
::mlir::nvgpu::MmaSyncOp,
::mlir::nvgpu::TmaAsyncLoadOp,
::mlir::nvgpu::TmaAsyncStoreOp,
::mlir::nvgpu::TmaCreateDescriptorOp,
::mlir::nvgpu::TmaPrefetchOp,
::mlir::nvgpu::WarpgroupGenerateDescriptorOp,
::mlir::nvgpu::WarpgroupMmaInitAccumulatorOp,
::mlir::nvgpu::WarpgroupMmaOp,
::mlir::nvgpu::WarpgroupMmaStoreOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace nvgpu {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::DeviceAsyncTokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be device async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::DeviceAsyncTokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of device async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be vector of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::MBarrierGroupType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be mbarrier barrier type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::MBarrierTokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::VectorType>(type) &&
                                  !::llvm::cast<VectorType>(type).isScalable())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::isa<::mlir::VectorType>(type) &&
                                  !::llvm::cast<VectorType>(type).isScalable())) && ((::llvm::cast<::mlir::VectorType>(type).getNumElements()
                           == 2))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be fixed-length vector of 16-bit signless integer values of length 2, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::TensorMapDescriptorType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TensorMap descriptor, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(16)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 16-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::UnrankedMemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked.memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::WarpgroupMatrixDescriptorType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Warpgroup matrix descriptor type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPU14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::nvgpu::WarpgroupAccumulatorType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: index attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPU0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPU1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPU2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPU3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit integer array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPU4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPU4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace nvgpu
} // namespace mlir
namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::DeviceAsyncCopyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DeviceAsyncCopyOpGenericAdaptorBase::DeviceAsyncCopyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.device_async_copy", odsAttrs.getContext());
}

DeviceAsyncCopyOpGenericAdaptorBase::DeviceAsyncCopyOpGenericAdaptorBase(DeviceAsyncCopyOp op) : DeviceAsyncCopyOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DeviceAsyncCopyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr DeviceAsyncCopyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr DeviceAsyncCopyOpGenericAdaptorBase::getDstElementsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dstElements);
  return attr;
}

::llvm::APInt DeviceAsyncCopyOpGenericAdaptorBase::getDstElements() {
  auto attr = getDstElementsAttr();
  return attr.getValue();
}

::mlir::UnitAttr DeviceAsyncCopyOpGenericAdaptorBase::getBypassL1Attr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bypassL1);
  return attr;
}

::std::optional<bool> DeviceAsyncCopyOpGenericAdaptorBase::getBypassL1() {
  auto attr = getBypassL1Attr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
DeviceAsyncCopyOpAdaptor::DeviceAsyncCopyOpAdaptor(DeviceAsyncCopyOp op) : DeviceAsyncCopyOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DeviceAsyncCopyOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_bypassL1 = getProperties().bypassL1; (void)tblgen_bypassL1;
  auto tblgen_dstElements = getProperties().dstElements; (void)tblgen_dstElements;
  if (!tblgen_dstElements) return emitError(loc, "'nvgpu.device_async_copy' op ""requires attribute 'dstElements'");

  if (tblgen_dstElements && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dstElements))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_dstElements).getType())))))
    return emitError(loc, "'nvgpu.device_async_copy' op ""attribute 'dstElements' failed to satisfy constraint: index attribute");

  if (tblgen_bypassL1 && !((::llvm::isa<::mlir::UnitAttr>(tblgen_bypassL1))))
    return emitError(loc, "'nvgpu.device_async_copy' op ""attribute 'bypassL1' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DeviceAsyncCopyOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range DeviceAsyncCopyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> DeviceAsyncCopyOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range DeviceAsyncCopyOp::getDstIndices() {
  return getODSOperands(1);
}

::mlir::TypedValue<::mlir::MemRefType> DeviceAsyncCopyOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(2).begin());
}

::mlir::Operation::operand_range DeviceAsyncCopyOp::getSrcIndices() {
  return getODSOperands(3);
}

::mlir::TypedValue<::mlir::IndexType> DeviceAsyncCopyOp::getSrcElements() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IndexType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*operands.begin());
}

::mlir::OpOperand &DeviceAsyncCopyOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange DeviceAsyncCopyOp::getDstIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &DeviceAsyncCopyOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange DeviceAsyncCopyOp::getSrcIndicesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DeviceAsyncCopyOp::getSrcElementsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> DeviceAsyncCopyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DeviceAsyncCopyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::DeviceAsyncTokenType> DeviceAsyncCopyOp::getAsyncToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::DeviceAsyncTokenType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult DeviceAsyncCopyOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.bypassL1;
       auto attr = dict.get("bypassL1");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for bypassL1 in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `bypassL1` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.dstElements;
       auto attr = dict.get("dstElements");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for dstElements in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dstElements` in property conversion: " << attr;
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

::mlir::Attribute DeviceAsyncCopyOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.bypassL1;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bypassL1",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.dstElements;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dstElements",
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

llvm::hash_code DeviceAsyncCopyOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.bypassL1.getAsOpaquePointer()), 
    llvm::hash_value(prop.dstElements.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> DeviceAsyncCopyOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "bypassL1")
      return prop.bypassL1;

    if (name == "dstElements")
      return prop.dstElements;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void DeviceAsyncCopyOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "bypassL1") {
       prop.bypassL1 = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bypassL1)>>(value);
       return;
    }

    if (name == "dstElements") {
       prop.dstElements = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dstElements)>>(value);
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

void DeviceAsyncCopyOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.bypassL1) attrs.append("bypassL1", prop.bypassL1);

    if (prop.dstElements) attrs.append("dstElements", prop.dstElements);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult DeviceAsyncCopyOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBypassL1AttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(attr, "bypassL1", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDstElementsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU0(attr, "dstElements", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DeviceAsyncCopyOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.bypassL1)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.dstElements)))
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

void DeviceAsyncCopyOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.bypassL1);
  writer.writeAttribute(prop.dstElements);

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

::mlir::IntegerAttr DeviceAsyncCopyOp::getDstElementsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dstElements);
}

::llvm::APInt DeviceAsyncCopyOp::getDstElements() {
  auto attr = getDstElementsAttr();
  return attr.getValue();
}

::mlir::UnitAttr DeviceAsyncCopyOp::getBypassL1Attr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bypassL1);
}

::std::optional<bool> DeviceAsyncCopyOp::getBypassL1() {
  auto attr = getBypassL1Attr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void DeviceAsyncCopyOp::setDstElementsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDstElementsAttrName(), attr);
}

void DeviceAsyncCopyOp::setDstElements(::llvm::APInt attrValue) {
  (*this)->setAttr(getDstElementsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void DeviceAsyncCopyOp::setBypassL1Attr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getBypassL1AttrName(), attr);
}

void DeviceAsyncCopyOp::setBypassL1(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBypassL1AttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getBypassL1AttrName());
}

::mlir::Attribute DeviceAsyncCopyOp::removeBypassL1Attr() {
    auto &attr = getProperties().bypassL1;
    attr = {};
    return attr;
}

void DeviceAsyncCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type asyncToken, ::mlir::Value dst, ::mlir::ValueRange dstIndices, ::mlir::Value src, ::mlir::ValueRange srcIndices, ::mlir::IntegerAttr dstElements, /*optional*/::mlir::Value srcElements, /*optional*/::mlir::UnitAttr bypassL1) {
  odsState.addOperands(dst);
  odsState.addOperands(dstIndices);
  odsState.addOperands(src);
  odsState.addOperands(srcIndices);
  if (srcElements)
    odsState.addOperands(srcElements);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(dstIndices.size()), 1, static_cast<int32_t>(srcIndices.size()), (srcElements ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().dstElements = dstElements;
  if (bypassL1) {
    odsState.getOrAddProperties<Properties>().bypassL1 = bypassL1;
  }
  odsState.addTypes(asyncToken);
}

void DeviceAsyncCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::ValueRange dstIndices, ::mlir::Value src, ::mlir::ValueRange srcIndices, ::mlir::IntegerAttr dstElements, /*optional*/::mlir::Value srcElements, /*optional*/::mlir::UnitAttr bypassL1) {
  odsState.addOperands(dst);
  odsState.addOperands(dstIndices);
  odsState.addOperands(src);
  odsState.addOperands(srcIndices);
  if (srcElements)
    odsState.addOperands(srcElements);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(dstIndices.size()), 1, static_cast<int32_t>(srcIndices.size()), (srcElements ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().dstElements = dstElements;
  if (bypassL1) {
    odsState.getOrAddProperties<Properties>().bypassL1 = bypassL1;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DeviceAsyncCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type asyncToken, ::mlir::Value dst, ::mlir::ValueRange dstIndices, ::mlir::Value src, ::mlir::ValueRange srcIndices, ::llvm::APInt dstElements, /*optional*/::mlir::Value srcElements, /*optional*/::mlir::UnitAttr bypassL1) {
  odsState.addOperands(dst);
  odsState.addOperands(dstIndices);
  odsState.addOperands(src);
  odsState.addOperands(srcIndices);
  if (srcElements)
    odsState.addOperands(srcElements);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(dstIndices.size()), 1, static_cast<int32_t>(srcIndices.size()), (srcElements ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().dstElements = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dstElements);
  if (bypassL1) {
    odsState.getOrAddProperties<Properties>().bypassL1 = bypassL1;
  }
  odsState.addTypes(asyncToken);
}

void DeviceAsyncCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::ValueRange dstIndices, ::mlir::Value src, ::mlir::ValueRange srcIndices, ::llvm::APInt dstElements, /*optional*/::mlir::Value srcElements, /*optional*/::mlir::UnitAttr bypassL1) {
  odsState.addOperands(dst);
  odsState.addOperands(dstIndices);
  odsState.addOperands(src);
  odsState.addOperands(srcIndices);
  if (srcElements)
    odsState.addOperands(srcElements);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(dstIndices.size()), 1, static_cast<int32_t>(srcIndices.size()), (srcElements ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().dstElements = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dstElements);
  if (bypassL1) {
    odsState.getOrAddProperties<Properties>().bypassL1 = bypassL1;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DeviceAsyncCopyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DeviceAsyncCopyOp::verifyInvariantsImpl() {
  auto tblgen_bypassL1 = getProperties().bypassL1; (void)tblgen_bypassL1;
  auto tblgen_dstElements = getProperties().dstElements; (void)tblgen_dstElements;
  if (!tblgen_dstElements) return emitOpError("requires attribute 'dstElements'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU0(*this, tblgen_dstElements, "dstElements")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(*this, tblgen_bypassL1, "bypassL1")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DeviceAsyncCopyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DeviceAsyncCopyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> srcIndicesOperands;
  ::llvm::SMLoc srcIndicesOperandsLoc;
  (void)srcIndicesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dstRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstOperands(dstRawOperands);  ::llvm::SMLoc dstOperandsLoc;
  (void)dstOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dstIndicesOperands;
  ::llvm::SMLoc dstIndicesOperandsLoc;
  (void)dstIndicesOperandsLoc;
  ::mlir::IntegerAttr dstElementsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> srcElementsOperands;
  ::llvm::SMLoc srcElementsOperandsLoc;
  (void)srcElementsOperandsLoc;
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  srcIndicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(srcIndicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  dstOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  dstIndicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(dstIndicesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(dstElementsAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (dstElementsAttr) result.getOrAddProperties<DeviceAsyncCopyOp::Properties>().dstElements = dstElementsAttr;
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    srcElementsOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      srcElementsOperands.push_back(operand);
    }
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
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(dstIndicesOperands.size()), 1, static_cast<int32_t>(srcIndicesOperands.size()), static_cast<int32_t>(srcElementsOperands.size())}), result.getOrAddProperties<DeviceAsyncCopyOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::nvgpu::DeviceAsyncTokenType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(dstOperands, dstTypes, dstOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dstIndicesOperands, odsBuildableType1, dstIndicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcIndicesOperands, odsBuildableType1, srcIndicesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcElementsOperands, odsBuildableType1, srcElementsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeviceAsyncCopyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << "[";
  _odsPrinter << getSrcIndices();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDst();
  _odsPrinter << "[";
  _odsPrinter << getDstIndices();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDstElementsAttr());
  if (getSrcElements()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSrcElements())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("dstElements");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void DeviceAsyncCopyOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::DeviceAsyncCopyOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::DeviceAsyncCreateGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DeviceAsyncCreateGroupOpGenericAdaptorBase::DeviceAsyncCreateGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.device_async_create_group", odsAttrs.getContext());
}

DeviceAsyncCreateGroupOpGenericAdaptorBase::DeviceAsyncCreateGroupOpGenericAdaptorBase(DeviceAsyncCreateGroupOp op) : DeviceAsyncCreateGroupOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DeviceAsyncCreateGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr DeviceAsyncCreateGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DeviceAsyncCreateGroupOpAdaptor::DeviceAsyncCreateGroupOpAdaptor(DeviceAsyncCreateGroupOp op) : DeviceAsyncCreateGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DeviceAsyncCreateGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DeviceAsyncCreateGroupOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range DeviceAsyncCreateGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range DeviceAsyncCreateGroupOp::getInputTokens() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange DeviceAsyncCreateGroupOp::getInputTokensMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DeviceAsyncCreateGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DeviceAsyncCreateGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::DeviceAsyncTokenType> DeviceAsyncCreateGroupOp::getAsyncToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::DeviceAsyncTokenType>>(*getODSResults(0).begin());
}

void DeviceAsyncCreateGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type asyncToken, ::mlir::ValueRange inputTokens) {
  odsState.addOperands(inputTokens);
  odsState.addTypes(asyncToken);
}

void DeviceAsyncCreateGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DeviceAsyncCreateGroupOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DeviceAsyncCreateGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DeviceAsyncCreateGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> inputTokensOperands;
  ::llvm::SMLoc inputTokensOperandsLoc;
  (void)inputTokensOperandsLoc;

  inputTokensOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(inputTokensOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::nvgpu::DeviceAsyncTokenType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputTokensOperands, odsBuildableType0, inputTokensOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeviceAsyncCreateGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInputTokens();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::DeviceAsyncCreateGroupOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::DeviceAsyncWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DeviceAsyncWaitOpGenericAdaptorBase::DeviceAsyncWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.device_async_wait", odsAttrs.getContext());
}

DeviceAsyncWaitOpGenericAdaptorBase::DeviceAsyncWaitOpGenericAdaptorBase(DeviceAsyncWaitOp op) : DeviceAsyncWaitOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DeviceAsyncWaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DeviceAsyncWaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr DeviceAsyncWaitOpGenericAdaptorBase::getNumGroupsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().numGroups);
  return attr;
}

::std::optional<uint32_t> DeviceAsyncWaitOpGenericAdaptorBase::getNumGroups() {
  auto attr = getNumGroupsAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
DeviceAsyncWaitOpAdaptor::DeviceAsyncWaitOpAdaptor(DeviceAsyncWaitOp op) : DeviceAsyncWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DeviceAsyncWaitOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_numGroups = getProperties().numGroups; (void)tblgen_numGroups;

  if (tblgen_numGroups && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_numGroups))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_numGroups).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.device_async_wait' op ""attribute 'numGroups' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DeviceAsyncWaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DeviceAsyncWaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::DeviceAsyncTokenType> DeviceAsyncWaitOp::getAsyncDependencies() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::DeviceAsyncTokenType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &DeviceAsyncWaitOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DeviceAsyncWaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DeviceAsyncWaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult DeviceAsyncWaitOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.numGroups;
       auto attr = dict.get("numGroups");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for numGroups in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `numGroups` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute DeviceAsyncWaitOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.numGroups;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("numGroups",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DeviceAsyncWaitOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.numGroups.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> DeviceAsyncWaitOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "numGroups")
      return prop.numGroups;
  return std::nullopt;
}

void DeviceAsyncWaitOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "numGroups") {
       prop.numGroups = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.numGroups)>>(value);
       return;
    }
}

void DeviceAsyncWaitOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.numGroups) attrs.append("numGroups", prop.numGroups);
}

::mlir::LogicalResult DeviceAsyncWaitOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumGroupsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(attr, "numGroups", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DeviceAsyncWaitOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.numGroups)))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeviceAsyncWaitOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.numGroups);
}

::mlir::IntegerAttr DeviceAsyncWaitOp::getNumGroupsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().numGroups);
}

::std::optional<uint32_t> DeviceAsyncWaitOp::getNumGroups() {
  auto attr = getNumGroupsAttr();
  return attr ? ::std::optional<uint32_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void DeviceAsyncWaitOp::setNumGroupsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumGroupsAttrName(), attr);
}

void DeviceAsyncWaitOp::setNumGroups(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNumGroupsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getNumGroupsAttrName());
}

::mlir::Attribute DeviceAsyncWaitOp::removeNumGroupsAttr() {
    auto &attr = getProperties().numGroups;
    attr = {};
    return attr;
}

void DeviceAsyncWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value asyncDependencies, /*optional*/::mlir::IntegerAttr numGroups) {
  odsState.addOperands(asyncDependencies);
  if (numGroups) {
    odsState.getOrAddProperties<Properties>().numGroups = numGroups;
  }
}

void DeviceAsyncWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value asyncDependencies, /*optional*/::mlir::IntegerAttr numGroups) {
  odsState.addOperands(asyncDependencies);
  if (numGroups) {
    odsState.getOrAddProperties<Properties>().numGroups = numGroups;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DeviceAsyncWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DeviceAsyncWaitOp::verifyInvariantsImpl() {
  auto tblgen_numGroups = getProperties().numGroups; (void)tblgen_numGroups;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(*this, tblgen_numGroups, "numGroups")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DeviceAsyncWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DeviceAsyncWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand asyncDependenciesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> asyncDependenciesOperands(asyncDependenciesRawOperands);  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;

  asyncDependenciesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(asyncDependenciesRawOperands[0]))
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::nvgpu::DeviceAsyncTokenType>();
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeviceAsyncWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAsyncDependencies();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::DeviceAsyncWaitOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::LdMatrixOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LdMatrixOpGenericAdaptorBase::LdMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.ldmatrix", odsAttrs.getContext());
}

LdMatrixOpGenericAdaptorBase::LdMatrixOpGenericAdaptorBase(LdMatrixOp op) : LdMatrixOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LdMatrixOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr LdMatrixOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr LdMatrixOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().transpose);
  return attr;
}

bool LdMatrixOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr.getValue();
}

::mlir::IntegerAttr LdMatrixOpGenericAdaptorBase::getNumTilesAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().numTiles);
  return attr;
}

uint32_t LdMatrixOpGenericAdaptorBase::getNumTiles() {
  auto attr = getNumTilesAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LdMatrixOpAdaptor::LdMatrixOpAdaptor(LdMatrixOp op) : LdMatrixOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LdMatrixOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_numTiles = getProperties().numTiles; (void)tblgen_numTiles;
  if (!tblgen_numTiles) return emitError(loc, "'nvgpu.ldmatrix' op ""requires attribute 'numTiles'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;
  if (!tblgen_transpose) return emitError(loc, "'nvgpu.ldmatrix' op ""requires attribute 'transpose'");

  if (tblgen_transpose && !((::llvm::isa<::mlir::BoolAttr>(tblgen_transpose))))
    return emitError(loc, "'nvgpu.ldmatrix' op ""attribute 'transpose' failed to satisfy constraint: bool attribute");

  if (tblgen_numTiles && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_numTiles))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_numTiles).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.ldmatrix' op ""attribute 'numTiles' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LdMatrixOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range LdMatrixOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> LdMatrixOp::getSrcMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range LdMatrixOp::getIndices() {
  return getODSOperands(1);
}

::mlir::OpOperand &LdMatrixOp::getSrcMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange LdMatrixOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LdMatrixOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LdMatrixOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> LdMatrixOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult LdMatrixOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.numTiles;
       auto attr = dict.get("numTiles");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for numTiles in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `numTiles` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for transpose in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LdMatrixOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.numTiles;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("numTiles",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LdMatrixOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.numTiles.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LdMatrixOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "numTiles")
      return prop.numTiles;

    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void LdMatrixOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "numTiles") {
       prop.numTiles = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.numTiles)>>(value);
       return;
    }

    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void LdMatrixOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.numTiles) attrs.append("numTiles", prop.numTiles);

    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::mlir::LogicalResult LdMatrixOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumTilesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(attr, "numTiles", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU3(attr, "transpose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LdMatrixOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.numTiles)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LdMatrixOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.numTiles);
  writer.writeAttribute(prop.transpose);
}

::mlir::BoolAttr LdMatrixOp::getTransposeAttr() {
  return ::llvm::cast<::mlir::BoolAttr>(getProperties().transpose);
}

bool LdMatrixOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr.getValue();
}

::mlir::IntegerAttr LdMatrixOp::getNumTilesAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().numTiles);
}

uint32_t LdMatrixOp::getNumTiles() {
  auto attr = getNumTilesAttr();
  return attr.getValue().getZExtValue();
}

void LdMatrixOp::setTransposeAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getTransposeAttrName(), attr);
}

void LdMatrixOp::setTranspose(bool attrValue) {
  (*this)->setAttr(getTransposeAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void LdMatrixOp::setNumTilesAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumTilesAttrName(), attr);
}

void LdMatrixOp::setNumTiles(uint32_t attrValue) {
  (*this)->setAttr(getNumTilesAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcMemref, ::mlir::ValueRange indices, ::mlir::BoolAttr transpose, ::mlir::IntegerAttr numTiles) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().transpose = transpose;
  odsState.getOrAddProperties<Properties>().numTiles = numTiles;
  odsState.addTypes(res);
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcMemref, ::mlir::ValueRange indices, ::mlir::BoolAttr transpose, ::mlir::IntegerAttr numTiles) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().transpose = transpose;
  odsState.getOrAddProperties<Properties>().numTiles = numTiles;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcMemref, ::mlir::ValueRange indices, bool transpose, uint32_t numTiles) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getBoolAttr(transpose);
  odsState.getOrAddProperties<Properties>().numTiles = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), numTiles);
  odsState.addTypes(res);
}

void LdMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcMemref, ::mlir::ValueRange indices, bool transpose, uint32_t numTiles) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getBoolAttr(transpose);
  odsState.getOrAddProperties<Properties>().numTiles = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), numTiles);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LdMatrixOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LdMatrixOp::verifyInvariantsImpl() {
  auto tblgen_numTiles = getProperties().numTiles; (void)tblgen_numTiles;
  if (!tblgen_numTiles) return emitOpError("requires attribute 'numTiles'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;
  if (!tblgen_transpose) return emitOpError("requires attribute 'transpose'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU3(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(*this, tblgen_numTiles, "numTiles")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((((*this->getOperation()).getNumResults() > 0)) && (((*this->getOperation()).getNumOperands() > 0)) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getResult(0).getType()))) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(0).getType())))) && ((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))))
    return emitOpError("failed to verify that srcMemref and res have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult LdMatrixOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult LdMatrixOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcMemrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcMemrefOperands(srcMemrefRawOperands);  ::llvm::SMLoc srcMemrefOperandsLoc;
  (void)srcMemrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::Type srcMemrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcMemrefTypes(srcMemrefRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  srcMemrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcMemrefRawOperands[0]))
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
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcMemrefRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resTypes);
  if (parser.resolveOperands(srcMemrefOperands, srcMemrefTypes, srcMemrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LdMatrixOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrcMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrcMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void LdMatrixOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::LdMatrixOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierArriveExpectTxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveExpectTxOpGenericAdaptorBase::MBarrierArriveExpectTxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.arrive.expect_tx", odsAttrs.getContext());
}

MBarrierArriveExpectTxOpGenericAdaptorBase::MBarrierArriveExpectTxOpGenericAdaptorBase(MBarrierArriveExpectTxOp op) : MBarrierArriveExpectTxOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MBarrierArriveExpectTxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveExpectTxOpAdaptor::MBarrierArriveExpectTxOpAdaptor(MBarrierArriveExpectTxOp op) : MBarrierArriveExpectTxOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveExpectTxOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MBarrierArriveExpectTxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierArriveExpectTxOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierArriveExpectTxOp::getTxcount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierArriveExpectTxOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierArriveExpectTxOp::getPredicate() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &MBarrierArriveExpectTxOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveExpectTxOp::getTxcountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveExpectTxOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MBarrierArriveExpectTxOp::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MBarrierArriveExpectTxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveExpectTxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierArriveExpectTxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value barriers, ::mlir::Value txcount, ::mlir::Value mbarId, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(barriers);
  odsState.addOperands(txcount);
  odsState.addOperands(mbarId);
  if (predicate)
    odsState.addOperands(predicate);
}

void MBarrierArriveExpectTxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value barriers, ::mlir::Value txcount, ::mlir::Value mbarId, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(barriers);
  odsState.addOperands(txcount);
  odsState.addOperands(mbarId);
  if (predicate)
    odsState.addOperands(predicate);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveExpectTxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveExpectTxOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveExpectTxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveExpectTxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand txcountRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> txcountOperands(txcountRawOperands);  ::llvm::SMLoc txcountOperandsLoc;
  (void)txcountOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> predicateOperands;
  ::llvm::SMLoc predicateOperandsLoc;
  (void)predicateOperandsLoc;
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  txcountOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(txcountRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("predicate"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    predicateOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      predicateOperands.push_back(operand);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(txcountOperands, odsBuildableType0, txcountOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType0, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(predicateOperands, odsBuildableType1, predicateOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveExpectTxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTxcount();
  if (getPredicate()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "predicate";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getPredicate())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierArriveExpectTxOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierArriveNoCompleteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveNoCompleteOpGenericAdaptorBase::MBarrierArriveNoCompleteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.arrive.nocomplete", odsAttrs.getContext());
}

MBarrierArriveNoCompleteOpGenericAdaptorBase::MBarrierArriveNoCompleteOpGenericAdaptorBase(MBarrierArriveNoCompleteOp op) : MBarrierArriveNoCompleteOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveNoCompleteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveNoCompleteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveNoCompleteOpAdaptor::MBarrierArriveNoCompleteOpAdaptor(MBarrierArriveNoCompleteOp op) : MBarrierArriveNoCompleteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveNoCompleteOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveNoCompleteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveNoCompleteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierArriveNoCompleteOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierArriveNoCompleteOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierArriveNoCompleteOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MBarrierArriveNoCompleteOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveNoCompleteOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveNoCompleteOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveNoCompleteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveNoCompleteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierTokenType> MBarrierArriveNoCompleteOp::getToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierTokenType>>(*getODSResults(0).begin());
}

void MBarrierArriveNoCompleteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::Value barriers, ::mlir::Value mbarId, ::mlir::Value count) {
  odsState.addOperands(barriers);
  odsState.addOperands(mbarId);
  odsState.addOperands(count);
  odsState.addTypes(token);
}

void MBarrierArriveNoCompleteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value barriers, ::mlir::Value mbarId, ::mlir::Value count) {
  odsState.addOperands(barriers);
  odsState.addOperands(mbarId);
  odsState.addOperands(count);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveNoCompleteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveNoCompleteOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveNoCompleteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveNoCompleteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);
  ::mlir::Type tokenRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tokenTypes(tokenRawTypes);

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierTokenType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tokenRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(tokenTypes);
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType0, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(countOperands, odsBuildableType0, countOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveNoCompleteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getToken().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierTokenType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierArriveNoCompleteOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierArriveOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierArriveOpGenericAdaptorBase::MBarrierArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.arrive", odsAttrs.getContext());
}

MBarrierArriveOpGenericAdaptorBase::MBarrierArriveOpGenericAdaptorBase(MBarrierArriveOp op) : MBarrierArriveOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierArriveOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierArriveOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierArriveOpAdaptor::MBarrierArriveOpAdaptor(MBarrierArriveOp op) : MBarrierArriveOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierArriveOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierArriveOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierArriveOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierArriveOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierArriveOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &MBarrierArriveOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierArriveOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierArriveOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierArriveOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierTokenType> MBarrierArriveOp::getToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierTokenType>>(*getODSResults(0).begin());
}

void MBarrierArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::Value barriers, ::mlir::Value mbarId) {
  odsState.addOperands(barriers);
  odsState.addOperands(mbarId);
  odsState.addTypes(token);
}

void MBarrierArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value barriers, ::mlir::Value mbarId) {
  odsState.addOperands(barriers);
  odsState.addOperands(mbarId);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierArriveOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierArriveOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierArriveOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierArriveOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);
  ::mlir::Type tokenRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tokenTypes(tokenRawTypes);

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
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
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierTokenType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tokenRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(tokenTypes);
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType0, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierArriveOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getToken().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierTokenType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierArriveOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierCreateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierCreateOpGenericAdaptorBase::MBarrierCreateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.create", odsAttrs.getContext());
}

MBarrierCreateOpGenericAdaptorBase::MBarrierCreateOpGenericAdaptorBase(MBarrierCreateOp op) : MBarrierCreateOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierCreateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierCreateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierCreateOpAdaptor::MBarrierCreateOpAdaptor(MBarrierCreateOp op) : MBarrierCreateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierCreateOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierCreateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierCreateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MBarrierCreateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierCreateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierCreateOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSResults(0).begin());
}

void MBarrierCreateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type barriers) {
  odsState.addTypes(barriers);
}

void MBarrierCreateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierCreateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierCreateOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierCreateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierCreateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  result.addTypes(barriersTypes);
  return ::mlir::success();
}

void MBarrierCreateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierCreateOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierInitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierInitOpGenericAdaptorBase::MBarrierInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.init", odsAttrs.getContext());
}

MBarrierInitOpGenericAdaptorBase::MBarrierInitOpGenericAdaptorBase(MBarrierInitOp op) : MBarrierInitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierInitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MBarrierInitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierInitOpAdaptor::MBarrierInitOpAdaptor(MBarrierInitOp op) : MBarrierInitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierInitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierInitOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MBarrierInitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierInitOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierInitOp::getCount() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierInitOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierInitOp::getPredicate() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &MBarrierInitOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierInitOp::getCountMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierInitOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MBarrierInitOp::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MBarrierInitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierInitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value barriers, ::mlir::Value count, ::mlir::Value mbarId, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(barriers);
  odsState.addOperands(count);
  odsState.addOperands(mbarId);
  if (predicate)
    odsState.addOperands(predicate);
}

void MBarrierInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value barriers, ::mlir::Value count, ::mlir::Value mbarId, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(barriers);
  odsState.addOperands(count);
  odsState.addOperands(mbarId);
  if (predicate)
    odsState.addOperands(predicate);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierInitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierInitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierInitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierInitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand countRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> countOperands(countRawOperands);  ::llvm::SMLoc countOperandsLoc;
  (void)countOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> predicateOperands;
  ::llvm::SMLoc predicateOperandsLoc;
  (void)predicateOperandsLoc;
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  countOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(countRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("predicate"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    predicateOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      predicateOperands.push_back(operand);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(countOperands, odsBuildableType0, countOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType0, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(predicateOperands, odsBuildableType1, predicateOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierInitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCount();
  if (getPredicate()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "predicate";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getPredicate())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierInitOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierTestWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierTestWaitOpGenericAdaptorBase::MBarrierTestWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.test.wait", odsAttrs.getContext());
}

MBarrierTestWaitOpGenericAdaptorBase::MBarrierTestWaitOpGenericAdaptorBase(MBarrierTestWaitOp op) : MBarrierTestWaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierTestWaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierTestWaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierTestWaitOpAdaptor::MBarrierTestWaitOpAdaptor(MBarrierTestWaitOp op) : MBarrierTestWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierTestWaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierTestWaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierTestWaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierTestWaitOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierTokenType> MBarrierTestWaitOp::getToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierTokenType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierTestWaitOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MBarrierTestWaitOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTestWaitOp::getTokenMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTestWaitOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierTestWaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierTestWaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> MBarrierTestWaitOp::getWaitComplete() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
}

void MBarrierTestWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type waitComplete, ::mlir::Value barriers, ::mlir::Value token, ::mlir::Value mbarId) {
  odsState.addOperands(barriers);
  odsState.addOperands(token);
  odsState.addOperands(mbarId);
  odsState.addTypes(waitComplete);
}

void MBarrierTestWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value barriers, ::mlir::Value token, ::mlir::Value mbarId) {
  odsState.addOperands(barriers);
  odsState.addOperands(token);
  odsState.addOperands(mbarId);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierTestWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierTestWaitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierTestWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierTestWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tokenRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tokenOperands(tokenRawOperands);  ::llvm::SMLoc tokenOperandsLoc;
  (void)tokenOperandsLoc;
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);
  ::mlir::Type tokenRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tokenTypes(tokenRawTypes);

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tokenOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tokenRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierTokenType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tokenRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tokenOperands, tokenTypes, tokenOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType1, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierTestWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getToken();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getToken().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierTokenType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierTestWaitOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MBarrierTryWaitParityOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MBarrierTryWaitParityOpGenericAdaptorBase::MBarrierTryWaitParityOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mbarrier.try_wait.parity", odsAttrs.getContext());
}

MBarrierTryWaitParityOpGenericAdaptorBase::MBarrierTryWaitParityOpGenericAdaptorBase(MBarrierTryWaitParityOp op) : MBarrierTryWaitParityOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MBarrierTryWaitParityOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MBarrierTryWaitParityOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MBarrierTryWaitParityOpAdaptor::MBarrierTryWaitParityOpAdaptor(MBarrierTryWaitParityOp op) : MBarrierTryWaitParityOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MBarrierTryWaitParityOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MBarrierTryWaitParityOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MBarrierTryWaitParityOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> MBarrierTryWaitParityOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierTryWaitParityOp::getPhase() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierTryWaitParityOp::getTicks() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> MBarrierTryWaitParityOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getPhaseMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getTicksMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MBarrierTryWaitParityOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MBarrierTryWaitParityOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MBarrierTryWaitParityOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MBarrierTryWaitParityOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value barriers, ::mlir::Value phase, ::mlir::Value ticks, ::mlir::Value mbarId) {
  odsState.addOperands(barriers);
  odsState.addOperands(phase);
  odsState.addOperands(ticks);
  odsState.addOperands(mbarId);
}

void MBarrierTryWaitParityOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value barriers, ::mlir::Value phase, ::mlir::Value ticks, ::mlir::Value mbarId) {
  odsState.addOperands(barriers);
  odsState.addOperands(phase);
  odsState.addOperands(ticks);
  odsState.addOperands(mbarId);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MBarrierTryWaitParityOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MBarrierTryWaitParityOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MBarrierTryWaitParityOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MBarrierTryWaitParityOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand phaseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> phaseOperands(phaseRawOperands);  ::llvm::SMLoc phaseOperandsLoc;
  (void)phaseOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand ticksRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> ticksOperands(ticksRawOperands);  ::llvm::SMLoc ticksOperandsLoc;
  (void)ticksOperandsLoc;
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  phaseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(phaseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  ticksOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(ticksRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(phaseOperands, odsBuildableType0, phaseOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(ticksOperands, odsBuildableType0, ticksOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType0, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MBarrierTryWaitParityOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getPhase();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTicks();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MBarrierTryWaitParityOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MmaSparseSyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MmaSparseSyncOpGenericAdaptorBase::MmaSparseSyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mma.sp.sync", odsAttrs.getContext());
}

MmaSparseSyncOpGenericAdaptorBase::MmaSparseSyncOpGenericAdaptorBase(MmaSparseSyncOp op) : MmaSparseSyncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MmaSparseSyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MmaSparseSyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr MmaSparseSyncOpGenericAdaptorBase::getMmaShapeAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().mmaShape);
  return attr;
}

::mlir::ArrayAttr MmaSparseSyncOpGenericAdaptorBase::getMmaShape() {
  auto attr = getMmaShapeAttr();
  return attr;
}

::mlir::IntegerAttr MmaSparseSyncOpGenericAdaptorBase::getSparsitySelectorAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().sparsitySelector);
  return attr;
}

uint32_t MmaSparseSyncOpGenericAdaptorBase::getSparsitySelector() {
  auto attr = getSparsitySelectorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr MmaSparseSyncOpGenericAdaptorBase::getTf32EnabledAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().tf32Enabled);
  return attr;
}

::std::optional<bool> MmaSparseSyncOpGenericAdaptorBase::getTf32Enabled() {
  auto attr = getTf32EnabledAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
MmaSparseSyncOpAdaptor::MmaSparseSyncOpAdaptor(MmaSparseSyncOp op) : MmaSparseSyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MmaSparseSyncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mmaShape = getProperties().mmaShape; (void)tblgen_mmaShape;
  if (!tblgen_mmaShape) return emitError(loc, "'nvgpu.mma.sp.sync' op ""requires attribute 'mmaShape'");
  auto tblgen_sparsitySelector = getProperties().sparsitySelector; (void)tblgen_sparsitySelector;
  auto tblgen_tf32Enabled = getProperties().tf32Enabled; (void)tblgen_tf32Enabled;

  if (tblgen_mmaShape && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mmaShape))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mmaShape), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'nvgpu.mma.sp.sync' op ""attribute 'mmaShape' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_sparsitySelector && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_sparsitySelector))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_sparsitySelector).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.mma.sp.sync' op ""attribute 'sparsitySelector' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_tf32Enabled && !((::llvm::isa<::mlir::UnitAttr>(tblgen_tf32Enabled))))
    return emitError(loc, "'nvgpu.mma.sp.sync' op ""attribute 'tf32Enabled' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MmaSparseSyncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MmaSparseSyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MmaSparseSyncOp::getMatrixA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MmaSparseSyncOp::getMatrixB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MmaSparseSyncOp::getMatrixC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::VectorType> MmaSparseSyncOp::getSparseMetadata() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(3).begin());
}

::mlir::OpOperand &MmaSparseSyncOp::getMatrixAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MmaSparseSyncOp::getMatrixBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MmaSparseSyncOp::getMatrixCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MmaSparseSyncOp::getSparseMetadataMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MmaSparseSyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MmaSparseSyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MmaSparseSyncOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MmaSparseSyncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mmaShape;
       auto attr = dict.get("mmaShape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mmaShape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mmaShape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sparsitySelector;
       auto attr = dict.get("sparsitySelector");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for sparsitySelector in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sparsitySelector` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tf32Enabled;
       auto attr = dict.get("tf32Enabled");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tf32Enabled in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tf32Enabled` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MmaSparseSyncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mmaShape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mmaShape",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sparsitySelector;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sparsitySelector",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tf32Enabled;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tf32Enabled",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MmaSparseSyncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mmaShape.getAsOpaquePointer()), 
    llvm::hash_value(prop.sparsitySelector.getAsOpaquePointer()), 
    llvm::hash_value(prop.tf32Enabled.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MmaSparseSyncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mmaShape")
      return prop.mmaShape;

    if (name == "sparsitySelector")
      return prop.sparsitySelector;

    if (name == "tf32Enabled")
      return prop.tf32Enabled;
  return std::nullopt;
}

void MmaSparseSyncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mmaShape") {
       prop.mmaShape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mmaShape)>>(value);
       return;
    }

    if (name == "sparsitySelector") {
       prop.sparsitySelector = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sparsitySelector)>>(value);
       return;
    }

    if (name == "tf32Enabled") {
       prop.tf32Enabled = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tf32Enabled)>>(value);
       return;
    }
}

void MmaSparseSyncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mmaShape) attrs.append("mmaShape", prop.mmaShape);

    if (prop.sparsitySelector) attrs.append("sparsitySelector", prop.sparsitySelector);

    if (prop.tf32Enabled) attrs.append("tf32Enabled", prop.tf32Enabled);
}

::mlir::LogicalResult MmaSparseSyncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMmaShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU4(attr, "mmaShape", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSparsitySelectorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(attr, "sparsitySelector", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTf32EnabledAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(attr, "tf32Enabled", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MmaSparseSyncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mmaShape)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sparsitySelector)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tf32Enabled)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MmaSparseSyncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mmaShape);

  writer.writeOptionalAttribute(prop.sparsitySelector);

  writer.writeOptionalAttribute(prop.tf32Enabled);
}

::mlir::ArrayAttr MmaSparseSyncOp::getMmaShapeAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().mmaShape);
}

::mlir::ArrayAttr MmaSparseSyncOp::getMmaShape() {
  auto attr = getMmaShapeAttr();
  return attr;
}

::mlir::IntegerAttr MmaSparseSyncOp::getSparsitySelectorAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().sparsitySelector);
}

uint32_t MmaSparseSyncOp::getSparsitySelector() {
  auto attr = getSparsitySelectorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr MmaSparseSyncOp::getTf32EnabledAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().tf32Enabled);
}

::std::optional<bool> MmaSparseSyncOp::getTf32Enabled() {
  auto attr = getTf32EnabledAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void MmaSparseSyncOp::setMmaShapeAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMmaShapeAttrName(), attr);
}

void MmaSparseSyncOp::setSparsitySelectorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSparsitySelectorAttrName(), attr);
}

void MmaSparseSyncOp::setSparsitySelector(uint32_t attrValue) {
  (*this)->setAttr(getSparsitySelectorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue));
}

void MmaSparseSyncOp::setTf32EnabledAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTf32EnabledAttrName(), attr);
}

void MmaSparseSyncOp::setTf32Enabled(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTf32EnabledAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTf32EnabledAttrName());
}

::mlir::Attribute MmaSparseSyncOp::removeTf32EnabledAttr() {
    auto &attr = getProperties().tf32Enabled;
    attr = {};
    return attr;
}

void MmaSparseSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrixA, ::mlir::Value matrixB, ::mlir::Value matrixC, ::mlir::Value sparseMetadata, ::mlir::ArrayAttr mmaShape, ::mlir::IntegerAttr sparsitySelector, /*optional*/::mlir::UnitAttr tf32Enabled) {
  odsState.addOperands(matrixA);
  odsState.addOperands(matrixB);
  odsState.addOperands(matrixC);
  odsState.addOperands(sparseMetadata);
  odsState.getOrAddProperties<Properties>().mmaShape = mmaShape;
  if (sparsitySelector) {
    odsState.getOrAddProperties<Properties>().sparsitySelector = sparsitySelector;
  }
  if (tf32Enabled) {
    odsState.getOrAddProperties<Properties>().tf32Enabled = tf32Enabled;
  }
  odsState.addTypes(res);
}

void MmaSparseSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value matrixA, ::mlir::Value matrixB, ::mlir::Value matrixC, ::mlir::Value sparseMetadata, ::mlir::ArrayAttr mmaShape, ::mlir::IntegerAttr sparsitySelector, /*optional*/::mlir::UnitAttr tf32Enabled) {
  odsState.addOperands(matrixA);
  odsState.addOperands(matrixB);
  odsState.addOperands(matrixC);
  odsState.addOperands(sparseMetadata);
  odsState.getOrAddProperties<Properties>().mmaShape = mmaShape;
  if (sparsitySelector) {
    odsState.getOrAddProperties<Properties>().sparsitySelector = sparsitySelector;
  }
  if (tf32Enabled) {
    odsState.getOrAddProperties<Properties>().tf32Enabled = tf32Enabled;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MmaSparseSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrixA, ::mlir::Value matrixB, ::mlir::Value matrixC, ::mlir::Value sparseMetadata, ::mlir::ArrayAttr mmaShape, uint32_t sparsitySelector, /*optional*/::mlir::UnitAttr tf32Enabled) {
  odsState.addOperands(matrixA);
  odsState.addOperands(matrixB);
  odsState.addOperands(matrixC);
  odsState.addOperands(sparseMetadata);
  odsState.getOrAddProperties<Properties>().mmaShape = mmaShape;
  odsState.getOrAddProperties<Properties>().sparsitySelector = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), sparsitySelector);
  if (tf32Enabled) {
    odsState.getOrAddProperties<Properties>().tf32Enabled = tf32Enabled;
  }
  odsState.addTypes(res);
}

void MmaSparseSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value matrixA, ::mlir::Value matrixB, ::mlir::Value matrixC, ::mlir::Value sparseMetadata, ::mlir::ArrayAttr mmaShape, uint32_t sparsitySelector, /*optional*/::mlir::UnitAttr tf32Enabled) {
  odsState.addOperands(matrixA);
  odsState.addOperands(matrixB);
  odsState.addOperands(matrixC);
  odsState.addOperands(sparseMetadata);
  odsState.getOrAddProperties<Properties>().mmaShape = mmaShape;
  odsState.getOrAddProperties<Properties>().sparsitySelector = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), sparsitySelector);
  if (tf32Enabled) {
    odsState.getOrAddProperties<Properties>().tf32Enabled = tf32Enabled;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MmaSparseSyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MmaSparseSyncOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.sparsitySelector)
    properties.sparsitySelector = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0);
}

::mlir::LogicalResult MmaSparseSyncOp::verifyInvariantsImpl() {
  auto tblgen_mmaShape = getProperties().mmaShape; (void)tblgen_mmaShape;
  if (!tblgen_mmaShape) return emitOpError("requires attribute 'mmaShape'");
  auto tblgen_sparsitySelector = getProperties().sparsitySelector; (void)tblgen_sparsitySelector;
  auto tblgen_tf32Enabled = getProperties().tf32Enabled; (void)tblgen_tf32Enabled;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU4(*this, tblgen_mmaShape, "mmaShape")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(*this, tblgen_sparsitySelector, "sparsitySelector")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(*this, tblgen_tf32Enabled, "tf32Enabled")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getOperation()).getNumOperands() > 1)) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(0).getType()))) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(1).getType()))) && ((::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(0)) == ::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(1))))))
    return emitOpError("failed to verify that matrixA and matrixB have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult MmaSparseSyncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MmaSparseSyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand matrixARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixAOperands(matrixARawOperands);  ::llvm::SMLoc matrixAOperandsLoc;
  (void)matrixAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand matrixBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixBOperands(matrixBRawOperands);  ::llvm::SMLoc matrixBOperandsLoc;
  (void)matrixBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand matrixCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixCOperands(matrixCRawOperands);  ::llvm::SMLoc matrixCOperandsLoc;
  (void)matrixCOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand sparseMetadataRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sparseMetadataOperands(sparseMetadataRawOperands);  ::llvm::SMLoc sparseMetadataOperandsLoc;
  (void)sparseMetadataOperandsLoc;
  ::mlir::Type matrixARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixATypes(matrixARawTypes);
  ::mlir::Type matrixBRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixBTypes(matrixBRawTypes);
  ::mlir::Type matrixCRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixCTypes(matrixCRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  if (parser.parseLParen())
    return ::mlir::failure();

  matrixAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  matrixBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  matrixCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixCRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseKeyword("metadata"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  sparseMetadataOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sparseMetadataRawOperands[0]))
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
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixARawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixBRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixCRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = ::mlir::VectorType::get({2},parser.getBuilder().getI16Type());
  result.addTypes(resTypes);
  if (parser.resolveOperands(matrixAOperands, matrixATypes, matrixAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(matrixBOperands, matrixBTypes, matrixBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(matrixCOperands, matrixCTypes, matrixCOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(sparseMetadataOperands, odsBuildableType0, sparseMetadataOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MmaSparseSyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << "(";
  _odsPrinter << getMatrixA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMatrixB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMatrixC();
  _odsPrinter << ")";
  _odsPrinter << ' ' << "metadata";
  _odsPrinter << "(";
  _odsPrinter << getSparseMetadata();
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSparsitySelectorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 0)))
       elidedAttrs.push_back("sparsitySelector");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getMatrixA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMatrixB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMatrixC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MmaSparseSyncOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MmaSparseSyncOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::MmaSyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MmaSyncOpGenericAdaptorBase::MmaSyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.mma.sync", odsAttrs.getContext());
}

MmaSyncOpGenericAdaptorBase::MmaSyncOpGenericAdaptorBase(MmaSyncOp op) : MmaSyncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MmaSyncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MmaSyncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr MmaSyncOpGenericAdaptorBase::getMmaShapeAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().mmaShape);
  return attr;
}

::mlir::ArrayAttr MmaSyncOpGenericAdaptorBase::getMmaShape() {
  auto attr = getMmaShapeAttr();
  return attr;
}

::mlir::UnitAttr MmaSyncOpGenericAdaptorBase::getTf32EnabledAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().tf32Enabled);
  return attr;
}

::std::optional<bool> MmaSyncOpGenericAdaptorBase::getTf32Enabled() {
  auto attr = getTf32EnabledAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
MmaSyncOpAdaptor::MmaSyncOpAdaptor(MmaSyncOp op) : MmaSyncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MmaSyncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mmaShape = getProperties().mmaShape; (void)tblgen_mmaShape;
  if (!tblgen_mmaShape) return emitError(loc, "'nvgpu.mma.sync' op ""requires attribute 'mmaShape'");
  auto tblgen_tf32Enabled = getProperties().tf32Enabled; (void)tblgen_tf32Enabled;

  if (tblgen_mmaShape && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mmaShape))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mmaShape), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'nvgpu.mma.sync' op ""attribute 'mmaShape' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_tf32Enabled && !((::llvm::isa<::mlir::UnitAttr>(tblgen_tf32Enabled))))
    return emitError(loc, "'nvgpu.mma.sync' op ""attribute 'tf32Enabled' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MmaSyncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MmaSyncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MmaSyncOp::getMatrixA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::VectorType> MmaSyncOp::getMatrixB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::VectorType> MmaSyncOp::getMatrixC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &MmaSyncOp::getMatrixAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MmaSyncOp::getMatrixBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MmaSyncOp::getMatrixCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MmaSyncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MmaSyncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::VectorType> MmaSyncOp::getRes() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::VectorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MmaSyncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mmaShape;
       auto attr = dict.get("mmaShape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mmaShape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mmaShape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tf32Enabled;
       auto attr = dict.get("tf32Enabled");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for tf32Enabled in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tf32Enabled` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MmaSyncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mmaShape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mmaShape",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tf32Enabled;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tf32Enabled",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MmaSyncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mmaShape.getAsOpaquePointer()), 
    llvm::hash_value(prop.tf32Enabled.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MmaSyncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mmaShape")
      return prop.mmaShape;

    if (name == "tf32Enabled")
      return prop.tf32Enabled;
  return std::nullopt;
}

void MmaSyncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mmaShape") {
       prop.mmaShape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mmaShape)>>(value);
       return;
    }

    if (name == "tf32Enabled") {
       prop.tf32Enabled = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tf32Enabled)>>(value);
       return;
    }
}

void MmaSyncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mmaShape) attrs.append("mmaShape", prop.mmaShape);

    if (prop.tf32Enabled) attrs.append("tf32Enabled", prop.tf32Enabled);
}

::mlir::LogicalResult MmaSyncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMmaShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU4(attr, "mmaShape", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTf32EnabledAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(attr, "tf32Enabled", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MmaSyncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mmaShape)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tf32Enabled)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MmaSyncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mmaShape);

  writer.writeOptionalAttribute(prop.tf32Enabled);
}

::mlir::ArrayAttr MmaSyncOp::getMmaShapeAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().mmaShape);
}

::mlir::ArrayAttr MmaSyncOp::getMmaShape() {
  auto attr = getMmaShapeAttr();
  return attr;
}

::mlir::UnitAttr MmaSyncOp::getTf32EnabledAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().tf32Enabled);
}

::std::optional<bool> MmaSyncOp::getTf32Enabled() {
  auto attr = getTf32EnabledAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void MmaSyncOp::setMmaShapeAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMmaShapeAttrName(), attr);
}

void MmaSyncOp::setTf32EnabledAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTf32EnabledAttrName(), attr);
}

void MmaSyncOp::setTf32Enabled(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTf32EnabledAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTf32EnabledAttrName());
}

::mlir::Attribute MmaSyncOp::removeTf32EnabledAttr() {
    auto &attr = getProperties().tf32Enabled;
    attr = {};
    return attr;
}

void MmaSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrixA, ::mlir::Value matrixB, ::mlir::Value matrixC, ::mlir::ArrayAttr mmaShape, /*optional*/::mlir::UnitAttr tf32Enabled) {
  odsState.addOperands(matrixA);
  odsState.addOperands(matrixB);
  odsState.addOperands(matrixC);
  odsState.getOrAddProperties<Properties>().mmaShape = mmaShape;
  if (tf32Enabled) {
    odsState.getOrAddProperties<Properties>().tf32Enabled = tf32Enabled;
  }
  odsState.addTypes(res);
}

void MmaSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value matrixA, ::mlir::Value matrixB, ::mlir::Value matrixC, ::mlir::ArrayAttr mmaShape, /*optional*/::mlir::UnitAttr tf32Enabled) {
  odsState.addOperands(matrixA);
  odsState.addOperands(matrixB);
  odsState.addOperands(matrixC);
  odsState.getOrAddProperties<Properties>().mmaShape = mmaShape;
  if (tf32Enabled) {
    odsState.getOrAddProperties<Properties>().tf32Enabled = tf32Enabled;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MmaSyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MmaSyncOp::verifyInvariantsImpl() {
  auto tblgen_mmaShape = getProperties().mmaShape; (void)tblgen_mmaShape;
  if (!tblgen_mmaShape) return emitOpError("requires attribute 'mmaShape'");
  auto tblgen_tf32Enabled = getProperties().tf32Enabled; (void)tblgen_tf32Enabled;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU4(*this, tblgen_mmaShape, "mmaShape")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(*this, tblgen_tf32Enabled, "tf32Enabled")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getOperation()).getNumOperands() > 1)) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(0).getType()))) && ((::llvm::isa<::mlir::ShapedType>((*this->getOperation()).getOperand(1).getType()))) && ((::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(0)) == ::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(1))))))
    return emitOpError("failed to verify that matrixA and matrixB have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult MmaSyncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MmaSyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand matrixARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixAOperands(matrixARawOperands);  ::llvm::SMLoc matrixAOperandsLoc;
  (void)matrixAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand matrixBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixBOperands(matrixBRawOperands);  ::llvm::SMLoc matrixBOperandsLoc;
  (void)matrixBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand matrixCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixCOperands(matrixCRawOperands);  ::llvm::SMLoc matrixCOperandsLoc;
  (void)matrixCOperandsLoc;
  ::mlir::Type matrixARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixATypes(matrixARawTypes);
  ::mlir::Type matrixBRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixBTypes(matrixBRawTypes);
  ::mlir::Type matrixCRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixCTypes(matrixCRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);
  if (parser.parseLParen())
    return ::mlir::failure();

  matrixAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  matrixBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  matrixCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixCRawOperands[0]))
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
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixARawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixBRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixCRawTypes[0] = type;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::VectorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(matrixAOperands, matrixATypes, matrixAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(matrixBOperands, matrixBTypes, matrixBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(matrixCOperands, matrixCTypes, matrixCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MmaSyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << "(";
  _odsPrinter << getMatrixA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMatrixB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMatrixC();
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ' << "(";
  {
    auto type = getMatrixA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMatrixB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMatrixC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getRes().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::VectorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void MmaSyncOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::MmaSyncOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::TmaAsyncLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TmaAsyncLoadOpGenericAdaptorBase::TmaAsyncLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.tma.async.load", odsAttrs.getContext());
}

TmaAsyncLoadOpGenericAdaptorBase::TmaAsyncLoadOpGenericAdaptorBase(TmaAsyncLoadOp op) : TmaAsyncLoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TmaAsyncLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TmaAsyncLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TmaAsyncLoadOpAdaptor::TmaAsyncLoadOpAdaptor(TmaAsyncLoadOp op) : TmaAsyncLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TmaAsyncLoadOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TmaAsyncLoadOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TmaAsyncLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TmaAsyncLoadOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType> TmaAsyncLoadOp::getBarriers() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::MBarrierGroupType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType> TmaAsyncLoadOp::getTensorMapDescriptor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType>>(*getODSOperands(2).begin());
}

::mlir::Operation::operand_range TmaAsyncLoadOp::getCoordinates() {
  return getODSOperands(3);
}

::mlir::TypedValue<::mlir::IndexType> TmaAsyncLoadOp::getMbarId() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::IntegerType> TmaAsyncLoadOp::getMulticastMask() {
  auto operands = getODSOperands(5);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TmaAsyncLoadOp::getPredicate() {
  auto operands = getODSOperands(6);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &TmaAsyncLoadOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TmaAsyncLoadOp::getBarriersMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TmaAsyncLoadOp::getTensorMapDescriptorMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TmaAsyncLoadOp::getCoordinatesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &TmaAsyncLoadOp::getMbarIdMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TmaAsyncLoadOp::getMulticastMaskMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TmaAsyncLoadOp::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TmaAsyncLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TmaAsyncLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult TmaAsyncLoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute TmaAsyncLoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code TmaAsyncLoadOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TmaAsyncLoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TmaAsyncLoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TmaAsyncLoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TmaAsyncLoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult TmaAsyncLoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

void TmaAsyncLoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
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

void TmaAsyncLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value barriers, ::mlir::Value tensorMapDescriptor, ::mlir::ValueRange coordinates, ::mlir::Value mbarId, /*optional*/::mlir::Value multicastMask, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(dst);
  odsState.addOperands(barriers);
  odsState.addOperands(tensorMapDescriptor);
  odsState.addOperands(coordinates);
  odsState.addOperands(mbarId);
  if (multicastMask)
    odsState.addOperands(multicastMask);
  if (predicate)
    odsState.addOperands(predicate);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(coordinates.size()), 1, (multicastMask ? 1 : 0), (predicate ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
}

void TmaAsyncLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value barriers, ::mlir::Value tensorMapDescriptor, ::mlir::ValueRange coordinates, ::mlir::Value mbarId, /*optional*/::mlir::Value multicastMask, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(dst);
  odsState.addOperands(barriers);
  odsState.addOperands(tensorMapDescriptor);
  odsState.addOperands(coordinates);
  odsState.addOperands(mbarId);
  if (multicastMask)
    odsState.addOperands(multicastMask);
  if (predicate)
    odsState.addOperands(predicate);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(coordinates.size()), 1, (multicastMask ? 1 : 0), (predicate ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TmaAsyncLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TmaAsyncLoadOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    if (valueGroup5.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup5.size();
    }

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    if (valueGroup6.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup6.size();
    }

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TmaAsyncLoadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TmaAsyncLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorMapDescriptorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorMapDescriptorOperands(tensorMapDescriptorRawOperands);  ::llvm::SMLoc tensorMapDescriptorOperandsLoc;
  (void)tensorMapDescriptorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> coordinatesOperands;
  ::llvm::SMLoc coordinatesOperandsLoc;
  (void)coordinatesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand barriersRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> barriersOperands(barriersRawOperands);  ::llvm::SMLoc barriersOperandsLoc;
  (void)barriersOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand mbarIdRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> mbarIdOperands(mbarIdRawOperands);  ::llvm::SMLoc mbarIdOperandsLoc;
  (void)mbarIdOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dstRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstOperands(dstRawOperands);  ::llvm::SMLoc dstOperandsLoc;
  (void)dstOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> multicastMaskOperands;
  ::llvm::SMLoc multicastMaskOperandsLoc;
  (void)multicastMaskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> predicateOperands;
  ::llvm::SMLoc predicateOperandsLoc;
  (void)predicateOperandsLoc;
  ::mlir::Type tensorMapDescriptorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorMapDescriptorTypes(tensorMapDescriptorRawTypes);
  ::mlir::Type barriersRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> barriersTypes(barriersRawTypes);
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);

  tensorMapDescriptorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorMapDescriptorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  coordinatesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(coordinatesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  barriersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(barriersRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  mbarIdOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(mbarIdRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  dstOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("multicast_mask"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    multicastMaskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      multicastMaskOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("predicate"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    predicateOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      predicateOperands.push_back(operand);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::TensorMapDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorMapDescriptorRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::MBarrierGroupType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    barriersRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, 1, static_cast<int32_t>(coordinatesOperands.size()), 1, static_cast<int32_t>(multicastMaskOperands.size()), static_cast<int32_t>(predicateOperands.size())}), result.getOrAddProperties<TmaAsyncLoadOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(16);
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(dstOperands, dstTypes, dstOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(barriersOperands, barriersTypes, barriersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tensorMapDescriptorOperands, tensorMapDescriptorTypes, tensorMapDescriptorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(coordinatesOperands, odsBuildableType0, coordinatesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(mbarIdOperands, odsBuildableType0, mbarIdOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(multicastMaskOperands, odsBuildableType1, multicastMaskOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(predicateOperands, odsBuildableType2, predicateOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TmaAsyncLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensorMapDescriptor();
  _odsPrinter << "[";
  _odsPrinter << getCoordinates();
  _odsPrinter << "]";
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBarriers();
  _odsPrinter << "[";
  _odsPrinter << getMbarId();
  _odsPrinter << "]";
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getDst();
  if (getMulticastMask()) {
    _odsPrinter << ' ' << "multicast_mask";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getMulticastMask())
      _odsPrinter << value;
  }
  if (getPredicate()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "predicate";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getPredicate())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensorMapDescriptor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::TensorMapDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getBarriers().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::MBarrierGroupType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TmaAsyncLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::TmaAsyncLoadOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::TmaAsyncStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TmaAsyncStoreOpGenericAdaptorBase::TmaAsyncStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.tma.async.store", odsAttrs.getContext());
}

TmaAsyncStoreOpGenericAdaptorBase::TmaAsyncStoreOpGenericAdaptorBase(TmaAsyncStoreOp op) : TmaAsyncStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TmaAsyncStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TmaAsyncStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TmaAsyncStoreOpAdaptor::TmaAsyncStoreOpAdaptor(TmaAsyncStoreOp op) : TmaAsyncStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TmaAsyncStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TmaAsyncStoreOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TmaAsyncStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> TmaAsyncStoreOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType> TmaAsyncStoreOp::getTensorMapDescriptor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range TmaAsyncStoreOp::getCoordinates() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> TmaAsyncStoreOp::getPredicate() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &TmaAsyncStoreOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &TmaAsyncStoreOp::getTensorMapDescriptorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TmaAsyncStoreOp::getCoordinatesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TmaAsyncStoreOp::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TmaAsyncStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TmaAsyncStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult TmaAsyncStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute TmaAsyncStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code TmaAsyncStoreOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TmaAsyncStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TmaAsyncStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TmaAsyncStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TmaAsyncStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult TmaAsyncStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

void TmaAsyncStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
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

void TmaAsyncStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value tensorMapDescriptor, ::mlir::ValueRange coordinates, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(src);
  odsState.addOperands(tensorMapDescriptor);
  odsState.addOperands(coordinates);
  if (predicate)
    odsState.addOperands(predicate);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(coordinates.size()), (predicate ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
}

void TmaAsyncStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value tensorMapDescriptor, ::mlir::ValueRange coordinates, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(src);
  odsState.addOperands(tensorMapDescriptor);
  odsState.addOperands(coordinates);
  if (predicate)
    odsState.addOperands(predicate);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(coordinates.size()), (predicate ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TmaAsyncStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TmaAsyncStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TmaAsyncStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TmaAsyncStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tensorMapDescriptorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorMapDescriptorOperands(tensorMapDescriptorRawOperands);  ::llvm::SMLoc tensorMapDescriptorOperandsLoc;
  (void)tensorMapDescriptorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> coordinatesOperands;
  ::llvm::SMLoc coordinatesOperandsLoc;
  (void)coordinatesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> predicateOperands;
  ::llvm::SMLoc predicateOperandsLoc;
  (void)predicateOperandsLoc;
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);
  ::mlir::Type tensorMapDescriptorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorMapDescriptorTypes(tensorMapDescriptorRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  tensorMapDescriptorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorMapDescriptorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  coordinatesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(coordinatesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("predicate"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    predicateOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      predicateOperands.push_back(operand);
    }
  }
  }
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
    srcRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::TensorMapDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorMapDescriptorRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({1, 1, static_cast<int32_t>(coordinatesOperands.size()), static_cast<int32_t>(predicateOperands.size())}), result.getOrAddProperties<TmaAsyncStoreOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tensorMapDescriptorOperands, tensorMapDescriptorTypes, tensorMapDescriptorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(coordinatesOperands, odsBuildableType0, coordinatesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(predicateOperands, odsBuildableType1, predicateOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TmaAsyncStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getTensorMapDescriptor();
  _odsPrinter << "[";
  _odsPrinter << getCoordinates();
  _odsPrinter << "]";
  if (getPredicate()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "predicate";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getPredicate())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getTensorMapDescriptor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::TensorMapDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void TmaAsyncStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::TmaAsyncStoreOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::TmaCreateDescriptorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TmaCreateDescriptorOpGenericAdaptorBase::TmaCreateDescriptorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.tma.create.descriptor", odsAttrs.getContext());
}

TmaCreateDescriptorOpGenericAdaptorBase::TmaCreateDescriptorOpGenericAdaptorBase(TmaCreateDescriptorOp op) : TmaCreateDescriptorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TmaCreateDescriptorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr TmaCreateDescriptorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TmaCreateDescriptorOpAdaptor::TmaCreateDescriptorOpAdaptor(TmaCreateDescriptorOp op) : TmaCreateDescriptorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TmaCreateDescriptorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TmaCreateDescriptorOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range TmaCreateDescriptorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::UnrankedMemRefType> TmaCreateDescriptorOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::UnrankedMemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TmaCreateDescriptorOp::getBoxDimensions() {
  return getODSOperands(1);
}

::mlir::OpOperand &TmaCreateDescriptorOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TmaCreateDescriptorOp::getBoxDimensionsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TmaCreateDescriptorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TmaCreateDescriptorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType> TmaCreateDescriptorOp::getTensorMap() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType>>(*getODSResults(0).begin());
}

void TmaCreateDescriptorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tensorMap, ::mlir::Value tensor, ::mlir::ValueRange boxDimensions) {
  odsState.addOperands(tensor);
  odsState.addOperands(boxDimensions);
  odsState.addTypes(tensorMap);
}

void TmaCreateDescriptorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::ValueRange boxDimensions) {
  odsState.addOperands(tensor);
  odsState.addOperands(boxDimensions);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TmaCreateDescriptorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TmaCreateDescriptorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TmaCreateDescriptorOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TmaCreateDescriptorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> boxDimensionsOperands;
  ::llvm::SMLoc boxDimensionsOperandsLoc;
  (void)boxDimensionsOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type tensorMapRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorMapTypes(tensorMapRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("box"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  boxDimensionsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(boxDimensionsOperands))
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
    ::mlir::UnrankedMemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::TensorMapDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorMapRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(tensorMapTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(boxDimensionsOperands, odsBuildableType0, boxDimensionsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TmaCreateDescriptorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  _odsPrinter << ' ' << "box";
  _odsPrinter << "[";
  _odsPrinter << getBoxDimensions();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::UnrankedMemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getTensorMap().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::TensorMapDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::TmaCreateDescriptorOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::TmaPrefetchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TmaPrefetchOpGenericAdaptorBase::TmaPrefetchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.tma.prefetch.descriptor", odsAttrs.getContext());
}

TmaPrefetchOpGenericAdaptorBase::TmaPrefetchOpGenericAdaptorBase(TmaPrefetchOp op) : TmaPrefetchOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TmaPrefetchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr TmaPrefetchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TmaPrefetchOpAdaptor::TmaPrefetchOpAdaptor(TmaPrefetchOp op) : TmaPrefetchOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TmaPrefetchOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TmaPrefetchOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range TmaPrefetchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType> TmaPrefetchOp::getTensorMapDescriptor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> TmaPrefetchOp::getPredicate() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::OpOperand &TmaPrefetchOp::getTensorMapDescriptorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange TmaPrefetchOp::getPredicateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TmaPrefetchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TmaPrefetchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TmaPrefetchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensorMapDescriptor, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(tensorMapDescriptor);
  if (predicate)
    odsState.addOperands(predicate);
}

void TmaPrefetchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensorMapDescriptor, /*optional*/::mlir::Value predicate) {
  odsState.addOperands(tensorMapDescriptor);
  if (predicate)
    odsState.addOperands(predicate);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TmaPrefetchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TmaPrefetchOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TmaPrefetchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TmaPrefetchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorMapDescriptorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorMapDescriptorOperands(tensorMapDescriptorRawOperands);  ::llvm::SMLoc tensorMapDescriptorOperandsLoc;
  (void)tensorMapDescriptorOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> predicateOperands;
  ::llvm::SMLoc predicateOperandsLoc;
  (void)predicateOperandsLoc;
  ::mlir::Type tensorMapDescriptorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorMapDescriptorTypes(tensorMapDescriptorRawTypes);

  tensorMapDescriptorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorMapDescriptorRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("predicate"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    predicateOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      predicateOperands.push_back(operand);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::TensorMapDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorMapDescriptorRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(tensorMapDescriptorOperands, tensorMapDescriptorTypes, tensorMapDescriptorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(predicateOperands, odsBuildableType0, predicateOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TmaPrefetchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensorMapDescriptor();
  if (getPredicate()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "predicate";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    if (::mlir::Value value = getPredicate())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensorMapDescriptor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::TensorMapDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::TmaPrefetchOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::WarpgroupGenerateDescriptorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WarpgroupGenerateDescriptorOpGenericAdaptorBase::WarpgroupGenerateDescriptorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.warpgroup.generate.descriptor", odsAttrs.getContext());
}

WarpgroupGenerateDescriptorOpGenericAdaptorBase::WarpgroupGenerateDescriptorOpGenericAdaptorBase(WarpgroupGenerateDescriptorOp op) : WarpgroupGenerateDescriptorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WarpgroupGenerateDescriptorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WarpgroupGenerateDescriptorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WarpgroupGenerateDescriptorOpAdaptor::WarpgroupGenerateDescriptorOpAdaptor(WarpgroupGenerateDescriptorOp op) : WarpgroupGenerateDescriptorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WarpgroupGenerateDescriptorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WarpgroupGenerateDescriptorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WarpgroupGenerateDescriptorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> WarpgroupGenerateDescriptorOp::getTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType> WarpgroupGenerateDescriptorOp::getTensorMap() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::TensorMapDescriptorType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &WarpgroupGenerateDescriptorOp::getTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WarpgroupGenerateDescriptorOp::getTensorMapMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WarpgroupGenerateDescriptorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WarpgroupGenerateDescriptorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupMatrixDescriptorType> WarpgroupGenerateDescriptorOp::getDescriptor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupMatrixDescriptorType>>(*getODSResults(0).begin());
}

void WarpgroupGenerateDescriptorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type descriptor, ::mlir::Value tensor, ::mlir::Value tensorMap) {
  odsState.addOperands(tensor);
  odsState.addOperands(tensorMap);
  odsState.addTypes(descriptor);
}

void WarpgroupGenerateDescriptorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::Value tensorMap) {
  odsState.addOperands(tensor);
  odsState.addOperands(tensorMap);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpgroupGenerateDescriptorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WarpgroupGenerateDescriptorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU13(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WarpgroupGenerateDescriptorOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WarpgroupGenerateDescriptorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorOperands(tensorRawOperands);  ::llvm::SMLoc tensorOperandsLoc;
  (void)tensorOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand tensorMapRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tensorMapOperands(tensorMapRawOperands);  ::llvm::SMLoc tensorMapOperandsLoc;
  (void)tensorMapOperandsLoc;
  ::mlir::Type tensorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorTypes(tensorRawTypes);
  ::mlir::Type tensorMapRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tensorMapTypes(tensorMapRawTypes);
  ::mlir::Type descriptorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> descriptorTypes(descriptorRawTypes);

  tensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  tensorMapOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tensorMapRawOperands[0]))
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
    tensorRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::TensorMapDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tensorMapRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::WarpgroupMatrixDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    descriptorRawTypes[0] = type;
  }
  result.addTypes(descriptorTypes);
  if (parser.resolveOperands(tensorOperands, tensorTypes, tensorOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tensorMapOperands, tensorMapTypes, tensorMapOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WarpgroupGenerateDescriptorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTensor();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getTensorMap();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTensor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getTensorMap().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::TensorMapDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getDescriptor().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupMatrixDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void WarpgroupGenerateDescriptorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::WarpgroupGenerateDescriptorOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::WarpgroupMmaInitAccumulatorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WarpgroupMmaInitAccumulatorOpGenericAdaptorBase::WarpgroupMmaInitAccumulatorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.warpgroup.mma.init.accumulator", odsAttrs.getContext());
}

WarpgroupMmaInitAccumulatorOpGenericAdaptorBase::WarpgroupMmaInitAccumulatorOpGenericAdaptorBase(WarpgroupMmaInitAccumulatorOp op) : WarpgroupMmaInitAccumulatorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WarpgroupMmaInitAccumulatorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WarpgroupMmaInitAccumulatorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WarpgroupMmaInitAccumulatorOpAdaptor::WarpgroupMmaInitAccumulatorOpAdaptor(WarpgroupMmaInitAccumulatorOp op) : WarpgroupMmaInitAccumulatorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WarpgroupMmaInitAccumulatorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WarpgroupMmaInitAccumulatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WarpgroupMmaInitAccumulatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WarpgroupMmaInitAccumulatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WarpgroupMmaInitAccumulatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType> WarpgroupMmaInitAccumulatorOp::getMatrixC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType>>(*getODSResults(0).begin());
}

void WarpgroupMmaInitAccumulatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type matrixC) {
  odsState.addTypes(matrixC);
}

void WarpgroupMmaInitAccumulatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpgroupMmaInitAccumulatorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WarpgroupMmaInitAccumulatorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU14(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WarpgroupMmaInitAccumulatorOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WarpgroupMmaInitAccumulatorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type matrixCRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixCTypes(matrixCRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::WarpgroupAccumulatorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixCRawTypes[0] = type;
  }
  result.addTypes(matrixCTypes);
  return ::mlir::success();
}

void WarpgroupMmaInitAccumulatorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMatrixC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupAccumulatorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::WarpgroupMmaInitAccumulatorOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::WarpgroupMmaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WarpgroupMmaOpGenericAdaptorBase::WarpgroupMmaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.warpgroup.mma", odsAttrs.getContext());
}

WarpgroupMmaOpGenericAdaptorBase::WarpgroupMmaOpGenericAdaptorBase(WarpgroupMmaOp op) : WarpgroupMmaOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WarpgroupMmaOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WarpgroupMmaOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WarpgroupMmaOpGenericAdaptorBase::getWaitGroupAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().waitGroup);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(32), 1);
  return attr;
}

uint32_t WarpgroupMmaOpGenericAdaptorBase::getWaitGroup() {
  auto attr = getWaitGroupAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(32), 1).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr WarpgroupMmaOpGenericAdaptorBase::getTransposeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transposeA);
  return attr;
}

::std::optional<bool> WarpgroupMmaOpGenericAdaptorBase::getTransposeA() {
  auto attr = getTransposeAAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::UnitAttr WarpgroupMmaOpGenericAdaptorBase::getTransposeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transposeB);
  return attr;
}

::std::optional<bool> WarpgroupMmaOpGenericAdaptorBase::getTransposeB() {
  auto attr = getTransposeBAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
WarpgroupMmaOpAdaptor::WarpgroupMmaOpAdaptor(WarpgroupMmaOp op) : WarpgroupMmaOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WarpgroupMmaOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_transposeA = getProperties().transposeA; (void)tblgen_transposeA;
  auto tblgen_transposeB = getProperties().transposeB; (void)tblgen_transposeB;
  auto tblgen_waitGroup = getProperties().waitGroup; (void)tblgen_waitGroup;

  if (tblgen_waitGroup && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_waitGroup))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_waitGroup).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.warpgroup.mma' op ""attribute 'waitGroup' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_transposeA && !((::llvm::isa<::mlir::UnitAttr>(tblgen_transposeA))))
    return emitError(loc, "'nvgpu.warpgroup.mma' op ""attribute 'transposeA' failed to satisfy constraint: unit attribute");

  if (tblgen_transposeB && !((::llvm::isa<::mlir::UnitAttr>(tblgen_transposeB))))
    return emitError(loc, "'nvgpu.warpgroup.mma' op ""attribute 'transposeB' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WarpgroupMmaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WarpgroupMmaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupMatrixDescriptorType> WarpgroupMmaOp::getDescriptorA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupMatrixDescriptorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupMatrixDescriptorType> WarpgroupMmaOp::getDescriptorB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupMatrixDescriptorType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType> WarpgroupMmaOp::getMatrixC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &WarpgroupMmaOp::getDescriptorAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WarpgroupMmaOp::getDescriptorBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WarpgroupMmaOp::getMatrixCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WarpgroupMmaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WarpgroupMmaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType> WarpgroupMmaOp::getMatrixD() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult WarpgroupMmaOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.transposeA;
       auto attr = dict.get("transposeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for transposeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `transposeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transposeB;
       auto attr = dict.get("transposeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for transposeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `transposeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.waitGroup;
       auto attr = dict.get("waitGroup");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for waitGroup in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `waitGroup` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WarpgroupMmaOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.transposeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transposeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.transposeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transposeB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.waitGroup;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("waitGroup",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WarpgroupMmaOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.transposeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.transposeB.getAsOpaquePointer()), 
    llvm::hash_value(prop.waitGroup.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WarpgroupMmaOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "transposeA")
      return prop.transposeA;

    if (name == "transposeB")
      return prop.transposeB;

    if (name == "waitGroup")
      return prop.waitGroup;
  return std::nullopt;
}

void WarpgroupMmaOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "transposeA") {
       prop.transposeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transposeA)>>(value);
       return;
    }

    if (name == "transposeB") {
       prop.transposeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transposeB)>>(value);
       return;
    }

    if (name == "waitGroup") {
       prop.waitGroup = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.waitGroup)>>(value);
       return;
    }
}

void WarpgroupMmaOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.transposeA) attrs.append("transposeA", prop.transposeA);

    if (prop.transposeB) attrs.append("transposeB", prop.transposeB);

    if (prop.waitGroup) attrs.append("waitGroup", prop.waitGroup);
}

::mlir::LogicalResult WarpgroupMmaOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTransposeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(attr, "transposeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(attr, "transposeB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getWaitGroupAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(attr, "waitGroup", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WarpgroupMmaOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.transposeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transposeB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.waitGroup)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WarpgroupMmaOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.transposeA);

  writer.writeOptionalAttribute(prop.transposeB);

  writer.writeOptionalAttribute(prop.waitGroup);
}

::mlir::IntegerAttr WarpgroupMmaOp::getWaitGroupAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().waitGroup);
}

uint32_t WarpgroupMmaOp::getWaitGroup() {
  auto attr = getWaitGroupAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), 1).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr WarpgroupMmaOp::getTransposeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transposeA);
}

::std::optional<bool> WarpgroupMmaOp::getTransposeA() {
  auto attr = getTransposeAAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::UnitAttr WarpgroupMmaOp::getTransposeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transposeB);
}

::std::optional<bool> WarpgroupMmaOp::getTransposeB() {
  auto attr = getTransposeBAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void WarpgroupMmaOp::setWaitGroupAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getWaitGroupAttrName(), attr);
}

void WarpgroupMmaOp::setWaitGroup(::std::optional<uint32_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getWaitGroupAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), *attrValue));
    (*this)->removeAttr(getWaitGroupAttrName());
}

void WarpgroupMmaOp::setTransposeAAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTransposeAAttrName(), attr);
}

void WarpgroupMmaOp::setTransposeA(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTransposeAAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTransposeAAttrName());
}

void WarpgroupMmaOp::setTransposeBAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTransposeBAttrName(), attr);
}

void WarpgroupMmaOp::setTransposeB(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTransposeBAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTransposeBAttrName());
}

::mlir::Attribute WarpgroupMmaOp::removeWaitGroupAttr() {
    auto &attr = getProperties().waitGroup;
    attr = {};
    return attr;
}

::mlir::Attribute WarpgroupMmaOp::removeTransposeAAttr() {
    auto &attr = getProperties().transposeA;
    attr = {};
    return attr;
}

::mlir::Attribute WarpgroupMmaOp::removeTransposeBAttr() {
    auto &attr = getProperties().transposeB;
    attr = {};
    return attr;
}

void WarpgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type matrixD, ::mlir::Value descriptorA, ::mlir::Value descriptorB, /*optional*/::mlir::IntegerAttr waitGroup, /*optional*/::mlir::UnitAttr transposeA, /*optional*/::mlir::UnitAttr transposeB, ::mlir::Value matrixC) {
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.addOperands(matrixC);
  if (waitGroup) {
    odsState.getOrAddProperties<Properties>().waitGroup = waitGroup;
  }
  if (transposeA) {
    odsState.getOrAddProperties<Properties>().transposeA = transposeA;
  }
  if (transposeB) {
    odsState.getOrAddProperties<Properties>().transposeB = transposeB;
  }
  odsState.addTypes(matrixD);
}

void WarpgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value descriptorA, ::mlir::Value descriptorB, /*optional*/::mlir::IntegerAttr waitGroup, /*optional*/::mlir::UnitAttr transposeA, /*optional*/::mlir::UnitAttr transposeB, ::mlir::Value matrixC) {
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.addOperands(matrixC);
  if (waitGroup) {
    odsState.getOrAddProperties<Properties>().waitGroup = waitGroup;
  }
  if (transposeA) {
    odsState.getOrAddProperties<Properties>().transposeA = transposeA;
  }
  if (transposeB) {
    odsState.getOrAddProperties<Properties>().transposeB = transposeB;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type matrixD, ::mlir::Value descriptorA, ::mlir::Value descriptorB, /*optional*/uint32_t waitGroup, /*optional*/::mlir::UnitAttr transposeA, /*optional*/::mlir::UnitAttr transposeB, ::mlir::Value matrixC) {
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.addOperands(matrixC);
  odsState.getOrAddProperties<Properties>().waitGroup = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), waitGroup);
  if (transposeA) {
    odsState.getOrAddProperties<Properties>().transposeA = transposeA;
  }
  if (transposeB) {
    odsState.getOrAddProperties<Properties>().transposeB = transposeB;
  }
  odsState.addTypes(matrixD);
}

void WarpgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value descriptorA, ::mlir::Value descriptorB, /*optional*/uint32_t waitGroup, /*optional*/::mlir::UnitAttr transposeA, /*optional*/::mlir::UnitAttr transposeB, ::mlir::Value matrixC) {
  odsState.addOperands(descriptorA);
  odsState.addOperands(descriptorB);
  odsState.addOperands(matrixC);
  odsState.getOrAddProperties<Properties>().waitGroup = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), waitGroup);
  if (transposeA) {
    odsState.getOrAddProperties<Properties>().transposeA = transposeA;
  }
  if (transposeB) {
    odsState.getOrAddProperties<Properties>().transposeB = transposeB;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpgroupMmaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WarpgroupMmaOp::verifyInvariantsImpl() {
  auto tblgen_transposeA = getProperties().transposeA; (void)tblgen_transposeA;
  auto tblgen_transposeB = getProperties().transposeB; (void)tblgen_transposeB;
  auto tblgen_waitGroup = getProperties().waitGroup; (void)tblgen_waitGroup;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU2(*this, tblgen_waitGroup, "waitGroup")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(*this, tblgen_transposeA, "transposeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPU1(*this, tblgen_transposeB, "transposeB")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU14(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WarpgroupMmaOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WarpgroupMmaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand descriptorARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descriptorAOperands(descriptorARawOperands);  ::llvm::SMLoc descriptorAOperandsLoc;
  (void)descriptorAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand descriptorBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descriptorBOperands(descriptorBRawOperands);  ::llvm::SMLoc descriptorBOperandsLoc;
  (void)descriptorBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand matrixCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixCOperands(matrixCRawOperands);  ::llvm::SMLoc matrixCOperandsLoc;
  (void)matrixCOperandsLoc;
  ::mlir::Type descriptorARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> descriptorATypes(descriptorARawTypes);
  ::mlir::Type descriptorBRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> descriptorBTypes(descriptorBRawTypes);
  ::mlir::Type matrixCRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixCTypes(matrixCRawTypes);
  ::mlir::Type matrixDRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixDTypes(matrixDRawTypes);

  descriptorAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descriptorARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  descriptorBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descriptorBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  matrixCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixCRawOperands[0]))
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
    ::mlir::nvgpu::WarpgroupMatrixDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    descriptorARawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::WarpgroupMatrixDescriptorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    descriptorBRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::WarpgroupAccumulatorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixCRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::WarpgroupAccumulatorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixDRawTypes[0] = type;
  }
  result.addTypes(matrixDTypes);
  if (parser.resolveOperands(descriptorAOperands, descriptorATypes, descriptorAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(descriptorBOperands, descriptorBTypes, descriptorBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(matrixCOperands, matrixCTypes, matrixCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WarpgroupMmaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getDescriptorA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDescriptorB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMatrixC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getWaitGroupAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), 1)))
       elidedAttrs.push_back("waitGroup");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getDescriptorA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupMatrixDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getDescriptorB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupMatrixDescriptorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getMatrixC().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupAccumulatorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getMatrixD().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupAccumulatorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::WarpgroupMmaOp)

namespace mlir {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::nvgpu::WarpgroupMmaStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WarpgroupMmaStoreOpGenericAdaptorBase::WarpgroupMmaStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("nvgpu.warpgroup.mma.store", odsAttrs.getContext());
}

WarpgroupMmaStoreOpGenericAdaptorBase::WarpgroupMmaStoreOpGenericAdaptorBase(WarpgroupMmaStoreOp op) : WarpgroupMmaStoreOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WarpgroupMmaStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WarpgroupMmaStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WarpgroupMmaStoreOpAdaptor::WarpgroupMmaStoreOpAdaptor(WarpgroupMmaStoreOp op) : WarpgroupMmaStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WarpgroupMmaStoreOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WarpgroupMmaStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WarpgroupMmaStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType> WarpgroupMmaStoreOp::getMatrixD() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::nvgpu::WarpgroupAccumulatorType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> WarpgroupMmaStoreOp::getDstMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &WarpgroupMmaStoreOp::getMatrixDMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &WarpgroupMmaStoreOp::getDstMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> WarpgroupMmaStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WarpgroupMmaStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void WarpgroupMmaStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value matrixD, ::mlir::Value dstMemref) {
  odsState.addOperands(matrixD);
  odsState.addOperands(dstMemref);
}

void WarpgroupMmaStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value matrixD, ::mlir::Value dstMemref) {
  odsState.addOperands(matrixD);
  odsState.addOperands(dstMemref);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpgroupMmaStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WarpgroupMmaStoreOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPU0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WarpgroupMmaStoreOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WarpgroupMmaStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand matrixDRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> matrixDOperands(matrixDRawOperands);  ::llvm::SMLoc matrixDOperandsLoc;
  (void)matrixDOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dstMemrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstMemrefOperands(dstMemrefRawOperands);  ::llvm::SMLoc dstMemrefOperandsLoc;
  (void)dstMemrefOperandsLoc;
  ::mlir::Type matrixDRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixDTypes(matrixDRawTypes);
  ::mlir::Type dstMemrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstMemrefTypes(dstMemrefRawTypes);

  matrixDOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(matrixDRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  dstMemrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstMemrefRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::nvgpu::WarpgroupAccumulatorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    matrixDRawTypes[0] = type;
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstMemrefRawTypes[0] = type;
  }
  if (parser.resolveOperands(matrixDOperands, matrixDTypes, matrixDOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dstMemrefOperands, dstMemrefTypes, dstMemrefOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WarpgroupMmaStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMatrixD();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDstMemref();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMatrixD().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::nvgpu::WarpgroupAccumulatorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  {
    auto type = getDstMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void WarpgroupMmaStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::nvgpu::WarpgroupMmaStoreOp)


#endif  // GET_OP_CLASSES

