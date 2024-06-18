if (auto op = dyn_cast<::mlir::NVVM::Barrier0Op>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier0);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockDimXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockDimYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockDimZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockIdXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockIdYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockIdZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockInClusterIdXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockInClusterIdYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::BlockInClusterIdZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctaid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::Clock64Op>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_clock64,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClockOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_clock,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterArriveOp>(opInst)) {

      if (op.getAligned())
        createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_arrive_aligned);
      else
        createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_arrive);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterArriveRelaxedOp>(opInst)) {

      if (op.getAligned())
        createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_arrive_relaxed_aligned);
      else
        createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_arrive_relaxed);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDim>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctarank,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDimXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDimYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterDimZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_nclusterid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterId>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_ctarank,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterIdXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterIdYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterIdZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_clusterid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ClusterWaitOp>(opInst)) {

      if (op.getAligned())
        createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_wait_aligned);
      else
        createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier_cluster_wait);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncBulkCommitGroupOp>(opInst)) {

    createIntrinsicCall(builder, llvm::Intrinsic::nvvm_cp_async_bulk_commit_group);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncBulkWaitGroupOp>(opInst)) {

    auto intId = op.getRead() ?
      llvm::Intrinsic::nvvm_cp_async_bulk_wait_group_read :
      llvm::Intrinsic::nvvm_cp_async_bulk_wait_group;
    createIntrinsicCall(builder, intId, builder.getInt32(op.getGroup()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncCommitGroupOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_cp_async_commit_group);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncMBarrierArriveOp>(opInst)) {

    auto intId = op.getNoinc() ?
      llvm::Intrinsic::nvvm_cp_async_mbarrier_arrive_noinc :
      llvm::Intrinsic::nvvm_cp_async_mbarrier_arrive;

    createIntrinsicCall(builder, intId, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncMBarrierArriveSharedOp>(opInst)) {

    auto intId = op.getNoinc() ?
      llvm::Intrinsic::nvvm_cp_async_mbarrier_arrive_noinc_shared :
      llvm::Intrinsic::nvvm_cp_async_mbarrier_arrive_shared;

    createIntrinsicCall(builder, intId, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncOp>(opInst)) {

      llvm::Intrinsic::ID id;
      switch (op.getSize()) {
        case 4:
          id = llvm::Intrinsic::nvvm_cp_async_ca_shared_global_4;
          break;
        case 8:
          id = llvm::Intrinsic::nvvm_cp_async_ca_shared_global_8;
          break;
        case 16:
          if(op.getModifier() == NVVM::LoadCacheModifierKind::CG)
            id = llvm::Intrinsic::nvvm_cp_async_cg_shared_global_16;
          else if(op.getModifier() == NVVM::LoadCacheModifierKind::CA)
            id = llvm::Intrinsic::nvvm_cp_async_ca_shared_global_16;
          else 
            llvm_unreachable("unsupported cache modifier");
          break;
        default:
          llvm_unreachable("unsupported async copy size");
      }
      createIntrinsicCall(builder, id, {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getSrc())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::CpAsyncWaitGroupOp>(opInst)) {

      createIntrinsicCall(
        builder,
        llvm::Intrinsic::nvvm_cp_async_wait_group,
        llvm::ConstantInt::get(
          llvm::Type::getInt32Ty(moduleTranslation.getLLVMContext()),
          op.getN()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::FenceScClusterOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_fence_sc_cluster);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridDimXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridDimYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridDimZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridInClusterDimXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridInClusterDimYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::GridInClusterDimZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_cluster_nctaid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::LaneIdOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_laneid,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::LdMatrixOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId = getLdMatrixIntrinsicId(op.getLayout(), op.getNum());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, operands, {operands[0]->getType()});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveNocompleteOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive_noComplete, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveNocompleteSharedOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive_noComplete_shared, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierArriveSharedOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_arrive_shared, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInitOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_init, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInitSharedOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_init_shared, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getCount())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInvalOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_inval, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierInvalSharedOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_inval_shared, {moduleTranslation.lookupValue(op.getAddr())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierTestWaitOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_test_wait, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getState())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MBarrierTestWaitSharedOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, llvm::Intrinsic::nvvm_mbarrier_test_wait_shared, {moduleTranslation.lookupValue(op.getAddr()), moduleTranslation.lookupValue(op.getState())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::MmaOp>(opInst)) {

    auto operands = moduleTranslation.lookupValues(opInst.getOperands());
    auto intId = mlir::NVVM::MmaOp::getIntrinsicID(
        op.getShape().getM(), op.getShape().getN(), op.getShape().getK(),
        op.getB1Op(), op.getIntOverflowBehavior(),
        op.getLayoutA(), op.getLayoutB(),
        *op.getMultiplicandAPtxType(),
        *op.getMultiplicandBPtxType(),
        op.accumPtxType(),
        op.resultPtxType());

    moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(
      builder, intId, operands);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::RcpApproxFtzF32Op>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_rcp_approx_ftz_f,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ReduxOp>(opInst)) {

      auto intId = getReduxIntrinsicId(moduleTranslation.convertType(op.getResult().getType()), op.getKind());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, {moduleTranslation.lookupValue(op.getVal()), moduleTranslation.lookupValue(op.getMaskAndClamp())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::SetMaxRegisterOp>(opInst)) {

    auto intId = (op.getAction() == NVVM::SetMaxRegisterAction::increase) ?
      llvm::Intrinsic::nvvm_setmaxnreg_inc_sync_aligned_u32 :
      llvm::Intrinsic::nvvm_setmaxnreg_dec_sync_aligned_u32;

    createIntrinsicCall(builder, intId, builder.getInt32(op.getRegCount()));
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ShflOp>(opInst)) {

      auto intId = getShflIntrinsicId(
          moduleTranslation.convertType(op.getResult().getType()), op.getKind(), static_cast<bool>(op.getReturnValueAndIsValid()));
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder,
          intId, {moduleTranslation.lookupValue(op.getDst()), moduleTranslation.lookupValue(op.getVal()), moduleTranslation.lookupValue(op.getOffset()), moduleTranslation.lookupValue(op.getMaskAndClamp())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::SyncWarpOp>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_bar_warp_sync, {moduleTranslation.lookupValue(op.getMask())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ThreadIdXOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_tid_x,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ThreadIdYOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_tid_y,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::ThreadIdZOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_tid_z,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::VoteBallotOp>(opInst)) {

      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder,
            llvm::Intrinsic::nvvm_vote_ballot_sync, {moduleTranslation.lookupValue(op.getMask()), moduleTranslation.lookupValue(op.getPred())});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WMMALoadOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId = mlir::NVVM::WMMALoadOp::getIntrinsicID(
        op.getM(), op.getN(), op.getK(), op.getLayout(), op.getEltype(), op.getFrag());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, operands, {operands[0]->getType()});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WMMAMmaOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId = mlir::NVVM::WMMAMmaOp::getIntrinsicID(
        op.getM(), op.getN(), op.getK(), op.getLayoutA(), op.getLayoutB(), op.getEltypeA(), op.getEltypeB());
      moduleTranslation.mapValue(op.getRes()) = createIntrinsicCall(builder, intId, operands);
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WMMAStoreOp>(opInst)) {

      auto operands = moduleTranslation.lookupValues(opInst.getOperands());
      auto intId =
        mlir::NVVM::WMMAStoreOp::getIntrinsicID(op.getM(), op.getN(), op.getK(), op.getLayout(), op.getEltype());
      createIntrinsicCall(builder, intId, operands, {operands[0]->getType()});
  
  return success();
}
if (auto op = dyn_cast<::mlir::NVVM::WarpSizeOp>(opInst)) {

    auto *inst = LLVM::detail::createIntrinsicCall(
      builder, moduleTranslation, &opInst, llvm::Intrinsic::nvvm_read_ptx_sreg_warpsize,1,{},{},{},{});
    (void) inst;
    moduleTranslation.mapValue(op.getRes()) = inst;
  return success();
}
