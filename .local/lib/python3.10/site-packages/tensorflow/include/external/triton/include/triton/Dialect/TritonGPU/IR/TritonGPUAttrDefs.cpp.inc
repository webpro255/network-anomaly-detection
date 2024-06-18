/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::triton::gpu::CTALayoutAttr,
::mlir::triton::gpu::SharedEncodingAttr,
::mlir::triton::gpu::BlockedEncodingAttr,
::mlir::triton::gpu::MfmaEncodingAttr,
::mlir::triton::gpu::NvidiaMmaEncodingAttr,
::mlir::triton::gpu::SliceEncodingAttr,
::mlir::triton::gpu::DotOperandEncodingAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::triton::gpu::SharedEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::SharedEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::BlockedEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::BlockedEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::MfmaEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::MfmaEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::NvidiaMmaEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::NvidiaMmaEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::SliceEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::SliceEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::triton::gpu::DotOperandEncodingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::DotOperandEncodingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::triton::gpu::SharedEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::SharedEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::BlockedEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::BlockedEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::MfmaEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::MfmaEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::NvidiaMmaEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::NvidiaMmaEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::SliceEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::SliceEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::triton::gpu::DotOperandEncodingAttr>([&](auto t) {
      printer << ::mlir::triton::gpu::DotOperandEncodingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct CTALayoutAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>>;
  CTALayoutAttrStorage(::llvm::ArrayRef<unsigned> CTAsPerCGA, ::llvm::ArrayRef<unsigned> CTASplitNum, ::llvm::ArrayRef<unsigned> CTAOrder) : CTAsPerCGA(std::move(CTAsPerCGA)), CTASplitNum(std::move(CTASplitNum)), CTAOrder(std::move(CTAOrder)) {}

  KeyTy getAsKey() const {
    return KeyTy(CTAsPerCGA, CTASplitNum, CTAOrder);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (CTAsPerCGA == std::get<0>(tblgenKey)) && (CTASplitNum == std::get<1>(tblgenKey)) && (CTAOrder == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static CTALayoutAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto CTAsPerCGA = std::move(std::get<0>(tblgenKey));
    auto CTASplitNum = std::move(std::get<1>(tblgenKey));
    auto CTAOrder = std::move(std::get<2>(tblgenKey));
    CTAsPerCGA = allocator.copyInto(CTAsPerCGA);
    CTASplitNum = allocator.copyInto(CTASplitNum);
    CTAOrder = allocator.copyInto(CTAOrder);
    return new (allocator.allocate<CTALayoutAttrStorage>()) CTALayoutAttrStorage(std::move(CTAsPerCGA), std::move(CTASplitNum), std::move(CTAOrder));
  }

  ::llvm::ArrayRef<unsigned> CTAsPerCGA;
  ::llvm::ArrayRef<unsigned> CTASplitNum;
  ::llvm::ArrayRef<unsigned> CTAOrder;
};
} // namespace detail
CTALayoutAttr CTALayoutAttr::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<unsigned> CTAsPerCGA, ::llvm::ArrayRef<unsigned> CTASplitNum, ::llvm::ArrayRef<unsigned> CTAOrder) {
  return Base::get(context, std::move(CTAsPerCGA), std::move(CTASplitNum), std::move(CTAOrder));
}

CTALayoutAttr CTALayoutAttr::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<unsigned> CTAsPerCGA, ::llvm::ArrayRef<unsigned> CTASplitNum, ::llvm::ArrayRef<unsigned> CTAOrder) {
  return Base::getChecked(emitError, context, CTAsPerCGA, CTASplitNum, CTAOrder);
}

::llvm::ArrayRef<unsigned> CTALayoutAttr::getCTAsPerCGA() const {
  return getImpl()->CTAsPerCGA;
}

::llvm::ArrayRef<unsigned> CTALayoutAttr::getCTASplitNum() const {
  return getImpl()->CTASplitNum;
}

