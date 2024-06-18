/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: GPUOps.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::gpu::AllReduceOp,
::mlir::gpu::AllocOp,
::mlir::gpu::BarrierOp,
::mlir::gpu::BinaryOp,
::mlir::gpu::BlockDimOp,
::mlir::gpu::BlockIdOp,
::mlir::gpu::ClusterDimOp,
::mlir::gpu::ClusterIdOp,
::mlir::gpu::Create2To4SpMatOp,
::mlir::gpu::CreateBsrOp,
::mlir::gpu::CreateCooAoSOp,
::mlir::gpu::CreateCooOp,
::mlir::gpu::CreateCscOp,
::mlir::gpu::CreateCsrOp,
::mlir::gpu::CreateDnTensorOp,
::mlir::gpu::DeallocOp,
::mlir::gpu::DestroyDnTensorOp,
::mlir::gpu::DestroySpMatOp,
::mlir::gpu::DynamicSharedMemoryOp,
::mlir::gpu::GPUFuncOp,
::mlir::gpu::GPUModuleOp,
::mlir::gpu::GlobalIdOp,
::mlir::gpu::GridDimOp,
::mlir::gpu::HostRegisterOp,
::mlir::gpu::HostUnregisterOp,
::mlir::gpu::LaneIdOp,
::mlir::gpu::LaunchFuncOp,
::mlir::gpu::LaunchOp,
::mlir::gpu::MemcpyOp,
::mlir::gpu::MemsetOp,
::mlir::gpu::ModuleEndOp,
::mlir::gpu::NumSubgroupsOp,
::mlir::gpu::PrintfOp,
::mlir::gpu::ReturnOp,
::mlir::gpu::SDDMMBufferSizeOp,
::mlir::gpu::SDDMMOp,
::mlir::gpu::SetCsrPointersOp,
::mlir::gpu::SetDefaultDeviceOp,
::mlir::gpu::ShuffleOp,
::mlir::gpu::SpGEMMCopyOp,
::mlir::gpu::SpGEMMCreateDescrOp,
::mlir::gpu::SpGEMMDestroyDescrOp,
::mlir::gpu::SpGEMMWorkEstimationOrComputeOp,
::mlir::gpu::SpMMBufferSizeOp,
::mlir::gpu::SpMMOp,
::mlir::gpu::SpMVBufferSizeOp,
::mlir::gpu::SpMVOp,
::mlir::gpu::SpMatGetSizeOp,
::mlir::gpu::SubgroupIdOp,
::mlir::gpu::SubgroupMmaComputeOp,
::mlir::gpu::SubgroupMmaConstantMatrixOp,
::mlir::gpu::SubgroupMmaElementwiseOp,
::mlir::gpu::SubgroupMmaLoadMatrixOp,
::mlir::gpu::SubgroupMmaStoreMatrixOp,
::mlir::gpu::SubgroupReduceOp,
::mlir::gpu::SubgroupSizeOp,
::mlir::gpu::TerminatorOp,
::mlir::gpu::ThreadIdOp,
::mlir::gpu::WaitOp,
::mlir::gpu::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace gpu {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger())) || ((::llvm::isa<::mlir::FloatType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Integer or Float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::gpu::AsyncTokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::gpu::AsyncTokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be async token type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((llvm::isa<::mlir::gpu::SparseSpMatHandleType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be sparse matrix handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((llvm::isa<::mlir::gpu::SparseDnTensorHandleType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be dense tensor handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1D memref of 8-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::UnrankedMemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be unranked.memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::IndexType>(type))) || ((type.isSignlessInteger(32))) || ((type.isSignlessInteger(64))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index or 32-bit signless integer or 64-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::IntegerType>(type))) || ((::llvm::isa<::mlir::IndexType>(type))) || ((::llvm::isa<::mlir::FloatType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of integer or index or floating-point, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps15(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger(32))) || ((type.isSignlessInteger(64))) || ((type.isF32())) || ((type.isF64())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be i32, i64, f32 or f64, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps16(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps17(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((llvm::isa<::mlir::gpu::SparseSpGEMMOpHandleType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be SpGEMM operation handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps18(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of memref of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps19(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::gpu::MMAMatrixType>(type))) && (((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isSignedInteger(8))) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isUnsignedInteger(8))) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isF16())) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isF32()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be gpu.mma_matrix of 8-bit signed integer or 8-bit unsigned integer or 16-bit float or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps20(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::gpu::MMAMatrixType>(type))) && (((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isSignlessInteger(32))) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isF16())) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isF32()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be gpu.mma_matrix of 32-bit signless integer or 16-bit float or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps21(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::gpu::MMAMatrixType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be MMAMatrix type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps22(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignedInteger(8))) || ((type.isUnsignedInteger(8))) || ((type.isSignlessInteger(32))) || ((type.isF16())) || ((type.isF32())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 8-bit signed integer or 8-bit unsigned integer or 32-bit signless integer or 16-bit float or 32-bit float, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps23(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::gpu::MMAMatrixType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of MMAMatrix type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps24(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::MemRefType>(type))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(32))) || ((elementType.isF16())) || ((elementType.isF32())) || (((((::llvm::isa<::mlir::VectorType>(elementType))) && ((::llvm::cast<::mlir::VectorType>(elementType).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger(8))) || ((elementType.isSignlessInteger(32))) || ((elementType.isF16())) || ((elementType.isF32())); }(::llvm::cast<::mlir::ShapedType>(elementType).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(elementType))) && ((::llvm::cast<::mlir::VectorType>(elementType).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(elementType).getRank()
                           == 1)))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of 8-bit signless integer or 32-bit signless integer or 16-bit float or 32-bit float or vector of 8-bit signless integer or 32-bit signless integer or 16-bit float or 32-bit float values of ranks 1 values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps25(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::gpu::MMAMatrixType>(type))) && (((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isSignedInteger(8))) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isUnsignedInteger(8))) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isSignlessInteger(32))) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isF16())) || ((::llvm::cast<::mlir::gpu::MMAMatrixType>(type).getElementType().isF32()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be gpu.mma_matrix of 8-bit signed integer or 8-bit unsigned integer or 32-bit signless integer or 16-bit float or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUOps26(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isSignlessInteger())) || ((::llvm::isa<::mlir::FloatType>(type)))) || (((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return ((elementType.isSignlessInteger())) || ((::llvm::isa<::mlir::FloatType>(elementType))); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) && ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ((::llvm::cast<::mlir::VectorType>(type).getRank()
                           == 1)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Integer or Float or vector of Integer or Float values of ranks 1, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::AllReduceOperationAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: built-in reduction operations supported by gpu.allreduce.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((true)) && ((attr.hasTrait<::mlir::gpu::OffloadingTranslationAttrTrait>()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute with the `OffloadingTranslationAttrTrait` trait.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::gpu::ObjectAttr>(attr))); }))) && ((::llvm::cast<::mlir::ArrayAttr>(attr).size() >= 1))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: an array of GPU object attributes with at least 1 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::DimensionAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::Prune2To4SpMatFlagAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: pruning strategy for 2:4 sparse matrix";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: type attribute of function type";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Array of dictionary attributes";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((true)) && ((attr.hasPromiseOrImplementsInterface<::mlir::gpu::TargetAttrInterface>()))); }))) && ((::llvm::cast<::mlir::ArrayAttr>(attr).size() >= 1))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: array of GPU target attributes with at least 1 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::SymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any type attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::ShuffleModeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Indexing modes supported by gpu.shuffle.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps14(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: choose whether spgemm_work_estimation_or_compute does work estimation or compute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps14(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps14(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps15(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::gpu::MMAElementwiseOpAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: elementwise operation to apply to mma matrix";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps15(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps15(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps16(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: index attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUOps16(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUOps16(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_GPUOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_GPUOps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace gpu
} // namespace mlir
namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::AllReduceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllReduceOpGenericAdaptorBase::AllReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.all_reduce", odsAttrs.getContext());
}

AllReduceOpGenericAdaptorBase::AllReduceOpGenericAdaptorBase(AllReduceOp op) : AllReduceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllReduceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllReduceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::AllReduceOperationAttr AllReduceOpGenericAdaptorBase::getOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::AllReduceOperationAttr>(getProperties().op);
  return attr;
}

::std::optional<::mlir::gpu::AllReduceOperation> AllReduceOpGenericAdaptorBase::getOp() {
  auto attr = getOpAttr();
  return attr ? ::std::optional<::mlir::gpu::AllReduceOperation>(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr AllReduceOpGenericAdaptorBase::getUniformAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().uniform);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool AllReduceOpGenericAdaptorBase::getUniform() {
  auto attr = getUniformAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &AllReduceOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange AllReduceOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
AllReduceOpAdaptor::AllReduceOpAdaptor(AllReduceOp op) : AllReduceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllReduceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_op = getProperties().op; (void)tblgen_op;
  auto tblgen_uniform = getProperties().uniform; (void)tblgen_uniform;

  if (tblgen_op && !((::llvm::isa<::mlir::gpu::AllReduceOperationAttr>(tblgen_op))))
    return emitError(loc, "'gpu.all_reduce' op ""attribute 'op' failed to satisfy constraint: built-in reduction operations supported by gpu.allreduce.");

  if (tblgen_uniform && !((::llvm::isa<::mlir::UnitAttr>(tblgen_uniform))))
    return emitError(loc, "'gpu.all_reduce' op ""attribute 'uniform' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllReduceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllReduceOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllReduceOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllReduceOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Region &AllReduceOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult AllReduceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.op;
       auto attr = dict.get("op");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for op in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.uniform;
       auto attr = dict.get("uniform");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for uniform in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `uniform` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AllReduceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.uniform;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("uniform",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AllReduceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.op.getAsOpaquePointer()), 
    llvm::hash_value(prop.uniform.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AllReduceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "op")
      return prop.op;

    if (name == "uniform")
      return prop.uniform;
  return std::nullopt;
}

void AllReduceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "op") {
       prop.op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op)>>(value);
       return;
    }

    if (name == "uniform") {
       prop.uniform = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.uniform)>>(value);
       return;
    }
}

void AllReduceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.op) attrs.append("op", prop.op);

    if (prop.uniform) attrs.append("uniform", prop.uniform);
}

::mlir::LogicalResult AllReduceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps0(attr, "op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUniformAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "uniform", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AllReduceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.uniform)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllReduceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.op);

  writer.writeOptionalAttribute(prop.uniform);
}

::mlir::gpu::AllReduceOperationAttr AllReduceOp::getOpAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::AllReduceOperationAttr>(getProperties().op);
}

::std::optional<::mlir::gpu::AllReduceOperation> AllReduceOp::getOp() {
  auto attr = getOpAttr();
  return attr ? ::std::optional<::mlir::gpu::AllReduceOperation>(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr AllReduceOp::getUniformAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().uniform);
}

bool AllReduceOp::getUniform() {
  auto attr = getUniformAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void AllReduceOp::setOpAttr(::mlir::gpu::AllReduceOperationAttr attr) {
  (*this)->setAttr(getOpAttrName(), attr);
}

void AllReduceOp::setOp(::std::optional<::mlir::gpu::AllReduceOperation> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOpAttrName(), ::mlir::gpu::AllReduceOperationAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getOpAttrName());
}

void AllReduceOp::setUniformAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUniformAttrName(), attr);
}

void AllReduceOp::setUniform(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUniformAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUniformAttrName());
}

::mlir::Attribute AllReduceOp::removeOpAttr() {
    auto &attr = getProperties().op;
    attr = {};
    return attr;
}

::mlir::Attribute AllReduceOp::removeUniformAttr() {
    auto &attr = getProperties().uniform;
    attr = {};
    return attr;
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value, /*optional*/::mlir::gpu::AllReduceOperationAttr op, /*optional*/::mlir::UnitAttr uniform) {
  odsState.addOperands(value);
  if (op) {
    odsState.getOrAddProperties<Properties>().op = op;
  }
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = uniform;
  }
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, /*optional*/::mlir::gpu::AllReduceOperationAttr op, /*optional*/::mlir::UnitAttr uniform) {
  odsState.addOperands(value);
  if (op) {
    odsState.getOrAddProperties<Properties>().op = op;
  }
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = uniform;
  }
  (void)odsState.addRegion();

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AllReduceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, /*optional*/::mlir::gpu::AllReduceOperationAttr op, /*optional*/::mlir::UnitAttr uniform) {
  odsState.addOperands(value);
  if (op) {
    odsState.getOrAddProperties<Properties>().op = op;
  }
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = uniform;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value, /*optional*/::mlir::gpu::AllReduceOperationAttr op, /*optional*/bool uniform) {
  odsState.addOperands(value);
  if (op) {
    odsState.getOrAddProperties<Properties>().op = op;
  }
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = ((uniform) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, /*optional*/::mlir::gpu::AllReduceOperationAttr op, /*optional*/bool uniform) {
  odsState.addOperands(value);
  if (op) {
    odsState.getOrAddProperties<Properties>().op = op;
  }
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = ((uniform) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(AllReduceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, /*optional*/::mlir::gpu::AllReduceOperationAttr op, /*optional*/bool uniform) {
  odsState.addOperands(value);
  if (op) {
    odsState.getOrAddProperties<Properties>().op = op;
  }
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = ((uniform) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(AllReduceOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult AllReduceOp::verifyInvariantsImpl() {
  auto tblgen_op = getProperties().op; (void)tblgen_op;
  auto tblgen_uniform = getProperties().uniform; (void)tblgen_uniform;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps0(*this, tblgen_op, "op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_uniform, "uniform")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_GPUOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllReduceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult AllReduceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult AllReduceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::AllReduceOperationAttr opAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  {
    auto odsResult = parseAllReduceOperation(parser, opAttr);
    if (odsResult) return ::mlir::failure();
    if (opAttr)
      result.getOrAddProperties<AllReduceOp::Properties>().op = opAttr;
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("uniform"))) {
    result.getOrAddProperties<AllReduceOp::Properties>().uniform = parser.getBuilder().getUnitAttr();  }

  if (parser.parseRegion(*bodyRegion))
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
  result.addRegion(std::move(bodyRegion));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(valueOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllReduceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAllReduceOperation(_odsPrinter, *this, getOpAttr());
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  if (getUniformAttr()) {
    _odsPrinter << ' ' << "uniform";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getBody());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("op");
  elidedAttrs.push_back("uniform");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUniformAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("uniform");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::AllReduceOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::AllocOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllocOpGenericAdaptorBase::AllocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.alloc", odsAttrs.getContext());
}

AllocOpGenericAdaptorBase::AllocOpGenericAdaptorBase(AllocOp op) : AllocOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllocOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr AllocOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr AllocOpGenericAdaptorBase::getHostSharedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().hostShared);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool AllocOpGenericAdaptorBase::getHostShared() {
  auto attr = getHostSharedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
AllocOpAdaptor::AllocOpAdaptor(AllocOp op) : AllocOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllocOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_hostShared = getProperties().hostShared; (void)tblgen_hostShared;

  if (tblgen_hostShared && !((::llvm::isa<::mlir::UnitAttr>(tblgen_hostShared))))
    return emitError(loc, "'gpu.alloc' op ""attribute 'hostShared' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void AllocOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "memref");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> AllocOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range AllocOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AllocOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range AllocOp::getDynamicSizes() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range AllocOp::getSymbolOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange AllocOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange AllocOp::getDynamicSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange AllocOp::getSymbolOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> AllocOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range AllocOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> AllocOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSResults(0).begin());
}

::mlir::Value AllocOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult AllocOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.hostShared;
       auto attr = dict.get("hostShared");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hostShared in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hostShared` in property conversion: " << attr;
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

::mlir::Attribute AllocOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.hostShared;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hostShared",
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

llvm::hash_code AllocOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.hostShared.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> AllocOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "hostShared")
      return prop.hostShared;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void AllocOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "hostShared") {
       prop.hostShared = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hostShared)>>(value);
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

void AllocOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.hostShared) attrs.append("hostShared", prop.hostShared);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult AllocOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getHostSharedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "hostShared", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AllocOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.hostShared)))
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

void AllocOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.hostShared);

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

::mlir::UnitAttr AllocOp::getHostSharedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().hostShared);
}

bool AllocOp::getHostShared() {
  auto attr = getHostSharedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void AllocOp::setHostSharedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getHostSharedAttrName(), attr);
}

void AllocOp::setHostShared(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getHostSharedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getHostSharedAttrName());
}

::mlir::Attribute AllocOp::removeHostSharedAttr() {
    auto &attr = getProperties().hostShared;
    attr = {};
    return attr;
}

void AllocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type memref, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::ValueRange dynamicSizes, ::mlir::ValueRange symbolOperands, /*optional*/::mlir::UnitAttr hostShared) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dynamicSizes);
  odsState.addOperands(symbolOperands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), static_cast<int32_t>(dynamicSizes.size()), static_cast<int32_t>(symbolOperands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (hostShared) {
    odsState.getOrAddProperties<Properties>().hostShared = hostShared;
  }
  odsState.addTypes(memref);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void AllocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::ValueRange dynamicSizes, ::mlir::ValueRange symbolOperands, /*optional*/::mlir::UnitAttr hostShared) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dynamicSizes);
  odsState.addOperands(symbolOperands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), static_cast<int32_t>(dynamicSizes.size()), static_cast<int32_t>(symbolOperands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (hostShared) {
    odsState.getOrAddProperties<Properties>().hostShared = hostShared;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type memref, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::ValueRange dynamicSizes, ::mlir::ValueRange symbolOperands, /*optional*/bool hostShared) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dynamicSizes);
  odsState.addOperands(symbolOperands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), static_cast<int32_t>(dynamicSizes.size()), static_cast<int32_t>(symbolOperands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (hostShared) {
    odsState.getOrAddProperties<Properties>().hostShared = ((hostShared) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(memref);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void AllocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::ValueRange dynamicSizes, ::mlir::ValueRange symbolOperands, /*optional*/bool hostShared) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dynamicSizes);
  odsState.addOperands(symbolOperands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), static_cast<int32_t>(dynamicSizes.size()), static_cast<int32_t>(symbolOperands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (hostShared) {
    odsState.getOrAddProperties<Properties>().hostShared = ((hostShared) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllocOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllocOp::verifyInvariantsImpl() {
  auto tblgen_hostShared = getProperties().hostShared; (void)tblgen_hostShared;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_hostShared, "hostShared")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllocOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AllocOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dynamicSizesOperands;
  ::llvm::SMLoc dynamicSizesOperandsLoc;
  (void)dynamicSizesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> symbolOperandsOperands;
  ::llvm::SMLoc symbolOperandsOperandsLoc;
  (void)symbolOperandsOperandsLoc;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("host_shared"))) {
    result.getOrAddProperties<AllocOp::Properties>().hostShared = parser.getBuilder().getUnitAttr();  }
  if (parser.parseLParen())
    return ::mlir::failure();

  dynamicSizesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(dynamicSizesOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLSquare())) {

  symbolOperandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(symbolOperandsOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
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
    memrefRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependenciesOperands.size()), static_cast<int32_t>(dynamicSizesOperands.size()), static_cast<int32_t>(symbolOperandsOperands.size())}), result.getOrAddProperties<AllocOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(memrefTypes);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dynamicSizesOperands, odsBuildableType1, dynamicSizesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(symbolOperandsOperands, odsBuildableType1, symbolOperandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllocOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  if (getHostSharedAttr()) {
    _odsPrinter << ' ';
    _odsPrinter << "host_shared";
  }
  _odsPrinter << ' ';
  _odsPrinter << "(";
  _odsPrinter << getDynamicSizes();
  _odsPrinter << ")";
  if (!getSymbolOperands().empty()) {
    _odsPrinter << "[";
    _odsPrinter << getSymbolOperands();
    _odsPrinter << "]";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("hostShared");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHostSharedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("hostShared");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AllocOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSResults(0))
    effects.emplace_back(::mlir::MemoryEffects::Allocate::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::AllocOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::BarrierOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BarrierOpGenericAdaptorBase::BarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.barrier", odsAttrs.getContext());
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

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::BarrierOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::BinaryOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BinaryOpGenericAdaptorBase::BinaryOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.binary", odsAttrs.getContext());
}

BinaryOpGenericAdaptorBase::BinaryOpGenericAdaptorBase(BinaryOp op) : BinaryOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BinaryOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BinaryOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr BinaryOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef BinaryOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::Attribute BinaryOpGenericAdaptorBase::getOffloadingHandlerAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().offloadingHandler);
  return attr;
}

::std::optional<::mlir::Attribute> BinaryOpGenericAdaptorBase::getOffloadingHandler() {
  auto attr = getOffloadingHandlerAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::ArrayAttr BinaryOpGenericAdaptorBase::getObjectsAttr() {
  auto attr = ::llvm::cast<::mlir::ArrayAttr>(getProperties().objects);
  return attr;
}

::mlir::ArrayAttr BinaryOpGenericAdaptorBase::getObjects() {
  auto attr = getObjectsAttr();
  return attr;
}

} // namespace detail
BinaryOpAdaptor::BinaryOpAdaptor(BinaryOp op) : BinaryOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BinaryOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_objects = getProperties().objects; (void)tblgen_objects;
  if (!tblgen_objects) return emitError(loc, "'gpu.binary' op ""requires attribute 'objects'");
  auto tblgen_offloadingHandler = getProperties().offloadingHandler; (void)tblgen_offloadingHandler;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'gpu.binary' op ""requires attribute 'sym_name'");

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'gpu.binary' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_offloadingHandler && !(((true)) && ((tblgen_offloadingHandler.hasTrait<::mlir::gpu::OffloadingTranslationAttrTrait>()))))
    return emitError(loc, "'gpu.binary' op ""attribute 'offloadingHandler' failed to satisfy constraint: any attribute with the `OffloadingTranslationAttrTrait` trait.");

  if (tblgen_objects && !((((::llvm::isa<::mlir::ArrayAttr>(tblgen_objects))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_objects), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::gpu::ObjectAttr>(attr))); }))) && ((::llvm::cast<::mlir::ArrayAttr>(tblgen_objects).size() >= 1))))
    return emitError(loc, "'gpu.binary' op ""attribute 'objects' failed to satisfy constraint: an array of GPU object attributes with at least 1 elements");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BinaryOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BinaryOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BinaryOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BinaryOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult BinaryOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.objects;
       auto attr = dict.get("objects");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for objects in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `objects` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.offloadingHandler;
       auto attr = dict.get("offloadingHandler");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for offloadingHandler in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `offloadingHandler` in property conversion: " << attr;
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
  return ::mlir::success();
}

::mlir::Attribute BinaryOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.objects;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("objects",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.offloadingHandler;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("offloadingHandler",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code BinaryOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.objects.getAsOpaquePointer()), 
    llvm::hash_value(prop.offloadingHandler.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BinaryOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "objects")
      return prop.objects;

    if (name == "offloadingHandler")
      return prop.offloadingHandler;

    if (name == "sym_name")
      return prop.sym_name;
  return std::nullopt;
}

void BinaryOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "objects") {
       prop.objects = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.objects)>>(value);
       return;
    }

    if (name == "offloadingHandler") {
       prop.offloadingHandler = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.offloadingHandler)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }
}

void BinaryOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.objects) attrs.append("objects", prop.objects);

    if (prop.offloadingHandler) attrs.append("offloadingHandler", prop.offloadingHandler);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);
}

::mlir::LogicalResult BinaryOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getObjectsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps4(attr, "objects", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOffloadingHandlerAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps3(attr, "offloadingHandler", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps2(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult BinaryOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.objects)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.offloadingHandler)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BinaryOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.objects);

  writer.writeOptionalAttribute(prop.offloadingHandler);
  writer.writeAttribute(prop.sym_name);
}

::mlir::StringAttr BinaryOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef BinaryOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::Attribute BinaryOp::getOffloadingHandlerAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().offloadingHandler);
}

::std::optional<::mlir::Attribute> BinaryOp::getOffloadingHandler() {
  auto attr = getOffloadingHandlerAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::ArrayAttr BinaryOp::getObjectsAttr() {
  return ::llvm::cast<::mlir::ArrayAttr>(getProperties().objects);
}

::mlir::ArrayAttr BinaryOp::getObjects() {
  auto attr = getObjectsAttr();
  return attr;
}

void BinaryOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void BinaryOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void BinaryOp::setOffloadingHandlerAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOffloadingHandlerAttrName(), attr);
}

void BinaryOp::setObjectsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getObjectsAttrName(), attr);
}

::mlir::Attribute BinaryOp::removeOffloadingHandlerAttr() {
    auto &attr = getProperties().offloadingHandler;
    attr = {};
    return attr;
}

::mlir::LogicalResult BinaryOp::verifyInvariantsImpl() {
  auto tblgen_objects = getProperties().objects; (void)tblgen_objects;
  if (!tblgen_objects) return emitOpError("requires attribute 'objects'");
  auto tblgen_offloadingHandler = getProperties().offloadingHandler; (void)tblgen_offloadingHandler;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps2(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps3(*this, tblgen_offloadingHandler, "offloadingHandler")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps4(*this, tblgen_objects, "objects")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult BinaryOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BinaryOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::Attribute offloadingHandlerAttr;
  ::mlir::ArrayAttr objectsAttr;

  if (parser.parseSymbolName(sym_nameAttr))
    return ::mlir::failure();
  if (sym_nameAttr) result.getOrAddProperties<BinaryOp::Properties>().sym_name = sym_nameAttr;
  {
    auto odsResult = parseOffloadingHandler(parser, offloadingHandlerAttr);
    if (odsResult) return ::mlir::failure();
    if (offloadingHandlerAttr)
      result.getOrAddProperties<BinaryOp::Properties>().offloadingHandler = offloadingHandlerAttr;
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

  if (parser.parseCustomAttributeWithFallback(objectsAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (objectsAttr) result.getOrAddProperties<BinaryOp::Properties>().objects = objectsAttr;
  return ::mlir::success();
}

void BinaryOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getSymNameAttr().getValue());
  _odsPrinter << ' ';
  printOffloadingHandler(_odsPrinter, *this, getOffloadingHandlerAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("sym_name");
  elidedAttrs.push_back("offloadingHandler");
  elidedAttrs.push_back("objects");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getObjectsAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::BinaryOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::BlockDimOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockDimOpGenericAdaptorBase::BlockDimOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.block_dim", odsAttrs.getContext());
}

BlockDimOpGenericAdaptorBase::BlockDimOpGenericAdaptorBase(BlockDimOp op) : BlockDimOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockDimOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockDimOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr BlockDimOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension BlockDimOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
BlockDimOpAdaptor::BlockDimOpAdaptor(BlockDimOp op) : BlockDimOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockDimOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.block_dim' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.block_dim' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockDimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockDimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockDimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult BlockDimOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute BlockDimOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code BlockDimOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BlockDimOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void BlockDimOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void BlockDimOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult BlockDimOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult BlockDimOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BlockDimOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr BlockDimOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension BlockDimOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void BlockDimOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void BlockDimOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BlockDimOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BlockDimOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BlockDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BlockDimOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BlockDimOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockDimOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult BlockDimOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult BlockDimOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<BlockDimOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void BlockDimOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void BlockDimOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::BlockDimOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::BlockIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BlockIdOpGenericAdaptorBase::BlockIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.block_id", odsAttrs.getContext());
}

BlockIdOpGenericAdaptorBase::BlockIdOpGenericAdaptorBase(BlockIdOp op) : BlockIdOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BlockIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BlockIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr BlockIdOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension BlockIdOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
BlockIdOpAdaptor::BlockIdOpAdaptor(BlockIdOp op) : BlockIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BlockIdOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.block_id' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.block_id' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BlockIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BlockIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BlockIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult BlockIdOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute BlockIdOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code BlockIdOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BlockIdOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void BlockIdOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void BlockIdOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult BlockIdOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult BlockIdOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BlockIdOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr BlockIdOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension BlockIdOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void BlockIdOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void BlockIdOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BlockIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(BlockIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BlockIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(BlockIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult BlockIdOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BlockIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult BlockIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult BlockIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<BlockIdOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void BlockIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void BlockIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::BlockIdOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::ClusterDimOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterDimOpGenericAdaptorBase::ClusterDimOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.cluster_dim", odsAttrs.getContext());
}

ClusterDimOpGenericAdaptorBase::ClusterDimOpGenericAdaptorBase(ClusterDimOp op) : ClusterDimOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterDimOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterDimOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr ClusterDimOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension ClusterDimOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
ClusterDimOpAdaptor::ClusterDimOpAdaptor(ClusterDimOp op) : ClusterDimOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterDimOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.cluster_dim' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.cluster_dim' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterDimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterDimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterDimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterDimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ClusterDimOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ClusterDimOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ClusterDimOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ClusterDimOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void ClusterDimOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void ClusterDimOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult ClusterDimOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ClusterDimOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ClusterDimOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr ClusterDimOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension ClusterDimOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void ClusterDimOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void ClusterDimOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ClusterDimOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ClusterDimOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterDimOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ClusterDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ClusterDimOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ClusterDimOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterDimOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ClusterDimOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ClusterDimOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<ClusterDimOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void ClusterDimOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void ClusterDimOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::ClusterDimOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::ClusterIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterIdOpGenericAdaptorBase::ClusterIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.cluster_id", odsAttrs.getContext());
}

ClusterIdOpGenericAdaptorBase::ClusterIdOpGenericAdaptorBase(ClusterIdOp op) : ClusterIdOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ClusterIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ClusterIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr ClusterIdOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension ClusterIdOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
ClusterIdOpAdaptor::ClusterIdOpAdaptor(ClusterIdOp op) : ClusterIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterIdOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.cluster_id' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.cluster_id' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ClusterIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClusterIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ClusterIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClusterIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ClusterIdOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ClusterIdOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ClusterIdOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ClusterIdOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void ClusterIdOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void ClusterIdOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult ClusterIdOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ClusterIdOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ClusterIdOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr ClusterIdOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension ClusterIdOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void ClusterIdOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void ClusterIdOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ClusterIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ClusterIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ClusterIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ClusterIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ClusterIdOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ClusterIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ClusterIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<ClusterIdOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void ClusterIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void ClusterIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::ClusterIdOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::Create2To4SpMatOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
Create2To4SpMatOpGenericAdaptorBase::Create2To4SpMatOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_2to4_spmat", odsAttrs.getContext());
}

Create2To4SpMatOpGenericAdaptorBase::Create2To4SpMatOpGenericAdaptorBase(Create2To4SpMatOp op) : Create2To4SpMatOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> Create2To4SpMatOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::DictionaryAttr Create2To4SpMatOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::Prune2To4SpMatFlagAttr Create2To4SpMatOpGenericAdaptorBase::getPruneFlagAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::Prune2To4SpMatFlagAttr>(getProperties().pruneFlag);
  return attr;
}

::mlir::gpu::Prune2To4SpMatFlag Create2To4SpMatOpGenericAdaptorBase::getPruneFlag() {
  auto attr = getPruneFlagAttr();
  return attr.getValue();
}

} // namespace detail
Create2To4SpMatOpAdaptor::Create2To4SpMatOpAdaptor(Create2To4SpMatOp op) : Create2To4SpMatOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult Create2To4SpMatOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_pruneFlag = getProperties().pruneFlag; (void)tblgen_pruneFlag;

  if (tblgen_pruneFlag && !((::llvm::isa<::mlir::gpu::Prune2To4SpMatFlagAttr>(tblgen_pruneFlag))))
    return emitError(loc, "'gpu.create_2to4_spmat' op ""attribute 'pruneFlag' failed to satisfy constraint: pruning strategy for 2:4 sparse matrix");
  return ::mlir::success();
}

void Create2To4SpMatOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "spMat");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> Create2To4SpMatOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::Operation::operand_range Create2To4SpMatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range Create2To4SpMatOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> Create2To4SpMatOp::getRows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> Create2To4SpMatOp::getCols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::MemRefType> Create2To4SpMatOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(3).begin());
}

::mlir::MutableOperandRange Create2To4SpMatOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &Create2To4SpMatOp::getRowsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Create2To4SpMatOp::getColsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &Create2To4SpMatOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> Create2To4SpMatOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range Create2To4SpMatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Create2To4SpMatOp::getSpMat() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value Create2To4SpMatOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult Create2To4SpMatOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.pruneFlag;
       auto attr = dict.get("pruneFlag");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for pruneFlag in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pruneFlag` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute Create2To4SpMatOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.pruneFlag;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pruneFlag",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code Create2To4SpMatOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.pruneFlag.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> Create2To4SpMatOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "pruneFlag")
      return prop.pruneFlag;
  return std::nullopt;
}

void Create2To4SpMatOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "pruneFlag") {
       prop.pruneFlag = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pruneFlag)>>(value);
       return;
    }
}

void Create2To4SpMatOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.pruneFlag) attrs.append("pruneFlag", prop.pruneFlag);
}

