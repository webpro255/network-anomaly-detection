if (auto op = dyn_cast<::mlir::vcix::BinaryImmOp>(opInst)) {

      llvm::Type *xlen =getXlenType(op.getOpcode(), moduleTranslation);
      llvm::Value *opcodeConst = mlir::LLVM::detail::getLLVMConstant(
          xlen, op.getOpcode(), opInst.getLoc(), moduleTranslation);
      llvm::Value *immConst = mlir::LLVM::detail::getLLVMConstant(
          xlen, op.getImm(), opInst.getLoc(), moduleTranslation);
      VectorType vt = op.getResult().getType().cast<VectorType>();
      llvm::Value *vl =
          createVL(builder, moduleTranslation.lookupValue(op.getVl()), vt, xlen, opInst.getLoc(), moduleTranslation);
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(
          builder, llvm::Intrinsic::riscv_sf_vc_v_iv_se,
          {opcodeConst, moduleTranslation.lookupValue(op.getVs2()), immConst, vl},
          {moduleTranslation.convertType(op.getResult().getType()), xlen, moduleTranslation.lookupValue(op.getVs2())->getType(), xlen, xlen});
  
  return success();
}
if (auto op = dyn_cast<::mlir::vcix::BinaryOp>(opInst)) {

      llvm::Type *xlen = getXlenType(op.getOpcode(), moduleTranslation);
      llvm::Value *opcodeConst = mlir::LLVM::detail::getLLVMConstant(
          xlen, op.getOpcode(), opInst.getLoc(), moduleTranslation);
      llvm::Intrinsic::ID id;
      llvm::Type *opType = moduleTranslation.lookupValue(op.getOp())->getType();
      if (opType->isVectorTy()) {
        id = llvm::Intrinsic::riscv_sf_vc_v_vv_se;
      } else if (opType->isIntegerTy()) {
        id = llvm::Intrinsic::riscv_sf_vc_v_xv_se;
      } else {
        id = llvm::Intrinsic::riscv_sf_vc_v_fv_se;
      }
      VectorType vt = op.getResult().getType().cast<VectorType>();
      llvm::Value *vl =
          createVL(builder, moduleTranslation.lookupValue(op.getVl()), vt, xlen, opInst.getLoc(), moduleTranslation);
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(
          builder, id, {opcodeConst, moduleTranslation.lookupValue(op.getVs2()), moduleTranslation.lookupValue(op.getOp()), vl},
          {moduleTranslation.convertType(op.getResult().getType()), xlen, moduleTranslation.lookupValue(op.getVs2())->getType(), moduleTranslation.lookupValue(op.getOp())->getType(), xlen});
  
  return success();
}
