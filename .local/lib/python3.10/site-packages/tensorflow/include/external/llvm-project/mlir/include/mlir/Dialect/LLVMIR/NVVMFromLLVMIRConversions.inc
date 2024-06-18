if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockDimXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockDimYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockDimZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockIdXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockIdYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockIdZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockInClusterIdXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockInClusterIdYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::BlockInClusterIdZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_clock64) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::Clock64Op>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_clock) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClockOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctarank) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterDim>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterDimXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterDimYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterDimZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctarank) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterId>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterIdXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterIdYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ClusterIdZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::GridDimXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::GridDimYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::GridDimZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::GridInClusterDimXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::GridInClusterDimYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::GridInClusterDimZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_laneid) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::LaneIdOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_rcp_approx_ftz_f) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::RcpApproxFtzF32Op>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_tid_x) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ThreadIdXOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_tid_y) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ThreadIdYOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_tid_z) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::ThreadIdZOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
if (intrinsicID == llvm::Intrinsic::nvvm_read_ptx_sreg_warpsize) {


    SmallVector<Value> mlirOperands;
    SmallVector<NamedAttribute> mlirAttrs;
    if (failed(moduleImport.convertIntrinsicArguments(
      llvmOperands,
      {},
      {},
      mlirOperands,
      mlirAttrs))
    ) {
      return failure();
    }
    SmallVector<Type> resultTypes =
    {moduleImport.convertType(inst->getType())};
    auto op = odsBuilder.create<::mlir::NVVM::WarpSizeOp>(
      moduleImport.translateLoc(inst->getDebugLoc()), resultTypes, mlirOperands, mlirAttrs);
    moduleImport.mapValue(inst) = op;
  return success();
}
