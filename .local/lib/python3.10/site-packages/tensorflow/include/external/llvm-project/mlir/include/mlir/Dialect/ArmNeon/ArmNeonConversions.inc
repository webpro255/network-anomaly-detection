if (auto op = dyn_cast<::mlir::arm_neon::SMullOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_neon_smull,1,{0},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_neon::SdotOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_neon_sdot,1,{0},{1},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_neon::SmmlaOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_neon_smmla,1,{0},{1},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_neon::UmmlaOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_neon_ummla,1,{0},{1},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_neon::UsmmlaOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_neon_usmmla,1,{0},{1},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
