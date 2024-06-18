/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Get the shape of the CTAs per CGA.
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getCTAsPerCGA() const {
      return getImpl()->getCTAsPerCGA(getImpl(), *this);
  }
/// Get the order of the CTAs per CGA. The fastest-changing axis first
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getCTAOrder() const {
      return getImpl()->getCTAOrder(getImpl(), *this);
  }
/// Get the shape of the warps per CTA.
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getWarpsPerCTA() const {
      return getImpl()->getWarpsPerCTA(getImpl(), *this);
  }
/// Get the order of the warps per CTA. The fastest-changing axis first
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getWarpOrder() const {
      return getImpl()->getWarpOrder(getImpl(), *this);
  }
/// Get the shape of the threads per warp
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getThreadsPerWarp() const {
      return getImpl()->getThreadsPerWarp(getImpl(), *this);
  }
/// Get the order of the threads per warp. The fastest-changing axis first
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getThreadOrder() const {
      return getImpl()->getThreadOrder(getImpl(), *this);
  }
/// Get the shape of the values per thread.
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getSizePerThread() const {
      return getImpl()->getSizePerThread(getImpl(), *this);
  }
/// Get the split number of CTAs per CGA to handle the partial of the shape in each dimension.
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getCTASplitNum() const {
      return getImpl()->getCTASplitNum(getImpl(), *this);
  }
/// Return shape per CTA tile.
SmallVector<unsigned> mlir::triton::gpu::DistributedEncodingTrait::getShapePerCTATile(ArrayRef<int64_t> tensorShape) const {
      return getImpl()->getShapePerCTATile(getImpl(), *this, tensorShape);
  }
/// Return whether the layout support reduction op.
bool mlir::triton::gpu::MmaEncodingTrait::supportReduction() const {
      return getImpl()->supportReduction(getImpl(), *this);
  }
/// Return shape per CTA.
SmallVector<unsigned> mlir::triton::gpu::MmaEncodingTrait::getShapePerCTATileForDotOperands(ArrayRef<int64_t> tensorShape, unsigned opIdx) const {
      return getImpl()->getShapePerCTATileForDotOperands(getImpl(), *this, tensorShape, opIdx);
  }
/// Return total element size per thread for dot operands.
unsigned mlir::triton::gpu::MmaEncodingTrait::getTotalElemsPerThreadForOperands(ArrayRef<int64_t> tensorShape, Type eltTy, unsigned kWidth, unsigned opIdx) const {
      return getImpl()->getTotalElemsPerThreadForOperands(getImpl(), *this, tensorShape, eltTy, kWidth, opIdx);
  }
/// Return size per thread for dot operands.
SmallVector<unsigned> mlir::triton::gpu::MmaEncodingTrait::getSizePerThreadForOperands(unsigned opIdx) const {
      return getImpl()->getSizePerThreadForOperands(getImpl(), *this, opIdx);
  }
/// Return total element size per thread.
unsigned mlir::triton::gpu::TritonGPU_AttrTrait::getTotalElemsPerThread(ArrayRef<int64_t> tensorShape, Type eltTy) const {
      return getImpl()->getTotalElemsPerThread(getImpl(), *this, tensorShape, eltTy);
  }
/// Return element size per thread in each dimension.
SmallVector<unsigned> mlir::triton::gpu::TritonGPU_AttrTrait::getElemsPerThread(ArrayRef<int64_t> tensorShape, Type eltTy) const {
      return getImpl()->getElemsPerThread(getImpl(), *this, tensorShape, eltTy);
  }