::mlir::LogicalResult Create2To4SpMatOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPruneFlagAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps6(attr, "pruneFlag", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult Create2To4SpMatOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.pruneFlag)))
    return ::mlir::failure();
  return ::mlir::success();
}

void Create2To4SpMatOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.pruneFlag);
}

::mlir::gpu::Prune2To4SpMatFlagAttr Create2To4SpMatOp::getPruneFlagAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::Prune2To4SpMatFlagAttr>(getProperties().pruneFlag);
}

::mlir::gpu::Prune2To4SpMatFlag Create2To4SpMatOp::getPruneFlag() {
  auto attr = getPruneFlagAttr();
  return attr.getValue();
}

void Create2To4SpMatOp::setPruneFlagAttr(::mlir::gpu::Prune2To4SpMatFlagAttr attr) {
  (*this)->setAttr(getPruneFlagAttrName(), attr);
}

void Create2To4SpMatOp::setPruneFlag(::mlir::gpu::Prune2To4SpMatFlag attrValue) {
  (*this)->setAttr(getPruneFlagAttrName(), ::mlir::gpu::Prune2To4SpMatFlagAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void Create2To4SpMatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spMat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::gpu::Prune2To4SpMatFlagAttr pruneFlag, ::mlir::Value memref) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(memref);
  if (pruneFlag) {
    odsState.getOrAddProperties<Properties>().pruneFlag = pruneFlag;
  }
  odsState.addTypes(spMat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void Create2To4SpMatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::gpu::Prune2To4SpMatFlagAttr pruneFlag, ::mlir::Value memref) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(memref);
  if (pruneFlag) {
    odsState.getOrAddProperties<Properties>().pruneFlag = pruneFlag;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Create2To4SpMatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spMat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::gpu::Prune2To4SpMatFlag pruneFlag, ::mlir::Value memref) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(memref);
  odsState.getOrAddProperties<Properties>().pruneFlag = ::mlir::gpu::Prune2To4SpMatFlagAttr::get(odsBuilder.getContext(), pruneFlag);
  odsState.addTypes(spMat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void Create2To4SpMatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::gpu::Prune2To4SpMatFlag pruneFlag, ::mlir::Value memref) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(memref);
  odsState.getOrAddProperties<Properties>().pruneFlag = ::mlir::gpu::Prune2To4SpMatFlagAttr::get(odsBuilder.getContext(), pruneFlag);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Create2To4SpMatOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Create2To4SpMatOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.pruneFlag)
    properties.pruneFlag = ::mlir::gpu::Prune2To4SpMatFlagAttr::get(odsBuilder.getContext(), Prune2To4SpMatFlag::PRUNE_AND_CHECK);
}

::mlir::LogicalResult Create2To4SpMatOp::verifyInvariantsImpl() {
  auto tblgen_pruneFlag = getProperties().pruneFlag; (void)tblgen_pruneFlag;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps6(*this, tblgen_pruneFlag, "pruneFlag")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult Create2To4SpMatOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult Create2To4SpMatOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::gpu::Prune2To4SpMatFlagAttr pruneFlagAttr;
  ::mlir::OpAsmParser::UnresolvedOperand rowsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowsOperands(rowsRawOperands);  ::llvm::SMLoc rowsOperandsLoc;
  (void)rowsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colsOperands(colsRawOperands);  ::llvm::SMLoc colsOperandsLoc;
  (void)colsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }
  if (parser.parseLBrace())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(pruneFlagAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (pruneFlagAttr) result.getOrAddProperties<Create2To4SpMatOp::Properties>().pruneFlag = pruneFlagAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();

  rowsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
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
    memrefRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowsOperands, odsBuildableType2, rowsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colsOperands, odsBuildableType2, colsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void Create2To4SpMatOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << "{";
_odsPrinter.printStrippedAttrOrType(getPruneFlagAttr());
  _odsPrinter << "}";
  _odsPrinter << ' ';
  _odsPrinter << getRows();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCols();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("pruneFlag");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPruneFlagAttr();
     if(attr && (attr == ::mlir::gpu::Prune2To4SpMatFlagAttr::get(odsBuilder.getContext(), Prune2To4SpMatFlag::PRUNE_AND_CHECK)))
       elidedAttrs.push_back("pruneFlag");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::Create2To4SpMatOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::CreateBsrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateBsrOpGenericAdaptorBase::CreateBsrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_bsr", odsAttrs.getContext());
}

CreateBsrOpGenericAdaptorBase::CreateBsrOpGenericAdaptorBase(CreateBsrOp op) : CreateBsrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateBsrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 8) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CreateBsrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateBsrOpAdaptor::CreateBsrOpAdaptor(CreateBsrOp op) : CreateBsrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateBsrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void CreateBsrOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "spmat");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> CreateBsrOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 8) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CreateBsrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateBsrOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> CreateBsrOp::getBrows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateBsrOp::getBcols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateBsrOp::getBnnz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateBsrOp::getRBlockSize() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateBsrOp::getCBlockSize() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(5).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateBsrOp::getBRowPos() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(6).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateBsrOp::getBColIdxs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(7).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateBsrOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(8).begin());
}

::mlir::MutableOperandRange CreateBsrOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &CreateBsrOp::getBrowsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getBcolsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getBnnzMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getRBlockSizeMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getCBlockSizeMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getBRowPosMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getBColIdxsMutable() {
  auto range = getODSOperandIndexAndLength(7);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateBsrOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(8);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateBsrOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CreateBsrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateBsrOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value CreateBsrOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void CreateBsrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spmat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value brows, ::mlir::Value bcols, ::mlir::Value bnnz, ::mlir::Value rBlockSize, ::mlir::Value cBlockSize, ::mlir::Value bRowPos, ::mlir::Value bColIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(brows);
  odsState.addOperands(bcols);
  odsState.addOperands(bnnz);
  odsState.addOperands(rBlockSize);
  odsState.addOperands(cBlockSize);
  odsState.addOperands(bRowPos);
  odsState.addOperands(bColIdxs);
  odsState.addOperands(values);
  odsState.addTypes(spmat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void CreateBsrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value brows, ::mlir::Value bcols, ::mlir::Value bnnz, ::mlir::Value rBlockSize, ::mlir::Value cBlockSize, ::mlir::Value bRowPos, ::mlir::Value bColIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(brows);
  odsState.addOperands(bcols);
  odsState.addOperands(bnnz);
  odsState.addOperands(rBlockSize);
  odsState.addOperands(cBlockSize);
  odsState.addOperands(bRowPos);
  odsState.addOperands(bColIdxs);
  odsState.addOperands(values);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateBsrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 8u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateBsrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup8 = getODSOperands(8);

    for (auto v : valueGroup8) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateBsrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateBsrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand browsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> browsOperands(browsRawOperands);  ::llvm::SMLoc browsOperandsLoc;
  (void)browsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bcolsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bcolsOperands(bcolsRawOperands);  ::llvm::SMLoc bcolsOperandsLoc;
  (void)bcolsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bnnzRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bnnzOperands(bnnzRawOperands);  ::llvm::SMLoc bnnzOperandsLoc;
  (void)bnnzOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rBlockSizeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rBlockSizeOperands(rBlockSizeRawOperands);  ::llvm::SMLoc rBlockSizeOperandsLoc;
  (void)rBlockSizeOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand cBlockSizeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> cBlockSizeOperands(cBlockSizeRawOperands);  ::llvm::SMLoc cBlockSizeOperandsLoc;
  (void)cBlockSizeOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bRowPosRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bRowPosOperands(bRowPosRawOperands);  ::llvm::SMLoc bRowPosOperandsLoc;
  (void)bRowPosOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bColIdxsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bColIdxsOperands(bColIdxsRawOperands);  ::llvm::SMLoc bColIdxsOperandsLoc;
  (void)bColIdxsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::Type bRowPosRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bRowPosTypes(bRowPosRawTypes);
  ::mlir::Type bColIdxsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bColIdxsTypes(bColIdxsRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  browsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(browsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bcolsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bcolsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bnnzOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bnnzRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rBlockSizeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rBlockSizeRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  cBlockSizeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(cBlockSizeRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bRowPosOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bRowPosRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bColIdxsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bColIdxsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
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
    bRowPosRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    bColIdxsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(browsOperands, odsBuildableType2, browsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bcolsOperands, odsBuildableType2, bcolsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bnnzOperands, odsBuildableType2, bnnzOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rBlockSizeOperands, odsBuildableType2, rBlockSizeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(cBlockSizeOperands, odsBuildableType2, cBlockSizeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bRowPosOperands, bRowPosTypes, bRowPosOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bColIdxsOperands, bColIdxsTypes, bColIdxsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateBsrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getBrows();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBcols();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBnnz();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRBlockSize();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCBlockSize();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBRowPos();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBColIdxs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBRowPos().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getBColIdxs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::CreateBsrOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::CreateCooAoSOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateCooAoSOpGenericAdaptorBase::CreateCooAoSOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_coo_aos", odsAttrs.getContext());
}

CreateCooAoSOpGenericAdaptorBase::CreateCooAoSOpGenericAdaptorBase(CreateCooAoSOp op) : CreateCooAoSOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateCooAoSOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 5) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CreateCooAoSOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateCooAoSOpAdaptor::CreateCooAoSOpAdaptor(CreateCooAoSOp op) : CreateCooAoSOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateCooAoSOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void CreateCooAoSOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "spmat");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> CreateCooAoSOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 5) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CreateCooAoSOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateCooAoSOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> CreateCooAoSOp::getRows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCooAoSOp::getCols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCooAoSOp::getNnz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCooAoSOp::getIdxs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCooAoSOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(5).begin());
}

::mlir::MutableOperandRange CreateCooAoSOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &CreateCooAoSOp::getRowsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooAoSOp::getColsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooAoSOp::getNnzMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooAoSOp::getIdxsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooAoSOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateCooAoSOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CreateCooAoSOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateCooAoSOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value CreateCooAoSOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void CreateCooAoSOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spmat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value idxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(idxs);
  odsState.addOperands(values);
  odsState.addTypes(spmat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void CreateCooAoSOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value idxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(idxs);
  odsState.addOperands(values);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateCooAoSOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateCooAoSOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateCooAoSOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateCooAoSOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowsOperands(rowsRawOperands);  ::llvm::SMLoc rowsOperandsLoc;
  (void)rowsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colsOperands(colsRawOperands);  ::llvm::SMLoc colsOperandsLoc;
  (void)colsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand nnzRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> nnzOperands(nnzRawOperands);  ::llvm::SMLoc nnzOperandsLoc;
  (void)nnzOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand idxsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> idxsOperands(idxsRawOperands);  ::llvm::SMLoc idxsOperandsLoc;
  (void)idxsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::Type idxsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> idxsTypes(idxsRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  rowsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  nnzOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nnzRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  idxsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(idxsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
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
    idxsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowsOperands, odsBuildableType2, rowsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colsOperands, odsBuildableType2, colsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(nnzOperands, odsBuildableType2, nnzOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(idxsOperands, idxsTypes, idxsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateCooAoSOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getRows();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCols();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getNnz();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIdxs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getIdxs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::CreateCooAoSOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::CreateCooOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateCooOpGenericAdaptorBase::CreateCooOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_coo", odsAttrs.getContext());
}

CreateCooOpGenericAdaptorBase::CreateCooOpGenericAdaptorBase(CreateCooOp op) : CreateCooOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateCooOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CreateCooOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateCooOpAdaptor::CreateCooOpAdaptor(CreateCooOp op) : CreateCooOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateCooOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void CreateCooOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "spmat");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> CreateCooOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CreateCooOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateCooOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> CreateCooOp::getRows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCooOp::getCols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCooOp::getNnz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCooOp::getRowIdxs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCooOp::getColIdxs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(5).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCooOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(6).begin());
}

::mlir::MutableOperandRange CreateCooOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &CreateCooOp::getRowsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooOp::getColsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooOp::getNnzMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooOp::getRowIdxsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooOp::getColIdxsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCooOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateCooOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CreateCooOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateCooOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value CreateCooOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void CreateCooOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spmat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value rowIdxs, ::mlir::Value colIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(rowIdxs);
  odsState.addOperands(colIdxs);
  odsState.addOperands(values);
  odsState.addTypes(spmat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void CreateCooOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value rowIdxs, ::mlir::Value colIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(rowIdxs);
  odsState.addOperands(colIdxs);
  odsState.addOperands(values);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateCooOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateCooOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateCooOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateCooOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowsOperands(rowsRawOperands);  ::llvm::SMLoc rowsOperandsLoc;
  (void)rowsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colsOperands(colsRawOperands);  ::llvm::SMLoc colsOperandsLoc;
  (void)colsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand nnzRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> nnzOperands(nnzRawOperands);  ::llvm::SMLoc nnzOperandsLoc;
  (void)nnzOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowIdxsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowIdxsOperands(rowIdxsRawOperands);  ::llvm::SMLoc rowIdxsOperandsLoc;
  (void)rowIdxsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colIdxsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colIdxsOperands(colIdxsRawOperands);  ::llvm::SMLoc colIdxsOperandsLoc;
  (void)colIdxsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::Type rowIdxsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rowIdxsTypes(rowIdxsRawTypes);
  ::mlir::Type colIdxsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> colIdxsTypes(colIdxsRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  rowsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  nnzOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nnzRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rowIdxsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowIdxsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colIdxsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colIdxsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
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
    rowIdxsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    colIdxsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowsOperands, odsBuildableType2, rowsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colsOperands, odsBuildableType2, colsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(nnzOperands, odsBuildableType2, nnzOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowIdxsOperands, rowIdxsTypes, rowIdxsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colIdxsOperands, colIdxsTypes, colIdxsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateCooOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getRows();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCols();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getNnz();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRowIdxs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getColIdxs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRowIdxs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getColIdxs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::CreateCooOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::CreateCscOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateCscOpGenericAdaptorBase::CreateCscOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_csc", odsAttrs.getContext());
}

CreateCscOpGenericAdaptorBase::CreateCscOpGenericAdaptorBase(CreateCscOp op) : CreateCscOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateCscOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CreateCscOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateCscOpAdaptor::CreateCscOpAdaptor(CreateCscOp op) : CreateCscOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateCscOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void CreateCscOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "spmat");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> CreateCscOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CreateCscOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateCscOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> CreateCscOp::getRows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCscOp::getCols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCscOp::getNnz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCscOp::getColPos() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCscOp::getRowIdxs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(5).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCscOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(6).begin());
}

::mlir::MutableOperandRange CreateCscOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &CreateCscOp::getRowsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCscOp::getColsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCscOp::getNnzMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCscOp::getColPosMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCscOp::getRowIdxsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCscOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateCscOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CreateCscOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateCscOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value CreateCscOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void CreateCscOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spmat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value colPos, ::mlir::Value rowIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(colPos);
  odsState.addOperands(rowIdxs);
  odsState.addOperands(values);
  odsState.addTypes(spmat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void CreateCscOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value colPos, ::mlir::Value rowIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(colPos);
  odsState.addOperands(rowIdxs);
  odsState.addOperands(values);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateCscOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateCscOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateCscOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateCscOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowsOperands(rowsRawOperands);  ::llvm::SMLoc rowsOperandsLoc;
  (void)rowsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colsOperands(colsRawOperands);  ::llvm::SMLoc colsOperandsLoc;
  (void)colsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand nnzRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> nnzOperands(nnzRawOperands);  ::llvm::SMLoc nnzOperandsLoc;
  (void)nnzOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colPosRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colPosOperands(colPosRawOperands);  ::llvm::SMLoc colPosOperandsLoc;
  (void)colPosOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowIdxsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowIdxsOperands(rowIdxsRawOperands);  ::llvm::SMLoc rowIdxsOperandsLoc;
  (void)rowIdxsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::Type colPosRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> colPosTypes(colPosRawTypes);
  ::mlir::Type rowIdxsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rowIdxsTypes(rowIdxsRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  rowsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  nnzOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nnzRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colPosOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colPosRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rowIdxsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowIdxsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
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
    colPosRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    rowIdxsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowsOperands, odsBuildableType2, rowsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colsOperands, odsBuildableType2, colsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(nnzOperands, odsBuildableType2, nnzOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colPosOperands, colPosTypes, colPosOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowIdxsOperands, rowIdxsTypes, rowIdxsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateCscOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getRows();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCols();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getNnz();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getColPos();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRowIdxs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getColPos().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getRowIdxs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::CreateCscOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::CreateCsrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateCsrOpGenericAdaptorBase::CreateCsrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_csr", odsAttrs.getContext());
}

CreateCsrOpGenericAdaptorBase::CreateCsrOpGenericAdaptorBase(CreateCsrOp op) : CreateCsrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateCsrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CreateCsrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateCsrOpAdaptor::CreateCsrOpAdaptor(CreateCsrOp op) : CreateCsrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateCsrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void CreateCsrOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "spmat");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> CreateCsrOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CreateCsrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateCsrOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> CreateCsrOp::getRows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCsrOp::getCols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> CreateCsrOp::getNnz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCsrOp::getRowPos() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCsrOp::getColIdxs() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(5).begin());
}

::mlir::TypedValue<::mlir::MemRefType> CreateCsrOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(6).begin());
}