::llvm::ArrayRef<unsigned> CTALayoutAttr::getCTAOrder() const {
  return getImpl()->CTAOrder;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::CTALayoutAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct SharedEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, unsigned, unsigned, ::llvm::ArrayRef<unsigned>, CTALayoutAttr, bool>;
  SharedEncodingAttrStorage(unsigned vec, unsigned perPhase, unsigned maxPhase, ::llvm::ArrayRef<unsigned> order, CTALayoutAttr CTALayout, bool hasLeadingOffset) : vec(std::move(vec)), perPhase(std::move(perPhase)), maxPhase(std::move(maxPhase)), order(std::move(order)), CTALayout(std::move(CTALayout)), hasLeadingOffset(std::move(hasLeadingOffset)) {}

  KeyTy getAsKey() const {
    return KeyTy(vec, perPhase, maxPhase, order, CTALayout, hasLeadingOffset);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (vec == std::get<0>(tblgenKey)) && (perPhase == std::get<1>(tblgenKey)) && (maxPhase == std::get<2>(tblgenKey)) && (order == std::get<3>(tblgenKey)) && (CTALayout == std::get<4>(tblgenKey)) && (hasLeadingOffset == std::get<5>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey), std::get<5>(tblgenKey));
  }

  static SharedEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto vec = std::move(std::get<0>(tblgenKey));
    auto perPhase = std::move(std::get<1>(tblgenKey));
    auto maxPhase = std::move(std::get<2>(tblgenKey));
    auto order = std::move(std::get<3>(tblgenKey));
    auto CTALayout = std::move(std::get<4>(tblgenKey));
    auto hasLeadingOffset = std::move(std::get<5>(tblgenKey));
    order = allocator.copyInto(order);
    return new (allocator.allocate<SharedEncodingAttrStorage>()) SharedEncodingAttrStorage(std::move(vec), std::move(perPhase), std::move(maxPhase), std::move(order), std::move(CTALayout), std::move(hasLeadingOffset));
  }

  unsigned vec;
  unsigned perPhase;
  unsigned maxPhase;
  ::llvm::ArrayRef<unsigned> order;
  CTALayoutAttr CTALayout;
  bool hasLeadingOffset;
};
} // namespace detail
SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, unsigned vec, unsigned perPhase, unsigned maxPhase, ::llvm::ArrayRef<unsigned> order, CTALayoutAttr CTALayout, bool hasLeadingOffset) {
  return Base::get(context, std::move(vec), std::move(perPhase), std::move(maxPhase), std::move(order), std::move(CTALayout), std::move(hasLeadingOffset));
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, unsigned vec, unsigned perPhase, unsigned maxPhase, ArrayRef<unsigned> order, CTALayoutAttr CTALayout) {
  bool hasLeadingOffset = false; // default value
  return Base::get(context, vec, perPhase, maxPhase, order, CTALayout, hasLeadingOffset);
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, CTALayoutAttr CTALayout, unsigned typeWidthInBit) {
  bool needTrans = false; // default value
  return get(context, dotOpEnc, shape, order, CTALayout, typeWidthInBit, needTrans);
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, CTALayoutAttr CTALayout, unsigned typeWidthInBit, bool needTrans) {
  // ---- begin GFX908/GFX90A ----
  auto mfmaEnc = dotOpEnc.getParent().dyn_cast<MfmaEncodingAttr>();

  if (mfmaEnc) {
    int kDimNum = dotOpEnc.getOpIdx() == 0 ? 1 : 0;
    bool isKDimInner = (order[0] == kDimNum);
    if (isKDimInner) {
      const int numBanks = 32;
      const int bankBitWidth = 32;
      const int SIMDWidth = 16;

      // number of inner dimension rows per one pattern repeat
      int innerDimLength = shape[order[0]];
      int elemsPerOneBanksRow = (numBanks * bankBitWidth) / typeWidthInBit;

      int perPhase = std::max(1, elemsPerOneBanksRow / innerDimLength);
      // Note: the following settings is customized to avoid
      // **load** bank conflicts
      //
      // vecSize is set to k_base, which is the number of elements each
      // workitem loads for one mfma instruction.
      // For now, the k_base rules are as follows
      // 1. All selected mfma instructions produce a single block
      // 2. For f16 data type, 2 VGPRs are used for operand A --> k_base = 4
      // 3. For non-f16 data types, 1 VGPR are used for operand A
      //    k_base = 32 / elemTypeInBits
      // 4. TODO: what about f64?
      //
      // maxPhase is set to SIMDWidth / perPhase
      int vecSize = ((typeWidthInBit == 16) ? 64 : 32 ) / typeWidthInBit;
      int maxPhase = SIMDWidth / perPhase;

      return get(context, vecSize, perPhase, maxPhase, order, CTALayout);
    } else {
      // Do not swizzle in case k dimension is not innermost.
      // In this case accesses will go in different banks even without swizzling.
      return get(context, 1, 1, 1, order, CTALayout);
    }
  }


  auto mmaEnc = dotOpEnc.getParent().dyn_cast<NvidiaMmaEncodingAttr>();

  if(!mmaEnc)
    return get(context, 1, 1, 1, order, CTALayout);

  int opIdx = dotOpEnc.getOpIdx();
  auto shapePerCTA = getShapePerCTA(CTALayout.getCTASplitNum(), shape);

  // number of rows per phase

  // index of the inner dimension in `order`
  unsigned inner = (opIdx == 0) ? 0 : 1;

  // ---- begin Volta ----
  if (mmaEnc.isVolta()) {
    int perPhase = 128 / (shapePerCTA[order[0]] * (typeWidthInBit / 8));
    perPhase = std::max<int>(perPhase, 1);
    bool is_row = order[0] != 0;
    bool is_vec4 = opIdx == 0 ? !is_row && (shapePerCTA[order[0]] <= 16) :
        is_row && (shapePerCTA[order[0]] <= 16);
    int pack_size = opIdx == 0 ? ((is_row || is_vec4) ? 1 : 2) :
                                 ((is_row && !is_vec4) ? 2 : 1);
    int rep = 2 * pack_size;
    int maxPhase = (order[inner] == 1 ? 8 : 4) / perPhase;
    int vec = 2 * rep;
    return get(context, vec, perPhase, maxPhase, order, CTALayout);
  }

  // ---- begin Ampere ----
  if (mmaEnc.isAmpere()) {
    int perPhase = 128 / (shapePerCTA[order[0]] * 4 / dotOpEnc.getKWidth());
    perPhase = std::max<int>(perPhase, 1);
    std::vector<size_t> matShape = {8, 8, 4 * dotOpEnc.getKWidth()};
    // for now, disable swizzle when using transposed int8 tensor cores
    if ((32 / typeWidthInBit != dotOpEnc.getKWidth()) && order[0] == inner)
      return get(context, 1, 1, 1, order, CTALayout);

    // --- handle A operand ---
    if (opIdx == 0) { // compute swizzling for A operand
        int m = (needTrans) ? matShape[2] : matShape[0];
        int k = (needTrans) ? matShape[0] : matShape[2];
        int vec = (order[0] == 1) ? k : m;
        int mmaStride = (order[0] == 1) ? m : k;
        int maxPhase = mmaStride / perPhase;
        return get(context, vec, perPhase, maxPhase, order, CTALayout);
    }

    // --- handle B operand ---
    if (opIdx == 1) {
        // we compute vec and maxPhase m, n and k size of the mma
        // instruction. when matmul operands is transposed, we should
        // consider that to get m, n and k.
        int n = needTrans ? matShape[2] : matShape[1];
        int k = needTrans ? matShape[1] : matShape[2];
        int vec = (order[0] == 1) ? n : k;
        int mmaStride = (order[0] == 1) ? k : n;
        int maxPhase = mmaStride / perPhase;
        return get(context, vec, perPhase, maxPhase, order, CTALayout);
    }

    llvm_unreachable("invalid operand index");
  }

  // ---- begin version 3 ----
  if (mmaEnc.isHopper()) {
    llvm_unreachable("SharedEncodingAttr builder when the MMAEncodingAttr"
                     " is Hopper has not been implemented yet");
    return Base::get(context, 1, 1, 1, order, CTALayout, true);
  }

  // ---- not implemented ----
  llvm_unreachable("unsupported swizzling for provided MMA version");
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, CTALayoutAttr CTALayout, Type eltTy) {
  unsigned bitwidth = eltTy.getIntOrFloatBitWidth();
  return get(context, dotOpEnc, shape, order, CTALayout, bitwidth);
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, DotOperandEncodingAttr dotOpEnc, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, CTALayoutAttr CTALayout, Type eltTy, bool needTrans) {
  unsigned bitwidth = eltTy.getIntOrFloatBitWidth();
  return get(context, dotOpEnc, shape, order, CTALayout, bitwidth, needTrans);
}

