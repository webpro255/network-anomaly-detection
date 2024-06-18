if (auto op = dyn_cast<::mlir::amx::x86_amx_tdpbf16ps>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tdpbf16ps_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tdpbssd>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tdpbssd_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tdpbsud>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tdpbsud_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tdpbusd>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tdpbusd_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tdpbuud>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tdpbuud_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tileloadd64>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tileloadd64_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tilestored64>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tilestored64_internal,0,{},{},{},{});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::amx::x86_amx_tilezero>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::x86_tilezero_internal,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