::mlir::MutableOperandRange CreateCsrOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &CreateCsrOp::getRowsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCsrOp::getColsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCsrOp::getNnzMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCsrOp::getRowPosMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCsrOp::getColIdxsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &CreateCsrOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> CreateCsrOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CreateCsrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateCsrOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value CreateCsrOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void CreateCsrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type spmat, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value rowPos, ::mlir::Value colIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(rowPos);
  odsState.addOperands(colIdxs);
  odsState.addOperands(values);
  odsState.addTypes(spmat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void CreateCsrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value rows, ::mlir::Value cols, ::mlir::Value nnz, ::mlir::Value rowPos, ::mlir::Value colIdxs, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(rows);
  odsState.addOperands(cols);
  odsState.addOperands(nnz);
  odsState.addOperands(rowPos);
  odsState.addOperands(colIdxs);
  odsState.addOperands(values);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateCsrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateCsrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateCsrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateCsrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowsOperands(rowsRawOperands);  ::llvm::SMLoc rowsOperandsLoc;
  (void)rowsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colsOperands(colsRawOperands);  ::llvm::SMLoc colsOperandsLoc;
  (void)colsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand nnzRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> nnzOperands(nnzRawOperands);  ::llvm::SMLoc nnzOperandsLoc;
  (void)nnzOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rowPosRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rowPosOperands(rowPosRawOperands);  ::llvm::SMLoc rowPosOperandsLoc;
  (void)rowPosOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand colIdxsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> colIdxsOperands(colIdxsRawOperands);  ::llvm::SMLoc colIdxsOperandsLoc;
  (void)colIdxsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::Type rowPosRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rowPosTypes(rowPosRawTypes);
  ::mlir::Type colIdxsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> colIdxsTypes(colIdxsRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  rowsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  nnzOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nnzRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rowPosOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rowPosRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  colIdxsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(colIdxsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
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
    rowPosRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    colIdxsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowsOperands, odsBuildableType2, rowsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colsOperands, odsBuildableType2, colsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(nnzOperands, odsBuildableType2, nnzOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rowPosOperands, rowPosTypes, rowPosOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(colIdxsOperands, colIdxsTypes, colIdxsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateCsrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getRows();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCols();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getNnz();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getRowPos();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getColIdxs();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getRowPos().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getColIdxs().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::CreateCsrOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::CreateDnTensorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateDnTensorOpGenericAdaptorBase::CreateDnTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.create_dn_tensor", odsAttrs.getContext());
}

CreateDnTensorOpGenericAdaptorBase::CreateDnTensorOpGenericAdaptorBase(CreateDnTensorOp op) : CreateDnTensorOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CreateDnTensorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr CreateDnTensorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CreateDnTensorOpAdaptor::CreateDnTensorOpAdaptor(CreateDnTensorOp op) : CreateDnTensorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CreateDnTensorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void CreateDnTensorOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "dnTensor");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> CreateDnTensorOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range CreateDnTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateDnTensorOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::MemRefType> CreateDnTensorOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range CreateDnTensorOp::getDims() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange CreateDnTensorOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &CreateDnTensorOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange CreateDnTensorOp::getDimsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> CreateDnTensorOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range CreateDnTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CreateDnTensorOp::getDnTensor() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value CreateDnTensorOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult CreateDnTensorOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute CreateDnTensorOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code CreateDnTensorOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> CreateDnTensorOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void CreateDnTensorOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void CreateDnTensorOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult CreateDnTensorOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult CreateDnTensorOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

void CreateDnTensorOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
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

void CreateDnTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dnTensor, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value memref, ::mlir::ValueRange dims) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(memref);
  odsState.addOperands(dims);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), 1, static_cast<int32_t>(dims.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.addTypes(dnTensor);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void CreateDnTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value memref, ::mlir::ValueRange dims) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(memref);
  odsState.addOperands(dims);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), 1, static_cast<int32_t>(dims.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateDnTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateDnTensorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CreateDnTensorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateDnTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dimsOperands;
  ::llvm::SMLoc dimsOperandsLoc;
  (void)dimsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> dimsTypes;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  dimsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(dimsOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(dimsTypes))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    memrefRawTypes[0] = type;
  }
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependenciesOperands.size()), 1, static_cast<int32_t>(dimsOperands.size())}), result.getOrAddProperties<CreateDnTensorOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dimsOperands, dimsTypes, dimsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateDnTensorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDims();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getDims().getTypes();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::CreateDnTensorOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::DeallocOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DeallocOpGenericAdaptorBase::DeallocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.dealloc", odsAttrs.getContext());
}

DeallocOpGenericAdaptorBase::DeallocOpGenericAdaptorBase(DeallocOp op) : DeallocOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DeallocOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
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

::mlir::DictionaryAttr DeallocOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DeallocOpAdaptor::DeallocOpAdaptor(DeallocOp op) : DeallocOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DeallocOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DeallocOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
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

::mlir::Operation::operand_range DeallocOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range DeallocOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::MemRefType> DeallocOp::getMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange DeallocOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &DeallocOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DeallocOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range DeallocOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DeallocOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void DeallocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value memref) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(memref);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void DeallocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value memref) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(memref);
  odsState.addTypes(resultTypes);
}

void DeallocOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DeallocOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DeallocOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DeallocOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
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
    memrefRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeallocOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void DeallocOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Free::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::DeallocOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::DestroyDnTensorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DestroyDnTensorOpGenericAdaptorBase::DestroyDnTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.destroy_dn_tensor", odsAttrs.getContext());
}

DestroyDnTensorOpGenericAdaptorBase::DestroyDnTensorOpGenericAdaptorBase(DestroyDnTensorOp op) : DestroyDnTensorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DestroyDnTensorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
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

::mlir::DictionaryAttr DestroyDnTensorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DestroyDnTensorOpAdaptor::DestroyDnTensorOpAdaptor(DestroyDnTensorOp op) : DestroyDnTensorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DestroyDnTensorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DestroyDnTensorOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
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

::mlir::Operation::operand_range DestroyDnTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range DestroyDnTensorOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value DestroyDnTensorOp::getDnTensor() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange DestroyDnTensorOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &DestroyDnTensorOp::getDnTensorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DestroyDnTensorOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range DestroyDnTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DestroyDnTensorOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void DestroyDnTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value dnTensor) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnTensor);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void DestroyDnTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value dnTensor) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnTensor);
  odsState.addTypes(resultTypes);
}

void DestroyDnTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DestroyDnTensorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DestroyDnTensorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DestroyDnTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dnTensorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnTensorOperands(dnTensorRawOperands);  ::llvm::SMLoc dnTensorOperandsLoc;
  (void)dnTensorOperandsLoc;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  dnTensorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnTensorRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnTensorOperands, odsBuildableType1, dnTensorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DestroyDnTensorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getDnTensor();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::DestroyDnTensorOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::DestroySpMatOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DestroySpMatOpGenericAdaptorBase::DestroySpMatOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.destroy_sp_mat", odsAttrs.getContext());
}

DestroySpMatOpGenericAdaptorBase::DestroySpMatOpGenericAdaptorBase(DestroySpMatOp op) : DestroySpMatOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DestroySpMatOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
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

::mlir::DictionaryAttr DestroySpMatOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DestroySpMatOpAdaptor::DestroySpMatOpAdaptor(DestroySpMatOp op) : DestroySpMatOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DestroySpMatOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DestroySpMatOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
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

::mlir::Operation::operand_range DestroySpMatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range DestroySpMatOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value DestroySpMatOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange DestroySpMatOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &DestroySpMatOp::getSpmatMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> DestroySpMatOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range DestroySpMatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DestroySpMatOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void DestroySpMatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value spmat) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmat);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void DestroySpMatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value spmat) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmat);
  odsState.addTypes(resultTypes);
}

void DestroySpMatOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DestroySpMatOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DestroySpMatOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DestroySpMatOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatOperands(spmatRawOperands);  ::llvm::SMLoc spmatOperandsLoc;
  (void)spmatOperandsLoc;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatOperands, odsBuildableType1, spmatOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DestroySpMatOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmat();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::DestroySpMatOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::DynamicSharedMemoryOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DynamicSharedMemoryOpGenericAdaptorBase::DynamicSharedMemoryOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.dynamic_shared_memory", odsAttrs.getContext());
}

DynamicSharedMemoryOpGenericAdaptorBase::DynamicSharedMemoryOpGenericAdaptorBase(DynamicSharedMemoryOp op) : DynamicSharedMemoryOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DynamicSharedMemoryOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DynamicSharedMemoryOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DynamicSharedMemoryOpAdaptor::DynamicSharedMemoryOpAdaptor(DynamicSharedMemoryOp op) : DynamicSharedMemoryOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DynamicSharedMemoryOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DynamicSharedMemoryOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DynamicSharedMemoryOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> DynamicSharedMemoryOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicSharedMemoryOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> DynamicSharedMemoryOp::getResultMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSResults(0).begin());
}

void DynamicSharedMemoryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultMemref) {
  odsState.addTypes(resultMemref);
}

void DynamicSharedMemoryOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicSharedMemoryOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicSharedMemoryOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DynamicSharedMemoryOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DynamicSharedMemoryOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::Type resultMemrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultMemrefTypes(resultMemrefRawTypes);
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
    resultMemrefRawTypes[0] = type;
  }
  result.addTypes(resultMemrefTypes);
  return ::mlir::success();
}

void DynamicSharedMemoryOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResultMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void DynamicSharedMemoryOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::DynamicSharedMemoryOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::GPUFuncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GPUFuncOpGenericAdaptorBase::GPUFuncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.func", odsAttrs.getContext());
}

GPUFuncOpGenericAdaptorBase::GPUFuncOpGenericAdaptorBase(GPUFuncOp op) : GPUFuncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GPUFuncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GPUFuncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::TypeAttr GPUFuncOpGenericAdaptorBase::getFunctionTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
  return attr;
}

::mlir::FunctionType GPUFuncOpGenericAdaptorBase::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::ArrayAttr GPUFuncOpGenericAdaptorBase::getArgAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOpGenericAdaptorBase::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr GPUFuncOpGenericAdaptorBase::getResAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOpGenericAdaptorBase::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr GPUFuncOpGenericAdaptorBase::getWorkgroupAttribAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().workgroup_attrib_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOpGenericAdaptorBase::getWorkgroupAttribAttrs() {
  auto attr = getWorkgroupAttribAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr GPUFuncOpGenericAdaptorBase::getPrivateAttribAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().private_attrib_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOpGenericAdaptorBase::getPrivateAttribAttrs() {
  auto attr = getPrivateAttribAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Region &GPUFuncOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange GPUFuncOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
GPUFuncOpAdaptor::GPUFuncOpAdaptor(GPUFuncOp op) : GPUFuncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GPUFuncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitError(loc, "'gpu.func' op ""requires attribute 'function_type'");
  auto tblgen_private_attrib_attrs = getProperties().private_attrib_attrs; (void)tblgen_private_attrib_attrs;
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_workgroup_attrib_attrs = getProperties().workgroup_attrib_attrs; (void)tblgen_workgroup_attrib_attrs;

  if (tblgen_function_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_function_type))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue())))))
    return emitError(loc, "'gpu.func' op ""attribute 'function_type' failed to satisfy constraint: type attribute of function type");

  if (tblgen_arg_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_arg_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_arg_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'gpu.func' op ""attribute 'arg_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_res_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_res_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_res_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'gpu.func' op ""attribute 'res_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_workgroup_attrib_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_workgroup_attrib_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_workgroup_attrib_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'gpu.func' op ""attribute 'workgroup_attrib_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_private_attrib_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_private_attrib_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_private_attrib_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'gpu.func' op ""attribute 'private_attrib_attrs' failed to satisfy constraint: Array of dictionary attributes");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GPUFuncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GPUFuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GPUFuncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GPUFuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &GPUFuncOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult GPUFuncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
    auto &propStorage = prop.private_attrib_attrs;
       auto attr = dict.get("private_attrib_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for private_attrib_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `private_attrib_attrs` in property conversion: " << attr;
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
    auto &propStorage = prop.workgroup_attrib_attrs;
       auto attr = dict.get("workgroup_attrib_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for workgroup_attrib_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `workgroup_attrib_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GPUFuncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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
      const auto &propStorage = prop.private_attrib_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("private_attrib_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.res_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("res_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.workgroup_attrib_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("workgroup_attrib_attrs",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GPUFuncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.arg_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.private_attrib_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.res_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.workgroup_attrib_attrs.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GPUFuncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "arg_attrs")
      return prop.arg_attrs;

    if (name == "function_type")
      return prop.function_type;

    if (name == "private_attrib_attrs")
      return prop.private_attrib_attrs;

    if (name == "res_attrs")
      return prop.res_attrs;

    if (name == "workgroup_attrib_attrs")
      return prop.workgroup_attrib_attrs;
  return std::nullopt;
}

void GPUFuncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "arg_attrs") {
       prop.arg_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.arg_attrs)>>(value);
       return;
    }

    if (name == "function_type") {
       prop.function_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_type)>>(value);
       return;
    }

    if (name == "private_attrib_attrs") {
       prop.private_attrib_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.private_attrib_attrs)>>(value);
       return;
    }

    if (name == "res_attrs") {
       prop.res_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.res_attrs)>>(value);
       return;
    }

    if (name == "workgroup_attrib_attrs") {
       prop.workgroup_attrib_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.workgroup_attrib_attrs)>>(value);
       return;
    }
}

void GPUFuncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.arg_attrs) attrs.append("arg_attrs", prop.arg_attrs);

    if (prop.function_type) attrs.append("function_type", prop.function_type);

    if (prop.private_attrib_attrs) attrs.append("private_attrib_attrs", prop.private_attrib_attrs);

    if (prop.res_attrs) attrs.append("res_attrs", prop.res_attrs);

    if (prop.workgroup_attrib_attrs) attrs.append("workgroup_attrib_attrs", prop.workgroup_attrib_attrs);
}

::mlir::LogicalResult GPUFuncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getArgAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(attr, "arg_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps7(attr, "function_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPrivateAttribAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(attr, "private_attrib_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getResAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(attr, "res_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getWorkgroupAttribAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(attr, "workgroup_attrib_attrs", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GPUFuncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.arg_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.function_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.private_attrib_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.res_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.workgroup_attrib_attrs)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GPUFuncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.arg_attrs);
  writer.writeAttribute(prop.function_type);

  writer.writeOptionalAttribute(prop.private_attrib_attrs);

  writer.writeOptionalAttribute(prop.res_attrs);

  writer.writeOptionalAttribute(prop.workgroup_attrib_attrs);
}

::mlir::TypeAttr GPUFuncOp::getFunctionTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
}

::mlir::FunctionType GPUFuncOp::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::ArrayAttr GPUFuncOp::getArgAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOp::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr GPUFuncOp::getResAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOp::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr GPUFuncOp::getWorkgroupAttribAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().workgroup_attrib_attrs);
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOp::getWorkgroupAttribAttrs() {
  auto attr = getWorkgroupAttribAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr GPUFuncOp::getPrivateAttribAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().private_attrib_attrs);
}

::std::optional< ::mlir::ArrayAttr > GPUFuncOp::getPrivateAttribAttrs() {
  auto attr = getPrivateAttribAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void GPUFuncOp::setFunctionTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFunctionTypeAttrName(), attr);
}

void GPUFuncOp::setFunctionType(::mlir::FunctionType attrValue) {
  (*this)->setAttr(getFunctionTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void GPUFuncOp::setArgAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getArgAttrsAttrName(), attr);
}

void GPUFuncOp::setResAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getResAttrsAttrName(), attr);
}

void GPUFuncOp::setWorkgroupAttribAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getWorkgroupAttribAttrsAttrName(), attr);
}

void GPUFuncOp::setPrivateAttribAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPrivateAttribAttrsAttrName(), attr);
}

::mlir::Attribute GPUFuncOp::removeArgAttrsAttr() {
    auto &attr = getProperties().arg_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute GPUFuncOp::removeResAttrsAttr() {
    auto &attr = getProperties().res_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute GPUFuncOp::removeWorkgroupAttribAttrsAttr() {
    auto &attr = getProperties().workgroup_attrib_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute GPUFuncOp::removePrivateAttribAttrsAttr() {
    auto &attr = getProperties().private_attrib_attrs;
    attr = {};
    return attr;
}

::mlir::LogicalResult GPUFuncOp::verifyInvariantsImpl() {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitOpError("requires attribute 'function_type'");
  auto tblgen_private_attrib_attrs = getProperties().private_attrib_attrs; (void)tblgen_private_attrib_attrs;
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_workgroup_attrib_attrs = getProperties().workgroup_attrib_attrs; (void)tblgen_workgroup_attrib_attrs;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps7(*this, tblgen_function_type, "function_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(*this, tblgen_arg_attrs, "arg_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(*this, tblgen_res_attrs, "res_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(*this, tblgen_workgroup_attrib_attrs, "workgroup_attrib_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps8(*this, tblgen_private_attrib_attrs, "private_attrib_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_GPUOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult GPUFuncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::GPUFuncOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::GPUModuleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GPUModuleOpGenericAdaptorBase::GPUModuleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.module", odsAttrs.getContext());
}

GPUModuleOpGenericAdaptorBase::GPUModuleOpGenericAdaptorBase(GPUModuleOp op) : GPUModuleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GPUModuleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GPUModuleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr GPUModuleOpGenericAdaptorBase::getTargetsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().targets);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > GPUModuleOpGenericAdaptorBase::getTargets() {
  auto attr = getTargetsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Attribute GPUModuleOpGenericAdaptorBase::getOffloadingHandlerAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().offloadingHandler);
  return attr;
}

::std::optional<::mlir::Attribute> GPUModuleOpGenericAdaptorBase::getOffloadingHandler() {
  auto attr = getOffloadingHandlerAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::Region &GPUModuleOpGenericAdaptorBase::getBodyRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange GPUModuleOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
GPUModuleOpAdaptor::GPUModuleOpAdaptor(GPUModuleOp op) : GPUModuleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GPUModuleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_offloadingHandler = getProperties().offloadingHandler; (void)tblgen_offloadingHandler;
  auto tblgen_targets = getProperties().targets; (void)tblgen_targets;

  if (tblgen_targets && !((((::llvm::isa<::mlir::ArrayAttr>(tblgen_targets))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_targets), [&](::mlir::Attribute attr) { return attr && (((true)) && ((attr.hasPromiseOrImplementsInterface<::mlir::gpu::TargetAttrInterface>()))); }))) && ((::llvm::cast<::mlir::ArrayAttr>(tblgen_targets).size() >= 1))))
    return emitError(loc, "'gpu.module' op ""attribute 'targets' failed to satisfy constraint: array of GPU target attributes with at least 1 elements");

  if (tblgen_offloadingHandler && !(((true)) && ((tblgen_offloadingHandler.hasTrait<::mlir::gpu::OffloadingTranslationAttrTrait>()))))
    return emitError(loc, "'gpu.module' op ""attribute 'offloadingHandler' failed to satisfy constraint: any attribute with the `OffloadingTranslationAttrTrait` trait.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GPUModuleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GPUModuleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GPUModuleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GPUModuleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &GPUModuleOp::getBodyRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult GPUModuleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.offloadingHandler;
       auto attr = dict.get("offloadingHandler");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for offloadingHandler in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `offloadingHandler` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.targets;
       auto attr = dict.get("targets");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for targets in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `targets` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GPUModuleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.offloadingHandler;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("offloadingHandler",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.targets;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("targets",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GPUModuleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.offloadingHandler.getAsOpaquePointer()), 
    llvm::hash_value(prop.targets.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GPUModuleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "offloadingHandler")
      return prop.offloadingHandler;

    if (name == "targets")
      return prop.targets;
  return std::nullopt;
}

void GPUModuleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "offloadingHandler") {
       prop.offloadingHandler = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.offloadingHandler)>>(value);
       return;
    }

    if (name == "targets") {
       prop.targets = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.targets)>>(value);
       return;
    }
}

void GPUModuleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.offloadingHandler) attrs.append("offloadingHandler", prop.offloadingHandler);

    if (prop.targets) attrs.append("targets", prop.targets);
}

::mlir::LogicalResult GPUModuleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOffloadingHandlerAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps3(attr, "offloadingHandler", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTargetsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps9(attr, "targets", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GPUModuleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.offloadingHandler)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.targets)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GPUModuleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.offloadingHandler);

  writer.writeOptionalAttribute(prop.targets);
}

::mlir::ArrayAttr GPUModuleOp::getTargetsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().targets);
}

::std::optional< ::mlir::ArrayAttr > GPUModuleOp::getTargets() {
  auto attr = getTargetsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Attribute GPUModuleOp::getOffloadingHandlerAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().offloadingHandler);
}

::std::optional<::mlir::Attribute> GPUModuleOp::getOffloadingHandler() {
  auto attr = getOffloadingHandlerAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

void GPUModuleOp::setTargetsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTargetsAttrName(), attr);
}

void GPUModuleOp::setOffloadingHandlerAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getOffloadingHandlerAttrName(), attr);
}

::mlir::Attribute GPUModuleOp::removeTargetsAttr() {
    auto &attr = getProperties().targets;
    attr = {};
    return attr;
}

::mlir::Attribute GPUModuleOp::removeOffloadingHandlerAttr() {
    auto &attr = getProperties().offloadingHandler;
    attr = {};
    return attr;
}

::mlir::LogicalResult GPUModuleOp::verifyInvariantsImpl() {
  auto tblgen_offloadingHandler = getProperties().offloadingHandler; (void)tblgen_offloadingHandler;
  auto tblgen_targets = getProperties().targets; (void)tblgen_targets;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps9(*this, tblgen_targets, "targets")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps3(*this, tblgen_offloadingHandler, "offloadingHandler")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_GPUOps1(*this, region, "bodyRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult GPUModuleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::GPUModuleOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::GlobalIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalIdOpGenericAdaptorBase::GlobalIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.global_id", odsAttrs.getContext());
}

GlobalIdOpGenericAdaptorBase::GlobalIdOpGenericAdaptorBase(GlobalIdOp op) : GlobalIdOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GlobalIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr GlobalIdOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension GlobalIdOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
GlobalIdOpAdaptor::GlobalIdOpAdaptor(GlobalIdOp op) : GlobalIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalIdOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.global_id' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.global_id' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GlobalIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GlobalIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GlobalIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult GlobalIdOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute GlobalIdOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code GlobalIdOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalIdOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void GlobalIdOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void GlobalIdOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult GlobalIdOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalIdOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalIdOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr GlobalIdOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension GlobalIdOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void GlobalIdOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void GlobalIdOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GlobalIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GlobalIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GlobalIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(GlobalIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult GlobalIdOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GlobalIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult GlobalIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult GlobalIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<GlobalIdOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void GlobalIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GlobalIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::GlobalIdOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::GridDimOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GridDimOpGenericAdaptorBase::GridDimOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.grid_dim", odsAttrs.getContext());
}

GridDimOpGenericAdaptorBase::GridDimOpGenericAdaptorBase(GridDimOp op) : GridDimOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GridDimOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GridDimOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr GridDimOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension GridDimOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
GridDimOpAdaptor::GridDimOpAdaptor(GridDimOp op) : GridDimOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GridDimOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.grid_dim' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.grid_dim' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GridDimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GridDimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GridDimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult GridDimOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute GridDimOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code GridDimOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GridDimOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void GridDimOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void GridDimOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult GridDimOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GridDimOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GridDimOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr GridDimOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension GridDimOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void GridDimOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void GridDimOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GridDimOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GridDimOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GridDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(GridDimOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult GridDimOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GridDimOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult GridDimOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult GridDimOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<GridDimOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void GridDimOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GridDimOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::GridDimOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::HostRegisterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HostRegisterOpGenericAdaptorBase::HostRegisterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.host_register", odsAttrs.getContext());
}

HostRegisterOpGenericAdaptorBase::HostRegisterOpGenericAdaptorBase(HostRegisterOp op) : HostRegisterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> HostRegisterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr HostRegisterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
HostRegisterOpAdaptor::HostRegisterOpAdaptor(HostRegisterOp op) : HostRegisterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult HostRegisterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> HostRegisterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range HostRegisterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::UnrankedMemRefType> HostRegisterOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::UnrankedMemRefType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &HostRegisterOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> HostRegisterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range HostRegisterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void HostRegisterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value) {
  odsState.addOperands(value);
}

void HostRegisterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HostRegisterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult HostRegisterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult HostRegisterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult HostRegisterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
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
    valueRawTypes[0] = type;
  }
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HostRegisterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::UnrankedMemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::HostRegisterOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::HostUnregisterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HostUnregisterOpGenericAdaptorBase::HostUnregisterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.host_unregister", odsAttrs.getContext());
}

HostUnregisterOpGenericAdaptorBase::HostUnregisterOpGenericAdaptorBase(HostUnregisterOp op) : HostUnregisterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> HostUnregisterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr HostUnregisterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
HostUnregisterOpAdaptor::HostUnregisterOpAdaptor(HostUnregisterOp op) : HostUnregisterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult HostUnregisterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> HostUnregisterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range HostUnregisterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::UnrankedMemRefType> HostUnregisterOp::getValue() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::UnrankedMemRefType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &HostUnregisterOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> HostUnregisterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range HostUnregisterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void HostUnregisterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value) {
  odsState.addOperands(value);
}

void HostUnregisterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HostUnregisterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult HostUnregisterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult HostUnregisterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult HostUnregisterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
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
    valueRawTypes[0] = type;
  }
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HostUnregisterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::UnrankedMemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::HostUnregisterOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::LaneIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LaneIdOpGenericAdaptorBase::LaneIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.lane_id", odsAttrs.getContext());
}