SharedEncodingAttr SharedEncodingAttr::get(::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> order, CTALayoutAttr CTALayout, Type eltTy) {
  auto shapePerCTA = getShapePerCTA(CTALayout.getCTASplitNum(), shape);

  int32_t eleBitWidth = eltTy.getIntOrFloatBitWidth();
  int32_t vec = 128 / eleBitWidth, perPhase = 1, maxPhase = 1;

  // get proper shared memory swizzling mode from the contiguous dimension
  // size of the origin blocked layout.
  auto contigDimSizeInByte = shapePerCTA[order[0]] * eleBitWidth / 8;
  if (contigDimSizeInByte >= 128 && contigDimSizeInByte % 128 == 0) {
    perPhase = 1;
    maxPhase = 8;
  } else if (contigDimSizeInByte >= 64 && contigDimSizeInByte % 64 == 0) {
    perPhase = 2;
    maxPhase = 4;
  } else if (contigDimSizeInByte >= 32 && contigDimSizeInByte % 32 == 0) {
    perPhase = 4;
    maxPhase = 2;
  } else {
    llvm_unreachable("unsupported shared memory layout for MMAv3");
  }

  return Base::get(context, vec, perPhase, maxPhase, order, CTALayout, true);
}

unsigned SharedEncodingAttr::getVec() const {
  return getImpl()->vec;
}

