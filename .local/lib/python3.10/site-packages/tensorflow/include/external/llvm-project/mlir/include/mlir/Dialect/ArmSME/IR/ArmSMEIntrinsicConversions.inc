if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_cntsb>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_cntsb,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_cntsd>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_cntsd,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_cntsh>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_cntsh,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_cntsw>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_cntsw,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1b_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1b_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1b_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1b_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1d_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1d_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1d_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1d_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1h_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1h_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1h_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1h_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1q_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1q_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1q_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1q_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1w_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1w_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_ld1w_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_ld1w_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mopa>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_mopa,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mopa_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_mopa_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mops>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_mops,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_mops_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_mops_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_read_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_read_horiz,1,{0},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_read_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_read_vert,1,{0},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_smopa_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_smopa_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_smopa_za32>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_smopa_za32,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_smops_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_smops_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_smops_za32>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_smops_za32,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1b_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1b_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1b_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1b_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1d_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1d_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1d_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1d_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1h_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1h_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1h_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1h_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1q_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1q_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1q_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1q_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1w_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1w_horiz,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_st1w_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_st1w_vert,0,{},{},{2},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_str>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_str,0,{},{},{},{});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_sumopa_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_sumopa_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_sumops_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_sumops_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_umopa_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_umopa_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_umopa_za32>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_umopa_za32,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_umops_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_umops_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_umops_za32>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_umops_za32,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_usmopa_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_usmopa_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_usmops_wide>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_usmops_wide,0,{},{4},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_write_horiz>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_write_horiz,0,{},{3},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_write_vert>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_write_vert,0,{},{3},{0},{StringLiteral("tile_id")});
    (void) inst;
    
  return success();
}
if (auto op = dyn_cast<::mlir::arm_sme::aarch64_sme_zero>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::aarch64_sme_zero,0,{},{},{0},{StringLiteral("tile_mask")});
    (void) inst;
    
  return success();
}