LaneIdOpGenericAdaptorBase::LaneIdOpGenericAdaptorBase(LaneIdOp op) : LaneIdOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LaneIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LaneIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LaneIdOpAdaptor::LaneIdOpAdaptor(LaneIdOp op) : LaneIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LaneIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LaneIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LaneIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> LaneIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LaneIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> LaneIdOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void LaneIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void LaneIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(LaneIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void LaneIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LaneIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LaneIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(LaneIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult LaneIdOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LaneIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult LaneIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult LaneIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void LaneIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void LaneIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::LaneIdOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::LaunchFuncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LaunchFuncOpGenericAdaptorBase::LaunchFuncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.launch_func", odsAttrs.getContext());
}

LaunchFuncOpGenericAdaptorBase::LaunchFuncOpGenericAdaptorBase(LaunchFuncOp op) : LaunchFuncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LaunchFuncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr LaunchFuncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr LaunchFuncOpGenericAdaptorBase::getKernelAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().kernel);
  return attr;
}

::mlir::SymbolRefAttr LaunchFuncOpGenericAdaptorBase::getKernel() {
  auto attr = getKernelAttr();
  return attr;
}

} // namespace detail
LaunchFuncOpAdaptor::LaunchFuncOpAdaptor(LaunchFuncOp op) : LaunchFuncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LaunchFuncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_kernel = getProperties().kernel; (void)tblgen_kernel;
  if (!tblgen_kernel) return emitError(loc, "'gpu.launch_func' op ""requires attribute 'kernel'");

  if (tblgen_kernel && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_kernel))))
    return emitError(loc, "'gpu.launch_func' op ""attribute 'kernel' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LaunchFuncOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range LaunchFuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range LaunchFuncOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value LaunchFuncOp::getGridSizeX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value LaunchFuncOp::getGridSizeY() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value LaunchFuncOp::getGridSizeZ() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value LaunchFuncOp::getBlockSizeX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::Value LaunchFuncOp::getBlockSizeY() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(5).begin());
}

::mlir::Value LaunchFuncOp::getBlockSizeZ() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(6).begin());
}

::mlir::Value LaunchFuncOp::getClusterSizeX() {
  auto operands = getODSOperands(7);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value LaunchFuncOp::getClusterSizeY() {
  auto operands = getODSOperands(8);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value LaunchFuncOp::getClusterSizeZ() {
  auto operands = getODSOperands(9);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> LaunchFuncOp::getDynamicSharedMemorySize() {
  auto operands = getODSOperands(10);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range LaunchFuncOp::getKernelOperands() {
  return getODSOperands(11);
}

::mlir::Value LaunchFuncOp::getAsyncObject() {
  auto operands = getODSOperands(12);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange LaunchFuncOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &LaunchFuncOp::getGridSizeXMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchFuncOp::getGridSizeYMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchFuncOp::getGridSizeZMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchFuncOp::getBlockSizeXMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchFuncOp::getBlockSizeYMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchFuncOp::getBlockSizeZMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange LaunchFuncOp::getClusterSizeXMutable() {
  auto range = getODSOperandIndexAndLength(7);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(7u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchFuncOp::getClusterSizeYMutable() {
  auto range = getODSOperandIndexAndLength(8);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(8u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchFuncOp::getClusterSizeZMutable() {
  auto range = getODSOperandIndexAndLength(9);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(9u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchFuncOp::getDynamicSharedMemorySizeMutable() {
  auto range = getODSOperandIndexAndLength(10);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(10u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchFuncOp::getKernelOperandsMutable() {
  auto range = getODSOperandIndexAndLength(11);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(11u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchFuncOp::getAsyncObjectMutable() {
  auto range = getODSOperandIndexAndLength(12);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(12u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> LaunchFuncOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range LaunchFuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LaunchFuncOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult LaunchFuncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.kernel;
       auto attr = dict.get("kernel");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for kernel in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kernel` in property conversion: " << attr;
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

::mlir::Attribute LaunchFuncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.kernel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kernel",
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

llvm::hash_code LaunchFuncOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.kernel.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> LaunchFuncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "kernel")
      return prop.kernel;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void LaunchFuncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "kernel") {
       prop.kernel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kernel)>>(value);
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

void LaunchFuncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.kernel) attrs.append("kernel", prop.kernel);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult LaunchFuncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKernelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps10(attr, "kernel", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LaunchFuncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.kernel)))
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

void LaunchFuncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.kernel);

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

::mlir::SymbolRefAttr LaunchFuncOp::getKernelAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().kernel);
}

::mlir::SymbolRefAttr LaunchFuncOp::getKernel() {
  auto attr = getKernelAttr();
  return attr;
}

void LaunchFuncOp::setKernelAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getKernelAttrName(), attr);
}

::mlir::LogicalResult LaunchFuncOp::verifyInvariantsImpl() {
  auto tblgen_kernel = getProperties().kernel; (void)tblgen_kernel;
  if (!tblgen_kernel) return emitOpError("requires attribute 'kernel'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps10(*this, tblgen_kernel, "kernel")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    if (valueGroup7.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup7.size();
    }

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup8 = getODSOperands(8);

    if (valueGroup8.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup8.size();
    }

    for (auto v : valueGroup8) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup9 = getODSOperands(9);

    if (valueGroup9.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup9.size();
    }

    for (auto v : valueGroup9) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup10 = getODSOperands(10);

    if (valueGroup10.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup10.size();
    }

    for (auto v : valueGroup10) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup11 = getODSOperands(11);

    for (auto v : valueGroup11) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup12 = getODSOperands(12);

    if (valueGroup12.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup12.size();
    }

    for (auto v : valueGroup12) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps13(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()) && ((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSOperands(3).begin()).getType()) && ((*this->getODSOperands(3).begin()).getType()) == ((*this->getODSOperands(4).begin()).getType()) && ((*this->getODSOperands(4).begin()).getType()) == ((*this->getODSOperands(5).begin()).getType()) && ((*this->getODSOperands(5).begin()).getType()) == ((*this->getODSOperands(6).begin()).getType()) && ((*this->getODSOperands(6).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()))))
    return emitOpError("failed to verify that all of {gridSizeX, gridSizeY, gridSizeZ, blockSizeX, blockSizeY, blockSizeZ} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult LaunchFuncOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult LaunchFuncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncObjectOperands;
  ::llvm::SMLoc asyncObjectOperandsLoc;
  (void)asyncObjectOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> asyncObjectTypes;
  ::mlir::SymbolRefAttr kernelAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> clusterSizeXOperands;
  ::llvm::SMLoc clusterSizeXOperandsLoc;
  (void)clusterSizeXOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> clusterSizeYOperands;
  ::llvm::SMLoc clusterSizeYOperandsLoc;
  (void)clusterSizeYOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> clusterSizeZOperands;
  ::llvm::SMLoc clusterSizeZOperandsLoc;
  (void)clusterSizeZOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand gridSizeXRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> gridSizeXOperands(gridSizeXRawOperands);  ::llvm::SMLoc gridSizeXOperandsLoc;
  (void)gridSizeXOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand gridSizeYRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> gridSizeYOperands(gridSizeYRawOperands);  ::llvm::SMLoc gridSizeYOperandsLoc;
  (void)gridSizeYOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand gridSizeZRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> gridSizeZOperands(gridSizeZRawOperands);  ::llvm::SMLoc gridSizeZOperandsLoc;
  (void)gridSizeZOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand blockSizeXRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> blockSizeXOperands(blockSizeXRawOperands);  ::llvm::SMLoc blockSizeXOperandsLoc;
  (void)blockSizeXOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand blockSizeYRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> blockSizeYOperands(blockSizeYRawOperands);  ::llvm::SMLoc blockSizeYOperandsLoc;
  (void)blockSizeYOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand blockSizeZRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> blockSizeZOperands(blockSizeZRawOperands);  ::llvm::SMLoc blockSizeZOperandsLoc;
  (void)blockSizeZOperandsLoc;
  ::mlir::Type gridSizeXRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> gridSizeXTypes(gridSizeXRawTypes);
  ::llvm::SmallVector<::mlir::Type, 1> clusterSizeXTypes;
  ::llvm::SmallVector<::mlir::Type, 1> clusterSizeYTypes;
  ::llvm::SmallVector<::mlir::Type, 1> clusterSizeZTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dynamicSharedMemorySizeOperands;
  ::llvm::SMLoc dynamicSharedMemorySizeOperandsLoc;
  (void)dynamicSharedMemorySizeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> kernelOperandsOperands;
  ::llvm::SMLoc kernelOperandsOperandsLoc;
  (void)kernelOperandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> kernelOperandsTypes;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }
  if (::mlir::succeeded(parser.parseOptionalLess())) {

  {
    asyncObjectOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      asyncObjectOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      asyncObjectTypes.push_back(optionalType);
    }
  }
  if (parser.parseGreater())
    return ::mlir::failure();
  }

  if (parser.parseCustomAttributeWithFallback(kernelAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (kernelAttr) result.getOrAddProperties<LaunchFuncOp::Properties>().kernel = kernelAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("clusters"))) {
  if (parser.parseKeyword("in"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    clusterSizeXOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      clusterSizeXOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    clusterSizeYOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      clusterSizeYOperands.push_back(operand);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    clusterSizeZOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      clusterSizeZOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (parser.parseKeyword("blocks"))
    return ::mlir::failure();
  if (parser.parseKeyword("in"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  gridSizeXOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(gridSizeXRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  gridSizeYOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(gridSizeYRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  gridSizeZOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(gridSizeZRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseKeyword("threads"))
    return ::mlir::failure();
  if (parser.parseKeyword("in"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  blockSizeXOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(blockSizeXRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  blockSizeYOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(blockSizeYRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  blockSizeZOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(blockSizeZRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  {
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> clusterSizeXOperand = clusterSizeXOperands.empty() ? ::std::optional<::mlir::OpAsmParser::UnresolvedOperand>() : clusterSizeXOperands[0];
    ::mlir::Type clusterSizeXType;
    ::mlir::Type clusterSizeYType;
    ::mlir::Type clusterSizeZType;
    auto odsResult = parseLaunchDimType(parser, gridSizeXRawTypes[0], clusterSizeXOperand, clusterSizeXType, clusterSizeYType, clusterSizeZType);
    if (odsResult) return ::mlir::failure();
    if (clusterSizeXType)
      clusterSizeXTypes.push_back(clusterSizeXType);
    if (clusterSizeYType)
      clusterSizeYTypes.push_back(clusterSizeYType);
    if (clusterSizeZType)
      clusterSizeZTypes.push_back(clusterSizeZType);
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("dynamic_shared_memory_size"))) {

  {
    dynamicSharedMemorySizeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      dynamicSharedMemorySizeOperands.push_back(operand);
    }
  }
  }
  {
    kernelOperandsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseLaunchFuncOperands(parser, kernelOperandsOperands, kernelOperandsTypes);
    if (odsResult) return ::mlir::failure();
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
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependenciesOperands.size()), 1, 1, 1, 1, 1, 1, static_cast<int32_t>(clusterSizeXOperands.size()), static_cast<int32_t>(clusterSizeYOperands.size()), static_cast<int32_t>(clusterSizeZOperands.size()), static_cast<int32_t>(dynamicSharedMemorySizeOperands.size()), static_cast<int32_t>(kernelOperandsOperands.size()), static_cast<int32_t>(asyncObjectOperands.size())}), result.getOrAddProperties<LaunchFuncOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(gridSizeXOperands, gridSizeXTypes, gridSizeXOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(gridSizeYOperands, gridSizeXTypes[0], gridSizeYOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(gridSizeZOperands, gridSizeXTypes[0], gridSizeZOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(blockSizeXOperands, gridSizeXTypes[0], blockSizeXOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(blockSizeYOperands, gridSizeXTypes[0], blockSizeYOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(blockSizeZOperands, gridSizeXTypes[0], blockSizeZOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(clusterSizeXOperands, clusterSizeXTypes, clusterSizeXOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(clusterSizeYOperands, clusterSizeYTypes, clusterSizeYOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(clusterSizeZOperands, clusterSizeZTypes, clusterSizeZOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dynamicSharedMemorySizeOperands, odsBuildableType1, dynamicSharedMemorySizeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(kernelOperandsOperands, kernelOperandsTypes, kernelOperandsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(asyncObjectOperands, asyncObjectTypes, asyncObjectOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LaunchFuncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  if (getAsyncObject()) {
    _odsPrinter << "<";
    if (::mlir::Value value = getAsyncObject())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getAsyncObject() ? ::llvm::ArrayRef<::mlir::Type>(getAsyncObject().getType()) : ::llvm::ArrayRef<::mlir::Type>());
    _odsPrinter << ">";
  }
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getKernelAttr());
  if (getClusterSizeX()) {
    _odsPrinter << ' ' << "clusters";
    _odsPrinter << ' ' << "in";
    _odsPrinter << ' ';
    _odsPrinter << "(";
    if (::mlir::Value value = getClusterSizeX())
      _odsPrinter << value;
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getClusterSizeY())
      _odsPrinter << value;
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getClusterSizeZ())
      _odsPrinter << value;
    _odsPrinter << ")";
  }
  _odsPrinter << ' ' << "blocks";
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << "(";
  _odsPrinter << getGridSizeX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getGridSizeY();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getGridSizeZ();
  _odsPrinter << ")";
  _odsPrinter << ' ' << "threads";
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << "(";
  _odsPrinter << getBlockSizeX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBlockSizeY();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBlockSizeZ();
  _odsPrinter << ")";
  _odsPrinter << ' ';
  printLaunchDimType(_odsPrinter, *this, getGridSizeX().getType(), getClusterSizeX(), (getClusterSizeX() ? getClusterSizeX().getType() : ::mlir::Type()), (getClusterSizeY() ? getClusterSizeY().getType() : ::mlir::Type()), (getClusterSizeZ() ? getClusterSizeZ().getType() : ::mlir::Type()));
  if (getDynamicSharedMemorySize()) {
    _odsPrinter << ' ' << "dynamic_shared_memory_size";
    _odsPrinter << ' ';
    if (::mlir::Value value = getDynamicSharedMemorySize())
      _odsPrinter << value;
  }
  _odsPrinter << ' ';
  printLaunchFuncOperands(_odsPrinter, *this, getKernelOperands(), getKernelOperands().getTypes());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("kernel");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::LaunchFuncOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::LaunchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LaunchOpGenericAdaptorBase::LaunchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.launch", odsAttrs.getContext());
}

LaunchOpGenericAdaptorBase::LaunchOpGenericAdaptorBase(LaunchOp op) : LaunchOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> LaunchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr LaunchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &LaunchOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange LaunchOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
LaunchOpAdaptor::LaunchOpAdaptor(LaunchOp op) : LaunchOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LaunchOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LaunchOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range LaunchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range LaunchOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getGridSizeX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getGridSizeY() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getGridSizeZ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getBlockSizeX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getBlockSizeY() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(5).begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getBlockSizeZ() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(6).begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getClusterSizeX() {
  auto operands = getODSOperands(7);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IndexType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getClusterSizeY() {
  auto operands = getODSOperands(8);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IndexType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IndexType> LaunchOp::getClusterSizeZ() {
  auto operands = getODSOperands(9);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IndexType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> LaunchOp::getDynamicSharedMemorySize() {
  auto operands = getODSOperands(10);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::MutableOperandRange LaunchOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &LaunchOp::getGridSizeXMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchOp::getGridSizeYMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchOp::getGridSizeZMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchOp::getBlockSizeXMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchOp::getBlockSizeYMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &LaunchOp::getBlockSizeZMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange LaunchOp::getClusterSizeXMutable() {
  auto range = getODSOperandIndexAndLength(7);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(7u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchOp::getClusterSizeYMutable() {
  auto range = getODSOperandIndexAndLength(8);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(8u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchOp::getClusterSizeZMutable() {
  auto range = getODSOperandIndexAndLength(9);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(9u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange LaunchOp::getDynamicSharedMemorySizeMutable() {
  auto range = getODSOperandIndexAndLength(10);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(10u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> LaunchOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range LaunchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LaunchOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::Region &LaunchOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult LaunchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute LaunchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code LaunchOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> LaunchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void LaunchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void LaunchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult LaunchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult LaunchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
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

void LaunchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
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

::mlir::LogicalResult LaunchOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    if (valueGroup7.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup7.size();
    }

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup8 = getODSOperands(8);

    if (valueGroup8.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup8.size();
    }

    for (auto v : valueGroup8) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup9 = getODSOperands(9);

    if (valueGroup9.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup9.size();
    }

    for (auto v : valueGroup9) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup10 = getODSOperands(10);

    if (valueGroup10.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup10.size();
    }

    for (auto v : valueGroup10) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps11(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_GPUOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult LaunchOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::LaunchOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::MemcpyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemcpyOpGenericAdaptorBase::MemcpyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.memcpy", odsAttrs.getContext());
}

MemcpyOpGenericAdaptorBase::MemcpyOpGenericAdaptorBase(MemcpyOp op) : MemcpyOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MemcpyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false};
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

::mlir::DictionaryAttr MemcpyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MemcpyOpAdaptor::MemcpyOpAdaptor(MemcpyOp op) : MemcpyOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MemcpyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MemcpyOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false};
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

::mlir::Operation::operand_range MemcpyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MemcpyOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::MemRefType> MemcpyOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::MemRefType> MemcpyOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(2).begin());
}

::mlir::MutableOperandRange MemcpyOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &MemcpyOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MemcpyOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MemcpyOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range MemcpyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MemcpyOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void MemcpyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value dst, ::mlir::Value src) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dst);
  odsState.addOperands(src);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void MemcpyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value dst, ::mlir::Value src) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dst);
  odsState.addOperands(src);
  odsState.addTypes(resultTypes);
}

void MemcpyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MemcpyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MemcpyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MemcpyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dstRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstOperands(dstRawOperands);  ::llvm::SMLoc dstOperandsLoc;
  (void)dstOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  dstOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcRawTypes[0] = type;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dstOperands, dstTypes, dstOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemcpyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getDst();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void MemcpyOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::MemcpyOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::MemsetOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemsetOpGenericAdaptorBase::MemsetOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.memset", odsAttrs.getContext());
}

MemsetOpGenericAdaptorBase::MemsetOpGenericAdaptorBase(MemsetOp op) : MemsetOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MemsetOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false};
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

::mlir::DictionaryAttr MemsetOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
MemsetOpAdaptor::MemsetOpAdaptor(MemsetOp op) : MemsetOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MemsetOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MemsetOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false};
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

::mlir::Operation::operand_range MemsetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MemsetOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::TypedValue<::mlir::MemRefType> MemsetOp::getDst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Value MemsetOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::MutableOperandRange MemsetOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &MemsetOp::getDstMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &MemsetOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> MemsetOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range MemsetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MemsetOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void MemsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value dst, ::mlir::Value value) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dst);
  odsState.addOperands(value);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void MemsetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value dst, ::mlir::Value value) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dst);
  odsState.addOperands(value);
  odsState.addTypes(resultTypes);
}

void MemsetOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MemsetOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps13(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((getElementTypeOrSelf((*this->getODSOperands(1).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(2).begin()))) && (getElementTypeOrSelf((*this->getODSOperands(2).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(1).begin()))))))
    return emitOpError("failed to verify that all of {dst, value} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult MemsetOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemsetOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dstRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstOperands(dstRawOperands);  ::llvm::SMLoc dstOperandsLoc;
  (void)dstOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type dstRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstTypes(dstRawTypes);
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  dstOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dstOperands, dstTypes, dstOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemsetOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getDst();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getDst().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void MemsetOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::MemsetOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::ModuleEndOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ModuleEndOpGenericAdaptorBase::ModuleEndOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.module_end", odsAttrs.getContext());
}

ModuleEndOpGenericAdaptorBase::ModuleEndOpGenericAdaptorBase(ModuleEndOp op) : ModuleEndOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ModuleEndOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ModuleEndOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ModuleEndOpAdaptor::ModuleEndOpAdaptor(ModuleEndOp op) : ModuleEndOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ModuleEndOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ModuleEndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ModuleEndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ModuleEndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ModuleEndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ModuleEndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ModuleEndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ModuleEndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ModuleEndOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ModuleEndOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ModuleEndOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ModuleEndOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::ModuleEndOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::NumSubgroupsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NumSubgroupsOpGenericAdaptorBase::NumSubgroupsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.num_subgroups", odsAttrs.getContext());
}

NumSubgroupsOpGenericAdaptorBase::NumSubgroupsOpGenericAdaptorBase(NumSubgroupsOp op) : NumSubgroupsOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> NumSubgroupsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NumSubgroupsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NumSubgroupsOpAdaptor::NumSubgroupsOpAdaptor(NumSubgroupsOp op) : NumSubgroupsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult NumSubgroupsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NumSubgroupsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NumSubgroupsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> NumSubgroupsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NumSubgroupsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> NumSubgroupsOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void NumSubgroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void NumSubgroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NumSubgroupsOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NumSubgroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NumSubgroupsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NumSubgroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NumSubgroupsOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult NumSubgroupsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NumSubgroupsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult NumSubgroupsOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult NumSubgroupsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void NumSubgroupsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void NumSubgroupsOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::NumSubgroupsOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::PrintfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PrintfOpGenericAdaptorBase::PrintfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.printf", odsAttrs.getContext());
}

PrintfOpGenericAdaptorBase::PrintfOpGenericAdaptorBase(PrintfOp op) : PrintfOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> PrintfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr PrintfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr PrintfOpGenericAdaptorBase::getFormatAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().format);
  return attr;
}

::llvm::StringRef PrintfOpGenericAdaptorBase::getFormat() {
  auto attr = getFormatAttr();
  return attr.getValue();
}

} // namespace detail
PrintfOpAdaptor::PrintfOpAdaptor(PrintfOp op) : PrintfOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult PrintfOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_format = getProperties().format; (void)tblgen_format;
  if (!tblgen_format) return emitError(loc, "'gpu.printf' op ""requires attribute 'format'");

  if (tblgen_format && !((::llvm::isa<::mlir::StringAttr>(tblgen_format))))
    return emitError(loc, "'gpu.printf' op ""attribute 'format' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PrintfOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range PrintfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range PrintfOp::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange PrintfOp::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PrintfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PrintfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult PrintfOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.format;
       auto attr = dict.get("format");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for format in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `format` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PrintfOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.format;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("format",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PrintfOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.format.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PrintfOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "format")
      return prop.format;
  return std::nullopt;
}

void PrintfOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "format") {
       prop.format = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.format)>>(value);
       return;
    }
}

void PrintfOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.format) attrs.append("format", prop.format);
}

::mlir::LogicalResult PrintfOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFormatAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps2(attr, "format", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PrintfOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.format)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PrintfOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.format);
}

::mlir::StringAttr PrintfOp::getFormatAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().format);
}

::llvm::StringRef PrintfOp::getFormat() {
  auto attr = getFormatAttr();
  return attr.getValue();
}

void PrintfOp::setFormatAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getFormatAttrName(), attr);
}

void PrintfOp::setFormat(::llvm::StringRef attrValue) {
  (*this)->setAttr(getFormatAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void PrintfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr format, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().format = format;
}

void PrintfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr format, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().format = format;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrintfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef format, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().format = odsBuilder.getStringAttr(format);
}

void PrintfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef format, ::mlir::ValueRange args) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().format = odsBuilder.getStringAttr(format);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrintfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PrintfOp::verifyInvariantsImpl() {
  auto tblgen_format = getProperties().format; (void)tblgen_format;
  if (!tblgen_format) return emitOpError("requires attribute 'format'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps2(*this, tblgen_format, "format")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PrintfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PrintfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr formatAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> argsTypes;

  if (parser.parseCustomAttributeWithFallback(formatAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (formatAttr) result.getOrAddProperties<PrintfOp::Properties>().format = formatAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
    return ::mlir::failure();
  if (!argsOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(argsTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PrintfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getFormatAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("format");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getArgs().empty()) {
    _odsPrinter << ' ';
    _odsPrinter << getArgs();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getArgs().getTypes();
  }
}

void PrintfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::PrintfOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::ReturnOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReturnOpGenericAdaptorBase::ReturnOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.return", odsAttrs.getContext());
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
 // empty
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps12(*this, v.getType(), "operand", index++)))
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

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::ReturnOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SDDMMBufferSizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SDDMMBufferSizeOpGenericAdaptorBase::SDDMMBufferSizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.sddmm_buffer_size", odsAttrs.getContext());
}

SDDMMBufferSizeOpGenericAdaptorBase::SDDMMBufferSizeOpGenericAdaptorBase(SDDMMBufferSizeOp op) : SDDMMBufferSizeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SDDMMBufferSizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::DictionaryAttr SDDMMBufferSizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SDDMMBufferSizeOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SDDMMBufferSizeOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SDDMMBufferSizeOpGenericAdaptorBase::getModeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
  return attr;
}

::mlir::gpu::TransposeMode SDDMMBufferSizeOpGenericAdaptorBase::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SDDMMBufferSizeOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SDDMMBufferSizeOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SDDMMBufferSizeOpAdaptor::SDDMMBufferSizeOpAdaptor(SDDMMBufferSizeOp op) : SDDMMBufferSizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SDDMMBufferSizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.sddmm_buffer_size' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.sddmm_buffer_size' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_modeB && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeB))))
    return emitError(loc, "'gpu.sddmm_buffer_size' op ""attribute 'modeB' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.sddmm_buffer_size' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

void SDDMMBufferSizeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "bufferSz");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> SDDMMBufferSizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::Operation::operand_range SDDMMBufferSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SDDMMBufferSizeOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SDDMMBufferSizeOp::getDnmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SDDMMBufferSizeOp::getDnmatB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SDDMMBufferSizeOp::getSpmatC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::MutableOperandRange SDDMMBufferSizeOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SDDMMBufferSizeOp::getDnmatAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SDDMMBufferSizeOp::getDnmatBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SDDMMBufferSizeOp::getSpmatCMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SDDMMBufferSizeOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SDDMMBufferSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SDDMMBufferSizeOp::getBufferSz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::Value SDDMMBufferSizeOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SDDMMBufferSizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeB;
       auto attr = dict.get("modeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SDDMMBufferSizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeB",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SDDMMBufferSizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeB.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SDDMMBufferSizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;

    if (name == "modeB")
      return prop.modeB;
  return std::nullopt;
}

void SDDMMBufferSizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }

    if (name == "modeB") {
       prop.modeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeB)>>(value);
       return;
    }
}

void SDDMMBufferSizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);

    if (prop.modeB) attrs.append("modeB", prop.modeB);
}

::mlir::LogicalResult SDDMMBufferSizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SDDMMBufferSizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeB)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SDDMMBufferSizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);

  writer.writeOptionalAttribute(prop.modeB);
}

::mlir::gpu::TransposeModeAttr SDDMMBufferSizeOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SDDMMBufferSizeOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SDDMMBufferSizeOp::getModeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
}

::mlir::gpu::TransposeMode SDDMMBufferSizeOp::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SDDMMBufferSizeOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SDDMMBufferSizeOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SDDMMBufferSizeOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SDDMMBufferSizeOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SDDMMBufferSizeOp::setModeBAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeBAttrName(), attr);
}

void SDDMMBufferSizeOp::setModeB(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeBAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SDDMMBufferSizeOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SDDMMBufferSizeOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SDDMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type bufferSz, Type asyncToken, ValueRange asyncDependencies, Value dnmatA, Value dnmatB, Value spmatC, Type computeType) {
    auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
    auto modeB = gpu::TransposeMode::NON_TRANSPOSE;
    return build(odsBuilder, odsState, bufferSz, asyncToken, asyncDependencies,
                 modeA, modeB, dnmatA, dnmatB, spmatC, computeType);
}

void SDDMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type bufferSz, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(bufferSz);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SDDMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SDDMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type bufferSz, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(bufferSz);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SDDMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SDDMMBufferSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SDDMMBufferSizeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
  if (!properties.modeB)
    properties.modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SDDMMBufferSizeOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeB, "modeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SDDMMBufferSizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SDDMMBufferSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatAOperands(dnmatARawOperands);  ::llvm::SMLoc dnmatAOperandsLoc;
  (void)dnmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatBOperands(dnmatBRawOperands);  ::llvm::SMLoc dnmatBOperandsLoc;
  (void)dnmatBOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeBAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatCOperands(spmatCRawOperands);  ::llvm::SMLoc spmatCOperandsLoc;
  (void)spmatCOperandsLoc;
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  dnmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SDDMMBufferSizeOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnmatBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatBRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeBAttr) result.getOrAddProperties<SDDMMBufferSizeOp::Properties>().modeB = modeBAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  spmatCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatCRawOperands[0]))
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
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SDDMMBufferSizeOp::Properties>().computeType = computeTypeAttr;
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType3 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatAOperands, odsBuildableType2, dnmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatBOperands, odsBuildableType2, dnmatBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatCOperands, odsBuildableType3, spmatCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SDDMMBufferSizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getDnmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnmatB();
  if (getModeBAttr() && getModeBAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeBAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("modeB");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeBAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeB");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SDDMMBufferSizeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SDDMMOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SDDMMOpGenericAdaptorBase::SDDMMOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.sddmm", odsAttrs.getContext());
}

SDDMMOpGenericAdaptorBase::SDDMMOpGenericAdaptorBase(SDDMMOp op) : SDDMMOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SDDMMOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SDDMMOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SDDMMOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SDDMMOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SDDMMOpGenericAdaptorBase::getModeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
  return attr;
}

::mlir::gpu::TransposeMode SDDMMOpGenericAdaptorBase::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SDDMMOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SDDMMOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SDDMMOpAdaptor::SDDMMOpAdaptor(SDDMMOp op) : SDDMMOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SDDMMOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.sddmm' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.sddmm' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_modeB && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeB))))
    return emitError(loc, "'gpu.sddmm' op ""attribute 'modeB' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.sddmm' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SDDMMOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SDDMMOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SDDMMOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SDDMMOp::getDnmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SDDMMOp::getDnmatB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SDDMMOp::getSpmatC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SDDMMOp::getBuffer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::MutableOperandRange SDDMMOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SDDMMOp::getDnmatAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SDDMMOp::getDnmatBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SDDMMOp::getSpmatCMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SDDMMOp::getBufferMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SDDMMOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SDDMMOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SDDMMOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SDDMMOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeB;
       auto attr = dict.get("modeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SDDMMOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeB",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SDDMMOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeB.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SDDMMOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;

    if (name == "modeB")
      return prop.modeB;
  return std::nullopt;
}

void SDDMMOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }

    if (name == "modeB") {
       prop.modeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeB)>>(value);
       return;
    }
}

void SDDMMOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);

    if (prop.modeB) attrs.append("modeB", prop.modeB);
}

::mlir::LogicalResult SDDMMOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SDDMMOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeB)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SDDMMOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);

  writer.writeOptionalAttribute(prop.modeB);
}

::mlir::gpu::TransposeModeAttr SDDMMOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SDDMMOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SDDMMOp::getModeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
}

::mlir::gpu::TransposeMode SDDMMOp::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SDDMMOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SDDMMOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SDDMMOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SDDMMOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SDDMMOp::setModeBAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeBAttrName(), attr);
}

void SDDMMOp::setModeB(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeBAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SDDMMOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SDDMMOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SDDMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type asyncToken, ValueRange asyncDependencies, Value dnmatA, Value dnmatB, Value spmatC, Type computeType, Value buffer) {
  auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
  auto modeB = gpu::TransposeMode::NON_TRANSPOSE;
  return build(odsBuilder, odsState, asyncToken, asyncDependencies, modeA,
                modeB, dnmatA, dnmatB, spmatC, computeType, buffer);
}

void SDDMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(buffer);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SDDMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(buffer);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(resultTypes);
}

void SDDMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::Type computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(buffer);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SDDMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value dnmatA, ::mlir::Value dnmatB, ::mlir::Value spmatC, ::mlir::Type computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(dnmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(buffer);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(resultTypes);
}

void SDDMMOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void SDDMMOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
  if (!properties.modeB)
    properties.modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SDDMMOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeB, "modeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SDDMMOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SDDMMOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatAOperands(dnmatARawOperands);  ::llvm::SMLoc dnmatAOperandsLoc;
  (void)dnmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatBOperands(dnmatBRawOperands);  ::llvm::SMLoc dnmatBOperandsLoc;
  (void)dnmatBOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeBAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatCOperands(spmatCRawOperands);  ::llvm::SMLoc spmatCOperandsLoc;
  (void)spmatCOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bufferRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bufferOperands(bufferRawOperands);  ::llvm::SMLoc bufferOperandsLoc;
  (void)bufferOperandsLoc;
  ::mlir::Type bufferRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bufferTypes(bufferRawTypes);
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  dnmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SDDMMOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnmatBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatBRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeBAttr) result.getOrAddProperties<SDDMMOp::Properties>().modeB = modeBAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  spmatCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatCRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bufferOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bufferRawOperands[0]))
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
    bufferRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SDDMMOp::Properties>().computeType = computeTypeAttr;
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatAOperands, odsBuildableType1, dnmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatBOperands, odsBuildableType1, dnmatBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatCOperands, odsBuildableType2, spmatCOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bufferOperands, bufferTypes, bufferOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SDDMMOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getDnmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnmatB();
  if (getModeBAttr() && getModeBAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeBAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatC();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBuffer();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("modeB");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeBAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeB");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBuffer().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SDDMMOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SetCsrPointersOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SetCsrPointersOpGenericAdaptorBase::SetCsrPointersOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.set_csr_pointers", odsAttrs.getContext());
}

SetCsrPointersOpGenericAdaptorBase::SetCsrPointersOpGenericAdaptorBase(SetCsrPointersOp op) : SetCsrPointersOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SetCsrPointersOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SetCsrPointersOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SetCsrPointersOpAdaptor::SetCsrPointersOpAdaptor(SetCsrPointersOp op) : SetCsrPointersOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SetCsrPointersOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SetCsrPointersOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SetCsrPointersOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SetCsrPointersOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SetCsrPointersOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SetCsrPointersOp::getPositions() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(2).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SetCsrPointersOp::getCoordinates() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SetCsrPointersOp::getValues() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::MutableOperandRange SetCsrPointersOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SetCsrPointersOp::getSpmatMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SetCsrPointersOp::getPositionsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SetCsrPointersOp::getCoordinatesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SetCsrPointersOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SetCsrPointersOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SetCsrPointersOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SetCsrPointersOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void SetCsrPointersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value spmat, ::mlir::Value positions, ::mlir::Value coordinates, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmat);
  odsState.addOperands(positions);
  odsState.addOperands(coordinates);
  odsState.addOperands(values);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SetCsrPointersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value spmat, ::mlir::Value positions, ::mlir::Value coordinates, ::mlir::Value values) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmat);
  odsState.addOperands(positions);
  odsState.addOperands(coordinates);
  odsState.addOperands(values);
  odsState.addTypes(resultTypes);
}

void SetCsrPointersOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SetCsrPointersOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SetCsrPointersOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SetCsrPointersOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatOperands(spmatRawOperands);  ::llvm::SMLoc spmatOperandsLoc;
  (void)spmatOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand positionsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> positionsOperands(positionsRawOperands);  ::llvm::SMLoc positionsOperandsLoc;
  (void)positionsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand coordinatesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> coordinatesOperands(coordinatesRawOperands);  ::llvm::SMLoc coordinatesOperandsLoc;
  (void)coordinatesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand valuesRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valuesOperands(valuesRawOperands);  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::mlir::Type positionsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> positionsTypes(positionsRawTypes);
  ::mlir::Type coordinatesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> coordinatesTypes(coordinatesRawTypes);
  ::mlir::Type valuesRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valuesTypes(valuesRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  positionsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(positionsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  coordinatesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(coordinatesRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valuesRawOperands[0]))
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
    positionsRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    coordinatesRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valuesRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatOperands, odsBuildableType1, spmatOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(positionsOperands, positionsTypes, positionsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(coordinatesOperands, coordinatesTypes, coordinatesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SetCsrPointersOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmat();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getPositions();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getCoordinates();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getValues();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getPositions().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getCoordinates().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getValues().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SetCsrPointersOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SetDefaultDeviceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SetDefaultDeviceOpGenericAdaptorBase::SetDefaultDeviceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.set_default_device", odsAttrs.getContext());
}

SetDefaultDeviceOpGenericAdaptorBase::SetDefaultDeviceOpGenericAdaptorBase(SetDefaultDeviceOp op) : SetDefaultDeviceOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SetDefaultDeviceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SetDefaultDeviceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SetDefaultDeviceOpAdaptor::SetDefaultDeviceOpAdaptor(SetDefaultDeviceOp op) : SetDefaultDeviceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SetDefaultDeviceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SetDefaultDeviceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SetDefaultDeviceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> SetDefaultDeviceOp::getDevIndex() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SetDefaultDeviceOp::getDevIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SetDefaultDeviceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SetDefaultDeviceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SetDefaultDeviceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value devIndex) {
  odsState.addOperands(devIndex);
}

void SetDefaultDeviceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value devIndex) {
  odsState.addOperands(devIndex);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SetDefaultDeviceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SetDefaultDeviceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SetDefaultDeviceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SetDefaultDeviceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand devIndexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> devIndexOperands(devIndexRawOperands);  ::llvm::SMLoc devIndexOperandsLoc;
  (void)devIndexOperandsLoc;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  devIndexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(devIndexRawOperands[0]))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(devIndexOperands, odsBuildableType0, devIndexOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SetDefaultDeviceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
  _odsPrinter << getDevIndex();
}

void SetDefaultDeviceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SetDefaultDeviceOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::ShuffleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShuffleOpGenericAdaptorBase::ShuffleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.shuffle", odsAttrs.getContext());
}

ShuffleOpGenericAdaptorBase::ShuffleOpGenericAdaptorBase(ShuffleOp op) : ShuffleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShuffleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShuffleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::ShuffleModeAttr ShuffleOpGenericAdaptorBase::getModeAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::ShuffleModeAttr>(getProperties().mode);
  return attr;
}

::mlir::gpu::ShuffleMode ShuffleOpGenericAdaptorBase::getMode() {
  auto attr = getModeAttr();
  return attr.getValue();
}

} // namespace detail
ShuffleOpAdaptor::ShuffleOpAdaptor(ShuffleOp op) : ShuffleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShuffleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mode = getProperties().mode; (void)tblgen_mode;
  if (!tblgen_mode) return emitError(loc, "'gpu.shuffle' op ""requires attribute 'mode'");

  if (tblgen_mode && !((::llvm::isa<::mlir::gpu::ShuffleModeAttr>(tblgen_mode))))
    return emitError(loc, "'gpu.shuffle' op ""attribute 'mode' failed to satisfy constraint: Indexing modes supported by gpu.shuffle.");
  return ::mlir::success();
}

void ShuffleOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "shuffleResult");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "valid");
}

std::pair<unsigned, unsigned> ShuffleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShuffleOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> ShuffleOp::getOffset() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::IntegerType> ShuffleOp::getWidth() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &ShuffleOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShuffleOp::getOffsetMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ShuffleOp::getWidthMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShuffleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShuffleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShuffleOp::getShuffleResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> ShuffleOp::getValid() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(1).begin());
}

::mlir::LogicalResult ShuffleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mode;
       auto attr = dict.get("mode");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mode in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mode` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ShuffleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mode;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mode",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ShuffleOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mode.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ShuffleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mode")
      return prop.mode;
  return std::nullopt;
}

void ShuffleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mode") {
       prop.mode = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mode)>>(value);
       return;
    }
}

void ShuffleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mode) attrs.append("mode", prop.mode);
}

::mlir::LogicalResult ShuffleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getModeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps13(attr, "mode", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ShuffleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mode)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShuffleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mode);
}

::mlir::gpu::ShuffleModeAttr ShuffleOp::getModeAttr() {
  return ::llvm::cast<::mlir::gpu::ShuffleModeAttr>(getProperties().mode);
}

::mlir::gpu::ShuffleMode ShuffleOp::getMode() {
  auto attr = getModeAttr();
  return attr.getValue();
}

void ShuffleOp::setModeAttr(::mlir::gpu::ShuffleModeAttr attr) {
  (*this)->setAttr(getModeAttrName(), attr);
}

void ShuffleOp::setMode(::mlir::gpu::ShuffleMode attrValue) {
  (*this)->setAttr(getModeAttrName(), ::mlir::gpu::ShuffleModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type shuffleResult, ::mlir::Type valid, ::mlir::Value value, ::mlir::Value offset, ::mlir::Value width, ::mlir::gpu::ShuffleModeAttr mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.getOrAddProperties<Properties>().mode = mode;
  odsState.addTypes(shuffleResult);
  odsState.addTypes(valid);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value offset, ::mlir::Value width, ::mlir::gpu::ShuffleModeAttr mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.getOrAddProperties<Properties>().mode = mode;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShuffleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value offset, ::mlir::Value width, ::mlir::gpu::ShuffleModeAttr mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.getOrAddProperties<Properties>().mode = mode;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type shuffleResult, ::mlir::Type valid, ::mlir::Value value, ::mlir::Value offset, ::mlir::Value width, ::mlir::gpu::ShuffleMode mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.getOrAddProperties<Properties>().mode = ::mlir::gpu::ShuffleModeAttr::get(odsBuilder.getContext(), mode);
  odsState.addTypes(shuffleResult);
  odsState.addTypes(valid);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value offset, ::mlir::Value width, ::mlir::gpu::ShuffleMode mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.getOrAddProperties<Properties>().mode = ::mlir::gpu::ShuffleModeAttr::get(odsBuilder.getContext(), mode);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShuffleOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value offset, ::mlir::Value width, ::mlir::gpu::ShuffleMode mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.getOrAddProperties<Properties>().mode = ::mlir::gpu::ShuffleModeAttr::get(odsBuilder.getContext(), mode);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ShuffleOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ShuffleOp::verifyInvariantsImpl() {
  auto tblgen_mode = getProperties().mode; (void)tblgen_mode;
  if (!tblgen_mode) return emitOpError("requires attribute 'mode'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps13(*this, tblgen_mode, "mode")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps15(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps16(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {value, shuffleResult} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult ShuffleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ShuffleOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  ::mlir::Type odsInferredType1 = odsBuilder.getIntegerType(1);
  inferredReturnTypes[0] = odsInferredType0;
  inferredReturnTypes[1] = odsInferredType1;
  return ::mlir::success();
}

::mlir::ParseResult ShuffleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::ShuffleModeAttr modeAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand offsetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> offsetOperands(offsetRawOperands);  ::llvm::SMLoc offsetOperandsLoc;
  (void)offsetOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand widthRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> widthOperands(widthRawOperands);  ::llvm::SMLoc widthOperandsLoc;
  (void)widthOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  if (parser.parseCustomAttributeWithFallback(modeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAttr) result.getOrAddProperties<ShuffleOp::Properties>().mode = modeAttr;

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  offsetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(offsetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  widthOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(widthRawOperands[0]))
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
    valueRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  result.addTypes(valueTypes[0]);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(offsetOperands, odsBuildableType1, offsetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(widthOperands, odsBuildableType1, widthOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShuffleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getModeAttr());
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOffset();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getWidth();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mode");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ShuffleOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::ShuffleOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpGEMMCopyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpGEMMCopyOpGenericAdaptorBase::SpGEMMCopyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spgemm_copy", odsAttrs.getContext());
}

SpGEMMCopyOpGenericAdaptorBase::SpGEMMCopyOpGenericAdaptorBase(SpGEMMCopyOp op) : SpGEMMCopyOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpGEMMCopyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SpGEMMCopyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SpGEMMCopyOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SpGEMMCopyOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpGEMMCopyOpGenericAdaptorBase::getModeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
  return attr;
}

::mlir::gpu::TransposeMode SpGEMMCopyOpGenericAdaptorBase::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpGEMMCopyOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SpGEMMCopyOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SpGEMMCopyOpAdaptor::SpGEMMCopyOpAdaptor(SpGEMMCopyOp op) : SpGEMMCopyOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpGEMMCopyOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.spgemm_copy' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.spgemm_copy' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_modeB && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeB))))
    return emitError(loc, "'gpu.spgemm_copy' op ""attribute 'modeB' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.spgemm_copy' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SpGEMMCopyOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SpGEMMCopyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpGEMMCopyOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpGEMMCopyOp::getDesc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SpGEMMCopyOp::getSpmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SpGEMMCopyOp::getSpmatB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value SpGEMMCopyOp::getSpmatC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::MutableOperandRange SpGEMMCopyOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpGEMMCopyOp::getDescMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMCopyOp::getSpmatAMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMCopyOp::getSpmatBMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMCopyOp::getSpmatCMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpGEMMCopyOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpGEMMCopyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SpGEMMCopyOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SpGEMMCopyOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeB;
       auto attr = dict.get("modeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SpGEMMCopyOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeB",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SpGEMMCopyOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeB.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SpGEMMCopyOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;

    if (name == "modeB")
      return prop.modeB;
  return std::nullopt;
}

void SpGEMMCopyOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }

    if (name == "modeB") {
       prop.modeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeB)>>(value);
       return;
    }
}

void SpGEMMCopyOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);

    if (prop.modeB) attrs.append("modeB", prop.modeB);
}

::mlir::LogicalResult SpGEMMCopyOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SpGEMMCopyOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeB)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpGEMMCopyOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);

  writer.writeOptionalAttribute(prop.modeB);
}