unsigned SharedEncodingAttr::getPerPhase() const {
  return getImpl()->perPhase;
}

unsigned SharedEncodingAttr::getMaxPhase() const {
  return getImpl()->maxPhase;
}

::llvm::ArrayRef<unsigned> SharedEncodingAttr::getOrder() const {
  return getImpl()->order;
}

CTALayoutAttr SharedEncodingAttr::getCTALayout() const {
  return getImpl()->CTALayout;
}

bool SharedEncodingAttr::getHasLeadingOffset() const {
  return getImpl()->hasLeadingOffset;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::SharedEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct BlockedEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>, ::llvm::ArrayRef<unsigned>, CTALayoutAttr>;
  BlockedEncodingAttrStorage(::llvm::ArrayRef<unsigned> sizePerThread__, ::llvm::ArrayRef<unsigned> threadsPerWarp__, ::llvm::ArrayRef<unsigned> warpsPerCTA__, ::llvm::ArrayRef<unsigned> order, CTALayoutAttr CTALayout) : sizePerThread__(std::move(sizePerThread__)), threadsPerWarp__(std::move(threadsPerWarp__)), warpsPerCTA__(std::move(warpsPerCTA__)), order(std::move(order)), CTALayout(std::move(CTALayout)) {}

  KeyTy getAsKey() const {
    return KeyTy(sizePerThread__, threadsPerWarp__, warpsPerCTA__, order, CTALayout);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (sizePerThread__ == std::get<0>(tblgenKey)) && (threadsPerWarp__ == std::get<1>(tblgenKey)) && (warpsPerCTA__ == std::get<2>(tblgenKey)) && (order == std::get<3>(tblgenKey)) && (CTALayout == std::get<4>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey));
  }

  static BlockedEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto sizePerThread__ = std::move(std::get<0>(tblgenKey));
    auto threadsPerWarp__ = std::move(std::get<1>(tblgenKey));
    auto warpsPerCTA__ = std::move(std::get<2>(tblgenKey));
    auto order = std::move(std::get<3>(tblgenKey));
    auto CTALayout = std::move(std::get<4>(tblgenKey));
    sizePerThread__ = allocator.copyInto(sizePerThread__);
    threadsPerWarp__ = allocator.copyInto(threadsPerWarp__);
    warpsPerCTA__ = allocator.copyInto(warpsPerCTA__);
    order = allocator.copyInto(order);
    return new (allocator.allocate<BlockedEncodingAttrStorage>()) BlockedEncodingAttrStorage(std::move(sizePerThread__), std::move(threadsPerWarp__), std::move(warpsPerCTA__), std::move(order), std::move(CTALayout));
  }

  ::llvm::ArrayRef<unsigned> sizePerThread__;
  ::llvm::ArrayRef<unsigned> threadsPerWarp__;
  ::llvm::ArrayRef<unsigned> warpsPerCTA__;
  ::llvm::ArrayRef<unsigned> order;
  CTALayoutAttr CTALayout;
};
} // namespace detail
BlockedEncodingAttr BlockedEncodingAttr::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<unsigned> sizePerThread__, ::llvm::ArrayRef<unsigned> threadsPerWarp__, ::llvm::ArrayRef<unsigned> warpsPerCTA__, ::llvm::ArrayRef<unsigned> order, CTALayoutAttr CTALayout) {
  return Base::get(context, std::move(sizePerThread__), std::move(threadsPerWarp__), std::move(warpsPerCTA__), std::move(order), std::move(CTALayout));
}

BlockedEncodingAttr BlockedEncodingAttr::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<unsigned> sizePerThread__, ::llvm::ArrayRef<unsigned> threadsPerWarp__, ::llvm::ArrayRef<unsigned> warpsPerCTA__, ::llvm::ArrayRef<unsigned> order, CTALayoutAttr CTALayout) {
  return Base::getChecked(emitError, context, sizePerThread__, threadsPerWarp__, warpsPerCTA__, order, CTALayout);
}

BlockedEncodingAttr BlockedEncodingAttr::get(::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> sizePerThread, ArrayRef<unsigned> order, unsigned numWarps, unsigned numThreadsPerWarp, CTALayoutAttr CTALayout) {
  unsigned rank = sizePerThread.size();
  SmallVector<unsigned, 4> threadsPerWarp(rank);
  SmallVector<unsigned, 4> warpsPerCTA(rank);
  SmallVector<int64_t> shapePerCTA = getShapePerCTA(CTALayout.getCTASplitNum(), shape);

  unsigned remainingLanes = numThreadsPerWarp;
  unsigned remainingThreads = numWarps * numThreadsPerWarp;
  unsigned remainingWarps = numWarps;
  unsigned prevLanes = 1;
  unsigned prevWarps = 1;

  // starting from the contiguous dimension
  for (unsigned d = 0; d < rank - 1; ++d) {
    unsigned i = order[d];
    unsigned threadsPerCTA = std::clamp<unsigned>(remainingThreads, 1, shapePerCTA[i] / sizePerThread[i]);
    threadsPerWarp[i] = std::clamp<unsigned>(threadsPerCTA, 1, remainingLanes);
    warpsPerCTA[i] = std::clamp<unsigned>(threadsPerCTA / threadsPerWarp[i], 1, remainingWarps);
    remainingWarps /= warpsPerCTA[i];
    remainingLanes /= threadsPerWarp[i];
    remainingThreads /= threadsPerCTA;
    prevLanes *= threadsPerWarp[i];
    prevWarps *= warpsPerCTA[i];
  }

  // Expand the last dimension to fill the remaining lanes and warps
  threadsPerWarp[order[rank - 1]] = numThreadsPerWarp / prevLanes;
  warpsPerCTA[order[rank - 1]] = numWarps / prevWarps;

  return Base::get(context, sizePerThread, threadsPerWarp, warpsPerCTA, order, CTALayout);
}

BlockedEncodingAttr BlockedEncodingAttr::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> sizePerThread, ArrayRef<unsigned> order, unsigned numWarps, unsigned numThreadsPerWarp, CTALayoutAttr CTALayout) {
  unsigned rank = sizePerThread.size();
  SmallVector<unsigned, 4> threadsPerWarp(rank);
  SmallVector<unsigned, 4> warpsPerCTA(rank);
  SmallVector<int64_t> shapePerCTA = getShapePerCTA(CTALayout.getCTASplitNum(), shape);

  unsigned remainingLanes = numThreadsPerWarp;
  unsigned remainingThreads = numWarps * numThreadsPerWarp;
  unsigned remainingWarps = numWarps;
  unsigned prevLanes = 1;
  unsigned prevWarps = 1;

  // starting from the contiguous dimension
  for (unsigned d = 0; d < rank - 1; ++d) {
    unsigned i = order[d];
    unsigned threadsPerCTA = std::clamp<unsigned>(remainingThreads, 1, shapePerCTA[i] / sizePerThread[i]);
    threadsPerWarp[i] = std::clamp<unsigned>(threadsPerCTA, 1, remainingLanes);
    warpsPerCTA[i] = std::clamp<unsigned>(threadsPerCTA / threadsPerWarp[i], 1, remainingWarps);
    remainingWarps /= warpsPerCTA[i];
    remainingLanes /= threadsPerWarp[i];
    remainingThreads /= threadsPerCTA;
    prevLanes *= threadsPerWarp[i];
    prevWarps *= warpsPerCTA[i];
  }

  // Expand the last dimension to fill the remaining lanes and warps
  threadsPerWarp[order[rank - 1]] = numThreadsPerWarp / prevLanes;
  warpsPerCTA[order[rank - 1]] = numWarps / prevWarps;

  return Base::getChecked(emitError, context, sizePerThread, threadsPerWarp, warpsPerCTA, order, CTALayout);
}

BlockedEncodingAttr BlockedEncodingAttr::get(::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> sizePerThread, ArrayRef<unsigned> order, unsigned numWarps, unsigned numThreadsPerWarp, unsigned numCTAs) {
  unsigned rank = sizePerThread.size();
  SmallVector<unsigned, 4> CTAsPerCGA(rank);
  SmallVector<unsigned, 4> CTASplitNum(rank);
  ArrayRef<unsigned> CTAOrder = order;

  unsigned remainingCTAs = numCTAs;

  // starting from the most strided dimension
  for (int d = rank - 1; d >= 0; --d) {
    unsigned i = order[d];
    CTAsPerCGA[i] = std::clamp<unsigned>(remainingCTAs, 1, shape[i] / sizePerThread[i]);
    CTASplitNum[i] = CTAsPerCGA[i];
    remainingCTAs /= CTAsPerCGA[i];
  }

  CTAsPerCGA[rank - 1] *= remainingCTAs; // wrap at CTA level

  CTALayoutAttr CTALayout = CTALayoutAttr::get(context, CTAsPerCGA, CTASplitNum, CTAOrder);
  return get(context, shape, sizePerThread, order, numWarps, numThreadsPerWarp, CTALayout);
}