::mlir::gpu::TransposeModeAttr SpGEMMCopyOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SpGEMMCopyOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpGEMMCopyOp::getModeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
}

::mlir::gpu::TransposeMode SpGEMMCopyOp::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpGEMMCopyOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SpGEMMCopyOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SpGEMMCopyOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SpGEMMCopyOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpGEMMCopyOp::setModeBAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeBAttrName(), attr);
}

void SpGEMMCopyOp::setModeB(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeBAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpGEMMCopyOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SpGEMMCopyOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SpGEMMCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type asyncToken, ValueRange asyncDependencies, Value desc, Value spmatA, Value spmatB, Value spmatC, Type computeType) {
  auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
  auto modeB = gpu::TransposeMode::NON_TRANSPOSE;
  return build(odsBuilder, odsState, asyncToken, asyncDependencies, desc,
               modeA, modeB, spmatA, spmatB, spmatC, computeType);
}

void SpGEMMCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpGEMMCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(resultTypes);
}

void SpGEMMCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpGEMMCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(resultTypes);
}

void SpGEMMCopyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void SpGEMMCopyOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
  if (!properties.modeB)
    properties.modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SpGEMMCopyOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeB, "modeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpGEMMCopyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpGEMMCopyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatAOperands(spmatARawOperands);  ::llvm::SMLoc spmatAOperandsLoc;
  (void)spmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatBOperands(spmatBRawOperands);  ::llvm::SMLoc spmatBOperandsLoc;
  (void)spmatBOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeBAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatCOperands(spmatCRawOperands);  ::llvm::SMLoc spmatCOperandsLoc;
  (void)spmatCOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand descRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descOperands(descRawOperands);  ::llvm::SMLoc descOperandsLoc;
  (void)descOperandsLoc;
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SpGEMMCopyOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  spmatBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatBRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeBAttr) result.getOrAddProperties<SpGEMMCopyOp::Properties>().modeB = modeBAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  spmatCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatCRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  descOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descRawOperands[0]))
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

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SpGEMMCopyOp::Properties>().computeType = computeTypeAttr;
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpGEMMOpHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(descOperands, odsBuildableType1, descOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatAOperands, odsBuildableType2, spmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatBOperands, odsBuildableType2, spmatBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatCOperands, odsBuildableType2, spmatCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpGEMMCopyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatB();
  if (getModeBAttr() && getModeBAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeBAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatC();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDesc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("modeB");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeBAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeB");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpGEMMCopyOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpGEMMCreateDescrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpGEMMCreateDescrOpGenericAdaptorBase::SpGEMMCreateDescrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spgemm_create_descr", odsAttrs.getContext());
}

SpGEMMCreateDescrOpGenericAdaptorBase::SpGEMMCreateDescrOpGenericAdaptorBase(SpGEMMCreateDescrOp op) : SpGEMMCreateDescrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpGEMMCreateDescrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr SpGEMMCreateDescrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SpGEMMCreateDescrOpAdaptor::SpGEMMCreateDescrOpAdaptor(SpGEMMCreateDescrOp op) : SpGEMMCreateDescrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpGEMMCreateDescrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void SpGEMMCreateDescrOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "desc");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> SpGEMMCreateDescrOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range SpGEMMCreateDescrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpGEMMCreateDescrOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange SpGEMMCreateDescrOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SpGEMMCreateDescrOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpGEMMCreateDescrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SpGEMMCreateDescrOp::getDesc() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value SpGEMMCreateDescrOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void SpGEMMCreateDescrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type desc, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies) {
  odsState.addOperands(asyncDependencies);
  odsState.addTypes(desc);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpGEMMCreateDescrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SpGEMMCreateDescrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps17(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpGEMMCreateDescrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpGEMMCreateDescrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::SparseSpGEMMOpHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpGEMMCreateDescrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpGEMMCreateDescrOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpGEMMDestroyDescrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpGEMMDestroyDescrOpGenericAdaptorBase::SpGEMMDestroyDescrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spgemm_destroy_descr", odsAttrs.getContext());
}

SpGEMMDestroyDescrOpGenericAdaptorBase::SpGEMMDestroyDescrOpGenericAdaptorBase(SpGEMMDestroyDescrOp op) : SpGEMMDestroyDescrOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpGEMMDestroyDescrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
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

::mlir::DictionaryAttr SpGEMMDestroyDescrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SpGEMMDestroyDescrOpAdaptor::SpGEMMDestroyDescrOpAdaptor(SpGEMMDestroyDescrOp op) : SpGEMMDestroyDescrOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpGEMMDestroyDescrOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SpGEMMDestroyDescrOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
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

::mlir::Operation::operand_range SpGEMMDestroyDescrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpGEMMDestroyDescrOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpGEMMDestroyDescrOp::getDesc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange SpGEMMDestroyDescrOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpGEMMDestroyDescrOp::getDescMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpGEMMDestroyDescrOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpGEMMDestroyDescrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SpGEMMDestroyDescrOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void SpGEMMDestroyDescrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpGEMMDestroyDescrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addTypes(resultTypes);
}

void SpGEMMDestroyDescrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SpGEMMDestroyDescrOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps17(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpGEMMDestroyDescrOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpGEMMDestroyDescrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand descRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descOperands(descRawOperands);  ::llvm::SMLoc descOperandsLoc;
  (void)descOperandsLoc;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  descOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpGEMMOpHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(descOperands, odsBuildableType1, descOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpGEMMDestroyDescrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getDesc();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpGEMMDestroyDescrOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpGEMMWorkEstimationOrComputeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spgemm_work_estimation_or_compute", odsAttrs.getContext());
}

SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase(SpGEMMWorkEstimationOrComputeOp op) : SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getModeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
  return attr;
}

::mlir::gpu::TransposeMode SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getKindAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr>(getProperties().kind);
  return attr;
}

::mlir::gpu::SpGEMMWorkEstimationOrComputeKind SpGEMMWorkEstimationOrComputeOpGenericAdaptorBase::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

} // namespace detail
SpGEMMWorkEstimationOrComputeOpAdaptor::SpGEMMWorkEstimationOrComputeOpAdaptor(SpGEMMWorkEstimationOrComputeOp op) : SpGEMMWorkEstimationOrComputeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpGEMMWorkEstimationOrComputeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.spgemm_work_estimation_or_compute' op ""requires attribute 'computeType'");
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitError(loc, "'gpu.spgemm_work_estimation_or_compute' op ""requires attribute 'kind'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.spgemm_work_estimation_or_compute' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_modeB && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeB))))
    return emitError(loc, "'gpu.spgemm_work_estimation_or_compute' op ""attribute 'modeB' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.spgemm_work_estimation_or_compute' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");

  if (tblgen_kind && !((::llvm::isa<::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr>(tblgen_kind))))
    return emitError(loc, "'gpu.spgemm_work_estimation_or_compute' op ""attribute 'kind' failed to satisfy constraint: choose whether spgemm_work_estimation_or_compute does work estimation or compute");
  return ::mlir::success();
}

void SpGEMMWorkEstimationOrComputeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "bufferSzNew");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> SpGEMMWorkEstimationOrComputeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SpGEMMWorkEstimationOrComputeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpGEMMWorkEstimationOrComputeOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpGEMMWorkEstimationOrComputeOp::getDesc() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SpGEMMWorkEstimationOrComputeOp::getSpmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SpGEMMWorkEstimationOrComputeOp::getSpmatB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Value SpGEMMWorkEstimationOrComputeOp::getSpmatC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(4).begin());
}

::mlir::TypedValue<::mlir::IndexType> SpGEMMWorkEstimationOrComputeOp::getBufferSz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSOperands(5).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SpGEMMWorkEstimationOrComputeOp::getBuffer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(6).begin());
}

::mlir::MutableOperandRange SpGEMMWorkEstimationOrComputeOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpGEMMWorkEstimationOrComputeOp::getDescMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMWorkEstimationOrComputeOp::getSpmatAMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMWorkEstimationOrComputeOp::getSpmatBMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMWorkEstimationOrComputeOp::getSpmatCMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMWorkEstimationOrComputeOp::getBufferSzMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpGEMMWorkEstimationOrComputeOp::getBufferMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpGEMMWorkEstimationOrComputeOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpGEMMWorkEstimationOrComputeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SpGEMMWorkEstimationOrComputeOp::getBufferSzNew() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::Value SpGEMMWorkEstimationOrComputeOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SpGEMMWorkEstimationOrComputeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.kind;
       auto attr = dict.get("kind");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for kind in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `kind` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeB;
       auto attr = dict.get("modeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SpGEMMWorkEstimationOrComputeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.kind;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("kind",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeB",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SpGEMMWorkEstimationOrComputeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.kind.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeB.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SpGEMMWorkEstimationOrComputeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "kind")
      return prop.kind;

    if (name == "modeA")
      return prop.modeA;

    if (name == "modeB")
      return prop.modeB;
  return std::nullopt;
}

void SpGEMMWorkEstimationOrComputeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "kind") {
       prop.kind = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.kind)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }

    if (name == "modeB") {
       prop.modeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeB)>>(value);
       return;
    }
}

void SpGEMMWorkEstimationOrComputeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.kind) attrs.append("kind", prop.kind);

    if (prop.modeA) attrs.append("modeA", prop.modeA);

    if (prop.modeB) attrs.append("modeB", prop.modeB);
}

::mlir::LogicalResult SpGEMMWorkEstimationOrComputeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKindAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps14(attr, "kind", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SpGEMMWorkEstimationOrComputeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.kind)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeB)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpGEMMWorkEstimationOrComputeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);
  writer.writeAttribute(prop.kind);

  writer.writeOptionalAttribute(prop.modeA);

  writer.writeOptionalAttribute(prop.modeB);
}

::mlir::gpu::TransposeModeAttr SpGEMMWorkEstimationOrComputeOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SpGEMMWorkEstimationOrComputeOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpGEMMWorkEstimationOrComputeOp::getModeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
}

::mlir::gpu::TransposeMode SpGEMMWorkEstimationOrComputeOp::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpGEMMWorkEstimationOrComputeOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SpGEMMWorkEstimationOrComputeOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr SpGEMMWorkEstimationOrComputeOp::getKindAttr() {
  return ::llvm::cast<::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr>(getProperties().kind);
}

::mlir::gpu::SpGEMMWorkEstimationOrComputeKind SpGEMMWorkEstimationOrComputeOp::getKind() {
  auto attr = getKindAttr();
  return attr.getValue();
}

void SpGEMMWorkEstimationOrComputeOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SpGEMMWorkEstimationOrComputeOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpGEMMWorkEstimationOrComputeOp::setModeBAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeBAttrName(), attr);
}

void SpGEMMWorkEstimationOrComputeOp::setModeB(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeBAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpGEMMWorkEstimationOrComputeOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SpGEMMWorkEstimationOrComputeOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SpGEMMWorkEstimationOrComputeOp::setKindAttr(::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr attr) {
  (*this)->setAttr(getKindAttrName(), attr);
}

void SpGEMMWorkEstimationOrComputeOp::setKind(::mlir::gpu::SpGEMMWorkEstimationOrComputeKind attrValue) {
  (*this)->setAttr(getKindAttrName(), ::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpGEMMWorkEstimationOrComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type bufferSzNew, Type asyncToken, ValueRange asyncDependencies, Value desc, Value spmatA, Value spmatB, Value spmatC, Type computeType, Value bufferSz, Value buffer) {
  auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
  auto modeB = gpu::TransposeMode::NON_TRANSPOSE;
  auto kind = gpu::SpGEMMWorkEstimationOrComputeKind::WORK_ESTIMATION;
  return build(odsBuilder, odsState, bufferSzNew, asyncToken, asyncDependencies, desc,
               modeA, modeB, spmatA, spmatB, spmatC, computeType, bufferSz, buffer, kind);
}

void SpGEMMWorkEstimationOrComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type bufferSzNew, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType, ::mlir::Value bufferSz, ::mlir::Value buffer, ::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr kind) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(bufferSz);
  odsState.addOperands(buffer);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.getOrAddProperties<Properties>().kind = kind;
  odsState.addTypes(bufferSzNew);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpGEMMWorkEstimationOrComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::TypeAttr computeType, ::mlir::Value bufferSz, ::mlir::Value buffer, ::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr kind) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(bufferSz);
  odsState.addOperands(buffer);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.getOrAddProperties<Properties>().kind = kind;
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SpGEMMWorkEstimationOrComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type bufferSzNew, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::Type computeType, ::mlir::Value bufferSz, ::mlir::Value buffer, ::mlir::gpu::SpGEMMWorkEstimationOrComputeKind kind) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(bufferSz);
  odsState.addOperands(buffer);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr::get(odsBuilder.getContext(), kind);
  odsState.addTypes(bufferSzNew);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpGEMMWorkEstimationOrComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value desc, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value spmatB, ::mlir::Value spmatC, ::mlir::Type computeType, ::mlir::Value bufferSz, ::mlir::Value buffer, ::mlir::gpu::SpGEMMWorkEstimationOrComputeKind kind) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(desc);
  odsState.addOperands(spmatA);
  odsState.addOperands(spmatB);
  odsState.addOperands(spmatC);
  odsState.addOperands(bufferSz);
  odsState.addOperands(buffer);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.getOrAddProperties<Properties>().kind = ::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr::get(odsBuilder.getContext(), kind);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SpGEMMWorkEstimationOrComputeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SpGEMMWorkEstimationOrComputeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
  if (!properties.modeB)
    properties.modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SpGEMMWorkEstimationOrComputeOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_kind = getProperties().kind; (void)tblgen_kind;
  if (!tblgen_kind) return emitOpError("requires attribute 'kind'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeB, "modeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps14(*this, tblgen_kind, "kind")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpGEMMWorkEstimationOrComputeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpGEMMWorkEstimationOrComputeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::gpu::SpGEMMWorkEstimationOrComputeKindAttr kindAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatAOperands(spmatARawOperands);  ::llvm::SMLoc spmatAOperandsLoc;
  (void)spmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatBOperands(spmatBRawOperands);  ::llvm::SMLoc spmatBOperandsLoc;
  (void)spmatBOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeBAttr;
  ::mlir::OpAsmParser::UnresolvedOperand spmatCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatCOperands(spmatCRawOperands);  ::llvm::SMLoc spmatCOperandsLoc;
  (void)spmatCOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand descRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> descOperands(descRawOperands);  ::llvm::SMLoc descOperandsLoc;
  (void)descOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bufferSzRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bufferSzOperands(bufferSzRawOperands);  ::llvm::SMLoc bufferSzOperandsLoc;
  (void)bufferSzOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bufferRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bufferOperands(bufferRawOperands);  ::llvm::SMLoc bufferOperandsLoc;
  (void)bufferOperandsLoc;
  ::mlir::TypeAttr computeTypeAttr;
  ::mlir::Type bufferRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bufferTypes(bufferRawTypes);
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }
  if (parser.parseLBrace())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(kindAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (kindAttr) result.getOrAddProperties<SpGEMMWorkEstimationOrComputeOp::Properties>().kind = kindAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();

  spmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SpGEMMWorkEstimationOrComputeOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  spmatBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatBRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeBAttr) result.getOrAddProperties<SpGEMMWorkEstimationOrComputeOp::Properties>().modeB = modeBAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  spmatCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatCRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  descOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(descRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bufferSzOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bufferSzRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bufferOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bufferRawOperands[0]))
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

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SpGEMMWorkEstimationOrComputeOp::Properties>().computeType = computeTypeAttr;
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    bufferRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseSpGEMMOpHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType3 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(descOperands, odsBuildableType2, descOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatAOperands, odsBuildableType3, spmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatBOperands, odsBuildableType3, spmatBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatCOperands, odsBuildableType3, spmatCOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bufferSzOperands, odsBuildableType0, bufferSzOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bufferOperands, bufferTypes, bufferOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpGEMMWorkEstimationOrComputeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << "{";
_odsPrinter.printStrippedAttrOrType(getKindAttr());
  _odsPrinter << "}";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatB();
  if (getModeBAttr() && getModeBAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeBAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getSpmatC();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDesc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBufferSz();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBuffer();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("kind");
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("modeB");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeBAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeB");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  {
    auto type = getBuffer().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpGEMMWorkEstimationOrComputeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpMMBufferSizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpMMBufferSizeOpGenericAdaptorBase::SpMMBufferSizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spmm_buffer_size", odsAttrs.getContext());
}

SpMMBufferSizeOpGenericAdaptorBase::SpMMBufferSizeOpGenericAdaptorBase(SpMMBufferSizeOp op) : SpMMBufferSizeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpMMBufferSizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::DictionaryAttr SpMMBufferSizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SpMMBufferSizeOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SpMMBufferSizeOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpMMBufferSizeOpGenericAdaptorBase::getModeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
  return attr;
}

::mlir::gpu::TransposeMode SpMMBufferSizeOpGenericAdaptorBase::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMMBufferSizeOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SpMMBufferSizeOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SpMMBufferSizeOpAdaptor::SpMMBufferSizeOpAdaptor(SpMMBufferSizeOp op) : SpMMBufferSizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpMMBufferSizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.spmm_buffer_size' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.spmm_buffer_size' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_modeB && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeB))))
    return emitError(loc, "'gpu.spmm_buffer_size' op ""attribute 'modeB' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.spmm_buffer_size' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

void SpMMBufferSizeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "bufferSzs");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> SpMMBufferSizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::Operation::operand_range SpMMBufferSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpMMBufferSizeOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpMMBufferSizeOp::getSpmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SpMMBufferSizeOp::getDnmatB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SpMMBufferSizeOp::getDnmatC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::MutableOperandRange SpMMBufferSizeOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpMMBufferSizeOp::getSpmatAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMMBufferSizeOp::getDnmatBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMMBufferSizeOp::getDnmatCMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpMMBufferSizeOp::getODSResultIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().resultSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::result_range SpMMBufferSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range SpMMBufferSizeOp::getBufferSzs() {
  return getODSResults(0);
}

::mlir::Value SpMMBufferSizeOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SpMMBufferSizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeB;
       auto attr = dict.get("modeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeB` in property conversion: " << attr;
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
         auto attr = dict.get("resultSegmentSizes");   if (!attr) attr = dict.get("result_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for resultSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.resultSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SpMMBufferSizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.resultSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("resultSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SpMMBufferSizeOp::computePropertiesHash(const Properties &prop) {
  auto hash_resultSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeB.getAsOpaquePointer()), 
    hash_resultSegmentSizes(prop.resultSegmentSizes));
}

std::optional<mlir::Attribute> SpMMBufferSizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;

    if (name == "modeB")
      return prop.modeB;
    if (name == "result_segment_sizes" || name == "resultSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.resultSegmentSizes);
  return std::nullopt;
}

void SpMMBufferSizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }

    if (name == "modeB") {
       prop.modeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeB)>>(value);
       return;
    }
        if (name == "result_segment_sizes" || name == "resultSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.resultSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.resultSegmentSizes.begin());
       return;
    }
}

void SpMMBufferSizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);

    if (prop.modeB) attrs.append("modeB", prop.modeB);
  attrs.append("resultSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.resultSegmentSizes));
}

::mlir::LogicalResult SpMMBufferSizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SpMMBufferSizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeB)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.resultSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.resultSegmentSizes;
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

void SpMMBufferSizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);

  writer.writeOptionalAttribute(prop.modeB);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.resultSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.resultSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::gpu::TransposeModeAttr SpMMBufferSizeOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SpMMBufferSizeOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpMMBufferSizeOp::getModeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
}

::mlir::gpu::TransposeMode SpMMBufferSizeOp::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMMBufferSizeOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SpMMBufferSizeOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SpMMBufferSizeOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SpMMBufferSizeOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpMMBufferSizeOp::setModeBAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeBAttrName(), attr);
}

void SpMMBufferSizeOp::setModeB(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeBAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpMMBufferSizeOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SpMMBufferSizeOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SpMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type bufferSzs, Type asyncToken, ValueRange asyncDependencies, Value spmatA, Value dnmatB, Value dnmatC, Type computeType) {
    auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
    auto modeB = gpu::TransposeMode::NON_TRANSPOSE;
    return build(odsBuilder, odsState, bufferSzs, asyncToken, asyncDependencies,
                 modeA, modeB, spmatA, dnmatB, dnmatC, computeType);
}

void SpMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange bufferSzs, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(bufferSzs);
  if (asyncToken)
    odsState.addTypes(asyncToken);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(bufferSzs.size()), (asyncToken ? 1 : 0)}), odsState.getOrAddProperties<Properties>().resultSegmentSizes.begin());
}

void SpMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(resultTypes);
}

void SpMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange bufferSzs, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(bufferSzs);
  if (asyncToken)
    odsState.addTypes(asyncToken);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(bufferSzs.size()), (asyncToken ? 1 : 0)}), odsState.getOrAddProperties<Properties>().resultSegmentSizes.begin());
}

void SpMMBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(resultTypes);
}

void SpMMBufferSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void SpMMBufferSizeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
  if (!properties.modeB)
    properties.modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SpMMBufferSizeOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeB, "modeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpMMBufferSizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpMMBufferSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatAOperands(spmatARawOperands);  ::llvm::SMLoc spmatAOperandsLoc;
  (void)spmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatBOperands(dnmatBRawOperands);  ::llvm::SMLoc dnmatBOperandsLoc;
  (void)dnmatBOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeBAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatCOperands(dnmatCRawOperands);  ::llvm::SMLoc dnmatCOperandsLoc;
  (void)dnmatCOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> bufferSzsTypes;
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SpMMBufferSizeOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnmatBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatBRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeBAttr) result.getOrAddProperties<SpMMBufferSizeOp::Properties>().modeB = modeBAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnmatCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatCRawOperands[0]))
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

  if (parser.parseTypeList(bufferSzsTypes))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SpMMBufferSizeOp::Properties>().computeType = computeTypeAttr;
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(bufferSzsTypes.size()), static_cast<int32_t>(asyncTokenTypes.size())}), result.getOrAddProperties<SpMMBufferSizeOp::Properties>().resultSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  result.addTypes(bufferSzsTypes);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatAOperands, odsBuildableType1, spmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatBOperands, odsBuildableType2, dnmatBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatCOperands, odsBuildableType2, dnmatCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMMBufferSizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnmatB();
  if (getModeBAttr() && getModeBAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeBAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnmatC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("resultSegmentSizes");
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("modeB");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeBAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeB");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getBufferSzs().getTypes();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpMMBufferSizeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpMMOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpMMOpGenericAdaptorBase::SpMMOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spmm", odsAttrs.getContext());
}

SpMMOpGenericAdaptorBase::SpMMOpGenericAdaptorBase(SpMMOp op) : SpMMOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpMMOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SpMMOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SpMMOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SpMMOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpMMOpGenericAdaptorBase::getModeBAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
  return attr;
}

::mlir::gpu::TransposeMode SpMMOpGenericAdaptorBase::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMMOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SpMMOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SpMMOpAdaptor::SpMMOpAdaptor(SpMMOp op) : SpMMOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpMMOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.spmm' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.spmm' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_modeB && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeB))))
    return emitError(loc, "'gpu.spmm' op ""attribute 'modeB' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.spmm' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SpMMOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SpMMOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpMMOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpMMOp::getSpmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SpMMOp::getDnmatB() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SpMMOp::getDnmatC() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::Operation::operand_range SpMMOp::getBuffers() {
  return getODSOperands(4);
}