BlockedEncodingAttr BlockedEncodingAttr::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ArrayRef<int64_t> shape, ArrayRef<unsigned> sizePerThread, ArrayRef<unsigned> order, unsigned numWarps, unsigned numThreadsPerWarp, unsigned numCTAs) {
  unsigned rank = sizePerThread.size();
  SmallVector<unsigned, 4> CTAsPerCGA(rank);
  SmallVector<unsigned, 4> CTASplitNum(rank);
  ArrayRef<unsigned> CTAOrder = order;

  unsigned remainingCTAs = numCTAs;

  // starting from the most strided dimension
  for (int d = rank - 1; d >= 0; --d) {
    unsigned i = order[d];
    CTAsPerCGA[i] = std::clamp<unsigned>(remainingCTAs, 1, shape[i] / sizePerThread[i]);
    CTASplitNum[i] = CTAsPerCGA[i];
    remainingCTAs /= CTAsPerCGA[i];
  }

  CTAsPerCGA[rank - 1] *= remainingCTAs; // wrap at CTA level

  CTALayoutAttr CTALayout = CTALayoutAttr::get(context, CTAsPerCGA, CTASplitNum, CTAOrder);
  return get(context, shape, sizePerThread, order, numWarps, numThreadsPerWarp, CTALayout);
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getSizePerThread__() const {
  return getImpl()->sizePerThread__;
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getThreadsPerWarp__() const {
  return getImpl()->threadsPerWarp__;
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getWarpsPerCTA__() const {
  return getImpl()->warpsPerCTA__;
}

::llvm::ArrayRef<unsigned> BlockedEncodingAttr::getOrder() const {
  return getImpl()->order;
}

CTALayoutAttr BlockedEncodingAttr::getCTALayout() const {
  return getImpl()->CTALayout;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::BlockedEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct MfmaEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, ::llvm::ArrayRef<unsigned>, bool, CTALayoutAttr>;
  MfmaEncodingAttrStorage(unsigned nonKDim, ::llvm::ArrayRef<unsigned> warpsPerCTA__, bool isTransposed, CTALayoutAttr CTALayout) : nonKDim(std::move(nonKDim)), warpsPerCTA__(std::move(warpsPerCTA__)), isTransposed(std::move(isTransposed)), CTALayout(std::move(CTALayout)) {}

  KeyTy getAsKey() const {
    return KeyTy(nonKDim, warpsPerCTA__, isTransposed, CTALayout);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (nonKDim == std::get<0>(tblgenKey)) && (warpsPerCTA__ == std::get<1>(tblgenKey)) && (isTransposed == std::get<2>(tblgenKey)) && (CTALayout == std::get<3>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey));
  }

  static MfmaEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto nonKDim = std::move(std::get<0>(tblgenKey));
    auto warpsPerCTA__ = std::move(std::get<1>(tblgenKey));
    auto isTransposed = std::move(std::get<2>(tblgenKey));
    auto CTALayout = std::move(std::get<3>(tblgenKey));
    warpsPerCTA__ = allocator.copyInto(warpsPerCTA__);
    return new (allocator.allocate<MfmaEncodingAttrStorage>()) MfmaEncodingAttrStorage(std::move(nonKDim), std::move(warpsPerCTA__), std::move(isTransposed), std::move(CTALayout));
  }

  unsigned nonKDim;
  ::llvm::ArrayRef<unsigned> warpsPerCTA__;
  bool isTransposed;
  CTALayoutAttr CTALayout;
};
} // namespace detail
MfmaEncodingAttr MfmaEncodingAttr::get(::mlir::MLIRContext *context, unsigned nonKDim, ::llvm::ArrayRef<unsigned> warpsPerCTA__, bool isTransposed, CTALayoutAttr CTALayout) {
  return Base::get(context, std::move(nonKDim), std::move(warpsPerCTA__), std::move(isTransposed), std::move(CTALayout));
}

unsigned MfmaEncodingAttr::getNonKDim() const {
  return getImpl()->nonKDim;
}

::llvm::ArrayRef<unsigned> MfmaEncodingAttr::getWarpsPerCTA__() const {
  return getImpl()->warpsPerCTA__;
}

bool MfmaEncodingAttr::getIsTransposed() const {
  return getImpl()->isTransposed;
}

CTALayoutAttr MfmaEncodingAttr::getCTALayout() const {
  return getImpl()->CTALayout;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::MfmaEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct NvidiaMmaEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, unsigned, ::llvm::ArrayRef<unsigned>, CTALayoutAttr, ::llvm::ArrayRef<unsigned>>;
  NvidiaMmaEncodingAttrStorage(unsigned versionMajor, unsigned versionMinor, ::llvm::ArrayRef<unsigned> warpsPerCTA__, CTALayoutAttr CTALayout, ::llvm::ArrayRef<unsigned> instrShape) : versionMajor(std::move(versionMajor)), versionMinor(std::move(versionMinor)), warpsPerCTA__(std::move(warpsPerCTA__)), CTALayout(std::move(CTALayout)), instrShape(std::move(instrShape)) {}

  KeyTy getAsKey() const {
    return KeyTy(versionMajor, versionMinor, warpsPerCTA__, CTALayout, instrShape);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (versionMajor == std::get<0>(tblgenKey)) && (versionMinor == std::get<1>(tblgenKey)) && (warpsPerCTA__ == std::get<2>(tblgenKey)) && (CTALayout == std::get<3>(tblgenKey)) && (instrShape == std::get<4>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey));
  }

  static NvidiaMmaEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto versionMajor = std::move(std::get<0>(tblgenKey));
    auto versionMinor = std::move(std::get<1>(tblgenKey));
    auto warpsPerCTA__ = std::move(std::get<2>(tblgenKey));
    auto CTALayout = std::move(std::get<3>(tblgenKey));
    auto instrShape = std::move(std::get<4>(tblgenKey));
    warpsPerCTA__ = allocator.copyInto(warpsPerCTA__);
    instrShape = allocator.copyInto(instrShape);
    return new (allocator.allocate<NvidiaMmaEncodingAttrStorage>()) NvidiaMmaEncodingAttrStorage(std::move(versionMajor), std::move(versionMinor), std::move(warpsPerCTA__), std::move(CTALayout), std::move(instrShape));
  }

  unsigned versionMajor;
  unsigned versionMinor;
  ::llvm::ArrayRef<unsigned> warpsPerCTA__;
  CTALayoutAttr CTALayout;
  ::llvm::ArrayRef<unsigned> instrShape;
};
} // namespace detail
NvidiaMmaEncodingAttr NvidiaMmaEncodingAttr::get(::mlir::MLIRContext *context, unsigned versionMajor, unsigned versionMinor, ::llvm::ArrayRef<unsigned> warpsPerCTA__, CTALayoutAttr CTALayout, ::llvm::ArrayRef<unsigned> instrShape) {
  return Base::get(context, std::move(versionMajor), std::move(versionMinor), std::move(warpsPerCTA__), std::move(CTALayout), std::move(instrShape));
}

NvidiaMmaEncodingAttr NvidiaMmaEncodingAttr::get(::mlir::MLIRContext *context, int versionMajor, int numWarps, CTALayoutAttr CTALayout, ArrayRef<unsigned> instrShape, ArrayRef<int64_t> shapeC, bool isARow, bool isBRow, bool isAVec4, bool isBVec4, int id) {
  assert(versionMajor == 1 && "This builder is specially for versionMajor==1");
  // 4-bits to encode 4 booleans: [isARow, isBRow, isAVec4, isBVec4]
  int versionMinor = (isARow * (1<<0)) |\
                     (isBRow * (1<<1)) |\
                     (isAVec4 * (1<<2)) |\
                     (isBVec4 * (1<<3));

  // TODO: Share code with
  // DotOpMmaV1ConversionHelper::AParam/BParam, since same code to compute the
  // rep,spw and fpw.
  SmallVector<unsigned> wpt({1, 1});
  SmallVector<unsigned> wpt_nm1;

  SmallVector<int, 2> rep(2), spw(2);
  std::array<int, 3> fpw{{2, 2, 1}};
  int packSize0 = (isARow || isAVec4) ? 1 : 2;
  rep[0] = 2 * packSize0;
  spw[0] = fpw[0] * 4 * rep[0];

  int packSize1 = (isBRow && !isBVec4) ? 2 : 1;
  rep[1] = 2 * packSize1;
  spw[1] = fpw[1] * 4 * rep[1];

  do {
    wpt_nm1 = wpt;
    if (wpt[0] * wpt[1] < numWarps)
      wpt[0] = std::clamp<int>(wpt[0] * 2, 1, shapeC[0] / spw[0]);
    if (wpt[0] * wpt[1] < numWarps)
      wpt[1] = std::clamp<int>(wpt[1] * 2, 1, shapeC[1] / spw[1]);
  } while (wpt_nm1 != wpt);

  return Base::get(context, versionMajor, versionMinor, wpt, CTALayout, instrShape);
}

NvidiaMmaEncodingAttr NvidiaMmaEncodingAttr::get(::mlir::MLIRContext *context, int versionMajor, int numWarps, CTALayoutAttr CTALayout, ArrayRef<unsigned> instrShape, ArrayRef<int64_t> shapeA, ArrayRef<int64_t> shapeB, ArrayRef<int64_t> shapeC, bool isARow, bool isBRow, int id) {
  assert(versionMajor == 1 && "This builder is specially for versionMajor==1");
  bool isAVec4 = !isARow && (shapeA[isARow] <= 16);
  bool isBVec4 = isBRow && (shapeB[isBRow] <= 16);
  return get(context, versionMajor, numWarps, CTALayout, instrShape, shapeC, isARow, isBRow, isAVec4, isBVec4, id);
}