::mlir::MutableOperandRange SpMMOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::OpOperand &SpMMOp::getSpmatAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMMOp::getDnmatBMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMMOp::getDnmatCMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SpMMOp::getBuffersMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SpMMOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpMMOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SpMMOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SpMMOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeB;
       auto attr = dict.get("modeB");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeB in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeB` in property conversion: " << attr;
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

::mlir::Attribute SpMMOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeB",
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

llvm::hash_code SpMMOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeB.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SpMMOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;

    if (name == "modeB")
      return prop.modeB;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SpMMOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }

    if (name == "modeB") {
       prop.modeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeB)>>(value);
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

void SpMMOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);

    if (prop.modeB) attrs.append("modeB", prop.modeB);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SpMMOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeB", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SpMMOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeB)))
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

void SpMMOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);

  writer.writeOptionalAttribute(prop.modeB);

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

::mlir::gpu::TransposeModeAttr SpMMOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SpMMOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::gpu::TransposeModeAttr SpMMOp::getModeBAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeB);
}

::mlir::gpu::TransposeMode SpMMOp::getModeB() {
  auto attr = getModeBAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMMOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SpMMOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SpMMOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SpMMOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpMMOp::setModeBAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeBAttrName(), attr);
}

void SpMMOp::setModeB(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeBAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpMMOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SpMMOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SpMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type asyncToken, ValueRange asyncDependencies, Value spmatA, Value dnmatB, Value dnmatC, Type computeType, ValueRange buffers) {
    auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
    auto modeB = gpu::TransposeMode::NON_TRANSPOSE;
    return build(odsBuilder, odsState, asyncToken, asyncDependencies, modeA,
                 modeB, spmatA, dnmatB, dnmatC, computeType, buffers);
}

void SpMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::TypeAttr computeType, ::mlir::ValueRange buffers) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  odsState.addOperands(buffers);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), 1, 1, 1, static_cast<int32_t>(buffers.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::gpu::TransposeModeAttr modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::TypeAttr computeType, ::mlir::ValueRange buffers) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  odsState.addOperands(buffers);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), 1, 1, 1, static_cast<int32_t>(buffers.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  if (modeB) {
    odsState.getOrAddProperties<Properties>().modeB = modeB;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(resultTypes);
}

void SpMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::Type computeType, ::mlir::ValueRange buffers) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  odsState.addOperands(buffers);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), 1, 1, 1, static_cast<int32_t>(buffers.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMMOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::gpu::TransposeMode modeB, ::mlir::Value spmatA, ::mlir::Value dnmatB, ::mlir::Value dnmatC, ::mlir::Type computeType, ::mlir::ValueRange buffers) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnmatB);
  odsState.addOperands(dnmatC);
  odsState.addOperands(buffers);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependencies.size()), 1, 1, 1, static_cast<int32_t>(buffers.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeB);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(resultTypes);
}

void SpMMOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void SpMMOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
  if (!properties.modeB)
    properties.modeB = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SpMMOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;
  auto tblgen_modeB = getProperties().modeB; (void)tblgen_modeB;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeB, "modeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps18(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpMMOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpMMOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatAOperands(spmatARawOperands);  ::llvm::SMLoc spmatAOperandsLoc;
  (void)spmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatBOperands(dnmatBRawOperands);  ::llvm::SMLoc dnmatBOperandsLoc;
  (void)dnmatBOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeBAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnmatCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnmatCOperands(dnmatCRawOperands);  ::llvm::SMLoc dnmatCOperandsLoc;
  (void)dnmatCOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> buffersOperands;
  ::llvm::SMLoc buffersOperandsLoc;
  (void)buffersOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> buffersTypes;
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SpMMOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnmatBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatBRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeBAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeBAttr) result.getOrAddProperties<SpMMOp::Properties>().modeB = modeBAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnmatCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnmatCRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  buffersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(buffersOperands))
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

  if (parser.parseTypeList(buffersTypes))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SpMMOp::Properties>().computeType = computeTypeAttr;
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(asyncDependenciesOperands.size()), 1, 1, 1, static_cast<int32_t>(buffersOperands.size())}), result.getOrAddProperties<SpMMOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatAOperands, odsBuildableType1, spmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatBOperands, odsBuildableType2, dnmatBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnmatCOperands, odsBuildableType2, dnmatCOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(buffersOperands, buffersTypes, buffersOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMMOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnmatB();
  if (getModeBAttr() && getModeBAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeBAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnmatC();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBuffers();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("modeB");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeBAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeB");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getBuffers().getTypes();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpMMOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpMVBufferSizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpMVBufferSizeOpGenericAdaptorBase::SpMVBufferSizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spmv_buffer_size", odsAttrs.getContext());
}

SpMVBufferSizeOpGenericAdaptorBase::SpMVBufferSizeOpGenericAdaptorBase(SpMVBufferSizeOp op) : SpMVBufferSizeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpMVBufferSizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::DictionaryAttr SpMVBufferSizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SpMVBufferSizeOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SpMVBufferSizeOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMVBufferSizeOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SpMVBufferSizeOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SpMVBufferSizeOpAdaptor::SpMVBufferSizeOpAdaptor(SpMVBufferSizeOp op) : SpMVBufferSizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpMVBufferSizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.spmv_buffer_size' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.spmv_buffer_size' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.spmv_buffer_size' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

void SpMVBufferSizeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "bufferSz");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> SpMVBufferSizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false};
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

::mlir::Operation::operand_range SpMVBufferSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpMVBufferSizeOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpMVBufferSizeOp::getSpmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SpMVBufferSizeOp::getDnX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SpMVBufferSizeOp::getDnY() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::MutableOperandRange SpMVBufferSizeOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpMVBufferSizeOp::getSpmatAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMVBufferSizeOp::getDnXMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMVBufferSizeOp::getDnYMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpMVBufferSizeOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpMVBufferSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SpMVBufferSizeOp::getBufferSz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::Value SpMVBufferSizeOp::getAsyncToken() {
  auto results = getODSResults(1);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SpMVBufferSizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SpMVBufferSizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SpMVBufferSizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SpMVBufferSizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;
  return std::nullopt;
}

void SpMVBufferSizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }
}

void SpMVBufferSizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);
}

::mlir::LogicalResult SpMVBufferSizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SpMVBufferSizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMVBufferSizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);
}

::mlir::gpu::TransposeModeAttr SpMVBufferSizeOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SpMVBufferSizeOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMVBufferSizeOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SpMVBufferSizeOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SpMVBufferSizeOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SpMVBufferSizeOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpMVBufferSizeOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SpMVBufferSizeOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SpMVBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type bufferSz, Type asyncToken, ValueRange asyncDependencies, Value spmatA, Value dnX, Value dnY, Type computeType) {
    auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
    return build(odsBuilder, odsState, bufferSz, asyncToken, asyncDependencies,
                 modeA, spmatA, dnX, dnY, computeType);
}

void SpMVBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type bufferSz, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(bufferSz);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMVBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::TypeAttr computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SpMVBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type bufferSz, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(bufferSz);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMVBufferSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::Type computeType) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SpMVBufferSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SpMVBufferSizeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SpMVBufferSizeOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpMVBufferSizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpMVBufferSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatAOperands(spmatARawOperands);  ::llvm::SMLoc spmatAOperandsLoc;
  (void)spmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnXRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnXOperands(dnXRawOperands);  ::llvm::SMLoc dnXOperandsLoc;
  (void)dnXOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dnYRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnYOperands(dnYRawOperands);  ::llvm::SMLoc dnYOperandsLoc;
  (void)dnYOperandsLoc;
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SpMVBufferSizeOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnXOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnXRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  dnYOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnYRawOperands[0]))
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
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SpMVBufferSizeOp::Properties>().computeType = computeTypeAttr;
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType3 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatAOperands, odsBuildableType2, spmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnXOperands, odsBuildableType3, dnXOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnYOperands, odsBuildableType3, dnYOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMVBufferSizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnY();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpMVBufferSizeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpMVOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpMVOpGenericAdaptorBase::SpMVOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spmv", odsAttrs.getContext());
}

SpMVOpGenericAdaptorBase::SpMVOpGenericAdaptorBase(SpMVOp op) : SpMVOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpMVOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SpMVOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::TransposeModeAttr SpMVOpGenericAdaptorBase::getModeAAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
  return attr;
}

::mlir::gpu::TransposeMode SpMVOpGenericAdaptorBase::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMVOpGenericAdaptorBase::getComputeTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
  return attr;
}

::mlir::Type SpMVOpGenericAdaptorBase::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

} // namespace detail
SpMVOpAdaptor::SpMVOpAdaptor(SpMVOp op) : SpMVOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpMVOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitError(loc, "'gpu.spmv' op ""requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;

  if (tblgen_modeA && !((::llvm::isa<::mlir::gpu::TransposeModeAttr>(tblgen_modeA))))
    return emitError(loc, "'gpu.spmv' op ""attribute 'modeA' failed to satisfy constraint: transpose mode of sparse matrix supported by sparse tensor ops");

  if (tblgen_computeType && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_computeType))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_computeType).getValue()))) && ((true))))
    return emitError(loc, "'gpu.spmv' op ""attribute 'computeType' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SpMVOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 4) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SpMVOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpMVOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpMVOp::getSpmatA() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::Value SpMVOp::getDnX() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
}

::mlir::Value SpMVOp::getDnY() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SpMVOp::getBuffer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(4).begin());
}

::mlir::MutableOperandRange SpMVOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpMVOp::getSpmatAMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMVOp::getDnXMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMVOp::getDnYMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SpMVOp::getBufferMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpMVOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range SpMVOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SpMVOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

::mlir::LogicalResult SpMVOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.computeType;
       auto attr = dict.get("computeType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for computeType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `computeType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.modeA;
       auto attr = dict.get("modeA");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for modeA in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `modeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SpMVOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.computeType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("computeType",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.modeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("modeA",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SpMVOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.computeType.getAsOpaquePointer()), 
    llvm::hash_value(prop.modeA.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SpMVOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "computeType")
      return prop.computeType;

    if (name == "modeA")
      return prop.modeA;
  return std::nullopt;
}

void SpMVOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "computeType") {
       prop.computeType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.computeType)>>(value);
       return;
    }

    if (name == "modeA") {
       prop.modeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.modeA)>>(value);
       return;
    }
}

void SpMVOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.computeType) attrs.append("computeType", prop.computeType);

    if (prop.modeA) attrs.append("modeA", prop.modeA);
}

::mlir::LogicalResult SpMVOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getComputeTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(attr, "computeType", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getModeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(attr, "modeA", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SpMVOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.computeType)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.modeA)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMVOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.computeType);

  writer.writeOptionalAttribute(prop.modeA);
}

::mlir::gpu::TransposeModeAttr SpMVOp::getModeAAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::gpu::TransposeModeAttr>(getProperties().modeA);
}

::mlir::gpu::TransposeMode SpMVOp::getModeA() {
  auto attr = getModeAAttr();
  return attr.getValue();
}

::mlir::TypeAttr SpMVOp::getComputeTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().computeType);
}

::mlir::Type SpMVOp::getComputeType() {
  auto attr = getComputeTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void SpMVOp::setModeAAttr(::mlir::gpu::TransposeModeAttr attr) {
  (*this)->setAttr(getModeAAttrName(), attr);
}

void SpMVOp::setModeA(::mlir::gpu::TransposeMode attrValue) {
  (*this)->setAttr(getModeAAttrName(), ::mlir::gpu::TransposeModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SpMVOp::setComputeTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getComputeTypeAttrName(), attr);
}

void SpMVOp::setComputeType(::mlir::Type attrValue) {
  (*this)->setAttr(getComputeTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SpMVOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type asyncToken, ValueRange asyncDependencies, Value spmatA, Value dnX, Value dnY, Type computeType, Value buffer) {
    auto modeA = gpu::TransposeMode::NON_TRANSPOSE;
    return build(odsBuilder, odsState, asyncToken, asyncDependencies, modeA,
                 spmatA, dnX, dnY, computeType, buffer);
}

void SpMVOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::TypeAttr computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  odsState.addOperands(buffer);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMVOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeModeAttr modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::TypeAttr computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  odsState.addOperands(buffer);
  if (modeA) {
    odsState.getOrAddProperties<Properties>().modeA = modeA;
  }
  odsState.getOrAddProperties<Properties>().computeType = computeType;
  odsState.addTypes(resultTypes);
}

void SpMVOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::Type computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  odsState.addOperands(buffer);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMVOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::gpu::TransposeMode modeA, ::mlir::Value spmatA, ::mlir::Value dnX, ::mlir::Value dnY, ::mlir::Type computeType, ::mlir::Value buffer) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmatA);
  odsState.addOperands(dnX);
  odsState.addOperands(dnY);
  odsState.addOperands(buffer);
  odsState.getOrAddProperties<Properties>().modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), modeA);
  odsState.getOrAddProperties<Properties>().computeType = ::mlir::TypeAttr::get(computeType);
  odsState.addTypes(resultTypes);
}

void SpMVOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void SpMVOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.modeA)
    properties.modeA = ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE);
}

::mlir::LogicalResult SpMVOp::verifyInvariantsImpl() {
  auto tblgen_computeType = getProperties().computeType; (void)tblgen_computeType;
  if (!tblgen_computeType) return emitOpError("requires attribute 'computeType'");
  auto tblgen_modeA = getProperties().modeA; (void)tblgen_modeA;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps11(*this, tblgen_modeA, "modeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps12(*this, tblgen_computeType, "computeType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps3(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpMVOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpMVOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatAOperands(spmatARawOperands);  ::llvm::SMLoc spmatAOperandsLoc;
  (void)spmatAOperandsLoc;
  ::mlir::gpu::TransposeModeAttr modeAAttr;
  ::mlir::OpAsmParser::UnresolvedOperand dnXRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnXOperands(dnXRawOperands);  ::llvm::SMLoc dnXOperandsLoc;
  (void)dnXOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dnYRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dnYOperands(dnYRawOperands);  ::llvm::SMLoc dnYOperandsLoc;
  (void)dnYOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand bufferRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> bufferOperands(bufferRawOperands);  ::llvm::SMLoc bufferOperandsLoc;
  (void)bufferOperandsLoc;
  ::mlir::Type bufferRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> bufferTypes(bufferRawTypes);
  ::mlir::TypeAttr computeTypeAttr;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatARawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(modeAAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (modeAAttr) result.getOrAddProperties<SpMVOp::Properties>().modeA = modeAAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (parser.parseComma())
    return ::mlir::failure();

  dnXOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnXRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  dnYOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dnYRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  bufferOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(bufferRawOperands[0]))
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
    bufferRawTypes[0] = type;
  }
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(computeTypeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (computeTypeAttr) result.getOrAddProperties<SpMVOp::Properties>().computeType = computeTypeAttr;
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType1 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseDnTensorHandleType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatAOperands, odsBuildableType1, spmatAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnXOperands, odsBuildableType2, dnXOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dnYOperands, odsBuildableType2, dnYOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bufferOperands, bufferTypes, bufferOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMVOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmatA();
  if (getModeAAttr() && getModeAAttr() != ::mlir::gpu::TransposeModeAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMode::NON_TRANSPOSE)) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getModeAAttr());
    _odsPrinter << "}";
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnX();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDnY();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getBuffer();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("modeA");
  elidedAttrs.push_back("computeType");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getModeAAttr();
     if(attr && (attr == ::mlir::gpu::TransposeModeAttr::get(odsBuilder.getContext(), TransposeMode::NON_TRANSPOSE)))
       elidedAttrs.push_back("modeA");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getBuffer().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getComputeTypeAttr());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpMVOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SpMatGetSizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SpMatGetSizeOpGenericAdaptorBase::SpMatGetSizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.spmat_get_size", odsAttrs.getContext());
}

SpMatGetSizeOpGenericAdaptorBase::SpMatGetSizeOpGenericAdaptorBase(SpMatGetSizeOp op) : SpMatGetSizeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SpMatGetSizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
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

::mlir::DictionaryAttr SpMatGetSizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SpMatGetSizeOpAdaptor::SpMatGetSizeOpAdaptor(SpMatGetSizeOp op) : SpMatGetSizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SpMatGetSizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void SpMatGetSizeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "rows");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "cols");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "nnz");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "asyncToken");
}

std::pair<unsigned, unsigned> SpMatGetSizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
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

::mlir::Operation::operand_range SpMatGetSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SpMatGetSizeOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::Value SpMatGetSizeOp::getSpmat() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange SpMatGetSizeOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::OpOperand &SpMatGetSizeOp::getSpmatMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SpMatGetSizeOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range SpMatGetSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SpMatGetSizeOp::getRows() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::IndexType> SpMatGetSizeOp::getCols() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::IndexType> SpMatGetSizeOp::getNnz() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(2).begin());
}

::mlir::Value SpMatGetSizeOp::getAsyncToken() {
  auto results = getODSResults(3);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void SpMatGetSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type rows, ::mlir::Type cols, ::mlir::Type nnz, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies, ::mlir::Value spmat) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmat);
  odsState.addTypes(rows);
  odsState.addTypes(cols);
  odsState.addTypes(nnz);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void SpMatGetSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange asyncDependencies, ::mlir::Value spmat) {
  odsState.addOperands(asyncDependencies);
  odsState.addOperands(spmat);
  assert(resultTypes.size() >= 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SpMatGetSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SpMatGetSizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SpMatGetSizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpMatGetSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand spmatRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> spmatOperands(spmatRawOperands);  ::llvm::SMLoc spmatOperandsLoc;
  (void)spmatOperandsLoc;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }

  spmatOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(spmatRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  ::mlir::Type odsBuildableType2 = mlir::gpu::SparseSpMatHandleType::get(parser.getBuilder().getContext());
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType1, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(spmatOperands, odsBuildableType2, spmatOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpMatGetSizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  _odsPrinter << ' ';
  _odsPrinter << getSpmat();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SpMatGetSizeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupIdOpGenericAdaptorBase::SubgroupIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_id", odsAttrs.getContext());
}

SubgroupIdOpGenericAdaptorBase::SubgroupIdOpGenericAdaptorBase(SubgroupIdOp op) : SubgroupIdOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubgroupIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SubgroupIdOpAdaptor::SubgroupIdOpAdaptor(SubgroupIdOp op) : SubgroupIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubgroupIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SubgroupIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SubgroupIdOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void SubgroupIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void SubgroupIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubgroupIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubgroupIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubgroupIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubgroupIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SubgroupIdOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SubgroupIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubgroupIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void SubgroupIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void SubgroupIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupIdOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupMmaComputeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupMmaComputeOpGenericAdaptorBase::SubgroupMmaComputeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_mma_compute", odsAttrs.getContext());
}

SubgroupMmaComputeOpGenericAdaptorBase::SubgroupMmaComputeOpGenericAdaptorBase(SubgroupMmaComputeOp op) : SubgroupMmaComputeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupMmaComputeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubgroupMmaComputeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr SubgroupMmaComputeOpGenericAdaptorBase::getATransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().a_transpose);
  return attr;
}

::std::optional<bool> SubgroupMmaComputeOpGenericAdaptorBase::getATranspose() {
  auto attr = getATransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::UnitAttr SubgroupMmaComputeOpGenericAdaptorBase::getBTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().b_transpose);
  return attr;
}

::std::optional<bool> SubgroupMmaComputeOpGenericAdaptorBase::getBTranspose() {
  auto attr = getBTransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
SubgroupMmaComputeOpAdaptor::SubgroupMmaComputeOpAdaptor(SubgroupMmaComputeOp op) : SubgroupMmaComputeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupMmaComputeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_a_transpose = getProperties().a_transpose; (void)tblgen_a_transpose;
  auto tblgen_b_transpose = getProperties().b_transpose; (void)tblgen_b_transpose;

  if (tblgen_a_transpose && !((::llvm::isa<::mlir::UnitAttr>(tblgen_a_transpose))))
    return emitError(loc, "'gpu.subgroup_mma_compute' op ""attribute 'a_transpose' failed to satisfy constraint: unit attribute");

  if (tblgen_b_transpose && !((::llvm::isa<::mlir::UnitAttr>(tblgen_b_transpose))))
    return emitError(loc, "'gpu.subgroup_mma_compute' op ""attribute 'b_transpose' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupMmaComputeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubgroupMmaComputeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::gpu::MMAMatrixType> SubgroupMmaComputeOp::getOpA() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::gpu::MMAMatrixType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::gpu::MMAMatrixType> SubgroupMmaComputeOp::getOpB() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::gpu::MMAMatrixType>>(*getODSOperands(1).begin());
}

::mlir::TypedValue<::mlir::gpu::MMAMatrixType> SubgroupMmaComputeOp::getOpC() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::gpu::MMAMatrixType>>(*getODSOperands(2).begin());
}

::mlir::OpOperand &SubgroupMmaComputeOp::getOpAMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubgroupMmaComputeOp::getOpBMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubgroupMmaComputeOp::getOpCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubgroupMmaComputeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupMmaComputeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupMmaComputeOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubgroupMmaComputeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.a_transpose;
       auto attr = dict.get("a_transpose");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for a_transpose in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `a_transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.b_transpose;
       auto attr = dict.get("b_transpose");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for b_transpose in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `b_transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SubgroupMmaComputeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.a_transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("a_transpose",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.b_transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("b_transpose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SubgroupMmaComputeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.a_transpose.getAsOpaquePointer()), 
    llvm::hash_value(prop.b_transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubgroupMmaComputeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "a_transpose")
      return prop.a_transpose;

    if (name == "b_transpose")
      return prop.b_transpose;
  return std::nullopt;
}

void SubgroupMmaComputeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "a_transpose") {
       prop.a_transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.a_transpose)>>(value);
       return;
    }

    if (name == "b_transpose") {
       prop.b_transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.b_transpose)>>(value);
       return;
    }
}

void SubgroupMmaComputeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.a_transpose) attrs.append("a_transpose", prop.a_transpose);

    if (prop.b_transpose) attrs.append("b_transpose", prop.b_transpose);
}

::mlir::LogicalResult SubgroupMmaComputeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getATransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "a_transpose", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "b_transpose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaComputeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.a_transpose)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.b_transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaComputeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.a_transpose);

  writer.writeOptionalAttribute(prop.b_transpose);
}

::mlir::UnitAttr SubgroupMmaComputeOp::getATransposeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().a_transpose);
}

::std::optional<bool> SubgroupMmaComputeOp::getATranspose() {
  auto attr = getATransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::UnitAttr SubgroupMmaComputeOp::getBTransposeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().b_transpose);
}

::std::optional<bool> SubgroupMmaComputeOp::getBTranspose() {
  auto attr = getBTransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void SubgroupMmaComputeOp::setATransposeAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getATransposeAttrName(), attr);
}

void SubgroupMmaComputeOp::setATranspose(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getATransposeAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getATransposeAttrName());
}

void SubgroupMmaComputeOp::setBTransposeAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getBTransposeAttrName(), attr);
}

void SubgroupMmaComputeOp::setBTranspose(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBTransposeAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getBTransposeAttrName());
}

::mlir::Attribute SubgroupMmaComputeOp::removeATransposeAttr() {
    auto &attr = getProperties().a_transpose;
    attr = {};
    return attr;
}

::mlir::Attribute SubgroupMmaComputeOp::removeBTransposeAttr() {
    auto &attr = getProperties().b_transpose;
    attr = {};
    return attr;
}

void SubgroupMmaComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, ::mlir::Value opC, /*optional*/::mlir::UnitAttr a_transpose, /*optional*/::mlir::UnitAttr b_transpose) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  if (a_transpose) {
    odsState.getOrAddProperties<Properties>().a_transpose = a_transpose;
  }
  if (b_transpose) {
    odsState.getOrAddProperties<Properties>().b_transpose = b_transpose;
  }
  odsState.addTypes(res);
}

void SubgroupMmaComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value opA, ::mlir::Value opB, ::mlir::Value opC, /*optional*/::mlir::UnitAttr a_transpose, /*optional*/::mlir::UnitAttr b_transpose) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  if (a_transpose) {
    odsState.getOrAddProperties<Properties>().a_transpose = a_transpose;
  }
  if (b_transpose) {
    odsState.getOrAddProperties<Properties>().b_transpose = b_transpose;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubgroupMmaComputeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubgroupMmaComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, ::mlir::Value opC, /*optional*/::mlir::UnitAttr a_transpose, /*optional*/::mlir::UnitAttr b_transpose) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  if (a_transpose) {
    odsState.getOrAddProperties<Properties>().a_transpose = a_transpose;
  }
  if (b_transpose) {
    odsState.getOrAddProperties<Properties>().b_transpose = b_transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaComputeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaComputeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubgroupMmaComputeOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SubgroupMmaComputeOp::verifyInvariantsImpl() {
  auto tblgen_a_transpose = getProperties().a_transpose; (void)tblgen_a_transpose;
  auto tblgen_b_transpose = getProperties().b_transpose; (void)tblgen_b_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_a_transpose, "a_transpose")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_b_transpose, "b_transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps19(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps19(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps20(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps21(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(2).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(2).begin()).getType()))))
    return emitOpError("failed to verify that all of {opC, res} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaComputeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult SubgroupMmaComputeOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[2].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubgroupMmaComputeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand opARawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opAOperands(opARawOperands);  ::llvm::SMLoc opAOperandsLoc;
  (void)opAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand opBRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opBOperands(opBRawOperands);  ::llvm::SMLoc opBOperandsLoc;
  (void)opBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand opCRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opCOperands(opCRawOperands);  ::llvm::SMLoc opCOperandsLoc;
  (void)opCOperandsLoc;
  ::mlir::Type opARawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> opATypes(opARawTypes);
  ::mlir::Type opBRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> opBTypes(opBRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  opAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opARawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  opBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opBRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  opCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opCRawOperands[0]))
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
    ::mlir::gpu::MMAMatrixType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    opARawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::gpu::MMAMatrixType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    opBRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resRawTypes[0] = type;
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(opAOperands, opATypes, opAOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(opBOperands, opBTypes, opBOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(opCOperands, resTypes[0], opCOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaComputeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOpA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOpB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOpC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOpA().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::gpu::MMAMatrixType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getOpB().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::gpu::MMAMatrixType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
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

void SubgroupMmaComputeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupMmaComputeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupMmaConstantMatrixOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupMmaConstantMatrixOpGenericAdaptorBase::SubgroupMmaConstantMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_mma_constant_matrix", odsAttrs.getContext());
}

SubgroupMmaConstantMatrixOpGenericAdaptorBase::SubgroupMmaConstantMatrixOpGenericAdaptorBase(SubgroupMmaConstantMatrixOp op) : SubgroupMmaConstantMatrixOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupMmaConstantMatrixOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubgroupMmaConstantMatrixOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SubgroupMmaConstantMatrixOpAdaptor::SubgroupMmaConstantMatrixOpAdaptor(SubgroupMmaConstantMatrixOp op) : SubgroupMmaConstantMatrixOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupMmaConstantMatrixOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupMmaConstantMatrixOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubgroupMmaConstantMatrixOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupMmaConstantMatrixOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SubgroupMmaConstantMatrixOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubgroupMmaConstantMatrixOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupMmaConstantMatrixOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupMmaConstantMatrixOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void SubgroupMmaConstantMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.addTypes(res);
}

void SubgroupMmaConstantMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaConstantMatrixOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubgroupMmaConstantMatrixOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps22(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps21(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((std::equal_to<>()(::llvm::cast<gpu::MMAMatrixType>((*this->getODSResults(0).begin()).getType()).getElementType(), (*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that value type matches element type of mma_matrix");
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaConstantMatrixOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SubgroupMmaConstantMatrixOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
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
    resRawTypes[0] = type;
  }
  for (::mlir::Type type : resTypes) {
    (void)type;
    if (!((::llvm::isa<::mlir::gpu::MMAMatrixType>(type)))) {
      return parser.emitError(parser.getNameLoc()) << "'res' must be MMAMatrix type, but got " << type;
    }
  }
  result.addTypes(resTypes);
  if (parser.resolveOperands(valueOperands, ::llvm::cast<gpu::MMAMatrixType>(resTypes[0]).getElementType(), valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaConstantMatrixOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getValue();
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

void SubgroupMmaConstantMatrixOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupMmaConstantMatrixOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupMmaElementwiseOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupMmaElementwiseOpGenericAdaptorBase::SubgroupMmaElementwiseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_mma_elementwise", odsAttrs.getContext());
}

SubgroupMmaElementwiseOpGenericAdaptorBase::SubgroupMmaElementwiseOpGenericAdaptorBase(SubgroupMmaElementwiseOp op) : SubgroupMmaElementwiseOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupMmaElementwiseOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr SubgroupMmaElementwiseOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::MMAElementwiseOpAttr SubgroupMmaElementwiseOpGenericAdaptorBase::getOpTypeAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::MMAElementwiseOpAttr>(getProperties().opType);
  return attr;
}

::mlir::gpu::MMAElementwiseOp SubgroupMmaElementwiseOpGenericAdaptorBase::getOpType() {
  auto attr = getOpTypeAttr();
  return attr.getValue();
}

} // namespace detail
SubgroupMmaElementwiseOpAdaptor::SubgroupMmaElementwiseOpAdaptor(SubgroupMmaElementwiseOp op) : SubgroupMmaElementwiseOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupMmaElementwiseOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_opType = getProperties().opType; (void)tblgen_opType;
  if (!tblgen_opType) return emitError(loc, "'gpu.subgroup_mma_elementwise' op ""requires attribute 'opType'");

  if (tblgen_opType && !((::llvm::isa<::mlir::gpu::MMAElementwiseOpAttr>(tblgen_opType))))
    return emitError(loc, "'gpu.subgroup_mma_elementwise' op ""attribute 'opType' failed to satisfy constraint: elementwise operation to apply to mma matrix");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupMmaElementwiseOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range SubgroupMmaElementwiseOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SubgroupMmaElementwiseOp::getArgs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange SubgroupMmaElementwiseOp::getArgsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SubgroupMmaElementwiseOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupMmaElementwiseOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupMmaElementwiseOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubgroupMmaElementwiseOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.opType;
       auto attr = dict.get("opType");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for opType in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `opType` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SubgroupMmaElementwiseOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.opType;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("opType",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SubgroupMmaElementwiseOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.opType.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubgroupMmaElementwiseOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "opType")
      return prop.opType;
  return std::nullopt;
}

void SubgroupMmaElementwiseOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "opType") {
       prop.opType = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.opType)>>(value);
       return;
    }
}

void SubgroupMmaElementwiseOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.opType) attrs.append("opType", prop.opType);
}

::mlir::LogicalResult SubgroupMmaElementwiseOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOpTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps15(attr, "opType", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaElementwiseOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.opType)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaElementwiseOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.opType);
}

::mlir::gpu::MMAElementwiseOpAttr SubgroupMmaElementwiseOp::getOpTypeAttr() {
  return ::llvm::cast<::mlir::gpu::MMAElementwiseOpAttr>(getProperties().opType);
}

::mlir::gpu::MMAElementwiseOp SubgroupMmaElementwiseOp::getOpType() {
  auto attr = getOpTypeAttr();
  return attr.getValue();
}

void SubgroupMmaElementwiseOp::setOpTypeAttr(::mlir::gpu::MMAElementwiseOpAttr attr) {
  (*this)->setAttr(getOpTypeAttrName(), attr);
}

void SubgroupMmaElementwiseOp::setOpType(::mlir::gpu::MMAElementwiseOp attrValue) {
  (*this)->setAttr(getOpTypeAttrName(), ::mlir::gpu::MMAElementwiseOpAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SubgroupMmaElementwiseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args, ::mlir::gpu::MMAElementwiseOpAttr opType) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().opType = opType;
  odsState.addTypes(res);
}

void SubgroupMmaElementwiseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange args, ::mlir::gpu::MMAElementwiseOpAttr opType) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().opType = opType;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaElementwiseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args, ::mlir::gpu::MMAElementwiseOp opType) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().opType = ::mlir::gpu::MMAElementwiseOpAttr::get(odsBuilder.getContext(), opType);
  odsState.addTypes(res);
}

void SubgroupMmaElementwiseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange args, ::mlir::gpu::MMAElementwiseOp opType) {
  odsState.addOperands(args);
  odsState.getOrAddProperties<Properties>().opType = ::mlir::gpu::MMAElementwiseOpAttr::get(odsBuilder.getContext(), opType);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaElementwiseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubgroupMmaElementwiseOp::verifyInvariantsImpl() {
  auto tblgen_opType = getProperties().opType; (void)tblgen_opType;
  if (!tblgen_opType) return emitOpError("requires attribute 'opType'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps15(*this, tblgen_opType, "opType")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps23(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps21(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((true)))
    return emitOpError("failed to verify that all of {args} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaElementwiseOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SubgroupMmaElementwiseOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::MMAElementwiseOpAttr opTypeAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> argsOperands;
  ::llvm::SMLoc argsOperandsLoc;
  (void)argsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> argsTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  if (parser.parseCustomAttributeWithFallback(opTypeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (opTypeAttr) result.getOrAddProperties<SubgroupMmaElementwiseOp::Properties>().opType = opTypeAttr;

  argsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(argsOperands))
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

void SubgroupMmaElementwiseOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getOpTypeAttr());
  _odsPrinter << ' ';
  _odsPrinter << getArgs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("opType");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getArgs().getTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

void SubgroupMmaElementwiseOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupMmaElementwiseOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupMmaLoadMatrixOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupMmaLoadMatrixOpGenericAdaptorBase::SubgroupMmaLoadMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_mma_load_matrix", odsAttrs.getContext());
}

SubgroupMmaLoadMatrixOpGenericAdaptorBase::SubgroupMmaLoadMatrixOpGenericAdaptorBase(SubgroupMmaLoadMatrixOp op) : SubgroupMmaLoadMatrixOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupMmaLoadMatrixOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr SubgroupMmaLoadMatrixOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SubgroupMmaLoadMatrixOpGenericAdaptorBase::getLeadDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().leadDimension);
  return attr;
}

::llvm::APInt SubgroupMmaLoadMatrixOpGenericAdaptorBase::getLeadDimension() {
  auto attr = getLeadDimensionAttr();
  return attr.getValue();
}

::mlir::UnitAttr SubgroupMmaLoadMatrixOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transpose);
  return attr;
}

::std::optional<bool> SubgroupMmaLoadMatrixOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
SubgroupMmaLoadMatrixOpAdaptor::SubgroupMmaLoadMatrixOpAdaptor(SubgroupMmaLoadMatrixOp op) : SubgroupMmaLoadMatrixOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupMmaLoadMatrixOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_leadDimension = getProperties().leadDimension; (void)tblgen_leadDimension;
  if (!tblgen_leadDimension) return emitError(loc, "'gpu.subgroup_mma_load_matrix' op ""requires attribute 'leadDimension'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (tblgen_leadDimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_leadDimension))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_leadDimension).getType())))))
    return emitError(loc, "'gpu.subgroup_mma_load_matrix' op ""attribute 'leadDimension' failed to satisfy constraint: index attribute");

  if (tblgen_transpose && !((::llvm::isa<::mlir::UnitAttr>(tblgen_transpose))))
    return emitError(loc, "'gpu.subgroup_mma_load_matrix' op ""attribute 'transpose' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupMmaLoadMatrixOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range SubgroupMmaLoadMatrixOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::MemRefType> SubgroupMmaLoadMatrixOp::getSrcMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range SubgroupMmaLoadMatrixOp::getIndices() {
  return getODSOperands(1);
}

::mlir::OpOperand &SubgroupMmaLoadMatrixOp::getSrcMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SubgroupMmaLoadMatrixOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SubgroupMmaLoadMatrixOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupMmaLoadMatrixOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupMmaLoadMatrixOp::getRes() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubgroupMmaLoadMatrixOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.leadDimension;
       auto attr = dict.get("leadDimension");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for leadDimension in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `leadDimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr || /*isRequired=*/false) {
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

::mlir::Attribute SubgroupMmaLoadMatrixOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.leadDimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("leadDimension",
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

llvm::hash_code SubgroupMmaLoadMatrixOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.leadDimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubgroupMmaLoadMatrixOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "leadDimension")
      return prop.leadDimension;

    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void SubgroupMmaLoadMatrixOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "leadDimension") {
       prop.leadDimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.leadDimension)>>(value);
       return;
    }

    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void SubgroupMmaLoadMatrixOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.leadDimension) attrs.append("leadDimension", prop.leadDimension);

    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::mlir::LogicalResult SubgroupMmaLoadMatrixOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLeadDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps16(attr, "leadDimension", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "transpose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaLoadMatrixOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.leadDimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaLoadMatrixOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.leadDimension);

  writer.writeOptionalAttribute(prop.transpose);
}