unsigned NvidiaMmaEncodingAttr::getVersionMajor() const {
  return getImpl()->versionMajor;
}

unsigned NvidiaMmaEncodingAttr::getVersionMinor() const {
  return getImpl()->versionMinor;
}

::llvm::ArrayRef<unsigned> NvidiaMmaEncodingAttr::getWarpsPerCTA__() const {
  return getImpl()->warpsPerCTA__;
}

CTALayoutAttr NvidiaMmaEncodingAttr::getCTALayout() const {
  return getImpl()->CTALayout;
}

::llvm::ArrayRef<unsigned> NvidiaMmaEncodingAttr::getInstrShape() const {
  return getImpl()->instrShape;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::NvidiaMmaEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct SliceEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, Attribute>;
  SliceEncodingAttrStorage(unsigned dim, Attribute parent) : dim(std::move(dim)), parent(std::move(parent)) {}

  KeyTy getAsKey() const {
    return KeyTy(dim, parent);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (dim == std::get<0>(tblgenKey)) && (parent == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static SliceEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto dim = std::move(std::get<0>(tblgenKey));
    auto parent = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<SliceEncodingAttrStorage>()) SliceEncodingAttrStorage(std::move(dim), std::move(parent));
  }

  unsigned dim;
  Attribute parent;
};
} // namespace detail
SliceEncodingAttr SliceEncodingAttr::get(::mlir::MLIRContext *context, unsigned dim, Attribute parent) {
  return Base::get(context, std::move(dim), std::move(parent));
}

unsigned SliceEncodingAttr::getDim() const {
  return getImpl()->dim;
}

Attribute SliceEncodingAttr::getParent() const {
  return getImpl()->parent;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::SliceEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct DotOperandEncodingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<unsigned, Attribute, unsigned>;
  DotOperandEncodingAttrStorage(unsigned opIdx, Attribute parent, unsigned kWidth) : opIdx(std::move(opIdx)), parent(std::move(parent)), kWidth(std::move(kWidth)) {}

  KeyTy getAsKey() const {
    return KeyTy(opIdx, parent, kWidth);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (opIdx == std::get<0>(tblgenKey)) && (parent == std::get<1>(tblgenKey)) && (kWidth == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static DotOperandEncodingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto opIdx = std::move(std::get<0>(tblgenKey));
    auto parent = std::move(std::get<1>(tblgenKey));
    auto kWidth = std::move(std::get<2>(tblgenKey));
    return new (allocator.allocate<DotOperandEncodingAttrStorage>()) DotOperandEncodingAttrStorage(std::move(opIdx), std::move(parent), std::move(kWidth));
  }

  unsigned opIdx;
  Attribute parent;
  unsigned kWidth;
};
} // namespace detail
DotOperandEncodingAttr DotOperandEncodingAttr::get(::mlir::MLIRContext *context, unsigned opIdx, Attribute parent, unsigned kWidth) {
  return Base::get(context, std::move(opIdx), std::move(parent), std::move(kWidth));
}

DotOperandEncodingAttr DotOperandEncodingAttr::get(::mlir::MLIRContext *context, unsigned opIdx, Attribute parent, Type eltTy) {
  NvidiaMmaEncodingAttr parentAttr = parent.dyn_cast<NvidiaMmaEncodingAttr>();
  if (!parentAttr || !parentAttr.isAmpere())
    return Base::get(context, opIdx, parent, 0);
  unsigned bitwidth = eltTy.getIntOrFloatBitWidth();
  unsigned MMAv2kWidth = 32 / bitwidth;
  return Base::get(context, opIdx, parent, MMAv2kWidth);
}

unsigned DotOperandEncodingAttr::getOpIdx() const {
  return getImpl()->opIdx;
}

Attribute DotOperandEncodingAttr::getParent() const {
  return getImpl()->parent;
}

unsigned DotOperandEncodingAttr::getKWidth() const {
  return getImpl()->kWidth;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::DotOperandEncodingAttr)
namespace mlir {
namespace triton {
namespace gpu {

/// Parse an attribute registered to this dialect.
::mlir::Attribute TritonGPUDialect::parseAttribute(::mlir::DialectAsmParser &parser,
                                      ::mlir::Type type) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef attrTag;
  {
    ::mlir::Attribute attr;
    auto parseResult = generatedAttributeParser(parser, &attrTag, type, attr);
    if (parseResult.has_value())
      return attr;
  }
  
  parser.emitError(typeLoc) << "unknown attribute `"
      << attrTag << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print an attribute registered to this dialect.
void TritonGPUDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace gpu
} // namespace triton
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