::mlir::IntegerAttr SubgroupMmaLoadMatrixOp::getLeadDimensionAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().leadDimension);
}

::llvm::APInt SubgroupMmaLoadMatrixOp::getLeadDimension() {
  auto attr = getLeadDimensionAttr();
  return attr.getValue();
}

::mlir::UnitAttr SubgroupMmaLoadMatrixOp::getTransposeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transpose);
}

::std::optional<bool> SubgroupMmaLoadMatrixOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void SubgroupMmaLoadMatrixOp::setLeadDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLeadDimensionAttrName(), attr);
}

void SubgroupMmaLoadMatrixOp::setLeadDimension(::llvm::APInt attrValue) {
  (*this)->setAttr(getLeadDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void SubgroupMmaLoadMatrixOp::setTransposeAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTransposeAttrName(), attr);
}

void SubgroupMmaLoadMatrixOp::setTranspose(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTransposeAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTransposeAttrName());
}

::mlir::Attribute SubgroupMmaLoadMatrixOp::removeTransposeAttr() {
    auto &attr = getProperties().transpose;
    attr = {};
    return attr;
}

void SubgroupMmaLoadMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcMemref, ::mlir::ValueRange indices, ::mlir::IntegerAttr leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = leadDimension;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  odsState.addTypes(res);
}

void SubgroupMmaLoadMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcMemref, ::mlir::ValueRange indices, ::mlir::IntegerAttr leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = leadDimension;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaLoadMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcMemref, ::mlir::ValueRange indices, ::llvm::APInt leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), leadDimension);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  odsState.addTypes(res);
}

void SubgroupMmaLoadMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcMemref, ::mlir::ValueRange indices, ::llvm::APInt leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(srcMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), leadDimension);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaLoadMatrixOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubgroupMmaLoadMatrixOp::verifyInvariantsImpl() {
  auto tblgen_leadDimension = getProperties().leadDimension; (void)tblgen_leadDimension;
  if (!tblgen_leadDimension) return emitOpError("requires attribute 'leadDimension'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps16(*this, tblgen_leadDimension, "leadDimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps24(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps21(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaLoadMatrixOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SubgroupMmaLoadMatrixOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    ::mlir::Type type;
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

void SubgroupMmaLoadMatrixOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SubgroupMmaLoadMatrixOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupMmaLoadMatrixOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupMmaStoreMatrixOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupMmaStoreMatrixOpGenericAdaptorBase::SubgroupMmaStoreMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_mma_store_matrix", odsAttrs.getContext());
}

SubgroupMmaStoreMatrixOpGenericAdaptorBase::SubgroupMmaStoreMatrixOpGenericAdaptorBase(SubgroupMmaStoreMatrixOp op) : SubgroupMmaStoreMatrixOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupMmaStoreMatrixOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true};
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

::mlir::DictionaryAttr SubgroupMmaStoreMatrixOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SubgroupMmaStoreMatrixOpGenericAdaptorBase::getLeadDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().leadDimension);
  return attr;
}

::llvm::APInt SubgroupMmaStoreMatrixOpGenericAdaptorBase::getLeadDimension() {
  auto attr = getLeadDimensionAttr();
  return attr.getValue();
}

::mlir::UnitAttr SubgroupMmaStoreMatrixOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transpose);
  return attr;
}

::std::optional<bool> SubgroupMmaStoreMatrixOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
SubgroupMmaStoreMatrixOpAdaptor::SubgroupMmaStoreMatrixOpAdaptor(SubgroupMmaStoreMatrixOp op) : SubgroupMmaStoreMatrixOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupMmaStoreMatrixOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_leadDimension = getProperties().leadDimension; (void)tblgen_leadDimension;
  if (!tblgen_leadDimension) return emitError(loc, "'gpu.subgroup_mma_store_matrix' op ""requires attribute 'leadDimension'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (tblgen_leadDimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_leadDimension))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_leadDimension).getType())))))
    return emitError(loc, "'gpu.subgroup_mma_store_matrix' op ""attribute 'leadDimension' failed to satisfy constraint: index attribute");

  if (tblgen_transpose && !((::llvm::isa<::mlir::UnitAttr>(tblgen_transpose))))
    return emitError(loc, "'gpu.subgroup_mma_store_matrix' op ""attribute 'transpose' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupMmaStoreMatrixOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
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

::mlir::Operation::operand_range SubgroupMmaStoreMatrixOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::gpu::MMAMatrixType> SubgroupMmaStoreMatrixOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::gpu::MMAMatrixType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::MemRefType> SubgroupMmaStoreMatrixOp::getDstMemref() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::MemRefType>>(*getODSOperands(1).begin());
}

::mlir::Operation::operand_range SubgroupMmaStoreMatrixOp::getIndices() {
  return getODSOperands(2);
}

::mlir::OpOperand &SubgroupMmaStoreMatrixOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &SubgroupMmaStoreMatrixOp::getDstMemrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SubgroupMmaStoreMatrixOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SubgroupMmaStoreMatrixOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupMmaStoreMatrixOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult SubgroupMmaStoreMatrixOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.leadDimension;
       auto attr = dict.get("leadDimension");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for leadDimension in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `leadDimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr || /*isRequired=*/false) {
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

::mlir::Attribute SubgroupMmaStoreMatrixOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.leadDimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("leadDimension",
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

llvm::hash_code SubgroupMmaStoreMatrixOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.leadDimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubgroupMmaStoreMatrixOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "leadDimension")
      return prop.leadDimension;

    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void SubgroupMmaStoreMatrixOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "leadDimension") {
       prop.leadDimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.leadDimension)>>(value);
       return;
    }

    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void SubgroupMmaStoreMatrixOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.leadDimension) attrs.append("leadDimension", prop.leadDimension);

    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::mlir::LogicalResult SubgroupMmaStoreMatrixOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLeadDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps16(attr, "leadDimension", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "transpose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaStoreMatrixOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.leadDimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaStoreMatrixOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.leadDimension);

  writer.writeOptionalAttribute(prop.transpose);
}

::mlir::IntegerAttr SubgroupMmaStoreMatrixOp::getLeadDimensionAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().leadDimension);
}

::llvm::APInt SubgroupMmaStoreMatrixOp::getLeadDimension() {
  auto attr = getLeadDimensionAttr();
  return attr.getValue();
}

::mlir::UnitAttr SubgroupMmaStoreMatrixOp::getTransposeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().transpose);
}

::std::optional<bool> SubgroupMmaStoreMatrixOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void SubgroupMmaStoreMatrixOp::setLeadDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getLeadDimensionAttrName(), attr);
}

void SubgroupMmaStoreMatrixOp::setLeadDimension(::llvm::APInt attrValue) {
  (*this)->setAttr(getLeadDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void SubgroupMmaStoreMatrixOp::setTransposeAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTransposeAttrName(), attr);
}

void SubgroupMmaStoreMatrixOp::setTranspose(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTransposeAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTransposeAttrName());
}

::mlir::Attribute SubgroupMmaStoreMatrixOp::removeTransposeAttr() {
    auto &attr = getProperties().transpose;
    attr = {};
    return attr;
}

void SubgroupMmaStoreMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value dstMemref, ::mlir::ValueRange indices, ::mlir::IntegerAttr leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(src);
  odsState.addOperands(dstMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = leadDimension;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
}

void SubgroupMmaStoreMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dstMemref, ::mlir::ValueRange indices, ::mlir::IntegerAttr leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(src);
  odsState.addOperands(dstMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = leadDimension;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaStoreMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::Value dstMemref, ::mlir::ValueRange indices, ::llvm::APInt leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(src);
  odsState.addOperands(dstMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), leadDimension);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
}

void SubgroupMmaStoreMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dstMemref, ::mlir::ValueRange indices, ::llvm::APInt leadDimension, /*optional*/::mlir::UnitAttr transpose) {
  odsState.addOperands(src);
  odsState.addOperands(dstMemref);
  odsState.addOperands(indices);
  odsState.getOrAddProperties<Properties>().leadDimension = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), leadDimension);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupMmaStoreMatrixOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubgroupMmaStoreMatrixOp::verifyInvariantsImpl() {
  auto tblgen_leadDimension = getProperties().leadDimension; (void)tblgen_leadDimension;
  if (!tblgen_leadDimension) return emitOpError("requires attribute 'leadDimension'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps16(*this, tblgen_leadDimension, "leadDimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps25(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps24(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupMmaStoreMatrixOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SubgroupMmaStoreMatrixOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand dstMemrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> dstMemrefOperands(dstMemrefRawOperands);  ::llvm::SMLoc dstMemrefOperandsLoc;
  (void)dstMemrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::Type srcRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> srcTypes(srcRawTypes);
  ::mlir::Type dstMemrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> dstMemrefTypes(dstMemrefRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  dstMemrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(dstMemrefRawOperands[0]))
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
    ::mlir::gpu::MMAMatrixType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    srcRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::MemRefType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    dstMemrefRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(dstMemrefOperands, dstMemrefTypes, dstMemrefOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, indicesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupMmaStoreMatrixOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getDstMemref();
  _odsPrinter << "[";
  _odsPrinter << getIndices();
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSrc().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::gpu::MMAMatrixType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getDstMemref().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::MemRefType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void SubgroupMmaStoreMatrixOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, true, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupMmaStoreMatrixOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupReduceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupReduceOpGenericAdaptorBase::SubgroupReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_reduce", odsAttrs.getContext());
}

SubgroupReduceOpGenericAdaptorBase::SubgroupReduceOpGenericAdaptorBase(SubgroupReduceOp op) : SubgroupReduceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupReduceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubgroupReduceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::AllReduceOperationAttr SubgroupReduceOpGenericAdaptorBase::getOpAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::AllReduceOperationAttr>(getProperties().op);
  return attr;
}

::mlir::gpu::AllReduceOperation SubgroupReduceOpGenericAdaptorBase::getOp() {
  auto attr = getOpAttr();
  return attr.getValue();
}

::mlir::UnitAttr SubgroupReduceOpGenericAdaptorBase::getUniformAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().uniform);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SubgroupReduceOpGenericAdaptorBase::getUniform() {
  auto attr = getUniformAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
SubgroupReduceOpAdaptor::SubgroupReduceOpAdaptor(SubgroupReduceOp op) : SubgroupReduceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupReduceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_op = getProperties().op; (void)tblgen_op;
  if (!tblgen_op) return emitError(loc, "'gpu.subgroup_reduce' op ""requires attribute 'op'");
  auto tblgen_uniform = getProperties().uniform; (void)tblgen_uniform;

  if (tblgen_op && !((::llvm::isa<::mlir::gpu::AllReduceOperationAttr>(tblgen_op))))
    return emitError(loc, "'gpu.subgroup_reduce' op ""attribute 'op' failed to satisfy constraint: built-in reduction operations supported by gpu.allreduce.");

  if (tblgen_uniform && !((::llvm::isa<::mlir::UnitAttr>(tblgen_uniform))))
    return emitError(loc, "'gpu.subgroup_reduce' op ""attribute 'uniform' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupReduceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubgroupReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupReduceOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &SubgroupReduceOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> SubgroupReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubgroupReduceOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult SubgroupReduceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.op;
       auto attr = dict.get("op");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for op in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.uniform;
       auto attr = dict.get("uniform");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for uniform in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `uniform` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SubgroupReduceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.uniform;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("uniform",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SubgroupReduceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.op.getAsOpaquePointer()), 
    llvm::hash_value(prop.uniform.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubgroupReduceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "op")
      return prop.op;

    if (name == "uniform")
      return prop.uniform;
  return std::nullopt;
}

void SubgroupReduceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "op") {
       prop.op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op)>>(value);
       return;
    }

    if (name == "uniform") {
       prop.uniform = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.uniform)>>(value);
       return;
    }
}

void SubgroupReduceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.op) attrs.append("op", prop.op);

    if (prop.uniform) attrs.append("uniform", prop.uniform);
}

::mlir::LogicalResult SubgroupReduceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps0(attr, "op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUniformAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(attr, "uniform", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubgroupReduceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.uniform)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgroupReduceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.op);

  writer.writeOptionalAttribute(prop.uniform);
}

::mlir::gpu::AllReduceOperationAttr SubgroupReduceOp::getOpAttr() {
  return ::llvm::cast<::mlir::gpu::AllReduceOperationAttr>(getProperties().op);
}

::mlir::gpu::AllReduceOperation SubgroupReduceOp::getOp() {
  auto attr = getOpAttr();
  return attr.getValue();
}

::mlir::UnitAttr SubgroupReduceOp::getUniformAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().uniform);
}

bool SubgroupReduceOp::getUniform() {
  auto attr = getUniformAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SubgroupReduceOp::setOpAttr(::mlir::gpu::AllReduceOperationAttr attr) {
  (*this)->setAttr(getOpAttrName(), attr);
}

void SubgroupReduceOp::setOp(::mlir::gpu::AllReduceOperation attrValue) {
  (*this)->setAttr(getOpAttrName(), ::mlir::gpu::AllReduceOperationAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SubgroupReduceOp::setUniformAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUniformAttrName(), attr);
}

void SubgroupReduceOp::setUniform(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUniformAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUniformAttrName());
}

::mlir::Attribute SubgroupReduceOp::removeUniformAttr() {
    auto &attr = getProperties().uniform;
    attr = {};
    return attr;
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value, ::mlir::gpu::AllReduceOperationAttr op, /*optional*/::mlir::UnitAttr uniform) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().op = op;
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = uniform;
  }
  odsState.addTypes(result);
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::gpu::AllReduceOperationAttr op, /*optional*/::mlir::UnitAttr uniform) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().op = op;
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = uniform;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubgroupReduceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::gpu::AllReduceOperationAttr op, /*optional*/::mlir::UnitAttr uniform) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().op = op;
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = uniform;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value, ::mlir::gpu::AllReduceOperation op, /*optional*/bool uniform) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().op = ::mlir::gpu::AllReduceOperationAttr::get(odsBuilder.getContext(), op);
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = ((uniform) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::gpu::AllReduceOperation op, /*optional*/bool uniform) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().op = ::mlir::gpu::AllReduceOperationAttr::get(odsBuilder.getContext(), op);
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = ((uniform) ? odsBuilder.getUnitAttr() : nullptr);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubgroupReduceOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::gpu::AllReduceOperation op, /*optional*/bool uniform) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().op = ::mlir::gpu::AllReduceOperationAttr::get(odsBuilder.getContext(), op);
  if (uniform) {
    odsState.getOrAddProperties<Properties>().uniform = ((uniform) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubgroupReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubgroupReduceOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SubgroupReduceOp::verifyInvariantsImpl() {
  auto tblgen_op = getProperties().op; (void)tblgen_op;
  if (!tblgen_op) return emitOpError("requires attribute 'op'");
  auto tblgen_uniform = getProperties().uniform; (void)tblgen_uniform;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps0(*this, tblgen_op, "op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps1(*this, tblgen_uniform, "uniform")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps26(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps26(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupReduceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult SubgroupReduceOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubgroupReduceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::AllReduceOperationAttr opAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  {
    auto odsResult = parseAllReduceOperation(parser, opAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<SubgroupReduceOp::Properties>().op = opAttr;
  }

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("uniform"))) {
    result.getOrAddProperties<SubgroupReduceOp::Properties>().uniform = parser.getBuilder().getUnitAttr();  }
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

void SubgroupReduceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAllReduceOperation(_odsPrinter, *this, getOpAttr());
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  if (getUniformAttr()) {
    _odsPrinter << ' ' << "uniform";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("op");
  elidedAttrs.push_back("uniform");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUniformAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("uniform");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupReduceOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::SubgroupSizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgroupSizeOpGenericAdaptorBase::SubgroupSizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.subgroup_size", odsAttrs.getContext());
}

SubgroupSizeOpGenericAdaptorBase::SubgroupSizeOpGenericAdaptorBase(SubgroupSizeOp op) : SubgroupSizeOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgroupSizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubgroupSizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SubgroupSizeOpAdaptor::SubgroupSizeOpAdaptor(SubgroupSizeOp op) : SubgroupSizeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgroupSizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgroupSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubgroupSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SubgroupSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgroupSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> SubgroupSizeOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

void SubgroupSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void SubgroupSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(SubgroupSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SubgroupSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubgroupSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(SubgroupSizeOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult SubgroupSizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubgroupSizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult SubgroupSizeOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult SubgroupSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void SubgroupSizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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

void SubgroupSizeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::SubgroupSizeOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::TerminatorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TerminatorOpGenericAdaptorBase::TerminatorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.terminator", odsAttrs.getContext());
}

TerminatorOpGenericAdaptorBase::TerminatorOpGenericAdaptorBase(TerminatorOp op) : TerminatorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TerminatorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TerminatorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TerminatorOpAdaptor::TerminatorOpAdaptor(TerminatorOp op) : TerminatorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TerminatorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TerminatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TerminatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TerminatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TerminatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TerminatorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TerminatorOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult TerminatorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TerminatorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TerminatorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void TerminatorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::TerminatorOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::ThreadIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadIdOpGenericAdaptorBase::ThreadIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.thread_id", odsAttrs.getContext());
}

ThreadIdOpGenericAdaptorBase::ThreadIdOpGenericAdaptorBase(ThreadIdOp op) : ThreadIdOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadIdOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadIdOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::gpu::DimensionAttr ThreadIdOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
  return attr;
}

::mlir::gpu::Dimension ThreadIdOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

} // namespace detail
ThreadIdOpAdaptor::ThreadIdOpAdaptor(ThreadIdOp op) : ThreadIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadIdOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'gpu.thread_id' op ""requires attribute 'dimension'");

  if (tblgen_dimension && !((::llvm::isa<::mlir::gpu::DimensionAttr>(tblgen_dimension))))
    return emitError(loc, "'gpu.thread_id' op ""attribute 'dimension' failed to satisfy constraint: a dimension, either 'x', 'y', or 'z'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ThreadIdOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute ThreadIdOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code ThreadIdOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ThreadIdOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;
  return std::nullopt;
}

void ThreadIdOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }
}

void ThreadIdOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);
}

::mlir::LogicalResult ThreadIdOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(attr, "dimension", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ThreadIdOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ThreadIdOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
}

::mlir::gpu::DimensionAttr ThreadIdOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::gpu::DimensionAttr>(getProperties().dimension);
}

::mlir::gpu::Dimension ThreadIdOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue();
}

void ThreadIdOp::setDimensionAttr(::mlir::gpu::DimensionAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void ThreadIdOp::setDimension(::mlir::gpu::Dimension attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::gpu::DimensionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.addTypes(resultType0);
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ThreadIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::DimensionAttr dimension) {
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  odsState.addTypes(resultType0);
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ThreadIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::gpu::Dimension dimension) {
  odsState.getOrAddProperties<Properties>().dimension = ::mlir::gpu::DimensionAttr::get(odsBuilder.getContext(), dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ThreadIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ThreadIdOp::inferReturnTypes(odsBuilder.getContext(),
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

::mlir::LogicalResult ThreadIdOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ThreadIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ThreadIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ThreadIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::gpu::DimensionAttr dimensionAttr;

  if (parser.parseCustomAttributeWithFallback(dimensionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (dimensionAttr) result.getOrAddProperties<ThreadIdOp::Properties>().dimension = dimensionAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void ThreadIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getDimensionAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("dimension");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void ThreadIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::ThreadIdOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::WaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WaitOpGenericAdaptorBase::WaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.wait", odsAttrs.getContext());
}

WaitOpGenericAdaptorBase::WaitOpGenericAdaptorBase(WaitOp op) : WaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr WaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
WaitOpAdaptor::WaitOpAdaptor(WaitOp op) : WaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WaitOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range WaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WaitOp::getAsyncDependencies() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange WaitOp::getAsyncDependenciesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> WaitOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range WaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value WaitOp::getAsyncToken() {
  auto results = getODSResults(0);
  return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
}

void WaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type asyncToken, ::mlir::ValueRange asyncDependencies) {
  odsState.addOperands(asyncDependencies);
  if (asyncToken)
    odsState.addTypes(asyncToken);
}

void WaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WaitOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps1(*this, v.getType(), "operand", index++)))
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> asyncTokenTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> asyncDependenciesOperands;
  ::llvm::SMLoc asyncDependenciesOperandsLoc;
  (void)asyncDependenciesOperandsLoc;
  {
    ::mlir::Type asyncTokenType;
    asyncDependenciesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAsyncDependencies(parser, asyncTokenType, asyncDependenciesOperands);
    if (odsResult) return ::mlir::failure();
    if (asyncTokenType)
      asyncTokenTypes.push_back(asyncTokenType);
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = mlir::gpu::AsyncTokenType::get(parser.getBuilder().getContext());
  result.addTypes(asyncTokenTypes);
  if (parser.resolveOperands(asyncDependenciesOperands, odsBuildableType0, asyncDependenciesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printAsyncDependencies(_odsPrinter, *this, (getAsyncToken() ? getAsyncToken().getType() : ::mlir::Type()), getAsyncDependencies());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::WaitOp)

namespace mlir {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::gpu::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("gpu.yield", odsAttrs.getContext());
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
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUOps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> valuesOperands;
  ::llvm::SMLoc valuesOperandsLoc;
  (void)valuesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> valuesTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(valuesOperands))
    return ::mlir::failure();
  if (!valuesOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(valuesTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(valuesOperands, valuesTypes, valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getValues().empty()) {
    _odsPrinter << ' ';
    _odsPrinter << getValues();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getValues().getTypes();
  }
}

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange YieldOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace gpu
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::gpu::YieldOp)


#endif  // GET_OP_CLASSES

